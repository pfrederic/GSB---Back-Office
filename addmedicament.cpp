#include "addmedicament.h"
#include "ui_addmedicament.h"
#include <QSqlQuery>
#include <QVector>
#include <QTextCodec>
#include <QDebug>

addMedicament::addMedicament(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMedicament)
{

    ui->setupUi(this);
    qDebug()<<"addMedicament::addMedicament(QWidget *parent) : QDialog(parent), ui(new Ui::addMedicament)";
    //Choisir le bon codec
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    //Ajout d'un titre de fenêtre
    setWindowTitle("Edition des médicaments");
    //ajout du logo de fenêtre
    setWindowIcon(QIcon(":/logo"));
    this->chargerComboBoxFamille();
}

addMedicament::~addMedicament()
{
    qDebug()<<"addMedicament::~addMedicament()";
    delete ui;
}

void addMedicament::changeEvent(QEvent *e)
{
    qDebug()<<"addMedicament::changeEvent(QEvent *e)";
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void addMedicament::chargerComboBoxFamille()
{
    qDebug()<<"addMedicament::chargerComboBoxFamille()";
    ui->comboBoxFamille->addItem("Sélectionner une famille");
    this->vFamilleMedoc.push_back("-1");
    QString requeteFamillieMedoc="SELECT FAM_CODE, FAM_LIBELLE FROM FAMILLE;";
    qDebug()<<requeteFamillieMedoc;
    QSqlQuery familleMedoc(requeteFamillieMedoc);
    while(familleMedoc.next())
    {
        ui->comboBoxFamille->addItem(familleMedoc.value(1).toString()+" ("+familleMedoc.value(0).toString()+") ");
        vFamilleMedoc.push_back(familleMedoc.value(0).toString());
    }
}

QString addMedicament::getLineEditMedDepotLegal()
{
    qDebug()<<"addMedicament::getLineEditMedDepotLegal()";
    return ui->lineEditDepotLegal->text();
}

QString addMedicament::getLineEditMedNomCommercial()
{
    qDebug()<<"addMedicament::getLineEditMedNomCommercial()";
    return ui->lineEditNomCommercial->text();
}

QString addMedicament::getComboBoxFamCode()
{
    qDebug()<<"addMedicament::getComboBoxFamCode()";
    return vFamilleMedoc[ui->comboBoxFamille->currentIndex()];
}

QString addMedicament::getTextEditComposition()
{
    qDebug()<<"addMedicament::getTextEditComposition()";
    return ui->textEditComposition->toPlainText();
}

QString addMedicament::getTextEditEffets()
{
    qDebug()<<"addMedicament::getTextEditEffets()";
    return ui->textEditEffets->toPlainText();
}

QString addMedicament::getTextEditContreIndic()
{
    qDebug()<<"addMedicament::getTextEditContreIndic()";
    return ui->textEditContreIndication->toPlainText();
}

float addMedicament::getDoubleSpinPrixEch()
{
    qDebug()<<"addMedicament::getDoubleSpinPrixEch()";
    return ui->doubleSpinBoxPrixEchantillon->text().toFloat();
}

void addMedicament::on_pushButtonAddMedocAjouter_clicked()
{
    qDebug()<<"addMedicament::on_pushButtonAddMedocAjouter_clicked()";
    accept();
}

void addMedicament::setLineEditDepotLegal(QString pDepotLegal)
{
    qDebug()<<"addMedicament::setLineEditDepotLegal(QString pDepotLegal)";
    ui->lineEditDepotLegal->setText(pDepotLegal);
}

void addMedicament::setLineEditNomCommercial(QString pString)
{
    qDebug()<<"addMedicament::setLineEditNomCommercial(QString pString)";
    ui->lineEditNomCommercial->setText(pString);
}

void addMedicament::setComboBoxFamille(QString pFamille)
{
    qDebug()<<"addMedicament::setComboBoxFamille(QString pFamille)";
    for(int i=0;i<this->vFamilleMedoc.size();i++)
    {
        if(vFamilleMedoc[i]==pFamille)
        {
            ui->comboBoxFamille->setCurrentIndex(i);
            break;
        }
    }
}

void addMedicament::setTextEditComposition(QString pComposition)
{
    qDebug()<<"addMedicament::setTextEditComposition(QString pComposition)";
    ui->textEditComposition->setText(pComposition);
}

void addMedicament::setTextEditEffets(QString pEffets)
{
    qDebug()<<"addMedicament::setTextEditEffets(QString pEffets)";
    ui->textEditEffets->setText(pEffets);
}

void addMedicament::setTextEditContreIndication(QString pContreIndication)
{
    qDebug()<<"addMedicament::setTextEditContreIndication(QString pContreIndication)";
    ui->textEditContreIndication->setText(pContreIndication);
}

void addMedicament::setDoubleSpinBoxPrixEch(double pPrixEch)
{
    qDebug()<<"addMedicament::setDoubleSpinBoxPrixEch(double pPrixEch)";
    ui->doubleSpinBoxPrixEchantillon->setValue(pPrixEch);
}

void addMedicament::on_pushButtonAnnuler_clicked()
{
    qDebug()<<"addMedicament::on_pushButtonAnnuler_clicked()";
    reject();
}
