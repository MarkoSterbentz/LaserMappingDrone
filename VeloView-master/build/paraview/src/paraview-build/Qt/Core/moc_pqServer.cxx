/****************************************************************************
** Meta object code from reading C++ file 'pqServer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      49,    9,    9,    9, 0x05,
      76,    9,    9,    9, 0x05,
      98,    9,    9,    9, 0x05,
     128,  123,    9,    9, 0x05,
     173,    9,    9,    9, 0x05,
     200,  198,    9,    9, 0x05,
     232,    9,    9,    9, 0x05,
     259,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     288,  284,    9,    9, 0x0a,
     322,    9,    9,    9, 0x09,
     334,    9,    9,    9, 0x09,
     366,  362,    9,    9, 0x09,
     425,  362,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqServer[] = {
    "pqServer\0\0nameChanged(pqServerManagerModelItem*)\0"
    "fiveMinuteTimeoutWarning()\0"
    "finalTimeoutWarning()\0serverSideDisconnected()\0"
    ",msg\0sentFromOtherClient(pqServer*,vtkSMMessage*)\0"
    "triggeredMasterUser(int)\0,\0"
    "triggeredUserName(int,QString&)\0"
    "triggeredUserListChanged()\0"
    "triggerFollowCamera(int)\0msg\0"
    "sendToOtherClients(vtkSMMessage*)\0"
    "heartBeat()\0processServerNotification()\0"
    ",,,\0onCollaborationCommunication(vtkObject*,ulong,void*,void*)\0"
    "onConnectionLost(vtkObject*,ulong,void*,void*)\0"
};

void pqServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqServer *_t = static_cast<pqServer *>(_o);
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 1: _t->fiveMinuteTimeoutWarning(); break;
        case 2: _t->finalTimeoutWarning(); break;
        case 3: _t->serverSideDisconnected(); break;
        case 4: _t->sentFromOtherClient((*reinterpret_cast< pqServer*(*)>(_a[1])),(*reinterpret_cast< vtkSMMessage*(*)>(_a[2]))); break;
        case 5: _t->triggeredMasterUser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->triggeredUserName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->triggeredUserListChanged(); break;
        case 8: _t->triggerFollowCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->sendToOtherClients((*reinterpret_cast< vtkSMMessage*(*)>(_a[1]))); break;
        case 10: _t->heartBeat(); break;
        case 11: _t->processServerNotification(); break;
        case 12: _t->onCollaborationCommunication((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 13: _t->onConnectionLost((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqServer::staticMetaObject = {
    { &pqServerManagerModelItem::staticMetaObject, qt_meta_stringdata_pqServer,
      qt_meta_data_pqServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqServer))
        return static_cast<void*>(const_cast< pqServer*>(this));
    return pqServerManagerModelItem::qt_metacast(_clname);
}

int pqServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqServerManagerModelItem::qt_metacall(_c, _id, _a);
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
void pqServer::nameChanged(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqServer::fiveMinuteTimeoutWarning()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqServer::finalTimeoutWarning()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pqServer::serverSideDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void pqServer::sentFromOtherClient(pqServer * _t1, vtkSMMessage * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqServer::triggeredMasterUser(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqServer::triggeredUserName(int _t1, QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqServer::triggeredUserListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void pqServer::triggerFollowCamera(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
