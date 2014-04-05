#include "praticien.h"
#include "ui_praticien.h"
#include <QSqlQuery>
#include <QTextCodec>
#include <QDebug>

praticien::praticien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::praticien)
{
    qDebug()<<"praticien::praticien(QWidget *parent) : QDialog(parent), ui(new Ui::praticien)";
    ui->setupUi(this);
    //Choisir le bon codec
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    //Ajout d'un titre de fenêtre
    setWindowTitle("Edition des praticiens");
    //ajout du logo de fenêtre
    setWindowIcon(QIcon(":/logo"));
    this->chargerComboBoxType();
}

praticien::~praticien()
{
    qDebug()<<"praticien::~praticien()";
    delete ui;
}

void praticien::changeEvent(QEvent *e)
{
    qDebug()<<"praticien::changeEvent(QEvent *e)";
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void praticien::chargerComboBoxType()
{
    qDebug()<<"praticien::chargerComboBoxType()";
    ui->comboBoxTypePrat->addItem("Sélectionner un type");
    this->vTypePraticien.push_back("-1");
    QString requeteTypePraticien="SELECT TYP_CODE, TYP_LIBELLE FROM TYPE_PRATICIEN;";
    qDebug()<<requeteTypePraticien;
    QSqlQuery typePraticien(requeteTypePraticien);
    while(typePraticien.next())
    {
        ui->comboBoxTypePrat->addItem(typePraticien.value(1).toString()+" ("+typePraticien.value(0).toString()+")");
        this->vTypePraticien.push_back(typePraticien.value(0).toString());
    }
}

int praticien::getSpinBoxId()
{
    qDebug()<<"praticien::getSpinBoxId()";
    return ui->spinBoxId->text().toInt();
}

QString praticien::getLineEditNom()
{
    qDebug()<<"praticien::getLineEditNom()";
    return ui->lineEditNom->text();
}

QString praticien::getLineEditPrenom()
{
    qDebug()<<"praticien::getLineEditPrenom()";
    return ui->lineEditPrenom->text();
}

float praticien::getDoubleSpinBoxCoeffNot()
{
    qDebug()<<"praticien::getDoubleSpinBoxCoeffNot()";
    return ui->doubleSpinBoxCoeffNotoriete->text().toFloat();
}

QString praticien::getComboBoxType()
{
    qDebug()<<"praticien::getComboBoxType()";
    return vTypePraticien[ui->comboBoxTypePrat->currentIndex()];
}

void praticien::on_pushButtonEditer_clicked()
{
    qDebug()<<"praticien::on_pushButtonEditer_clicked()";
    accept();
}

void praticien::on_pushButtonAnnuler_clicked()
{
    qDebug()<<"praticien::on_pushButtonAnnuler_clicked()";
    reject();
}

void praticien::setSpinBoxId(int pId)
{
    qDebug()<<"praticien::setSpinBoxId(int pId)";
    ui->spinBoxId->setValue(pId);
}

void praticien::setLineEditNom(QString pNom)
{
    qDebug()<<"praticien::setLineEditNom(QString pNom)";
    ui->lineEditNom->setText(pNom);
}

void praticien::setLineEditPrenom(QString pPrenom)
{
    qDebug()<<"praticien::setLineEditPrenom(QString pPrenom)";
    ui->lineEditPrenom->setText(pPrenom);
}

void praticien::setDoubleSpinBoxCoeffNot(float pCoeffNot)
{
    qDebug()<<"praticien::setDoubleSpinBoxCoeffNot(float pCoeffNot)";
    ui->doubleSpinBoxCoeffNotoriete->setValue(pCoeffNot);
}

void praticien::setComboBoxType(QString pType)
{
    qDebug()<<"praticien::setComboBoxType(QString pType)";
    for(int i=0;i<vTypePraticien.size();i++)
    {
        if(pType==vTypePraticien[i])
        {
            ui->comboBoxTypePrat->setCurrentIndex(i);
        }
    }
}
