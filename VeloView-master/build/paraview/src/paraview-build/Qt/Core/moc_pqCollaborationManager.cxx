/****************************************************************************
** Meta object code from reading C++ file 'pqCollaborationManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqCollaborationManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCollaborationManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCollaborationManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      49,   24,   23,   23, 0x05,
     103,   92,   23,   23, 0x05,
     158,   23,   23,   23, 0x05,
     183,   23,   23,   23, 0x05,
     214,  212,   23,   23, 0x05,
     246,   23,   23,   23, 0x05,
     273,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     298,   23,   23,   23, 0x0a,
     323,   23,   23,   23, 0x0a,
     350,   24,   23,   23, 0x0a,
     388,   23,   23,   23, 0x0a,
     411,  409,   23,   23, 0x0a,
     452,   23,   23,   23, 0x0a,
     493,   23,   23,   23, 0x0a,
     529,   23,   23,   23, 0x0a,
     560,   23,   23,   23, 0x0a,
     603,  592,   23,   23, 0x08,
     655,  644,   23,   23, 0x08,
     718,  696,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqCollaborationManager[] = {
    "pqCollaborationManager\0\0"
    "server,userId,msgContent\0"
    "triggerChatMessage(pqServer*,int,QString&)\0"
    "origin,msg\0"
    "triggerStateClientOnlyMessage(pqServer*,vtkSMMessage*)\0"
    "triggeredMasterUser(int)\0"
    "triggeredMasterChanged(bool)\0,\0"
    "triggeredUserName(int,QString&)\0"
    "triggeredUserListChanged()\0"
    "triggerFollowCamera(int)\0"
    "onServerAdded(pqServer*)\0"
    "onServerRemoved(pqServer*)\0"
    "onChatMessage(pqServer*,int,QString&)\0"
    "updateEnabledState()\0e\0"
    "updateMousePointerLocation(QMouseEvent*)\0"
    "sendMousePointerLocationToOtherClients()\0"
    "sendChartViewBoundsToOtherClients()\0"
    "attachMouseListenerTo3DViews()\0"
    "enableMousePointerSharing(bool)\0"
    "server,msg\0onClientMessage(pqServer*,vtkSMMessage*)\0"
    "gid,bounds\0onChartViewChange(vtkTypeUInt32,double*)\0"
    "viewId,x,y,ratioToUse\0"
    "showMousePointer(vtkTypeUInt32,double,double,int)\0"
};

void pqCollaborationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCollaborationManager *_t = static_cast<pqCollaborationManager *>(_o);
        switch (_id) {
        case 0: _t->triggerChatMessage((*reinterpret_cast< pqServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->triggerStateClientOnlyMessage((*reinterpret_cast< pqServer*(*)>(_a[1])),(*reinterpret_cast< vtkSMMessage*(*)>(_a[2]))); break;
        case 2: _t->triggeredMasterUser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->triggeredMasterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->triggeredUserName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->triggeredUserListChanged(); break;
        case 6: _t->triggerFollowCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onServerAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 8: _t->onServerRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 9: _t->onChatMessage((*reinterpret_cast< pqServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->updateEnabledState(); break;
        case 11: _t->updateMousePointerLocation((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->sendMousePointerLocationToOtherClients(); break;
        case 13: _t->sendChartViewBoundsToOtherClients(); break;
        case 14: _t->attachMouseListenerTo3DViews(); break;
        case 15: _t->enableMousePointerSharing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->onClientMessage((*reinterpret_cast< pqServer*(*)>(_a[1])),(*reinterpret_cast< vtkSMMessage*(*)>(_a[2]))); break;
        case 17: _t->onChartViewChange((*reinterpret_cast< vtkTypeUInt32(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2]))); break;
        case 18: _t->showMousePointer((*reinterpret_cast< vtkTypeUInt32(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCollaborationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCollaborationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqCollaborationManager,
      qt_meta_data_pqCollaborationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCollaborationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCollaborationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCollaborationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCollaborationManager))
        return static_cast<void*>(const_cast< pqCollaborationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqCollaborationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void pqCollaborationManager::triggerChatMessage(pqServer * _t1, int _t2, QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqCollaborationManager::triggerStateClientOnlyMessage(pqServer * _t1, vtkSMMessage * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqCollaborationManager::triggeredMasterUser(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqCollaborationManager::triggeredMasterChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqCollaborationManager::triggeredUserName(int _t1, QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqCollaborationManager::triggeredUserListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void pqCollaborationManager::triggerFollowCamera(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
