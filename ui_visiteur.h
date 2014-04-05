/********************************************************************************
** Form generated from reading UI file 'visiteur.ui'
**
** Created: Sun Dec 22 22:56:19 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITEUR_H
#define UI_VISITEUR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visiteur
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditMatricule;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QLineEdit *lineEditAdresse;
    QLineEdit *lineEditCP;
    QLineEdit *lineEditVille;
    QComboBox *comboBoxSecteur;
    QComboBox *comboBoxLaboratoire;
    QComboBox *comboBoxDepartement;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonDelegue;
    QRadioButton *radioButtonResponsable;
    QRadioButton *radioButtonVisiteur;
    QCheckBox *checkBoxChefVente;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonAjouter;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *visiteur)
    {
        if (visiteur->objectName().isEmpty())
            visiteur->setObjectName(QString::fromUtf8("visiteur"));
        visiteur->resize(422, 429);
        verticalLayout_3 = new QVBoxLayout(visiteur);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(visiteur);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(visiteur);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(visiteur);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(visiteur);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(visiteur);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(visiteur);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(visiteur);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(visiteur);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(visiteur);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(visiteur);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(visiteur);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditMatricule = new QLineEdit(visiteur);
        lineEditMatricule->setObjectName(QString::fromUtf8("lineEditMatricule"));

        verticalLayout_2->addWidget(lineEditMatricule);

        lineEditNom = new QLineEdit(visiteur);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        verticalLayout_2->addWidget(lineEditNom);

        lineEditPrenom = new QLineEdit(visiteur);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        verticalLayout_2->addWidget(lineEditPrenom);

        lineEditAdresse = new QLineEdit(visiteur);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));

        verticalLayout_2->addWidget(lineEditAdresse);

        lineEditCP = new QLineEdit(visiteur);
        lineEditCP->setObjectName(QString::fromUtf8("lineEditCP"));
        lineEditCP->setMaxLength(5);

        verticalLayout_2->addWidget(lineEditCP);

        lineEditVille = new QLineEdit(visiteur);
        lineEditVille->setObjectName(QString::fromUtf8("lineEditVille"));

        verticalLayout_2->addWidget(lineEditVille);

        comboBoxSecteur = new QComboBox(visiteur);
        comboBoxSecteur->setObjectName(QString::fromUtf8("comboBoxSecteur"));

        verticalLayout_2->addWidget(comboBoxSecteur);

        comboBoxLaboratoire = new QComboBox(visiteur);
        comboBoxLaboratoire->setObjectName(QString::fromUtf8("comboBoxLaboratoire"));

        verticalLayout_2->addWidget(comboBoxLaboratoire);

        comboBoxDepartement = new QComboBox(visiteur);
        comboBoxDepartement->setObjectName(QString::fromUtf8("comboBoxDepartement"));

        verticalLayout_2->addWidget(comboBoxDepartement);

        widget = new QWidget(visiteur);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonDelegue = new QRadioButton(widget);
        radioButtonDelegue->setObjectName(QString::fromUtf8("radioButtonDelegue"));

        horizontalLayout->addWidget(radioButtonDelegue);

        radioButtonResponsable = new QRadioButton(widget);
        radioButtonResponsable->setObjectName(QString::fromUtf8("radioButtonResponsable"));

        horizontalLayout->addWidget(radioButtonResponsable);

        radioButtonVisiteur = new QRadioButton(widget);
        radioButtonVisiteur->setObjectName(QString::fromUtf8("radioButtonVisiteur"));

        horizontalLayout->addWidget(radioButtonVisiteur);


        verticalLayout_2->addWidget(widget);

        checkBoxChefVente = new QCheckBox(visiteur);
        checkBoxChefVente->setObjectName(QString::fromUtf8("checkBoxChefVente"));

        verticalLayout_2->addWidget(checkBoxChefVente);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonAjouter = new QPushButton(visiteur);
        pushButtonAjouter->setObjectName(QString::fromUtf8("pushButtonAjouter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/enregistrer"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjouter->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonAjouter);

        pushButtonAnnuler = new QPushButton(visiteur);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/quitter"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAnnuler->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButtonAnnuler);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(visiteur);

        QMetaObject::connectSlotsByName(visiteur);
    } // setupUi

    void retranslateUi(QDialog *visiteur)
    {
        visiteur->setWindowTitle(QApplication::translate("visiteur", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("visiteur", "Identifiant :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("visiteur", "Nom :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("visiteur", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("visiteur", "Adresse :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("visiteur", "Code postal :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("visiteur", "Ville :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("visiteur", "Secteur :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("visiteur", "Laboratoire :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("visiteur", "D\303\251partement :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("visiteur", "Hi\303\251rarchie :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("visiteur", "Chef de vente :", 0, QApplication::UnicodeUTF8));
        radioButtonDelegue->setText(QApplication::translate("visiteur", "D\303\251l\303\251gue", 0, QApplication::UnicodeUTF8));
        radioButtonResponsable->setText(QApplication::translate("visiteur", "Responsable", 0, QApplication::UnicodeUTF8));
        radioButtonVisiteur->setText(QApplication::translate("visiteur", "Visiteur", 0, QApplication::UnicodeUTF8));
        checkBoxChefVente->setText(QApplication::translate("visiteur", "Chef de vente du d\303\251partement", 0, QApplication::UnicodeUTF8));
        pushButtonAjouter->setText(QApplication::translate("visiteur", "Editer", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("visiteur", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class visiteur: public Ui_visiteur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITEUR_H
