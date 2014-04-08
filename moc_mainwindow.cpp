/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Apr 8 09:22:38 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      53,   11,   11,   11, 0x08,
      95,   11,   11,   11, 0x08,
     144,  138,   11,   11, 0x08,
     188,   11,   11,   11, 0x08,
     220,   11,   11,   11, 0x08,
     242,   11,   11,   11, 0x08,
     275,   11,   11,   11, 0x08,
     315,   11,   11,   11, 0x08,
     356,   11,   11,   11, 0x08,
     398,  138,   11,   11, 0x08,
     441,   11,   11,   11, 0x08,
     472,   11,   11,   11, 0x08,
     493,   11,   11,   11, 0x08,
     525,   11,   11,   11, 0x08,
     564,   11,   11,   11, 0x08,
     605,   11,   11,   11, 0x08,
     641,  138,   11,   11, 0x08,
     683,   11,   11,   11, 0x08,
     713,   11,   11,   11, 0x08,
     741,   11,   11,   11, 0x08,
     773,   11,   11,   11, 0x08,
     801,   11,   11,   11, 0x08,
     821,   11,   11,   11, 0x08,
     852,   11,   11,   11, 0x08,
     876,   11,   11,   11, 0x08,
     906,  904,   11,   11, 0x08,
     941,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonMedicamentAjouter_clicked()\0"
    "on_pushButtonMedicamentModifier_clicked()\0"
    "on_pushButtonMedicamentSupprimer_clicked()\0"
    "index\0on_tableViewMedicament_clicked(QModelIndex)\0"
    "on_actionMedicament_triggered()\0"
    "rechercheMedicament()\0"
    "connectionDesObjetsMedicaments()\0"
    "on_pushButtonPraticienAjouter_clicked()\0"
    "on_pushButtonPraticienModifier_clicked()\0"
    "on_pushButtonPraticienSupprimer_clicked()\0"
    "on_tableViewPraticien_clicked(QModelIndex)\0"
    "on_actionPraticien_triggered()\0"
    "recherchePraticien()\0"
    "connectionDesObjetsPraticiens()\0"
    "on_pushButtonVisiteurAjouter_clicked()\0"
    "on_pushButtonVisiteurSupprimer_clicked()\0"
    "on_pushButtonVisiteurEdit_clicked()\0"
    "on_tableViewVisiteur_clicked(QModelIndex)\0"
    "on_actionVisiteur_triggered()\0"
    "supprimerDeDelegue(QString)\0"
    "supprimerDeResponsable(QString)\0"
    "supprimerChefVente(QString)\0"
    "rechercheVisiteur()\0connectionDesObjetsVisiteurs()\0"
    "ajoutEnDelegue(QString)\0"
    "ajoutEnResponsable(QString)\0,\0"
    "modifierChefVente(QString,QString)\0"
    "on_actionQuitter_triggered()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonMedicamentAjouter_clicked(); break;
        case 1: on_pushButtonMedicamentModifier_clicked(); break;
        case 2: on_pushButtonMedicamentSupprimer_clicked(); break;
        case 3: on_tableViewMedicament_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 4: on_actionMedicament_triggered(); break;
        case 5: rechercheMedicament(); break;
        case 6: connectionDesObjetsMedicaments(); break;
        case 7: on_pushButtonPraticienAjouter_clicked(); break;
        case 8: on_pushButtonPraticienModifier_clicked(); break;
        case 9: on_pushButtonPraticienSupprimer_clicked(); break;
        case 10: on_tableViewPraticien_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 11: on_actionPraticien_triggered(); break;
        case 12: recherchePraticien(); break;
        case 13: connectionDesObjetsPraticiens(); break;
        case 14: on_pushButtonVisiteurAjouter_clicked(); break;
        case 15: on_pushButtonVisiteurSupprimer_clicked(); break;
        case 16: on_pushButtonVisiteurEdit_clicked(); break;
        case 17: on_tableViewVisiteur_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 18: on_actionVisiteur_triggered(); break;
        case 19: supprimerDeDelegue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: supprimerDeResponsable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: supprimerChefVente((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: rechercheVisiteur(); break;
        case 23: connectionDesObjetsVisiteurs(); break;
        case 24: ajoutEnDelegue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: ajoutEnResponsable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: modifierChefVente((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: on_actionQuitter_triggered(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
