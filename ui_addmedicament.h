/********************************************************************************
** Form generated from reading UI file 'addmedicament.ui'
**
** Created: Sun Dec 22 22:56:19 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEDICAMENT_H
#define UI_ADDMEDICAMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addMedicament
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditDepotLegal;
    QLabel *label_2;
    QLineEdit *lineEditNomCommercial;
    QLabel *label_3;
    QComboBox *comboBoxFamille;
    QLabel *label_4;
    QTextEdit *textEditComposition;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QTextEdit *textEditEffets;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QTextEdit *textEditContreIndication;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxPrixEchantillon;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddMedocAjouter;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *addMedicament)
    {
        if (addMedicament->objectName().isEmpty())
            addMedicament->setObjectName(QString::fromUtf8("addMedicament"));
        addMedicament->resize(1227, 307);
        horizontalLayout_2 = new QHBoxLayout(addMedicament);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(addMedicament);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditDepotLegal = new QLineEdit(addMedicament);
        lineEditDepotLegal->setObjectName(QString::fromUtf8("lineEditDepotLegal"));

        gridLayout->addWidget(lineEditDepotLegal, 0, 2, 1, 1);

        label_2 = new QLabel(addMedicament);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEditNomCommercial = new QLineEdit(addMedicament);
        lineEditNomCommercial->setObjectName(QString::fromUtf8("lineEditNomCommercial"));

        gridLayout->addWidget(lineEditNomCommercial, 1, 2, 1, 1);

        label_3 = new QLabel(addMedicament);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBoxFamille = new QComboBox(addMedicament);
        comboBoxFamille->setObjectName(QString::fromUtf8("comboBoxFamille"));

        gridLayout->addWidget(comboBoxFamille, 2, 2, 1, 1);

        label_4 = new QLabel(addMedicament);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        textEditComposition = new QTextEdit(addMedicament);
        textEditComposition->setObjectName(QString::fromUtf8("textEditComposition"));

        gridLayout->addWidget(textEditComposition, 3, 1, 3, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        label_5 = new QLabel(addMedicament);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 2, 1);

        textEditEffets = new QTextEdit(addMedicament);
        textEditEffets->setObjectName(QString::fromUtf8("textEditEffets"));

        gridLayout->addWidget(textEditEffets, 6, 1, 2, 2);

        verticalSpacer_2 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(addMedicament);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 2);

        textEditContreIndication = new QTextEdit(addMedicament);
        textEditContreIndication->setObjectName(QString::fromUtf8("textEditContreIndication"));

        gridLayout_2->addWidget(textEditContreIndication, 0, 2, 1, 2);

        label_7 = new QLabel(addMedicament);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        doubleSpinBoxPrixEchantillon = new QDoubleSpinBox(addMedicament);
        doubleSpinBoxPrixEchantillon->setObjectName(QString::fromUtf8("doubleSpinBoxPrixEchantillon"));
        QFont font;
        font.setKerning(true);
        doubleSpinBoxPrixEchantillon->setFont(font);
        doubleSpinBoxPrixEchantillon->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout_2->addWidget(doubleSpinBoxPrixEchantillon, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAddMedocAjouter = new QPushButton(addMedicament);
        pushButtonAddMedocAjouter->setObjectName(QString::fromUtf8("pushButtonAddMedocAjouter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/enregistrer"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAddMedocAjouter->setIcon(icon);

        horizontalLayout->addWidget(pushButtonAddMedocAjouter);

        pushButtonAnnuler = new QPushButton(addMedicament);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/quitter"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAnnuler->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonAnnuler);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 4);


        horizontalLayout_2->addLayout(gridLayout_2);


        retranslateUi(addMedicament);

        QMetaObject::connectSlotsByName(addMedicament);
    } // setupUi

    void retranslateUi(QDialog *addMedicament)
    {
        addMedicament->setWindowTitle(QApplication::translate("addMedicament", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addMedicament", "D\303\251pot legal :", 0, QApplication::UnicodeUTF8));
        lineEditDepotLegal->setText(QString());
        label_2->setText(QApplication::translate("addMedicament", "Nom commercial :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addMedicament", "Famille :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addMedicament", "Composition :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("addMedicament", "Effets :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("addMedicament", "Contre indication", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("addMedicament", "Prix \303\251chantillon", 0, QApplication::UnicodeUTF8));
        pushButtonAddMedocAjouter->setText(QApplication::translate("addMedicament", "Editer", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("addMedicament", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addMedicament: public Ui_addMedicament {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEDICAMENT_H
