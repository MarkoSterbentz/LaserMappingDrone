/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineSource.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqPipelineSource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPipelineSource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      48,   18,   17,   17, 0x05,
     105,   18,   17,   17, 0x05,
     165,   18,   17,   17, 0x05,
     224,   18,   17,   17, 0x05,
     312,  286,   17,   17, 0x05,
     377,  286,   17,   17, 0x05,
     456,  444,   17,   17, 0x05,
     522,  515,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     553,   17,   17,   17, 0x09,
     597,  589,   17,   17, 0x08,
     653,  589,   17,   17, 0x08,
     706,  589,   17,   17, 0x08,
     764,  589,   17,   17, 0x08,
     819,  589,   17,   17, 0x08,
     880,  589,   17,   17, 0x08,
     943,  589,   17,   17, 0x08,
    1002,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqPipelineSource[] = {
    "pqPipelineSource\0\0source,consumer,srcOutputPort\0"
    "connectionAdded(pqPipelineSource*,pqPipelineSource*,int)\0"
    "preConnectionAdded(pqPipelineSource*,pqPipelineSource*,int)\0"
    "connectionRemoved(pqPipelineSource*,pqPipelineSource*,int)\0"
    "preConnectionRemoved(pqPipelineSource*,pqPipelineSource*,int)\0"
    "source,repr,srcOutputPort\0"
    "representationAdded(pqPipelineSource*,pqDataRepresentation*,int)\0"
    "representationRemoved(pqPipelineSource*,pqDataRepresentation*,int)\0"
    "source,repr\0"
    "visibilityChanged(pqPipelineSource*,pqDataRepresentation*)\0"
    "source\0dataUpdated(pqPipelineSource*)\0"
    "onRepresentationVisibilityChanged()\0"
    "op,cons\0prePortConnectionAdded(pqOutputPort*,pqPipelineSource*)\0"
    "portConnectionAdded(pqOutputPort*,pqPipelineSource*)\0"
    "prePortConnectionRemoved(pqOutputPort*,pqPipelineSource*)\0"
    "portConnectionRemoved(pqOutputPort*,pqPipelineSource*)\0"
    "portRepresentationAdded(pqOutputPort*,pqDataRepresentation*)\0"
    "portRepresentationRemoved(pqOutputPort*,pqDataRepresentation*)\0"
    "portVisibilityChanged(pqOutputPort*,pqDataRepresentation*)\0"
    "dataUpdated()\0"
};

void pqPipelineSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPipelineSource *_t = static_cast<pqPipelineSource *>(_o);
        switch (_id) {
        case 0: _t->connectionAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->preConnectionAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->connectionRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->preConnectionRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->representationAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->representationRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->visibilityChanged((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 7: _t->dataUpdated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 8: _t->onRepresentationVisibilityChanged(); break;
        case 9: _t->prePortConnectionAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 10: _t->portConnectionAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 11: _t->prePortConnectionRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 12: _t->portConnectionRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 13: _t->portRepresentationAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 14: _t->portRepresentationRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 15: _t->portVisibilityChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 16: _t->dataUpdated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPipelineSource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPipelineSource::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqPipelineSource,
      qt_meta_data_pqPipelineSource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPipelineSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPipelineSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPipelineSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineSource))
        return static_cast<void*>(const_cast< pqPipelineSource*>(this));
    return pqProxy::qt_metacast(_clname);
}

int pqPipelineSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void pqPipelineSource::connectionAdded(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqPipelineSource::preConnectionAdded(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqPipelineSource::connectionRemoved(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqPipelineSource::preConnectionRemoved(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqPipelineSource::representationAdded(pqPipelineSource * _t1, pqDataRepresentation * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqPipelineSource::representationRemoved(pqPipelineSource * _t1, pqDataRepresentation * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqPipelineSource::visibilityChanged(pqPipelineSource * _t1, pqDataRepresentation * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqPipelineSource::dataUpdated(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
