/****************************************************************************
** Meta object code from reading C++ file 'pqTriggerOnIdleHelper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqTriggerOnIdleHelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTriggerOnIdleHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTriggerOnIdleHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   22,   22,   22, 0x0a,
      56,   22,   22,   22, 0x0a,
      66,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqTriggerOnIdleHelper[] = {
    "pqTriggerOnIdleHelper\0\0triggered()\0"
    "setServer(pqServer*)\0trigger()\0"
    "triggerInternal()\0"
};

void pqTriggerOnIdleHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTriggerOnIdleHelper *_t = static_cast<pqTriggerOnIdleHelper *>(_o);
        switch (_id) {
        case 0: _t->triggered(); break;
        case 1: _t->setServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->trigger(); break;
        case 3: _t->triggerInternal(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTriggerOnIdleHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTriggerOnIdleHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqTriggerOnIdleHelper,
      qt_meta_data_pqTriggerOnIdleHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTriggerOnIdleHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTriggerOnIdleHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTriggerOnIdleHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTriggerOnIdleHelper))
        return static_cast<void*>(const_cast< pqTriggerOnIdleHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int pqTriggerOnIdleHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void pqTriggerOnIdleHelper::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
