/****************************************************************************
** Meta object code from reading C++ file 'pqScalarBarVisibilityReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqScalarBarVisibilityReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqScalarBarVisibilityReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqScalarBarVisibilityReaction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x0a,
      80,   72,   30,   30, 0x0a,
     109,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqScalarBarVisibilityReaction[] = {
    "pqScalarBarVisibilityReaction\0\0"
    "setRepresentation(pqDataRepresentation*)\0"
    "visible\0setScalarBarVisibility(bool)\0"
    "updateEnableState()\0"
};

void pqScalarBarVisibilityReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqScalarBarVisibilityReaction *_t = static_cast<pqScalarBarVisibilityReaction *>(_o);
        switch (_id) {
        case 0: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 1: _t->setScalarBarVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateEnableState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqScalarBarVisibilityReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqScalarBarVisibilityReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqScalarBarVisibilityReaction,
      qt_meta_data_pqScalarBarVisibilityReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqScalarBarVisibilityReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqScalarBarVisibilityReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqScalarBarVisibilityReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqScalarBarVisibilityReaction))
        return static_cast<void*>(const_cast< pqScalarBarVisibilityReaction*>(this));
    return pqReaction::qt_metacast(_clname);
}

int pqScalarBarVisibilityReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
