#include "visiteur.h"
#include "ui_visiteur.h"
#include <QSqlQuery>
#include <QDebug>
#include <QTextCodec>

visiteur::visiteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::visiteur)
{
    qDebug()<<"visiteur::visiteur(QWidget *parent) : QDialog(parent), ui(new Ui::visiteur)";
    ui->setupUi(this);
    //Choisir le bon codec
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    this->chargeComboBoxs();
    ui->radioButtonVisiteur->setChecked(true);
    this->niveauHierarchie="VISITEUR";
    this->chefVente=0;
    //Ajout d'un titre de fenêtre
    setWindowTitle("Edition des visiteurs");
    //ajout du logo de fenêtre
    setWindowIcon(QIcon(":/logo"));
}

visiteur::~visiteur()
{
    qDebug()<<"visiteur::~visiteur()";
    delete ui;
}

void visiteur::changeEvent(QEvent *e)
{
    qDebug()<<"visiteur::changeEvent(QEvent *e)";
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void visiteur::chargeComboBoxs()
{
    qDebug()<<"visiteur::chargeComboBoxs()";
    //Charge combo box des secteurs
    ui->comboBoxSecteur->addItem("Sélectionner un secteur");
    this->vSecteurVisiteur.push_back("-1");
    QString requeteSecteur="SELECT SEC_CODE, SEC_LIBELLE FROM SECTEUR;";
    qDebug()<<requeteSecteur;
    QSqlQuery secteur(requeteSecteur);
    while(secteur.next())
    {
        ui->comboBoxSecteur->addItem(secteur.value(1).toString());
        this->vSecteurVisiteur.push_back(secteur.value(0).toString());
    }

    //Charge combo box des laboratoires
    ui->comboBoxLaboratoire->addItem("Sélectionner un laboratoire");
    this->vLaboratoireVisiteur.push_back("-1");
    QString requeteLaboratoire="SELECT LAB_CODE, LAB_NOM FROM LABO;";
    qDebug()<<requeteLaboratoire;
    QSqlQuery laboratoire(requeteLaboratoire);
    while(laboratoire.next())
    {
        ui->comboBoxLaboratoire->addItem(laboratoire.value(1).toString());
        this->vLaboratoireVisiteur.push_back(laboratoire.value(0).toString());
    }

    //Charge combo box des département
    ui->comboBoxDepartement->addItem("Sélectionner un département");
    this->vDepartementVisiteur.push_back("-1");
    QString requeteDepartement="SELECT DEP_CODE, DEP_NOM FROM DEPARTEMENT;";
    qDebug()<<requeteDepartement;
    QSqlQuery departement(requeteDepartement);
    while(departement.next())
    {
        ui->comboBoxDepartement->addItem(departement.value(1).toString());
        this->vDepartementVisiteur.push_back(departement.value(0).toString());
    }

}

void visiteur::on_pushButtonAjouter_clicked()
{
    qDebug()<<"visiteur::on_pushButtonAjouter_clicked()";
    accept();
}

void visiteur::on_pushButtonAnnuler_clicked()
{
    qDebug()<<"visiteur::on_pushButtonAnnuler_clicked()";
    reject();
}

QString visiteur::getLineEditMatricule()
{
    qDebug()<<"visiteur::getLineEditMatricule()";
    return ui->lineEditMatricule->text();
}

QString visiteur::getLineEditNom()
{
    qDebug()<<"visiteur::getLineEditNom()";
    return ui->lineEditNom->text();
}

QString visiteur::getLineEditPrenom()
{
    qDebug()<<"visiteur::getLineEditPrenom()";
    return ui->lineEditPrenom->text();
}

QString visiteur::getLineEditAdresse()
{
    qDebug()<<"visiteur::getLineEditAdresse()";
    return ui->lineEditAdresse->text();
}

QString visiteur::getLineEditCP()
{
    qDebug()<<"visiteur::getLineEditCP()";
    return ui->lineEditCP->text();
}

QString visiteur::getLineEditVille()
{
    qDebug()<<"visiteur::getLineEditVille()";
    return ui->lineEditVille->text();
}

QString visiteur::getComboBoxSecteur()
{
    qDebug()<<"visiteur::getComboBoxSecteur()";
    return vSecteurVisiteur.at(ui->comboBoxSecteur->currentIndex());
}

QString visiteur::getComboBoxLaboratoire()
{
    qDebug()<<"visiteur::getComboBoxLaboratoire()";
    return vLaboratoireVisiteur.at(ui->comboBoxLaboratoire->currentIndex());
}

QString visiteur::getComboBoxDepartement()
{
    qDebug()<<"visiteur::getComboBoxDepartement()";
    return vDepartementVisiteur.at(ui->comboBoxDepartement->currentIndex());
}

QString visiteur::getRadioButonHierarchie()
{
    qDebug()<<"visiteur::getRadioButonHierarchie()";
    if(ui->radioButtonDelegue->isChecked())
    {
        return "DELEGUE";
    }
    if(ui->radioButtonResponsable->isChecked())
    {
        return "RESPONSABLE";
    }
    if(ui->radioButtonVisiteur->isChecked())
    {
        return "VISITEUR";
    }
}

QString visiteur::getRadioButonHierarchieModification()
{
    qDebug()<<"visiteur::getRadioButonHierarchieModification()";
    if(ui->radioButtonVisiteur->isChecked() && this->niveauHierarchie!="VISITEUR")
    {
        return "VISITEUR";
    }
    if(ui->radioButtonDelegue->isChecked() && this->niveauHierarchie!="DELEGUE")
    {
        return "DELEGUE";
    }
    if(ui->radioButtonResponsable->isChecked() && this->niveauHierarchie!="RESPONSABLE")
    {
        return "RESPONSABLE";
    }
    return "0";
}

QString visiteur::getCheckBoxChefVente()
{
    qDebug()<<"visiteur::getCheckBoxChefVente()";
    qDebug()<<"COUCOU";
    if(ui->checkBoxChefVente->isChecked() && this->chefVente==0)
    {
        qDebug()<<"CHEFVENTE";
        return "CHEFVENTE";
    }
    if(!(ui->checkBoxChefVente->isChecked())&& this->chefVente==1)
    {
        qDebug()<<"NONCHEFVENTE";
        return "NONCHEFVENTE";
    }
}

void visiteur::setLineEditMatricule(QString pMatricule)
{
    qDebug()<<"visiteur::setLineEditMatricule(QString pMatricule)";
    ui->lineEditMatricule->setText(pMatricule);
}

void visiteur::setLineEditNom(QString pNom)
{
    qDebug()<<"visiteur::setLineEditNom(QString pNom)";
    ui->lineEditNom->setText(pNom);
}

void visiteur::setLineEditPrenom(QString pPrenom)
{
    qDebug()<<"visiteur::setLineEditPrenom(QString pPrenom)";
    ui->lineEditPrenom->setText(pPrenom);
}

void visiteur::setLineEditAdresse(QString pAdresse)
{
    qDebug()<<"visiteur::setLineEditAdresse(QString pAdresse)";
    ui->lineEditAdresse->setText(pAdresse);
}

void visiteur::setLineEditCP(QString pCP)
{
    qDebug()<<"visiteur::setLineEditCP(QString pCP)";
    ui->lineEditCP->setText(pCP);
}

void visiteur::setLineEditVille(QString pVille)
{
    qDebug()<<"visiteur::setLineEditVille(QString pVille)";
    ui->lineEditVille->setText(pVille);
}

void visiteur::setComboBoxSecteur(QString pSecteur)
{
    qDebug()<<"visiteur::setComboBoxSecteur(QString pSecteur)";
    for(int i=0;i<this->vSecteurVisiteur.size();i++)
    {
        if(pSecteur==this->vSecteurVisiteur[i])
        {
            ui->comboBoxSecteur->setCurrentIndex(i);
        }
    }
}

void visiteur::setComboBoxLaboratoire(QString pLaboratoire)
{
    qDebug()<<"visiteur::setComboBoxLaboratoire(QString pLaboratoire)";
    for(int i=0;i<this->vLaboratoireVisiteur.size();i++)
    {
        if(pLaboratoire==this->vLaboratoireVisiteur[i])
        {
            ui->comboBoxLaboratoire->setCurrentIndex(i);
        }
    }
}

void visiteur::setComboBoxDepartement(QString pDepartement)
{
    qDebug()<<"visiteur::setComboBoxDepartement(QString pDepartement)";
    for(int i=0;i<this->vDepartementVisiteur.size();i++)
    {
        if(pDepartement==this->vDepartementVisiteur[i])
        {
            ui->comboBoxDepartement->setCurrentIndex(i);
        }
    }
}

void visiteur::setRadioButtonHierarchie(QString pMatricule)
{
    qDebug()<<"visiteur::setRadioButtonHierarchie(QString pMatricule)";
    QString requeteDelegue="SELECT DEL_CODE FROM DELEGUE WHERE VIS_MATRICULE='"+pMatricule+"';";
    qDebug()<<requeteDelegue;
    QSqlQuery delegue(requeteDelegue);
    if(delegue.first()==true)
    {
        ui->radioButtonDelegue->setChecked(true);
        this->niveauHierarchie="DELEGUE";
    }
    QString requeteResponsable="SELECT RES_CODE FROM RESPONSABLE WHERE VIS_MATRICULE='"+pMatricule+"';";
    qDebug()<<requeteResponsable;
    QSqlQuery responsable(requeteResponsable);
    if(responsable.first()==true)
    {
        ui->radioButtonResponsable->setChecked(true);
        this->niveauHierarchie="RESPONSABLE";
    }
}

void visiteur::setCheckBoxChefVente(QString pMatricule)
{
    qDebug()<<"visiteur::setCheckBoxChefVente(QString pMatricule)";
    QString requeteChefVenteDepartement="SELECT DEP_CODE FROM DEPARTEMENT WHERE DEP_CHEFVENTE='"+pMatricule+"';";
    qDebug()<<requeteChefVenteDepartement;
    QSqlQuery chefVenteDep(requeteChefVenteDepartement);
    if(chefVenteDep.first()==true)
    {
        ui->checkBoxChefVente->setChecked(true);
        this->chefVente=1;
    }
}
