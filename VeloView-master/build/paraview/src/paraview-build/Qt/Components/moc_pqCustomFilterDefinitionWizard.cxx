/****************************************************************************
** Meta object code from reading C++ file 'pqCustomFilterDefinitionWizard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqCustomFilterDefinitionWizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCustomFilterDefinitionWizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCustomFilterDefinitionWizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x0a,
      53,   31,   31,   31, 0x08,
      68,   31,   31,   31, 0x08,
      83,   31,   31,   31, 0x08,
     103,   98,   31,   31, 0x08,
     148,  131,   31,   31, 0x08,
     189,  131,   31,   31, 0x08,
     231,  131,   31,   31, 0x08,
     275,   31,   31,   31, 0x08,
     286,   31,   31,   31, 0x08,
     300,   31,   31,   31, 0x08,
     314,   31,   31,   31, 0x08,
     330,   31,   31,   31, 0x08,
     342,   31,   31,   31, 0x08,
     357,   31,   31,   31, 0x08,
     372,   31,   31,   31, 0x08,
     389,   31,   31,   31, 0x08,
     403,   31,   31,   31, 0x08,
     420,   31,   31,   31, 0x08,
     437,   31,   31,   31, 0x08,
     456,  131,   31,   31, 0x08,
     500,  131,   31,   31, 0x08,
     545,  131,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqCustomFilterDefinitionWizard[] = {
    "pqCustomFilterDefinitionWizard\0\0"
    "createCustomFilter()\0navigateBack()\0"
    "navigateNext()\0finishWizard()\0text\0"
    "clearNameOverwrite(QString)\0"
    "current,previous\0"
    "updateInputForm(QModelIndex,QModelIndex)\0"
    "updateOutputForm(QModelIndex,QModelIndex)\0"
    "updatePropertyForm(QModelIndex,QModelIndex)\0"
    "addInput()\0removeInput()\0moveInputUp()\0"
    "moveInputDown()\0addOutput()\0removeOutput()\0"
    "moveOutputUp()\0moveOutputDown()\0"
    "addProperty()\0removeProperty()\0"
    "movePropertyUp()\0movePropertyDown()\0"
    "updateInputButtons(QModelIndex,QModelIndex)\0"
    "updateOutputButtons(QModelIndex,QModelIndex)\0"
    "updatePropertyButtons(QModelIndex,QModelIndex)\0"
};

void pqCustomFilterDefinitionWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCustomFilterDefinitionWizard *_t = static_cast<pqCustomFilterDefinitionWizard *>(_o);
        switch (_id) {
        case 0: _t->createCustomFilter(); break;
        case 1: _t->navigateBack(); break;
        case 2: _t->navigateNext(); break;
        case 3: _t->finishWizard(); break;
        case 4: _t->clearNameOverwrite((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateInputForm((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->updateOutputForm((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: _t->updatePropertyForm((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: _t->addInput(); break;
        case 9: _t->removeInput(); break;
        case 10: _t->moveInputUp(); break;
        case 11: _t->moveInputDown(); break;
        case 12: _t->addOutput(); break;
        case 13: _t->removeOutput(); break;
        case 14: _t->moveOutputUp(); break;
        case 15: _t->moveOutputDown(); break;
        case 16: _t->addProperty(); break;
        case 17: _t->removeProperty(); break;
        case 18: _t->movePropertyUp(); break;
        case 19: _t->movePropertyDown(); break;
        case 20: _t->updateInputButtons((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 21: _t->updateOutputButtons((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 22: _t->updatePropertyButtons((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCustomFilterDefinitionWizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCustomFilterDefinitionWizard::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqCustomFilterDefinitionWizard,
      qt_meta_data_pqCustomFilterDefinitionWizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCustomFilterDefinitionWizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCustomFilterDefinitionWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCustomFilterDefinitionWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCustomFilterDefinitionWizard))
        return static_cast<void*>(const_cast< pqCustomFilterDefinitionWizard*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqCustomFilterDefinitionWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
