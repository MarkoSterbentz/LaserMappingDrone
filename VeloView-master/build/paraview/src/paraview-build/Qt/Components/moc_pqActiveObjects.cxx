/****************************************************************************
** Meta object code from reading C++ file 'pqActiveObjects.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqActiveObjects.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqActiveObjects.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqActiveObjects[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      47,   42,   16,   16, 0x05,
      68,   16,   16,   16, 0x05,
     101,   16,   16,   16, 0x05,
     128,   16,   16,   16, 0x05,
     173,   16,   16,   16, 0x05,
     214,   16,   16,   16, 0x05,
     249,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     263,   42,   16,   16, 0x0a,
     293,  286,   16,   16, 0x0a,
     333,  328,   16,   16, 0x0a,
     362,   16,   16,   16, 0x0a,
     389,   16,   16,   16, 0x0a,
     431,  413,   16,   16, 0x0a,
     488,   16,   16,   16, 0x08,
     511,   16,   16,   16, 0x08,
     536,   16,   16,   16, 0x08,
     576,   16,   16,   16, 0x08,
     599,   16,   16,   16, 0x08,
     624,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqActiveObjects[] = {
    "pqActiveObjects\0\0serverChanged(pqServer*)\0"
    "view\0viewChanged(pqView*)\0"
    "sourceChanged(pqPipelineSource*)\0"
    "portChanged(pqOutputPort*)\0"
    "representationChanged(pqDataRepresentation*)\0"
    "representationChanged(pqRepresentation*)\0"
    "selectionChanged(pqProxySelection)\0"
    "dataUpdated()\0setActiveView(pqView*)\0"
    "source\0setActiveSource(pqPipelineSource*)\0"
    "port\0setActivePort(pqOutputPort*)\0"
    "setActiveServer(pqServer*)\0"
    "onActiveServerChanged()\0selection,current\0"
    "setSelection(pqProxySelection,pqServerManagerModelItem*)\0"
    "serverAdded(pqServer*)\0serverRemoved(pqServer*)\0"
    "proxyRemoved(pqServerManagerModelItem*)\0"
    "updateRepresentation()\0sourceSelectionChanged()\0"
    "viewSelectionChanged()\0"
};

void pqActiveObjects::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqActiveObjects *_t = static_cast<pqActiveObjects *>(_o);
        switch (_id) {
        case 0: _t->serverChanged((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 1: _t->viewChanged((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 2: _t->sourceChanged((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 3: _t->portChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 4: _t->representationChanged((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 5: _t->representationChanged((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 6: _t->selectionChanged((*reinterpret_cast< const pqProxySelection(*)>(_a[1]))); break;
        case 7: _t->dataUpdated(); break;
        case 8: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 9: _t->setActiveSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 10: _t->setActivePort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 11: _t->setActiveServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 12: _t->onActiveServerChanged(); break;
        case 13: _t->setSelection((*reinterpret_cast< const pqProxySelection(*)>(_a[1])),(*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[2]))); break;
        case 14: _t->serverAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 15: _t->serverRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 16: _t->proxyRemoved((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 17: _t->updateRepresentation(); break;
        case 18: _t->sourceSelectionChanged(); break;
        case 19: _t->viewSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqActiveObjects::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqActiveObjects::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqActiveObjects,
      qt_meta_data_pqActiveObjects, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqActiveObjects::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqActiveObjects::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqActiveObjects::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqActiveObjects))
        return static_cast<void*>(const_cast< pqActiveObjects*>(this));
    return QObject::qt_metacast(_clname);
}

int pqActiveObjects::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void pqActiveObjects::serverChanged(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqActiveObjects::viewChanged(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqActiveObjects::sourceChanged(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqActiveObjects::portChanged(pqOutputPort * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqActiveObjects::representationChanged(pqDataRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqActiveObjects::representationChanged(pqRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqActiveObjects::selectionChanged(const pqProxySelection & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqActiveObjects::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
