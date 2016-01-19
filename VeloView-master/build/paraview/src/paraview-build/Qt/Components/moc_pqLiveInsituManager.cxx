/****************************************************************************
** Meta object code from reading C++ file 'pqLiveInsituManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqLiveInsituManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLiveInsituManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqLiveInsituManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   21,   20,   20, 0x05,
      67,   20,   20,   20, 0x05,
      95,   81,   20,   20, 0x05,
     122,   81,   20,   20, 0x05,
     151,   81,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     176,   20,   20,   20, 0x09,
     201,   81,   20,   20, 0x09,
     235,  228,   20,   20, 0x09,
     268,  228,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqLiveInsituManager[] = {
    "pqLiveInsituManager\0\0displaySession\0"
    "connectionInitiated(pqServer*)\0"
    "timeUpdated()\0insituSession\0"
    "breakpointAdded(pqServer*)\0"
    "breakpointRemoved(pqServer*)\0"
    "breakpointHit(pqServer*)\0"
    "onCatalystDisconnected()\0"
    "onBreakpointHit(pqServer*)\0source\0"
    "onSourceAdded(pqPipelineSource*)\0"
    "onDataUpdated(pqPipelineSource*)\0"
};

void pqLiveInsituManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqLiveInsituManager *_t = static_cast<pqLiveInsituManager *>(_o);
        switch (_id) {
        case 0: _t->connectionInitiated((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 1: _t->timeUpdated(); break;
        case 2: _t->breakpointAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->breakpointRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 4: _t->breakpointHit((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 5: _t->onCatalystDisconnected(); break;
        case 6: _t->onBreakpointHit((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 7: _t->onSourceAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 8: _t->onDataUpdated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqLiveInsituManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqLiveInsituManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqLiveInsituManager,
      qt_meta_data_pqLiveInsituManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqLiveInsituManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqLiveInsituManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqLiveInsituManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqLiveInsituManager))
        return static_cast<void*>(const_cast< pqLiveInsituManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqLiveInsituManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void pqLiveInsituManager::connectionInitiated(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqLiveInsituManager::timeUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqLiveInsituManager::breakpointAdded(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqLiveInsituManager::breakpointRemoved(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqLiveInsituManager::breakpointHit(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
