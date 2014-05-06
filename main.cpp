#include <QtGui/QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QTextCodec>
#include "mainwindow.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    //Connexion à la base
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("172.16.63.142");
    db.setDatabaseName("db_gestionCR");
    db.setUserName("technicien");
    db.setPassword("ini01");
    bool ok=db.open();
    if(!ok)
    {
        qDebug()<<"Erreur connexion";
    }
    else
    {
        qDebug()<<"Connexion à la base établie";
    }

    login fenetreIdentif;
    if(fenetreIdentif.exec()==QDialog::Accepted)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    else
    return 0;
}
