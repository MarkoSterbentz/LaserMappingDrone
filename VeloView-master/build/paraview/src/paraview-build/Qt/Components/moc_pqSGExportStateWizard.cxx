/****************************************************************************
** Meta object code from reading C++ file 'pqSGExportStateWizard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSGExportStateWizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSGExportStateWizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSGExportStateWizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x09,
      47,   22,   22,   22, 0x09,
      70,   22,   22,   22, 0x09,
      78,   22,   22,   22, 0x09,
      89,   22,   22,   22, 0x09,
     105,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqSGExportStateWizard[] = {
    "pqSGExportStateWizard\0\0updateAddRemoveButton()\0"
    "onShowAllSources(bool)\0onAdd()\0"
    "onRemove()\0incrementView()\0decrementView()\0"
};

void pqSGExportStateWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSGExportStateWizard *_t = static_cast<pqSGExportStateWizard *>(_o);
        switch (_id) {
        case 0: _t->updateAddRemoveButton(); break;
        case 1: _t->onShowAllSources((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onAdd(); break;
        case 3: _t->onRemove(); break;
        case 4: _t->incrementView(); break;
        case 5: _t->decrementView(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSGExportStateWizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSGExportStateWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_pqSGExportStateWizard,
      qt_meta_data_pqSGExportStateWizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSGExportStateWizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSGExportStateWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSGExportStateWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSGExportStateWizard))
        return static_cast<void*>(const_cast< pqSGExportStateWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int pqSGExportStateWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
