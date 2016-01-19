/****************************************************************************
** Meta object code from reading C++ file 'pqCrashRecoveryBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqCrashRecoveryBehavior.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCrashRecoveryBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCrashRecoveryBehavior[] = {

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
      25,   24,   24,   24, 0x09,
      52,   24,   24,   24, 0x09,
      79,   72,   24,   24, 0x09,
     104,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqCrashRecoveryBehavior[] = {
    "pqCrashRecoveryBehavior\0\0"
    "delayedSaveRecoveryState()\0"
    "saveRecoveryState()\0server\0"
    "onServerAdded(pqServer*)\0onServerDisconnect()\0"
};

void pqCrashRecoveryBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCrashRecoveryBehavior *_t = static_cast<pqCrashRecoveryBehavior *>(_o);
        switch (_id) {
        case 0: _t->delayedSaveRecoveryState(); break;
        case 1: _t->saveRecoveryState(); break;
        case 2: _t->onServerAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->onServerDisconnect(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCrashRecoveryBehavior::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCrashRecoveryBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqCrashRecoveryBehavior,
      qt_meta_data_pqCrashRecoveryBehavior, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCrashRecoveryBehavior::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCrashRecoveryBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCrashRecoveryBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCrashRecoveryBehavior))
        return static_cast<void*>(const_cast< pqCrashRecoveryBehavior*>(this));
    return QObject::qt_metacast(_clname);
}

int pqCrashRecoveryBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
