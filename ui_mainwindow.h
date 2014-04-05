/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Feb 28 17:07:23 2014
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionMedicament;
    QAction *actionPraticien;
    QAction *actionVisiteur;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_8;
    QTabWidget *tabWidgetAction;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_22;
    QLineEdit *lineEditMedicamentDepotLegal;
    QLineEdit *lineEditMedicamentNomCommercial;
    QComboBox *comboBoxMedicamentFamille;
    QDoubleSpinBox *doubleSpinBoxMedicamentPrixEch;
    QTableView *tableViewMedicament;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonMedicamentAjouter;
    QPushButton *pushButtonMedicamentModifier;
    QPushButton *pushButtonMedicamentSupprimer;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEditMedicamentComposition;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *textEditMedicamentEffets;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextEdit *textEditMedicamentContreIndication;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEditPraticienId;
    QLineEdit *lineEditPraticienNom;
    QLineEdit *lineEditPraticienPrenom;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *comboBoxPraticienType;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_11;
    QTableView *tableViewPraticien;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonPraticienAjouter;
    QPushButton *pushButtonPraticienModifier;
    QPushButton *pushButtonPraticienSupprimer;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_8;
    QTextEdit *textEditPraticienSpecialite;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_9;
    QTextEdit *textEditPraticienCabinet;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *lineEditVisiteurId;
    QLineEdit *lineEditVisiteurNom;
    QLineEdit *lineEditVisiteurPrenom;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_18;
    QLineEdit *lineEditVisiteurCP;
    QLineEdit *lineEditVisiteurVille;
    QComboBox *comboBoxVisiteurSecteur;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_16;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_19;
    QComboBox *comboBoxVisiteurLaboratoire;
    QComboBox *comboBoxVisiteurDepartement;
    QSpacerItem *verticalSpacer_2;
    QTableView *tableViewVisiteur;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButtonVisiteurAjouter;
    QPushButton *pushButtonVisiteurEdit;
    QPushButton *pushButtonVisiteurSupprimer;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuGestion;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(722, 528);
        MainWindow->setMinimumSize(QSize(700, 500));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionMedicament = new QAction(MainWindow);
        actionMedicament->setObjectName(QString::fromUtf8("actionMedicament"));
        actionPraticien = new QAction(MainWindow);
        actionPraticien->setObjectName(QString::fromUtf8("actionPraticien"));
        actionVisiteur = new QAction(MainWindow);
        actionVisiteur->setObjectName(QString::fromUtf8("actionVisiteur"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_8 = new QHBoxLayout(centralWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        tabWidgetAction = new QTabWidget(centralWidget);
        tabWidgetAction->setObjectName(QString::fromUtf8("tabWidgetAction"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_14 = new QHBoxLayout(tab);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_4->addWidget(label_18);

        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_4->addWidget(label_19);

        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_4->addWidget(label_20);

        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_4->addWidget(label_21);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        lineEditMedicamentDepotLegal = new QLineEdit(tab);
        lineEditMedicamentDepotLegal->setObjectName(QString::fromUtf8("lineEditMedicamentDepotLegal"));

        verticalLayout_22->addWidget(lineEditMedicamentDepotLegal);

        lineEditMedicamentNomCommercial = new QLineEdit(tab);
        lineEditMedicamentNomCommercial->setObjectName(QString::fromUtf8("lineEditMedicamentNomCommercial"));

        verticalLayout_22->addWidget(lineEditMedicamentNomCommercial);

        comboBoxMedicamentFamille = new QComboBox(tab);
        comboBoxMedicamentFamille->setObjectName(QString::fromUtf8("comboBoxMedicamentFamille"));

        verticalLayout_22->addWidget(comboBoxMedicamentFamille);

        doubleSpinBoxMedicamentPrixEch = new QDoubleSpinBox(tab);
        doubleSpinBoxMedicamentPrixEch->setObjectName(QString::fromUtf8("doubleSpinBoxMedicamentPrixEch"));

        verticalLayout_22->addWidget(doubleSpinBoxMedicamentPrixEch);


        horizontalLayout_2->addLayout(verticalLayout_22);


        verticalLayout_23->addLayout(horizontalLayout_2);

        tableViewMedicament = new QTableView(tab);
        tableViewMedicament->setObjectName(QString::fromUtf8("tableViewMedicament"));
        tableViewMedicament->setAlternatingRowColors(true);
        tableViewMedicament->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewMedicament->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewMedicament->verticalHeader()->setCascadingSectionResizes(true);
        tableViewMedicament->verticalHeader()->setStretchLastSection(false);

        verticalLayout_23->addWidget(tableViewMedicament);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonMedicamentAjouter = new QPushButton(tab);
        pushButtonMedicamentAjouter->setObjectName(QString::fromUtf8("pushButtonMedicamentAjouter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ajouter"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMedicamentAjouter->setIcon(icon);

        horizontalLayout->addWidget(pushButtonMedicamentAjouter);

        pushButtonMedicamentModifier = new QPushButton(tab);
        pushButtonMedicamentModifier->setObjectName(QString::fromUtf8("pushButtonMedicamentModifier"));
        pushButtonMedicamentModifier->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/editer"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMedicamentModifier->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonMedicamentModifier);

        pushButtonMedicamentSupprimer = new QPushButton(tab);
        pushButtonMedicamentSupprimer->setObjectName(QString::fromUtf8("pushButtonMedicamentSupprimer"));
        pushButtonMedicamentSupprimer->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/supprimer"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMedicamentSupprimer->setIcon(icon2);

        horizontalLayout->addWidget(pushButtonMedicamentSupprimer);


        verticalLayout_23->addLayout(horizontalLayout);


        horizontalLayout_14->addLayout(verticalLayout_23);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        textEditMedicamentComposition = new QTextEdit(tab);
        textEditMedicamentComposition->setObjectName(QString::fromUtf8("textEditMedicamentComposition"));

        verticalLayout->addWidget(textEditMedicamentComposition);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        textEditMedicamentEffets = new QTextEdit(tab);
        textEditMedicamentEffets->setObjectName(QString::fromUtf8("textEditMedicamentEffets"));
        textEditMedicamentEffets->setEnabled(true);

        verticalLayout_2->addWidget(textEditMedicamentEffets);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        textEditMedicamentContreIndication = new QTextEdit(tab);
        textEditMedicamentContreIndication->setObjectName(QString::fromUtf8("textEditMedicamentContreIndication"));

        verticalLayout_3->addWidget(textEditMedicamentContreIndication);


        verticalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_14->addLayout(verticalLayout_5);

        tabWidgetAction->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_7 = new QHBoxLayout(tab_3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_8->addWidget(label_4);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_8->addWidget(label_5);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_8->addWidget(label_6);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lineEditPraticienId = new QLineEdit(tab_3);
        lineEditPraticienId->setObjectName(QString::fromUtf8("lineEditPraticienId"));

        verticalLayout_6->addWidget(lineEditPraticienId);

        lineEditPraticienNom = new QLineEdit(tab_3);
        lineEditPraticienNom->setObjectName(QString::fromUtf8("lineEditPraticienNom"));

        verticalLayout_6->addWidget(lineEditPraticienNom);

        lineEditPraticienPrenom = new QLineEdit(tab_3);
        lineEditPraticienPrenom->setObjectName(QString::fromUtf8("lineEditPraticienPrenom"));

        verticalLayout_6->addWidget(lineEditPraticienPrenom);


        horizontalLayout_3->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        comboBoxPraticienType = new QComboBox(tab_3);
        comboBoxPraticienType->setObjectName(QString::fromUtf8("comboBoxPraticienType"));

        horizontalLayout_6->addWidget(comboBoxPraticienType);


        verticalLayout_7->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_12->addLayout(horizontalLayout_4);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        tableViewPraticien = new QTableView(tab_3);
        tableViewPraticien->setObjectName(QString::fromUtf8("tableViewPraticien"));
        tableViewPraticien->setAlternatingRowColors(true);
        tableViewPraticien->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewPraticien->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_11->addWidget(tableViewPraticien);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButtonPraticienAjouter = new QPushButton(tab_3);
        pushButtonPraticienAjouter->setObjectName(QString::fromUtf8("pushButtonPraticienAjouter"));
        pushButtonPraticienAjouter->setIcon(icon);

        horizontalLayout_5->addWidget(pushButtonPraticienAjouter);

        pushButtonPraticienModifier = new QPushButton(tab_3);
        pushButtonPraticienModifier->setObjectName(QString::fromUtf8("pushButtonPraticienModifier"));
        pushButtonPraticienModifier->setEnabled(false);
        pushButtonPraticienModifier->setIcon(icon1);

        horizontalLayout_5->addWidget(pushButtonPraticienModifier);

        pushButtonPraticienSupprimer = new QPushButton(tab_3);
        pushButtonPraticienSupprimer->setObjectName(QString::fromUtf8("pushButtonPraticienSupprimer"));
        pushButtonPraticienSupprimer->setEnabled(false);
        pushButtonPraticienSupprimer->setIcon(icon2);

        horizontalLayout_5->addWidget(pushButtonPraticienSupprimer);


        verticalLayout_11->addLayout(horizontalLayout_5);


        verticalLayout_12->addLayout(verticalLayout_11);


        horizontalLayout_7->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_9->addWidget(label_8);

        textEditPraticienSpecialite = new QTextEdit(tab_3);
        textEditPraticienSpecialite->setObjectName(QString::fromUtf8("textEditPraticienSpecialite"));

        verticalLayout_9->addWidget(textEditPraticienSpecialite);


        verticalLayout_13->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_10->addWidget(label_9);

        textEditPraticienCabinet = new QTextEdit(tab_3);
        textEditPraticienCabinet->setObjectName(QString::fromUtf8("textEditPraticienCabinet"));

        verticalLayout_10->addWidget(textEditPraticienCabinet);


        verticalLayout_13->addLayout(verticalLayout_10);


        horizontalLayout_7->addLayout(verticalLayout_13);

        tabWidgetAction->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_21 = new QVBoxLayout(tab_2);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_14->addWidget(label_10);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_14->addWidget(label_11);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_14->addWidget(label_12);


        horizontalLayout_9->addLayout(verticalLayout_14);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        lineEditVisiteurId = new QLineEdit(tab_2);
        lineEditVisiteurId->setObjectName(QString::fromUtf8("lineEditVisiteurId"));

        verticalLayout_17->addWidget(lineEditVisiteurId);

        lineEditVisiteurNom = new QLineEdit(tab_2);
        lineEditVisiteurNom->setObjectName(QString::fromUtf8("lineEditVisiteurNom"));

        verticalLayout_17->addWidget(lineEditVisiteurNom);

        lineEditVisiteurPrenom = new QLineEdit(tab_2);
        lineEditVisiteurPrenom->setObjectName(QString::fromUtf8("lineEditVisiteurPrenom"));

        verticalLayout_17->addWidget(lineEditVisiteurPrenom);


        horizontalLayout_9->addLayout(verticalLayout_17);


        horizontalLayout_12->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_15->addWidget(label_13);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_15->addWidget(label_14);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_15->addWidget(label_15);


        horizontalLayout_10->addLayout(verticalLayout_15);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        lineEditVisiteurCP = new QLineEdit(tab_2);
        lineEditVisiteurCP->setObjectName(QString::fromUtf8("lineEditVisiteurCP"));

        verticalLayout_18->addWidget(lineEditVisiteurCP);

        lineEditVisiteurVille = new QLineEdit(tab_2);
        lineEditVisiteurVille->setObjectName(QString::fromUtf8("lineEditVisiteurVille"));

        verticalLayout_18->addWidget(lineEditVisiteurVille);

        comboBoxVisiteurSecteur = new QComboBox(tab_2);
        comboBoxVisiteurSecteur->setObjectName(QString::fromUtf8("comboBoxVisiteurSecteur"));

        verticalLayout_18->addWidget(comboBoxVisiteurSecteur);


        horizontalLayout_10->addLayout(verticalLayout_18);


        horizontalLayout_12->addLayout(horizontalLayout_10);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_16->addWidget(label_16);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_16->addWidget(label_17);


        horizontalLayout_11->addLayout(verticalLayout_16);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        comboBoxVisiteurLaboratoire = new QComboBox(tab_2);
        comboBoxVisiteurLaboratoire->setObjectName(QString::fromUtf8("comboBoxVisiteurLaboratoire"));

        verticalLayout_19->addWidget(comboBoxVisiteurLaboratoire);

        comboBoxVisiteurDepartement = new QComboBox(tab_2);
        comboBoxVisiteurDepartement->setObjectName(QString::fromUtf8("comboBoxVisiteurDepartement"));

        verticalLayout_19->addWidget(comboBoxVisiteurDepartement);


        horizontalLayout_11->addLayout(verticalLayout_19);


        verticalLayout_20->addLayout(horizontalLayout_11);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_2);


        horizontalLayout_12->addLayout(verticalLayout_20);


        verticalLayout_21->addLayout(horizontalLayout_12);

        tableViewVisiteur = new QTableView(tab_2);
        tableViewVisiteur->setObjectName(QString::fromUtf8("tableViewVisiteur"));
        tableViewVisiteur->setAlternatingRowColors(true);
        tableViewVisiteur->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewVisiteur->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_21->addWidget(tableViewVisiteur);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pushButtonVisiteurAjouter = new QPushButton(tab_2);
        pushButtonVisiteurAjouter->setObjectName(QString::fromUtf8("pushButtonVisiteurAjouter"));
        pushButtonVisiteurAjouter->setIcon(icon);

        horizontalLayout_13->addWidget(pushButtonVisiteurAjouter);

        pushButtonVisiteurEdit = new QPushButton(tab_2);
        pushButtonVisiteurEdit->setObjectName(QString::fromUtf8("pushButtonVisiteurEdit"));
        pushButtonVisiteurEdit->setEnabled(false);
        pushButtonVisiteurEdit->setIcon(icon1);

        horizontalLayout_13->addWidget(pushButtonVisiteurEdit);

        pushButtonVisiteurSupprimer = new QPushButton(tab_2);
        pushButtonVisiteurSupprimer->setObjectName(QString::fromUtf8("pushButtonVisiteurSupprimer"));
        pushButtonVisiteurSupprimer->setEnabled(false);
        pushButtonVisiteurSupprimer->setIcon(icon2);

        horizontalLayout_13->addWidget(pushButtonVisiteurSupprimer);


        verticalLayout_21->addLayout(horizontalLayout_13);

        tabWidgetAction->addTab(tab_2, QString());

        horizontalLayout_8->addWidget(tabWidgetAction);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 722, 25));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuGestion = new QMenu(menuBar);
        menuGestion->setObjectName(QString::fromUtf8("menuGestion"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuGestion->menuAction());
        menuFichier->addAction(actionQuitter);
        menuGestion->addAction(actionMedicament);
        menuGestion->addAction(actionPraticien);
        menuGestion->addAction(actionVisiteur);

        retranslateUi(MainWindow);

        tabWidgetAction->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionMedicament->setText(QApplication::translate("MainWindow", "Medicament", 0, QApplication::UnicodeUTF8));
        actionPraticien->setText(QApplication::translate("MainWindow", "Praticien", 0, QApplication::UnicodeUTF8));
        actionVisiteur->setText(QApplication::translate("MainWindow", "Visiteur", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "D\303\251p\303\264t l\303\251gal :", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Nom commercial :", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Famille :", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Prix \303\251chantillon", 0, QApplication::UnicodeUTF8));
        pushButtonMedicamentAjouter->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonMedicamentModifier->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonMedicamentSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Composition", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Effets", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Contre indication", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab), QApplication::translate("MainWindow", "M\303\251dicament", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Identifiant :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Nom :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Type praticien :", 0, QApplication::UnicodeUTF8));
        pushButtonPraticienAjouter->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonPraticienModifier->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonPraticienSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Specialit\303\251", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Cabinet", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab_3), QApplication::translate("MainWindow", "Praticien", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Identifiant :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Nom :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Code postal :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Ville :", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Secteur :", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Laboratoire :", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "D\303\251partement :", 0, QApplication::UnicodeUTF8));
        pushButtonVisiteurAjouter->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonVisiteurEdit->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonVisiteurSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab_2), QApplication::translate("MainWindow", "Visiteur", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuGestion->setTitle(QApplication::translate("MainWindow", "Gestion", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
