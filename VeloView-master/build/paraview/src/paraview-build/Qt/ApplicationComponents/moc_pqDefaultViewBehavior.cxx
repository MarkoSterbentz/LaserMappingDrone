/****************************************************************************
** Meta object code from reading C++ file 'pqDefaultViewBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqDefaultViewBehavior.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDefaultViewBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDefaultViewBehavior[] = {

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
      23,   22,   22,   22, 0x09,
      51,   22,   22,   22, 0x09,
      78,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqDefaultViewBehavior[] = {
    "pqDefaultViewBehavior\0\0"
    "onServerCreation(pqServer*)\0"
    "fiveMinuteTimeoutWarning()\0"
    "finalTimeoutWarning()\0"
};

void pqDefaultViewBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDefaultViewBehavior *_t = static_cast<pqDefaultViewBehavior *>(_o);
        switch (_id) {
        case 0: _t->onServerCreation((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 1: _t->fiveMinuteTimeoutWarning(); break;
        case 2: _t->finalTimeoutWarning(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqDefaultViewBehavior::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDefaultViewBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqDefaultViewBehavior,
      qt_meta_data_pqDefaultViewBehavior, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDefaultViewBehavior::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDefaultViewBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDefaultViewBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDefaultViewBehavior))
        return static_cast<void*>(const_cast< pqDefaultViewBehavior*>(this));
    return QObject::qt_metacast(_clname);
}

int pqDefaultViewBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
