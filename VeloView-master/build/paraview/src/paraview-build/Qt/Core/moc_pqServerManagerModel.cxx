/****************************************************************************
** Meta object code from reading C++ file 'pqServerManagerModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqServerManagerModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServerManagerModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqServerManagerModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      34,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      48,   21,   21,   21, 0x05,
      71,   21,   21,   21, 0x05,
      94,   21,   21,   21, 0x05,
     122,   21,   21,   21, 0x05,
     154,  147,   21,   21, 0x05,
     185,   21,   21,   21, 0x05,
     210,   21,   21,   21, 0x05,
     250,   21,   21,   21, 0x05,
     287,   21,   21,   21, 0x05,
     329,   21,   21,   21, 0x05,
     368,   21,   21,   21, 0x05,
     392,   21,   21,   21, 0x05,
     413,   21,   21,   21, 0x05,
     439,   21,   21,   21, 0x05,
     469,  462,   21,   21, 0x05,
     503,  462,   21,   21, 0x05,
     534,   21,   21,   21, 0x05,
     570,   21,   21,   21, 0x05,
     608,  603,   21,   21, 0x05,
     630,  603,   21,   21, 0x05,
     649,   21,   21,   21, 0x05,
     673,   21,   21,   21, 0x05,
     698,  694,   21,   21, 0x05,
     740,  694,   21,   21, 0x05,
     779,   21,   21,   21, 0x05,
     823,   21,   21,   21, 0x05,
     869,  864,   21,   21, 0x05,
     908,  864,   21,   21, 0x05,
     986,  956,   21,   21, 0x05,
    1043,  956,   21,   21, 0x05,
    1103,  956,   21,   21, 0x05,
    1162,  956,   21,   21, 0x05,
    1224,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
    1272, 1255,   21,   21, 0x09,
    1319, 1255,   21,   21, 0x09,
    1371, 1368,   21,   21, 0x09,
    1402, 1368,   21,   21, 0x09,
    1434, 1432,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqServerManagerModel[] = {
    "pqServerManagerModel\0\0preServerAdded(pqServer*)\0"
    "serverAdded(pqServer*)\0serverReady(pqServer*)\0"
    "preServerRemoved(pqServer*)\0"
    "serverRemoved(pqServer*)\0server\0"
    "aboutToRemoveServer(pqServer*)\0"
    "finishedRemovingServer()\0"
    "preItemAdded(pqServerManagerModelItem*)\0"
    "itemAdded(pqServerManagerModelItem*)\0"
    "preItemRemoved(pqServerManagerModelItem*)\0"
    "itemRemoved(pqServerManagerModelItem*)\0"
    "preProxyAdded(pqProxy*)\0proxyAdded(pqProxy*)\0"
    "preProxyRemoved(pqProxy*)\0"
    "proxyRemoved(pqProxy*)\0source\0"
    "preSourceAdded(pqPipelineSource*)\0"
    "sourceAdded(pqPipelineSource*)\0"
    "preSourceRemoved(pqPipelineSource*)\0"
    "sourceRemoved(pqPipelineSource*)\0view\0"
    "preViewAdded(pqView*)\0viewAdded(pqView*)\0"
    "preViewRemoved(pqView*)\0viewRemoved(pqView*)\0"
    "rep\0preRepresentationAdded(pqRepresentation*)\0"
    "representationAdded(pqRepresentation*)\0"
    "preRepresentationRemoved(pqRepresentation*)\0"
    "representationRemoved(pqRepresentation*)\0"
    "item\0nameChanged(pqServerManagerModelItem*)\0"
    "modifiedStateChanged(pqServerManagerModelItem*)\0"
    "source,consumer,srcOutputPort\0"
    "connectionAdded(pqPipelineSource*,pqPipelineSource*,int)\0"
    "preConnectionAdded(pqPipelineSource*,pqPipelineSource*,int)\0"
    "connectionRemoved(pqPipelineSource*,pqPipelineSource*,int)\0"
    "preConnectionRemoved(pqPipelineSource*,pqPipelineSource*,int)\0"
    "dataUpdated(pqPipelineSource*)\0"
    "group,name,proxy\0"
    "onProxyRegistered(QString,QString,vtkSMProxy*)\0"
    "onProxyUnRegistered(QString,QString,vtkSMProxy*)\0"
    "id\0onConnectionCreated(vtkIdType)\0"
    "onConnectionClosed(vtkIdType)\0,\0"
    "onStateLoaded(vtkPVXMLElement*,vtkSMProxyLocator*)\0"
};

void pqServerManagerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqServerManagerModel *_t = static_cast<pqServerManagerModel *>(_o);
        switch (_id) {
        case 0: _t->preServerAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 1: _t->serverAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->serverReady((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->preServerRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 4: _t->serverRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 5: _t->aboutToRemoveServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 6: _t->finishedRemovingServer(); break;
        case 7: _t->preItemAdded((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 8: _t->itemAdded((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 9: _t->preItemRemoved((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 10: _t->itemRemoved((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 11: _t->preProxyAdded((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 12: _t->proxyAdded((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 13: _t->preProxyRemoved((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 14: _t->proxyRemoved((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 15: _t->preSourceAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 16: _t->sourceAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 17: _t->preSourceRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 18: _t->sourceRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 19: _t->preViewAdded((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 20: _t->viewAdded((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 21: _t->preViewRemoved((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 22: _t->viewRemoved((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 23: _t->preRepresentationAdded((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 24: _t->representationAdded((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 25: _t->preRepresentationRemoved((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 26: _t->representationRemoved((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 27: _t->nameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 28: _t->modifiedStateChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 29: _t->connectionAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 30: _t->preConnectionAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: _t->connectionRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 32: _t->preConnectionRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 33: _t->dataUpdated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 34: _t->onProxyRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 35: _t->onProxyUnRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 36: _t->onConnectionCreated((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 37: _t->onConnectionClosed((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 38: _t->onStateLoaded((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1])),(*reinterpret_cast< vtkSMProxyLocator*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqServerManagerModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqServerManagerModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqServerManagerModel,
      qt_meta_data_pqServerManagerModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqServerManagerModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqServerManagerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqServerManagerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqServerManagerModel))
        return static_cast<void*>(const_cast< pqServerManagerModel*>(this));
    return QObject::qt_metacast(_clname);
}

int pqServerManagerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void pqServerManagerModel::preServerAdded(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqServerManagerModel::serverAdded(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqServerManagerModel::serverReady(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqServerManagerModel::preServerRemoved(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqServerManagerModel::serverRemoved(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqServerManagerModel::aboutToRemoveServer(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqServerManagerModel::finishedRemovingServer()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void pqServerManagerModel::preItemAdded(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void pqServerManagerModel::itemAdded(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void pqServerManagerModel::preItemRemoved(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void pqServerManagerModel::itemRemoved(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void pqServerManagerModel::preProxyAdded(pqProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void pqServerManagerModel::proxyAdded(pqProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void pqServerManagerModel::preProxyRemoved(pqProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void pqServerManagerModel::proxyRemoved(pqProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void pqServerManagerModel::preSourceAdded(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void pqServerManagerModel::sourceAdded(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void pqServerManagerModel::preSourceRemoved(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void pqServerManagerModel::sourceRemoved(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void pqServerManagerModel::preViewAdded(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void pqServerManagerModel::viewAdded(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void pqServerManagerModel::preViewRemoved(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void pqServerManagerModel::viewRemoved(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void pqServerManagerModel::preRepresentationAdded(pqRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void pqServerManagerModel::representationAdded(pqRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void pqServerManagerModel::preRepresentationRemoved(pqRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void pqServerManagerModel::representationRemoved(pqRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void pqServerManagerModel::nameChanged(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void pqServerManagerModel::modifiedStateChanged(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void pqServerManagerModel::connectionAdded(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void pqServerManagerModel::preConnectionAdded(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void pqServerManagerModel::connectionRemoved(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void pqServerManagerModel::preConnectionRemoved(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void pqServerManagerModel::dataUpdated(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}
QT_END_MOC_NAMESPACE
