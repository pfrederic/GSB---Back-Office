/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Sun Dec 22 22:56:19 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditIdentifiant;
    QLineEdit *lineEditMdp;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonConnecter;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(555, 176);
        login->setMinimumSize(QSize(555, 176));
        login->setMaximumSize(QSize(555, 176));
        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 20, 161, 131));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/logo")));
        label_4->setScaledContents(true);
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 161));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("FreeSans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditIdentifiant = new QLineEdit(layoutWidget);
        lineEditIdentifiant->setObjectName(QString::fromUtf8("lineEditIdentifiant"));

        verticalLayout->addWidget(lineEditIdentifiant);

        lineEditMdp = new QLineEdit(layoutWidget);
        lineEditMdp->setObjectName(QString::fromUtf8("lineEditMdp"));
        lineEditMdp->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditMdp);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/quitter"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonQuitter->setIcon(icon);

        horizontalLayout_3->addWidget(pushButtonQuitter);

        pushButtonConnecter = new QPushButton(layoutWidget);
        pushButtonConnecter->setObjectName(QString::fromUtf8("pushButtonConnecter"));
        pushButtonConnecter->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/valider"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonConnecter->setIcon(icon1);
        pushButtonConnecter->setDefault(true);

        horizontalLayout_3->addWidget(pushButtonConnecter);


        verticalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_3->setText(QApplication::translate("login", "Saisissez votre identifiant et votre mot de passe", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("login", "Identifiant", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("login", "Mot de passe", 0, QApplication::UnicodeUTF8));
        pushButtonQuitter->setText(QApplication::translate("login", "Quitter", 0, QApplication::UnicodeUTF8));
        pushButtonConnecter->setText(QApplication::translate("login", "Se connecter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
