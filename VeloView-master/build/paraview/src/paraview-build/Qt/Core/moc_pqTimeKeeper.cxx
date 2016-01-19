/****************************************************************************
** Meta object code from reading C++ file 'pqTimeKeeper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqTimeKeeper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTimeKeeper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTimeKeeper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      33,   13,   13,   13, 0x05,
      47,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_pqTimeKeeper[] = {
    "pqTimeKeeper\0\0timeStepsChanged()\0"
    "timeChanged()\0timeRangeChanged()\0"
};

void pqTimeKeeper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTimeKeeper *_t = static_cast<pqTimeKeeper *>(_o);
        switch (_id) {
        case 0: _t->timeStepsChanged(); break;
        case 1: _t->timeChanged(); break;
        case 2: _t->timeRangeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqTimeKeeper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTimeKeeper::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqTimeKeeper,
      qt_meta_data_pqTimeKeeper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTimeKeeper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTimeKeeper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTimeKeeper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTimeKeeper))
        return static_cast<void*>(const_cast< pqTimeKeeper*>(this));
    return pqProxy::qt_metacast(_clname);
}

int pqTimeKeeper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void pqTimeKeeper::timeStepsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqTimeKeeper::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqTimeKeeper::timeRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
