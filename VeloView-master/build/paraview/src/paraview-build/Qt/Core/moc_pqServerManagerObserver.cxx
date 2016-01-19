/****************************************************************************
** Meta object code from reading C++ file 'pqServerManagerObserver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqServerManagerObserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServerManagerObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqServerManagerObserver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   25,   24,   24, 0x05,
      73,   25,   24,   24, 0x05,
     135,  118,   24,   24, 0x05,
     180,  118,   24,   24, 0x05,
     240,  227,   24,   24, 0x05,
     269,  227,   24,   24, 0x05,
     310,  297,   24,   24, 0x05,
     364,  359,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     430,  393,   24,   24, 0x08,
     501,  488,   24,   24, 0x08,
     573,  561,   24,   24, 0x08,
     621,  561,   24,   24, 0x08,
     668,  561,   24,   24, 0x08,
     710,  561,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqServerManagerObserver[] = {
    "pqServerManagerObserver\0\0name\0"
    "compoundProxyDefinitionRegistered(QString)\0"
    "compoundProxyDefinitionUnRegistered(QString)\0"
    "group,name,proxy\0"
    "proxyRegistered(QString,QString,vtkSMProxy*)\0"
    "proxyUnRegistered(QString,QString,vtkSMProxy*)\0"
    "connectionId\0connectionCreated(vtkIdType)\0"
    "connectionClosed(vtkIdType)\0root,locator\0"
    "stateLoaded(vtkPVXMLElement*,vtkSMProxyLocator*)\0"
    "root\0stateSaved(vtkPVXMLElement*)\0"
    "object,e,clientData,callData,command\0"
    "proxyRegistered(vtkObject*,ulong,void*,void*,vtkCommand*)\0"
    ",,,callData,\0"
    "proxyUnRegistered(vtkObject*,ulong,void*,void*,vtkCommand*)\0"
    ",,,callData\0connectionCreated(vtkObject*,ulong,void*,void*)\0"
    "connectionClosed(vtkObject*,ulong,void*,void*)\0"
    "stateLoaded(vtkObject*,ulong,void*,void*)\0"
    "stateSaved(vtkObject*,ulong,void*,void*)\0"
};

void pqServerManagerObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqServerManagerObserver *_t = static_cast<pqServerManagerObserver *>(_o);
        switch (_id) {
        case 0: _t->compoundProxyDefinitionRegistered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->compoundProxyDefinitionUnRegistered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->proxyRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 3: _t->proxyUnRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 4: _t->connectionCreated((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 5: _t->connectionClosed((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 6: _t->stateLoaded((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1])),(*reinterpret_cast< vtkSMProxyLocator*(*)>(_a[2]))); break;
        case 7: _t->stateSaved((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        case 8: _t->proxyRegistered((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< vtkCommand*(*)>(_a[5]))); break;
        case 9: _t->proxyUnRegistered((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< vtkCommand*(*)>(_a[5]))); break;
        case 10: _t->connectionCreated((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 11: _t->connectionClosed((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 12: _t->stateLoaded((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 13: _t->stateSaved((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqServerManagerObserver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqServerManagerObserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqServerManagerObserver,
      qt_meta_data_pqServerManagerObserver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqServerManagerObserver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqServerManagerObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqServerManagerObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqServerManagerObserver))
        return static_cast<void*>(const_cast< pqServerManagerObserver*>(this));
    return QObject::qt_metacast(_clname);
}

int pqServerManagerObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void pqServerManagerObserver::compoundProxyDefinitionRegistered(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqServerManagerObserver::compoundProxyDefinitionUnRegistered(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqServerManagerObserver::proxyRegistered(const QString & _t1, const QString & _t2, vtkSMProxy * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqServerManagerObserver::proxyUnRegistered(const QString & _t1, const QString & _t2, vtkSMProxy * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqServerManagerObserver::connectionCreated(vtkIdType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqServerManagerObserver::connectionClosed(vtkIdType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqServerManagerObserver::stateLoaded(vtkPVXMLElement * _t1, vtkSMProxyLocator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqServerManagerObserver::stateSaved(vtkPVXMLElement * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
