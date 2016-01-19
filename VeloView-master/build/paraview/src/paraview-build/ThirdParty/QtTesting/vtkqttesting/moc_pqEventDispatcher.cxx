/****************************************************************************
** Meta object code from reading C++ file 'pqEventDispatcher.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/ThirdParty/QtTesting/vtkqttesting/pqEventDispatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqEventDispatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqEventDispatcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      31,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   40,   18,   18, 0x09,
      62,   18,   18,   18, 0x29,
      74,   18,   18,   18, 0x09,
      96,   18,   18,   18, 0x09,
     111,   18,   18,   18, 0x09,
     125,  119,   18,   18, 0x0a,
     142,  119,   18,   18, 0x0a,
     152,   18,   18,   18, 0x0a,
     159,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqEventDispatcher[] = {
    "pqEventDispatcher\0\0restarted()\0paused()\0"
    "indent\0playEvent(int)\0playEvent()\0"
    "playEventOnBlocking()\0aboutToBlock()\0"
    "awake()\0value\0setTimeStep(int)\0run(bool)\0"
    "stop()\0oneStep()\0"
};

void pqEventDispatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqEventDispatcher *_t = static_cast<pqEventDispatcher *>(_o);
        switch (_id) {
        case 0: _t->restarted(); break;
        case 1: _t->paused(); break;
        case 2: _t->playEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->playEvent(); break;
        case 4: _t->playEventOnBlocking(); break;
        case 5: _t->aboutToBlock(); break;
        case 6: _t->awake(); break;
        case 7: _t->setTimeStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->run((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->stop(); break;
        case 10: _t->oneStep(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqEventDispatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqEventDispatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqEventDispatcher,
      qt_meta_data_pqEventDispatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqEventDispatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqEventDispatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqEventDispatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqEventDispatcher))
        return static_cast<void*>(const_cast< pqEventDispatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int pqEventDispatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void pqEventDispatcher::restarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqEventDispatcher::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
