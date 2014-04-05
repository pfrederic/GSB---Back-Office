/********************************************************************************
** Form generated from reading UI file 'praticien.ui'
**
** Created: Sun Dec 22 22:56:19 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRATICIEN_H
#define UI_PRATICIEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_praticien
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinBoxId;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QDoubleSpinBox *doubleSpinBoxCoeffNotoriete;
    QComboBox *comboBoxTypePrat;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonEditer;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *praticien)
    {
        if (praticien->objectName().isEmpty())
            praticien->setObjectName(QString::fromUtf8("praticien"));
        praticien->resize(434, 321);
        verticalLayout_3 = new QVBoxLayout(praticien);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(praticien);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(praticien);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(praticien);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(praticien);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(praticien);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        spinBoxId = new QSpinBox(praticien);
        spinBoxId->setObjectName(QString::fromUtf8("spinBoxId"));

        verticalLayout_2->addWidget(spinBoxId);

        lineEditNom = new QLineEdit(praticien);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        verticalLayout_2->addWidget(lineEditNom);

        lineEditPrenom = new QLineEdit(praticien);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        verticalLayout_2->addWidget(lineEditPrenom);

        doubleSpinBoxCoeffNotoriete = new QDoubleSpinBox(praticien);
        doubleSpinBoxCoeffNotoriete->setObjectName(QString::fromUtf8("doubleSpinBoxCoeffNotoriete"));
        doubleSpinBoxCoeffNotoriete->setMaximum(999);

        verticalLayout_2->addWidget(doubleSpinBoxCoeffNotoriete);

        comboBoxTypePrat = new QComboBox(praticien);
        comboBoxTypePrat->setObjectName(QString::fromUtf8("comboBoxTypePrat"));

        verticalLayout_2->addWidget(comboBoxTypePrat);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 89, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonEditer = new QPushButton(praticien);
        pushButtonEditer->setObjectName(QString::fromUtf8("pushButtonEditer"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/enregistrer"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEditer->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonEditer);

        pushButtonAnnuler = new QPushButton(praticien);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/quitter"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAnnuler->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButtonAnnuler);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(praticien);

        QMetaObject::connectSlotsByName(praticien);
    } // setupUi

    void retranslateUi(QDialog *praticien)
    {
        praticien->setWindowTitle(QApplication::translate("praticien", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("praticien", "Identifiant :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("praticien", "Nom :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("praticien", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("praticien", "Coefficient notoriete :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("praticien", "Type de praticien :", 0, QApplication::UnicodeUTF8));
        pushButtonEditer->setText(QApplication::translate("praticien", "Editer", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("praticien", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class praticien: public Ui_praticien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRATICIEN_H
