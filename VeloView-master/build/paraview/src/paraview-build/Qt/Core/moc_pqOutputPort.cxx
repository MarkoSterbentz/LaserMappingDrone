/****************************************************************************
** Meta object code from reading C++ file 'pqOutputPort.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqOutputPort.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqOutputPort.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqOutputPort[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   14,   13,   13, 0x05,
      77,   14,   13,   13, 0x05,
     129,   14,   13,   13, 0x05,
     180,   14,   13,   13, 0x05,
     246,  234,   13,   13, 0x05,
     303,  234,   13,   13, 0x05,
     362,  234,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     423,  417,   13,   13, 0x0a,
     444,   13,   13,   13, 0x2a,
     461,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqOutputPort[] = {
    "pqOutputPort\0\0port,consumer\0"
    "connectionAdded(pqOutputPort*,pqPipelineSource*)\0"
    "preConnectionAdded(pqOutputPort*,pqPipelineSource*)\0"
    "connectionRemoved(pqOutputPort*,pqPipelineSource*)\0"
    "preConnectionRemoved(pqOutputPort*,pqPipelineSource*)\0"
    "source,repr\0"
    "representationAdded(pqOutputPort*,pqDataRepresentation*)\0"
    "representationRemoved(pqOutputPort*,pqDataRepresentation*)\0"
    "visibilityChanged(pqOutputPort*,pqDataRepresentation*)\0"
    "force\0renderAllViews(bool)\0renderAllViews()\0"
    "onRepresentationVisibilityChanged()\0"
};

void pqOutputPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqOutputPort *_t = static_cast<pqOutputPort *>(_o);
        switch (_id) {
        case 0: _t->connectionAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 1: _t->preConnectionAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 2: _t->connectionRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 3: _t->preConnectionRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 4: _t->representationAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 5: _t->representationRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 6: _t->visibilityChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 7: _t->renderAllViews((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->renderAllViews(); break;
        case 9: _t->onRepresentationVisibilityChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqOutputPort::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqOutputPort::staticMetaObject = {
    { &pqServerManagerModelItem::staticMetaObject, qt_meta_stringdata_pqOutputPort,
      qt_meta_data_pqOutputPort, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqOutputPort::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqOutputPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqOutputPort::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqOutputPort))
        return static_cast<void*>(const_cast< pqOutputPort*>(this));
    return pqServerManagerModelItem::qt_metacast(_clname);
}

int pqOutputPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqServerManagerModelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void pqOutputPort::connectionAdded(pqOutputPort * _t1, pqPipelineSource * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqOutputPort::preConnectionAdded(pqOutputPort * _t1, pqPipelineSource * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqOutputPort::connectionRemoved(pqOutputPort * _t1, pqPipelineSource * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqOutputPort::preConnectionRemoved(pqOutputPort * _t1, pqPipelineSource * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqOutputPort::representationAdded(pqOutputPort * _t1, pqDataRepresentation * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqOutputPort::representationRemoved(pqOutputPort * _t1, pqDataRepresentation * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqOutputPort::visibilityChanged(pqOutputPort * _t1, pqDataRepresentation * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
