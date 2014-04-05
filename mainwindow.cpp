#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>
#include <QMessageBox>
#include <QSqlRecord>
#include <QObject>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDate>
#include "addmedicament.h"
#include "praticien.h"
#include "visiteur.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug()<<"MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)";
    ui->setupUi(this);

    //Choisir le bon codec
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    //Ajout d'un titre de fenêtre
    setWindowTitle("Gestion Galaxy Swiss Bourdin");
    //ajout du logo de fenêtre
    setWindowIcon(QIcon(":/logo"));
    //Connexion à la base
    this->db = QSqlDatabase::addDatabase("QMYSQL");
    this->db.setHostName("localhost");
    this->db.setDatabaseName("db_gestionCR");
    this->db.setUserName("technicien");
    this->db.setPassword("ini01");
    bool ok=this->db.open();
    if(!ok)
    {
        QMessageBox::critical(this,"Echec de connexion à la base de de données","La connexion à la base a échoué, contacter votre administrateur pour la résolution des problèmes.",QMessageBox::Ok,QMessageBox::Ok);
    }
    else
    {
        this->on_actionPraticien_triggered();
        this->on_actionVisiteur_triggered();
        this->on_actionMedicament_triggered();
    }
}

MainWindow::~MainWindow()
{
    qDebug()<<"MainWindow::~MainWindow()";
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    qDebug()<<"MainWindow::changeEvent(QEvent *e)";
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_actionQuitter_triggered()
{
    qDebug()<<"MainWindow::on_actionQuitter_triggered()";
    this->close();
}

void MainWindow::connectionDesObjetsMedicaments()
{
    qDebug()<<"MainWindow::connectionDesObjetsMedicaments()";
    connect(ui->lineEditMedicamentDepotLegal, SIGNAL(textChanged(QString)), this, SLOT(rechercheMedicament()));
    connect(ui->lineEditMedicamentNomCommercial, SIGNAL(textChanged(QString)), this, SLOT(rechercheMedicament()));
    connect(ui->comboBoxMedicamentFamille, SIGNAL(currentIndexChanged(int)), this, SLOT(rechercheMedicament()));
    connect(ui->doubleSpinBoxMedicamentPrixEch, SIGNAL(valueChanged(double)), this, SLOT(rechercheMedicament()));

}

void MainWindow::rechercheMedicament()
{
    qDebug()<<"MainWindow::rechercheMedicament()";
    QString where="";
    QString chaineDeFiltre="";
    QStringList listeRestriction;

    if(ui->lineEditMedicamentDepotLegal->text()!="")
    {
        listeRestriction.append(" MED_DEPOTLEGAL like '%"+ui->lineEditMedicamentDepotLegal->text()+"%'");
    }
    if(ui->lineEditMedicamentNomCommercial->text()!="")
    {
        listeRestriction.append(" MED_NOMCOMMERCIAL like '%"+ui->lineEditMedicamentNomCommercial->text()+"%'");
    }
    if(ui->comboBoxMedicamentFamille->currentIndex()!=0)
    {
        listeRestriction.append(" FAM_CODE='"+vFamilleMedicament[ui->comboBoxMedicamentFamille->currentIndex()]+"'");
    }
    if(ui->doubleSpinBoxMedicamentPrixEch->text()!="0,00")
    {
        listeRestriction.append(" MED_PRIXECHANTILLON ="+QString::number(ui->doubleSpinBoxMedicamentPrixEch->text().toDouble()));
    }
    if(listeRestriction.count()>0)
    {
        where=" WHERE"+listeRestriction.join(" AND");
        chaineDeFiltre=listeRestriction.join(" AND");
    }

    QString textRequeteMedicament="SELECT MED_DEPOTLEGAL, MED_NOMCOMMERCIAL, FAM_CODE, MED_COMPOSITION, MED_EFFETS, MED_CONTREINDIC, MED_PRIXECHANTILLON FROM MEDICAMENT"+where+";";
    qDebug()<<textRequeteMedicament;
    ui->tableViewMedicament->setModel(this->queryModelMedicament);
    this->queryModelMedicament->setQuery(textRequeteMedicament);
    this->tableModelMedicament->setFilter(chaineDeFiltre);

}

void MainWindow::on_actionMedicament_triggered()
{
    qDebug()<<"MainWindow::on_actionMedicament_triggered()";
    //On affiche l'onglet correspondant
    ui->tabWidgetAction->setCurrentIndex(0);
    ui->textEditMedicamentComposition->setEnabled(false);
    ui->textEditMedicamentComposition->setTextColor(QColor::QColor("black"));
    ui->textEditMedicamentContreIndication->setEnabled(false);
    ui->textEditMedicamentContreIndication->setTextColor(QColor::QColor("black"));
    ui->textEditMedicamentEffets->setEnabled(false);
    ui->textEditMedicamentEffets->setTextColor(QColor::QColor("black"));
    ui->comboBoxMedicamentFamille->addItem("Sélectionner une famille");
    this->vFamilleMedicament.push_back("-1");
    QString requeteFamilleMedoc="SELECT FAM_CODE, FAM_LIBELLE FROM FAMILLE;";
    qDebug()<<requeteFamilleMedoc;
    QSqlQuery reqFamille(requeteFamilleMedoc);
    while(reqFamille.next())
    {
        ui->comboBoxMedicamentFamille->addItem(reqFamille.value(1).toString());
        this->vFamilleMedicament.push_back(reqFamille.value(0).toString());
    }

    tableModelMedicament=new QSqlTableModel(this);
    queryModelMedicament=new QSqlQueryModel();

    ui->tableViewMedicament->setModel(this->tableModelMedicament);
    tableModelMedicament->setTable("MEDICAMENT");
    tableModelMedicament->setEditStrategy(QSqlTableModel::OnRowChange);
    tableModelMedicament->select();

    QString requeteMedicament="SELECT MED_DEPOTLEGAL, MED_NOMCOMMERCIAL, FAM_CODE, MED_COMPOSITION, MED_EFFETS, MED_CONTREINDIC, MED_PRIXECHANTILLON FROM MEDICAMENT";
    qDebug()<<requeteMedicament;
    this->queryModelMedicament->setQuery(requeteMedicament);

    this->queryModelMedicament->setHeaderData(0,Qt::Horizontal,"Depot légal");
    this->queryModelMedicament->setHeaderData(1,Qt::Horizontal,"Nom commercial");
    this->queryModelMedicament->setHeaderData(2,Qt::Horizontal,"Famille");
    this->queryModelMedicament->setHeaderData(3,Qt::Horizontal,"Composition");
    this->queryModelMedicament->setHeaderData(4,Qt::Horizontal,"Effets");
    this->queryModelMedicament->setHeaderData(5,Qt::Horizontal,"Contre indication");
    this->queryModelMedicament->setHeaderData(6,Qt::Horizontal,"Prix echantillon");
    //On associe le modele à sa vue
    ui->tableViewMedicament->setModel(queryModelMedicament);
    ui->tableViewMedicament->hideColumn(3);
    ui->tableViewMedicament->hideColumn(4);
    ui->tableViewMedicament->hideColumn(5);
    //Vue...montre-toi...
    ui->tableViewMedicament->show();
    //Adapter les largeurs des colonnes
    ui->tableViewMedicament->resizeColumnsToContents();

    this->connectionDesObjetsMedicaments();
}

void MainWindow::on_pushButtonMedicamentAjouter_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonMedicamentAjouter_clicked()";
    addMedicament * nouvelleFenetre=new addMedicament(this);

    if(nouvelleFenetre->exec()==QDialog::Accepted)
    {
       QSqlRecord nouveauMedicament=tableModelMedicament->record();
       nouveauMedicament.setValue("MED_DEPOTLEGAL",nouvelleFenetre->getLineEditMedDepotLegal());
       nouveauMedicament.setValue("MED_NOMCOMMERCIAL",nouvelleFenetre->getLineEditMedNomCommercial());
       nouveauMedicament.setValue("FAM_CODE",nouvelleFenetre->getComboBoxFamCode());
       nouveauMedicament.setValue("MED_COMPOSITION",nouvelleFenetre->getTextEditComposition());
       nouveauMedicament.setValue("MED_EFFETS",nouvelleFenetre->getTextEditEffets());
       nouveauMedicament.setValue("MED_CONTREINDIC",nouvelleFenetre->getTextEditContreIndic());
       nouveauMedicament.setValue("MED_PRIXECHANTILLON",nouvelleFenetre->getDoubleSpinPrixEch());
       if(tableModelMedicament->insertRecord(-1, nouveauMedicament))
       {
           ui->statusBar->showMessage("Medicament ajouté avec succés",3000);
           this->on_actionMedicament_triggered();
       }
       else
       {
           //ui->statusBar->showMessage(db.lastError().databaseText(),3000);
       }
    }
    else
    {
        nouvelleFenetre->close();
    }
}

void MainWindow::on_pushButtonMedicamentSupprimer_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonMedicamentSupprimer_clicked()";
    this->tableModelMedicament->removeRow(ui->tableViewMedicament->selectionModel()->currentIndex().row());
    this->on_actionMedicament_triggered();
}

void MainWindow::on_pushButtonMedicamentModifier_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonMedicamentModifier_clicked()";
    addMedicament * nouvelleFenetre=new addMedicament(this);

    nouvelleFenetre->setLineEditDepotLegal(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_DEPOTLEGAL"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    qDebug()<<tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_DEPOTLEGAL"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString();
    nouvelleFenetre->setLineEditNomCommercial(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_NOMCOMMERCIAL"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    nouvelleFenetre->setComboBoxFamille(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("FAM_CODE"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    nouvelleFenetre->setTextEditComposition(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_COMPOSITION"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    nouvelleFenetre->setTextEditEffets(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_EFFETS"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    nouvelleFenetre->setTextEditContreIndication(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_CONTREINDIC"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    nouvelleFenetre->setDoubleSpinBoxPrixEch(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_PRIXECHANTILLON"),ui->tableViewMedicament->selectionModel()->currentIndex())).toDouble());

    if(nouvelleFenetre->exec()==QDialog::Accepted)
    {
        QSqlRecord modificationMedicament=tableModelMedicament->record();
        modificationMedicament.setValue("MED_DEPOTLEGAL",nouvelleFenetre->getLineEditMedDepotLegal());
        modificationMedicament.setValue("MED_NOMCOMMERCIAL",nouvelleFenetre->getLineEditMedNomCommercial());
        modificationMedicament.setValue("FAM_CODE",nouvelleFenetre->getComboBoxFamCode());
        modificationMedicament.setValue("MED_COMPOSITION",nouvelleFenetre->getTextEditComposition());
        modificationMedicament.setValue("MED_EFFETS",nouvelleFenetre->getTextEditEffets());
        modificationMedicament.setValue("MED_CONTREINDIC",nouvelleFenetre->getTextEditContreIndic());
        modificationMedicament.setValue("MED_PRIXECHANTILLON",nouvelleFenetre->getDoubleSpinPrixEch());
        if(tableModelMedicament->setRecord(ui->tableViewMedicament->currentIndex().row(),modificationMedicament))
        {
            tableModelMedicament->submitAll();
            ui->statusBar->showMessage("Medicament modifié avec succés",3000);
            this->on_actionMedicament_triggered();
        }
        else
        {
            //qDebug()<<this->db.lastError();
        }
    }
    else
    {
        nouvelleFenetre->close();
    }
}

void MainWindow::on_tableViewMedicament_clicked(QModelIndex index)
{
    qDebug()<<"MainWindow::on_tableViewMedicament_clicked(QModelIndex index)";
    ui->textEditMedicamentComposition->setText(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_COMPOSITION"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    ui->textEditMedicamentEffets->setText(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_EFFETS"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    ui->textEditMedicamentContreIndication->setText(tableModelMedicament->data(tableModelMedicament->sibling(ui->tableViewMedicament->currentIndex().row(),tableModelMedicament->fieldIndex("MED_CONTREINDIC"),ui->tableViewMedicament->selectionModel()->currentIndex())).toString());
    ui->pushButtonMedicamentModifier->setEnabled(true);
    ui->pushButtonMedicamentSupprimer->setEnabled(true);
}

void MainWindow::recherchePraticien()
{
    qDebug()<<"MainWindow::recherchePraticien()";
    QString where="";
    QString chaineDeFiltre="";
    QStringList listeRestrictions;
    if(ui->lineEditPraticienId->text()!="")
    {
        listeRestrictions.append(" PRATICIEN.PRA_CODE="+ui->lineEditPraticienId->text());
    }
    if(ui->lineEditPraticienNom->text()!="")
    {
         listeRestrictions.append(" PRATICIEN.PRA_NOM like '%"+ui->lineEditPraticienNom->text()+"%'");
    }
    if(ui->lineEditPraticienPrenom->text()!="")
    {
        listeRestrictions.append(" PRATICIEN.PRA_PRENOM like '%"+ui->lineEditPraticienPrenom->text()+"%'");
    }
    if(ui->comboBoxPraticienType->currentText()!="Sélectionner un type")
    {
        listeRestrictions.append(" PRATICIEN.TYP_CODE ='"+this->vTypePraticien.at(ui->comboBoxPraticienType->currentIndex())+"'");
        qDebug()<<ui->comboBoxPraticienType->currentIndex();
    }
    if(listeRestrictions.count()>0)
    {
        where=" WHERE"+listeRestrictions.join(" AND");
        chaineDeFiltre=listeRestrictions.join(" AND");
    }

    QString textRequetePraticien="SELECT PRA_CODE, PRA_NOM, PRA_PRENOM, PRA_COEFNOTORIETE, TYP_CODE FROM PRATICIEN"+where+";";
    qDebug()<<textRequetePraticien;
    ui->tableViewPraticien->setModel(this->queryModelPraticien);
    this->queryModelPraticien->setQuery(textRequetePraticien);
    this->tableModelPraticien->setFilter(chaineDeFiltre);

}

void MainWindow::connectionDesObjetsPraticiens()
{
    qDebug()<<"MainWindow::connectionDesObjetsPraticiens()";
    connect(ui->lineEditPraticienId, SIGNAL(textChanged(QString)), this, SLOT(recherchePraticien()));
    connect(ui->lineEditPraticienNom, SIGNAL(textChanged(QString)), this, SLOT(recherchePraticien()));
    connect(ui->lineEditPraticienPrenom, SIGNAL(textChanged(QString)), this, SLOT(recherchePraticien()));
    connect(ui->comboBoxPraticienType, SIGNAL(currentIndexChanged(int)), this, SLOT(recherchePraticien()));
}

void MainWindow::on_actionPraticien_triggered()
{
    qDebug()<<"MainWindow::on_actionPraticien_triggered()";
    ui->tabWidgetAction->setCurrentIndex(1);

    ui->comboBoxPraticienType->disconnect();

    ui->textEditPraticienCabinet->setEnabled(false);
    ui->textEditPraticienCabinet->setTextColor(QColor::QColor("black"));
    ui->textEditPraticienSpecialite->setEnabled(false);
    ui->textEditPraticienSpecialite->setTextColor(QColor::QColor("black"));

    ui->comboBoxPraticienType->clear();
    this->vTypePraticien.clear();

    this->queryModelPraticien=new QSqlQueryModel;
    this->tableModelPraticien=new QSqlTableModel(this);

    QString requeteTypePraticien="SELECT TYP_CODE, TYP_LIBELLE FROM TYPE_PRATICIEN;";
    qDebug()<<requeteTypePraticien;
    QSqlQuery reqComboBox=this->db.exec(requeteTypePraticien);
    ui->comboBoxPraticienType->addItem("Sélectionner un type");
    this->vTypePraticien.push_back("-1");
    while(reqComboBox.next())
    {
        ui->comboBoxPraticienType->addItem(reqComboBox.value(1).toString());
        this->vTypePraticien.push_back(reqComboBox.value(0).toString());
    }

    ui->tableViewPraticien->setModel(this->tableModelPraticien);
    this->tableModelPraticien->setTable("PRATICIEN");
    this->tableModelPraticien->setEditStrategy(QSqlTableModel::OnRowChange);
    this->tableModelPraticien->select();

    QString requetePraticien="SELECT PRA_CODE, PRA_NOM, PRA_PRENOM, PRA_COEFNOTORIETE, TYP_CODE FROM PRATICIEN;";
    qDebug()<<requetePraticien;
    this->queryModelPraticien->setQuery(requetePraticien);

    this->queryModelPraticien->setHeaderData(0,Qt::Horizontal,"Id");
    this->queryModelPraticien->setHeaderData(1,Qt::Horizontal,"Nom");
    this->queryModelPraticien->setHeaderData(2,Qt::Horizontal,"Prénom");
    this->queryModelPraticien->setHeaderData(3,Qt::Horizontal,"Coeff.Notoriete");
    this->queryModelPraticien->setHeaderData(4,Qt::Horizontal,"Type");
    ui->tableViewPraticien->setModel(this->queryModelPraticien);

    this->connectionDesObjetsPraticiens();

}

void MainWindow::on_pushButtonPraticienSupprimer_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonPraticienSupprimer_clicked()";
    this->tableModelPraticien->removeRow(ui->tableViewPraticien->selectionModel()->currentIndex().row());
    qDebug()<<ui->tableViewPraticien->selectionModel()->currentIndex().row();
    this->on_actionPraticien_triggered();
}

void MainWindow::on_pushButtonPraticienAjouter_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonPraticienAjouter_clicked()";
    praticien * fenetrePraticien=new praticien(this);

    QString requeteLastPraCode="SELECT MAX(PRA_CODE) FROM PRATICIEN;";
    qDebug()<<requeteLastPraCode;
    QSqlQuery reqIdMax=this->db.exec(requeteLastPraCode);
    reqIdMax.first();
    fenetrePraticien->setSpinBoxId(reqIdMax.value(0).toInt()+1);

    if(fenetrePraticien->exec()==QDialog::Accepted)
    {
        QSqlRecord nouveauPraticien=queryModelPraticien->record();
        nouveauPraticien.setValue("PRA_CODE",fenetrePraticien->getSpinBoxId());
        nouveauPraticien.setValue("PRA_NOM",fenetrePraticien->getLineEditNom());
        nouveauPraticien.setValue("PRA_PRENOM",fenetrePraticien->getLineEditPrenom());
        nouveauPraticien.setValue("PRA_COEFNOTORIETE",fenetrePraticien->getDoubleSpinBoxCoeffNot());
        nouveauPraticien.setValue("TYP_CODE",fenetrePraticien->getComboBoxType());
        if(tableModelPraticien->insertRecord(-1, nouveauPraticien))
        {
            ui->statusBar->showMessage("Praticien ajouté avec succés",3000);
            this->on_actionPraticien_triggered();
        }
        else
        {
            //qDebug()<<this->db.lastError();
        }
    }
    else
    {
        fenetrePraticien->close();
    }
    //GERER LES CABINETS ET LES SPECIALISATIONS
}

void MainWindow::on_tableViewPraticien_clicked(QModelIndex index)
{
    qDebug()<<"MainWindow::on_tableViewPraticien_clicked(QModelIndex index)";

    QString requeteSpecialitePraticien="SELECT SPE_LIBELLE FROM SPECIALITE NATURAL JOIN POSSEDER WHERE PRA_CODE="+this->tableModelPraticien->data(tableModelPraticien->sibling(ui->tableViewPraticien->currentIndex().row(),this->tableModelPraticien->fieldIndex("PRA_CODE"),ui->tableViewPraticien->selectionModel()->currentIndex())).toString()+";";
    qDebug()<<requeteSpecialitePraticien;
    QSqlQuery specialitePraticien=this->db.exec(requeteSpecialitePraticien);

    QString requeteCabinetPraticien="SELECT MED_DEPOTLEGAL, MED_NOMCOMMERCIAL, FAM_CODE, MED_COMPOSITION, MED_EFFETS, MED_CONTREINDIC, MED_PRIXECHANTILLON FROM MEDICAMENT";
    qDebug()<<requeteCabinetPraticien;
    QSqlQuery cabinetPraticien=this->db.exec(requeteCabinetPraticien);

    while(specialitePraticien.next())
    {
        ui->textEditPraticienSpecialite->setPlainText(specialitePraticien.value(0).toString()+" - ");
    }

    while(cabinetPraticien.next())
    {
        ui->textEditPraticienCabinet->setPlainText(cabinetPraticien.value(0).toString()+" "+cabinetPraticien.value(1).toString()+" "+cabinetPraticien.value(2).toString()+" - ");
    }

    ui->pushButtonPraticienSupprimer->setEnabled(true);
    ui->pushButtonPraticienModifier->setEnabled(true);
}

void MainWindow::on_pushButtonPraticienModifier_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonPraticienModifier_clicked()";
    praticien * fenetrePraticien=new praticien(this);

    fenetrePraticien->setSpinBoxId(tableModelPraticien->data(tableModelPraticien->sibling(ui->tableViewPraticien->currentIndex().row(),tableModelPraticien->fieldIndex("PRA_CODE"),ui->tableViewPraticien->selectionModel()->currentIndex())).toInt());
    fenetrePraticien->setLineEditNom(tableModelPraticien->data(tableModelPraticien->sibling(ui->tableViewPraticien->currentIndex().row(),tableModelPraticien->fieldIndex("PRA_NOM"),ui->tableViewPraticien->selectionModel()->currentIndex())).toString());
    fenetrePraticien->setLineEditPrenom(tableModelPraticien->data(tableModelPraticien->sibling(ui->tableViewPraticien->currentIndex().row(),tableModelPraticien->fieldIndex("PRA_PRENOM"),ui->tableViewPraticien->selectionModel()->currentIndex())).toString());
    fenetrePraticien->setDoubleSpinBoxCoeffNot(tableModelPraticien->data(tableModelPraticien->sibling(ui->tableViewPraticien->currentIndex().row(),tableModelPraticien->fieldIndex("PRA_COEFNOTORIETE"),ui->tableViewPraticien->selectionModel()->currentIndex())).toFloat());
    fenetrePraticien->setComboBoxType(tableModelPraticien->data(tableModelPraticien->sibling(ui->tableViewPraticien->currentIndex().row(),tableModelPraticien->fieldIndex("TYP_CODE"),ui->tableViewPraticien->selectionModel()->currentIndex())).toString());

    if(fenetrePraticien->exec()==QDialog::Accepted)
    {
        QSqlRecord modificationPraticien=tableModelPraticien->record();
        modificationPraticien.setValue("PRA_CODE",fenetrePraticien->getSpinBoxId());
        modificationPraticien.setValue("PRA_NOM", fenetrePraticien->getLineEditNom());
        modificationPraticien.setValue("PRA_PRENOM", fenetrePraticien->getLineEditPrenom());
        modificationPraticien.setValue("PRA_COEFNOTORIETE", fenetrePraticien->getDoubleSpinBoxCoeffNot());
        modificationPraticien.setValue("TYP_CODE", fenetrePraticien->getComboBoxType());
        if(tableModelPraticien->setRecord(ui->tableViewPraticien->currentIndex().row(),modificationPraticien))
        {
            tableModelPraticien->submitAll();
            ui->statusBar->showMessage("Praticien modifié avec succés", 3000);
            this->on_actionPraticien_triggered();
        }
    }
    else
    {
        fenetrePraticien->close();
    }

}

void MainWindow::rechercheVisiteur()
{
    qDebug()<<"MainWindow::rechercheVisiteur()";
    QString where="";
    QString chaineDeFiltre="";
    QStringList listeRestriction;
    if(ui->lineEditVisiteurId->text()!="")
    {
        listeRestriction.append(" VIS_MATRICULE like '%"+ui->lineEditVisiteurId->text()+"%'");
    }
    if(ui->lineEditVisiteurNom->text()!="")
    {
        listeRestriction.append(" VIS_NOM like '%"+ui->lineEditVisiteurNom->text()+"%'");
    }
    if(ui->lineEditVisiteurPrenom->text()!="")
    {
        listeRestriction.append(" VIS_PRENOM like '%"+ui->lineEditVisiteurPrenom->text()+"%'");
    }
    if(ui->lineEditVisiteurCP->text()!="")
    {
        listeRestriction.append(" VIS_CP="+ui->lineEditVisiteurCP->text());
    }
    if(ui->lineEditVisiteurVille->text()!="")
    {
        listeRestriction.append(" VIS_VILLE='%"+ui->lineEditVisiteurVille->text()+"%'");
    }
    if(ui->comboBoxVisiteurSecteur->currentIndex()!=0)
    {
        listeRestriction.append(" SEC_CODE='"+this->vSecteurVisiteur.at(ui->comboBoxVisiteurSecteur->currentIndex())+"'");
    }
    if(ui->comboBoxVisiteurLaboratoire->currentIndex()!=0)
    {
        listeRestriction.append(" LAB_CODE='"+this->vLaboVisiteur.at(ui->comboBoxVisiteurLaboratoire->currentIndex())+"'");
    }
    if(ui->comboBoxVisiteurDepartement->currentIndex()!=0)
    {
        listeRestriction.append(" DEP_CODE='"+this->vDepartementVisiteur.at(ui->comboBoxVisiteurDepartement->currentIndex())+"'");
    }
    if(listeRestriction.count()>0)
    {
        where=" WHERE"+listeRestriction.join(" AND");
        chaineDeFiltre=listeRestriction.join(" AND");
    }
    QString texteRequeteVisiteur="SELECT VIS_MATRICULE, VIS_NOM, VIS_PRENOM, VIS_ADRESSE, VIS_CP, VIS_VILLE, VIS_DATEEMBAUCHE, SEC_CODE, LAB_CODE, DEP_CODE FROM VISITEUR"+where+";";
    qDebug()<<texteRequeteVisiteur;
    this->queryModelVisiteur->setQuery(texteRequeteVisiteur);
    this->tableModelVisiteur->setFilter(chaineDeFiltre);
}

void MainWindow::connectionDesObjetsVisiteurs()
{
    qDebug()<<"MainWindow::connectionDesObjetsVisiteurs()";
    connect(ui->lineEditVisiteurId, SIGNAL(textChanged(QString)), this, SLOT(rechercheVisiteur()));
    connect(ui->lineEditVisiteurNom, SIGNAL(textChanged(QString)), this, SLOT(rechercheVisiteur()));
    connect(ui->lineEditVisiteurPrenom, SIGNAL(textChanged(QString)), this, SLOT(rechercheVisiteur()));
    connect(ui->lineEditVisiteurCP, SIGNAL(textChanged(QString)), this, SLOT(rechercheVisiteur()));
    connect(ui->lineEditVisiteurVille, SIGNAL(textChanged(QString)), this, SLOT(rechercheVisiteur()));
    connect(ui->comboBoxVisiteurSecteur, SIGNAL(currentIndexChanged(int)), this, SLOT(rechercheVisiteur()));
    connect(ui->comboBoxVisiteurLaboratoire, SIGNAL(currentIndexChanged(int)), this, SLOT(rechercheVisiteur()));
    connect(ui->comboBoxVisiteurDepartement, SIGNAL(currentIndexChanged(int)), this, SLOT(rechercheVisiteur()));
}

void MainWindow::on_actionVisiteur_triggered()
{
    qDebug()<<"MainWindow::on_actionVisiteur_triggered()";
    ui->tabWidgetAction->setCurrentIndex(2);


    ui->comboBoxVisiteurDepartement->disconnect();
    ui->comboBoxVisiteurLaboratoire->disconnect();
    ui->comboBoxVisiteurSecteur->disconnect();

    this->vSecteurVisiteur.clear();
    this->vLaboVisiteur.clear();
    this->vDepartementVisiteur.clear();
    ui->comboBoxVisiteurSecteur->clear();
    ui->comboBoxVisiteurLaboratoire->clear();
    ui->comboBoxVisiteurDepartement->clear();

    this->tableModelVisiteur=new QSqlTableModel(this);
    this->queryModelVisiteur=new QSqlQueryModel;

    QString requeteSecteur="SELECT SEC_CODE, SEC_LIBELLE FROM SECTEUR;";
    qDebug()<<requeteSecteur;
    QSqlQuery secteurComboBox=this->db.exec(requeteSecteur);
    ui->comboBoxVisiteurSecteur->addItem("Sélectionner un secteur");
    this->vSecteurVisiteur.push_back("-1");
    while(secteurComboBox.next())
    {
        ui->comboBoxVisiteurSecteur->addItem(secteurComboBox.value(1).toString());
        this->vSecteurVisiteur.push_back(secteurComboBox.value(0).toString());
    }

    QString requeteLaboratoire="SELECT LAB_CODE, LAB_NOM FROM LABO;";
    qDebug()<<requeteLaboratoire;
    QSqlQuery laboratoireComboBox=this->db.exec(requeteLaboratoire);
    ui->comboBoxVisiteurLaboratoire->addItem("Sélectionner un laboratoire");
    this->vLaboVisiteur.push_back("-1");
    while(laboratoireComboBox.next())
    {
        ui->comboBoxVisiteurLaboratoire->addItem(laboratoireComboBox.value(1).toString());
        this->vLaboVisiteur.push_back(laboratoireComboBox.value(0).toString());
    }

    QString requeteDepartement="SELECT DEP_CODE, DEP_NOM FROM DEPARTEMENT;";
    qDebug()<<requeteDepartement;
    QSqlQuery departementComboBox=this->db.exec(requeteDepartement);
    ui->comboBoxVisiteurDepartement->addItem("Sélectionner un département");
    this->vDepartementVisiteur.push_back("-1");
    while(departementComboBox.next())
    {
        ui->comboBoxVisiteurDepartement->addItem(departementComboBox.value(1).toString());
        this->vDepartementVisiteur.push_back(departementComboBox.value(0).toString());
    }

     this->tableModelVisiteur->setTable("VISITEUR");
     this->tableModelVisiteur->setEditStrategy(QSqlTableModel::OnRowChange);
     this->tableModelVisiteur->select();
     ui->tableViewVisiteur->setModel(this->tableModelVisiteur);

     QString requeteVisiteur="SELECT VIS_MATRICULE, VIS_NOM, VIS_PRENOM, VIS_ADRESSE, VIS_CP, VIS_VILLE, VIS_DATEEMBAUCHE, SEC_CODE, LAB_CODE, DEP_CODE FROM VISITEUR;";
     qDebug()<<requeteVisiteur;
     this->queryModelVisiteur->setQuery(requeteVisiteur);

     this->queryModelVisiteur->setHeaderData(0,Qt::Horizontal,"Matricule");
     this->queryModelVisiteur->setHeaderData(1,Qt::Horizontal,"Nom");
     this->queryModelVisiteur->setHeaderData(2,Qt::Horizontal,"Prénom");
     this->queryModelVisiteur->setHeaderData(3,Qt::Horizontal,"Adresse");
     this->queryModelVisiteur->setHeaderData(4,Qt::Horizontal,"Code postal");
     this->queryModelVisiteur->setHeaderData(5,Qt::Horizontal,"Ville");
     this->queryModelVisiteur->setHeaderData(6,Qt::Horizontal,"Date embauche");
     this->queryModelVisiteur->setHeaderData(7,Qt::Horizontal,"Secteur");
     this->queryModelVisiteur->setHeaderData(8,Qt::Horizontal,"Laboratoire");
     this->queryModelVisiteur->setHeaderData(9,Qt::Horizontal,"Departement");
     ui->tableViewVisiteur->setModel(this->queryModelVisiteur);
     //Vue...montre-toi...
     ui->tableViewVisiteur->show();
     //Adapter la taille de la colonne selon le contenu
     ui->tableViewVisiteur->resizeColumnsToContents();

     this->connectionDesObjetsVisiteurs();

}

void MainWindow::on_pushButtonVisiteurSupprimer_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonVisiteurSupprimer_clicked()";
    this->supprimerDeDelegue(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_MATRICULE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    this->supprimerDeResponsable(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_MATRICULE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    this->tableModelVisiteur->removeRow(ui->tableViewVisiteur->selectionModel()->currentIndex().row());
    this->on_actionVisiteur_triggered();
}

void MainWindow::on_pushButtonVisiteurAjouter_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonVisiteurAjouter_clicked()";
    visiteur * fenetreVisiteur=new visiteur(this);

    if(fenetreVisiteur->exec()==QDialog::Accepted)
    {
        QSqlRecord nouveauVisiteur=tableModelVisiteur->record();
        nouveauVisiteur.setValue("VIS_MATRICULE",fenetreVisiteur->getLineEditMatricule());
        nouveauVisiteur.setValue("VIS_NOM",fenetreVisiteur->getLineEditNom());
        nouveauVisiteur.setValue("VIS_PRENOM",fenetreVisiteur->getLineEditPrenom());
        nouveauVisiteur.setValue("VIS_ADRESSE", fenetreVisiteur->getLineEditAdresse());
        nouveauVisiteur.setValue("VIS_CP", fenetreVisiteur->getLineEditCP());
        nouveauVisiteur.setValue("VIS_VILLE", fenetreVisiteur->getLineEditVille());
        nouveauVisiteur.setValue("VIS_DATEEMBAUCHE", QDate::currentDate());
        nouveauVisiteur.setValue("SEC_CODE", fenetreVisiteur->getComboBoxSecteur());
        nouveauVisiteur.setValue("LAB_CODE", fenetreVisiteur->getComboBoxLaboratoire());
        nouveauVisiteur.setValue("DEP_CODE", fenetreVisiteur->getComboBoxDepartement());
        if(this->tableModelVisiteur->insertRecord(-1,nouveauVisiteur))
        {
            ui->statusBar->showMessage("Visiteur ajouté avec succés",3000);
            this->on_actionVisiteur_triggered();
        }
        if(fenetreVisiteur->getRadioButonHierarchie()=="DELEGUE")
        {
            this->ajoutEnDelegue(fenetreVisiteur->getLineEditMatricule());
        }
        if(fenetreVisiteur->getRadioButonHierarchie()=="RESPONSABLE")
        {
            this->ajoutEnResponsable(fenetreVisiteur->getLineEditMatricule());
        }
        if(fenetreVisiteur->getCheckBoxChefVente()=="CHEFVENTE")
        {
            this->modifierChefVente(fenetreVisiteur->getLineEditMatricule(), fenetreVisiteur->getComboBoxDepartement());
        }
    }
    else
    {
        fenetreVisiteur->close();
    }
}

void MainWindow::ajoutEnDelegue(QString pMatricule)
{
    qDebug()<<"MainWindow::ajoutEnDelegue(QString pMatricule)";
    QString requeteLastDelegue="SELECT MAX(RIGHT(DEL_CODE,2)) delMax FROM DELEGUE;";
    qDebug()<<requeteLastDelegue;
    QSqlQuery numMax=this->db.exec(requeteLastDelegue);
    numMax.first();
    int delMax=numMax.value(0).toInt(0)+1;
    QString del_code;
    if(delMax<9)
    {
        del_code="d0"+QString::number(delMax);
    }
    else
    {
        del_code="d"+QString::number(delMax);
    }

    QString requeteInsertionVisiteur="INSERT INTO DELEGUE(VIS_MATRICULE, DEL_CODE) VALUES('"+pMatricule+"','"+del_code+"');";
    qDebug()<<requeteInsertionVisiteur;
    QSqlQuery insertionVisiteur(requeteInsertionVisiteur);
    insertionVisiteur.exec();
}

void MainWindow::ajoutEnResponsable(QString pMatricule)
{
    qDebug()<<"MainWindow::ajoutEnResponsable(QString pMatricule)";
    QString requeteLastResponsable="SELECT MAX(RIGHT(RES_CODE,2)) resMax FROM RESPONSABLE;";
    qDebug()<<requeteLastResponsable;
    QSqlQuery numMax=this->db.exec(requeteLastResponsable);
    numMax.first();
    int resMax=numMax.value(0).toInt()+1;
    QString res_code;
    if(resMax<9)
    {
        res_code="r0"+QString::number(resMax);
    }
    else
    {
        res_code="r"+QString::number(resMax);
    }

    QString requeteInsertionVisiteur="INSERT INTO RESPONSABLE(VIS_MATRICULE,RES_CODE) VALUES('"+pMatricule+"','"+res_code+"');";
    qDebug()<<requeteInsertionVisiteur;
    QSqlQuery insertionVisiteur(requeteInsertionVisiteur);
    insertionVisiteur.exec();
}

void MainWindow::modifierChefVente(QString pMatricule, QString pDepartement)
{
    qDebug()<<"MainWindow::modifierChefVente(QString pMatricule, QString pDepartement)";
    QString requeteModificationChefVente="UPDATE DEPARTEMENT SET DEP_CHEFVENTE='"+pMatricule+"' WHERE DEP_CODE='"+pDepartement+"';";
    qDebug()<<requeteModificationChefVente;
    QSqlQuery modificationChefVente(requeteModificationChefVente);
    modificationChefVente.exec();
}

void MainWindow::supprimerDeDelegue(QString pMatricule)
{
    qDebug()<<"MainWindow::supprimerDeDelegue(QString pMatricule)";
    QString requeteSuppressionVisiteur="DELETE FROM DELEGUE WHERE VIS_MATRICULE='"+pMatricule+"';";
    qDebug()<<requeteSuppressionVisiteur;
    QSqlQuery suppressionVisiteur(requeteSuppressionVisiteur);
    suppressionVisiteur.exec();
}

void MainWindow::supprimerDeResponsable(QString pMatricule)
{
    qDebug()<<"MainWindow::supprimerDeResponsable(QString pMatricule)";
    QString requeteSuppresionVisiteur="DELETE FROM RESPONSABLE WHERE VIS_MATRICULE='"+pMatricule+"';";
    qDebug()<<requeteSuppresionVisiteur;
    QSqlQuery suppressionVisiteur(requeteSuppresionVisiteur);
    suppressionVisiteur.exec();
}

void MainWindow::supprimerChefVente(QString pDepartement)
{
    qDebug()<<"MainWindow::supprimerChefVente(QString pDepartement)";
    QString requeteSuppressionChefVente="UPDATE DEPARTEMENT SET DEP_CHEFVENTE=NULL WHERE DEP_CODE='"+pDepartement+"';";
    qDebug()<<requeteSuppressionChefVente;
    QSqlQuery suppressionChefVente(requeteSuppressionChefVente);
    suppressionChefVente.exec();
}

void MainWindow::on_tableViewVisiteur_clicked(QModelIndex index)
{
    qDebug()<<"MainWindow::on_tableViewVisiteur_clicked(QModelIndex index)";
    ui->pushButtonVisiteurEdit->setEnabled(true);
    ui->pushButtonVisiteurSupprimer->setEnabled(true);
}

void MainWindow::on_pushButtonVisiteurEdit_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonVisiteurEdit_clicked()";
    visiteur * fenetreVisiteur=new visiteur(this);

    fenetreVisiteur->setLineEditMatricule(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_MATRICULE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setLineEditNom(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_NOM"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setLineEditPrenom(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_PRENOM"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setLineEditAdresse(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_ADRESSE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setLineEditCP(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_CP"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setLineEditVille(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_VILLE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setComboBoxSecteur(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("SEC_CODE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setComboBoxLaboratoire(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("LAB_CODE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setComboBoxDepartement(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("DEP_CODE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setRadioButtonHierarchie(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_MATRICULE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    fenetreVisiteur->setCheckBoxChefVente(tableModelVisiteur->data(tableModelVisiteur->sibling(ui->tableViewVisiteur->currentIndex().row(),tableModelVisiteur->fieldIndex("VIS_MATRICULE"),ui->tableViewVisiteur->selectionModel()->currentIndex())).toString());
    if(fenetreVisiteur->exec()==QDialog::Accepted)
    {
        QSqlRecord modifierVisiteur=tableModelVisiteur->record();
        modifierVisiteur.setValue("VIS_MATRICULE",fenetreVisiteur->getLineEditMatricule());
        modifierVisiteur.setValue("VIS_NOM",fenetreVisiteur->getLineEditNom());
        modifierVisiteur.setValue("VIS_PRENOM",fenetreVisiteur->getLineEditPrenom());
        modifierVisiteur.setValue("VIS_ADRESSE", fenetreVisiteur->getLineEditAdresse());
        modifierVisiteur.setValue("VIS_CP", fenetreVisiteur->getLineEditCP());
        modifierVisiteur.setValue("VIS_VILLE", fenetreVisiteur->getLineEditVille());
        if(fenetreVisiteur->getComboBoxSecteur()!="-1")
        {
            modifierVisiteur.setValue("SEC_CODE", fenetreVisiteur->getComboBoxSecteur());
        }
        if(fenetreVisiteur->getComboBoxLaboratoire()!="-1")
        {
            modifierVisiteur.setValue("LAB_CODE", fenetreVisiteur->getComboBoxLaboratoire());
        }
        if(fenetreVisiteur->getComboBoxDepartement()!="-1")
        {
            modifierVisiteur.setValue("DEP_CODE", fenetreVisiteur->getComboBoxDepartement());
        }

        if(tableModelVisiteur->setRecord(ui->tableViewVisiteur->currentIndex().row(), modifierVisiteur))
        {
            //qDebug()<<modifierVisiteur;
            //qDebug()<<"0";
            tableModelVisiteur->submitAll();
            if(fenetreVisiteur->getRadioButonHierarchieModification()=="VISITEUR")
            {
                this->supprimerDeDelegue(fenetreVisiteur->getLineEditMatricule());
                this->supprimerDeResponsable(fenetreVisiteur->getLineEditMatricule());
            }
            //qDebug()<<"1";
            if(fenetreVisiteur->getRadioButonHierarchieModification()=="DELEGUE")
            {
                this->supprimerDeResponsable(fenetreVisiteur->getLineEditMatricule());
                this->ajoutEnDelegue(fenetreVisiteur->getLineEditMatricule());
            }
            //qDebug()<<"2";
            if(fenetreVisiteur->getRadioButonHierarchieModification()=="RESPONSABLE")
            {
                this->supprimerDeDelegue(fenetreVisiteur->getLineEditMatricule());
                this->ajoutEnResponsable(fenetreVisiteur->getLineEditMatricule());
            }
            //qDebug()<<"3";
            if(fenetreVisiteur->getCheckBoxChefVente()=="CHEFVENTE")
            {
                this->modifierChefVente(fenetreVisiteur->getLineEditMatricule(), fenetreVisiteur->getComboBoxDepartement());
            }
            if(fenetreVisiteur->getCheckBoxChefVente()=="NONCHEFVENTE")
            {
                this->supprimerChefVente(fenetreVisiteur->getComboBoxDepartement());
            }
            ui->statusBar->showMessage("Visiteur modifié avec succés", 3000);
            this->on_actionVisiteur_triggered();
        }
        else
        {
            qDebug()<<"RATEEEE";
        }
    }
}
