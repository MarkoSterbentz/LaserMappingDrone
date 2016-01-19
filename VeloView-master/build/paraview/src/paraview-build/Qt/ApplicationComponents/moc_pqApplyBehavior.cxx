/****************************************************************************
** Meta object code from reading C++ file 'pqApplyBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqApplyBehavior.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqApplyBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqApplyBehavior[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   17,   16,   16, 0x09,
      56,   16,   16,   16, 0x09,
      84,   16,   16,   16, 0x08,
     104,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqApplyBehavior[] = {
    "pqApplyBehavior\0\0,\0"
    "applied(pqPropertiesPanel*,pqProxy*)\0"
    "applied(pqPropertiesPanel*)\0"
    "onApplied(pqProxy*)\0onApplied()\0"
};

void pqApplyBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqApplyBehavior *_t = static_cast<pqApplyBehavior *>(_o);
        switch (_id) {
        case 0: _t->applied((*reinterpret_cast< pqPropertiesPanel*(*)>(_a[1])),(*reinterpret_cast< pqProxy*(*)>(_a[2]))); break;
        case 1: _t->applied((*reinterpret_cast< pqPropertiesPanel*(*)>(_a[1]))); break;
        case 2: _t->onApplied((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 3: _t->onApplied(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqApplyBehavior::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqApplyBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqApplyBehavior,
      qt_meta_data_pqApplyBehavior, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqApplyBehavior::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqApplyBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqApplyBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqApplyBehavior))
        return static_cast<void*>(const_cast< pqApplyBehavior*>(this));
    return QObject::qt_metacast(_clname);
}

int pqApplyBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
