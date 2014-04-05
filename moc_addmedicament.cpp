/****************************************************************************
** Meta object code from reading C++ file 'addmedicament.h'
**
** Created: Thu Oct 17 17:25:47 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addmedicament.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addmedicament.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_addMedicament[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      46,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_addMedicament[] = {
    "addMedicament\0\0on_pushButtonAnnuler_clicked()\0"
    "on_pushButtonAddMedocAjouter_clicked()\0"
};

const QMetaObject addMedicament::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_addMedicament,
      qt_meta_data_addMedicament, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &addMedicament::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *addMedicament::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *addMedicament::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_addMedicament))
        return static_cast<void*>(const_cast< addMedicament*>(this));
    return QDialog::qt_metacast(_clname);
}

int addMedicament::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonAnnuler_clicked(); break;
        case 1: on_pushButtonAddMedocAjouter_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
