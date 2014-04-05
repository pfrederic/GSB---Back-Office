/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Nov 2 15:40:00 2013
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
      54,   48,   11,   11, 0x08,
      96,   11,   11,   11, 0x08,
     136,   11,   11,   11, 0x08,
     178,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     258,   11,   11,   11, 0x08,
     299,   11,   11,   11, 0x08,
     329,   11,   11,   11, 0x08,
     370,   48,   11,   11, 0x08,
     413,   11,   11,   11, 0x08,
     455,   11,   11,   11, 0x08,
     486,   48,   11,   11, 0x08,
     530,   11,   11,   11, 0x08,
     573,   11,   11,   11, 0x08,
     605,   11,   11,   11, 0x08,
     634,   11,   11,   11, 0x08,
     656,   11,   11,   11, 0x08,
     677,   11,   11,   11, 0x08,
     697,   11,   11,   11, 0x08,
     730,   11,   11,   11, 0x08,
     762,   11,   11,   11, 0x08,
     793,   11,   11,   11, 0x08,
     817,   11,   11,   11, 0x08,
     847,  845,   11,   11, 0x08,
     882,   11,   11,   11, 0x08,
     910,   11,   11,   11, 0x08,
     942,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonVisiteurEdit_clicked()\0"
    "index\0on_tableViewVisiteur_clicked(QModelIndex)\0"
    "on_pushButtonPraticienAjouter_clicked()\0"
    "on_pushButtonMedicamentModifier_clicked()\0"
    "on_pushButtonMedicamentAjouter_clicked()\0"
    "on_pushButtonVisiteurAjouter_clicked()\0"
    "on_pushButtonVisiteurSupprimer_clicked()\0"
    "on_actionVisiteur_triggered()\0"
    "on_pushButtonPraticienModifier_clicked()\0"
    "on_tableViewPraticien_clicked(QModelIndex)\0"
    "on_pushButtonPraticienSupprimer_clicked()\0"
    "on_actionPraticien_triggered()\0"
    "on_tableViewMedicament_clicked(QModelIndex)\0"
    "on_pushButtonMedicamentSupprimer_clicked()\0"
    "on_actionMedicament_triggered()\0"
    "on_actionQuitter_triggered()\0"
    "rechercheMedicament()\0recherchePraticien()\0"
    "rechercheVisiteur()\0"
    "connectionDesObjetsMedicaments()\0"
    "connectionDesObjetsPraticiens()\0"
    "connectionDesObjetsVisiteurs()\0"
    "ajoutEnDelegue(QString)\0"
    "ajoutEnResponsable(QString)\0,\0"
    "modifierChefVente(QString,QString)\0"
    "supprimerDeDelegue(QString)\0"
    "supprimerDeResponsable(QString)\0"
    "supprimerChefVente(QString)\0"
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
        case 0: on_pushButtonVisiteurEdit_clicked(); break;
        case 1: on_tableViewVisiteur_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: on_pushButtonPraticienAjouter_clicked(); break;
        case 3: on_pushButtonMedicamentModifier_clicked(); break;
        case 4: on_pushButtonMedicamentAjouter_clicked(); break;
        case 5: on_pushButtonVisiteurAjouter_clicked(); break;
        case 6: on_pushButtonVisiteurSupprimer_clicked(); break;
        case 7: on_actionVisiteur_triggered(); break;
        case 8: on_pushButtonPraticienModifier_clicked(); break;
        case 9: on_tableViewPraticien_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 10: on_pushButtonPraticienSupprimer_clicked(); break;
        case 11: on_actionPraticien_triggered(); break;
        case 12: on_tableViewMedicament_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 13: on_pushButtonMedicamentSupprimer_clicked(); break;
        case 14: on_actionMedicament_triggered(); break;
        case 15: on_actionQuitter_triggered(); break;
        case 16: rechercheMedicament(); break;
        case 17: recherchePraticien(); break;
        case 18: rechercheVisiteur(); break;
        case 19: connectionDesObjetsMedicaments(); break;
        case 20: connectionDesObjetsPraticiens(); break;
        case 21: connectionDesObjetsVisiteurs(); break;
        case 22: ajoutEnDelegue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: ajoutEnResponsable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: modifierChefVente((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 25: supprimerDeDelegue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: supprimerDeResponsable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: supprimerChefVente((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
