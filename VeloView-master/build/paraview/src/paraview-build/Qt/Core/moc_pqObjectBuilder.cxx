/****************************************************************************
** Meta object code from reading C++ file 'pqObjectBuilder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqObjectBuilder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqObjectBuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqObjectBuilder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   17,   16,   16, 0x05,
      56,   16,   16,   16, 0x05,
      89,   16,   16,   16, 0x05,
     132,  122,   16,   16, 0x05,
     173,  122,   16,   16, 0x05,
     218,   17,   16,   16, 0x05,
     247,   16,   16,   16, 0x05,
     268,   16,   16,   16, 0x05,
     317,   16,   16,   16, 0x05,
     340,   16,   16,   16, 0x05,
     371,  366,   16,   16, 0x05,
     399,  391,   16,   16, 0x05,
     436,  429,   16,   16, 0x05,
     472,  466,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     493,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqObjectBuilder[] = {
    "pqObjectBuilder\0\0server\0"
    "finishedAddingServer(pqServer*)\0"
    "sourceCreated(pqPipelineSource*)\0"
    "filterCreated(pqPipelineSource*)\0"
    ",filename\0readerCreated(pqPipelineSource*,QString)\0"
    "readerCreated(pqPipelineSource*,QStringList)\0"
    "aboutToCreateView(pqServer*)\0"
    "viewCreated(pqView*)\0"
    "dataRepresentationCreated(pqDataRepresentation*)\0"
    "proxyCreated(pqProxy*)\0proxyCreated(vtkSMProxy*)\0"
    "view\0destroying(pqView*)\0display\0"
    "destroying(pqRepresentation*)\0source\0"
    "destroying(pqPipelineSource*)\0proxy\0"
    "destroying(pqProxy*)\0abortPendingConnections()\0"
};

void pqObjectBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqObjectBuilder *_t = static_cast<pqObjectBuilder *>(_o);
        switch (_id) {
        case 0: _t->finishedAddingServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 1: _t->sourceCreated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 2: _t->filterCreated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 3: _t->readerCreated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->readerCreated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 5: _t->aboutToCreateView((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 6: _t->viewCreated((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 7: _t->dataRepresentationCreated((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 8: _t->proxyCreated((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 9: _t->proxyCreated((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 10: _t->destroying((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 11: _t->destroying((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 12: _t->destroying((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 13: _t->destroying((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 14: _t->abortPendingConnections(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqObjectBuilder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqObjectBuilder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqObjectBuilder,
      qt_meta_data_pqObjectBuilder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqObjectBuilder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqObjectBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqObjectBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqObjectBuilder))
        return static_cast<void*>(const_cast< pqObjectBuilder*>(this));
    return QObject::qt_metacast(_clname);
}

int pqObjectBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void pqObjectBuilder::finishedAddingServer(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqObjectBuilder::sourceCreated(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqObjectBuilder::filterCreated(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqObjectBuilder::readerCreated(pqPipelineSource * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqObjectBuilder::readerCreated(pqPipelineSource * _t1, const QStringList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqObjectBuilder::aboutToCreateView(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqObjectBuilder::viewCreated(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqObjectBuilder::dataRepresentationCreated(pqDataRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void pqObjectBuilder::proxyCreated(pqProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void pqObjectBuilder::proxyCreated(vtkSMProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void pqObjectBuilder::destroying(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void pqObjectBuilder::destroying(pqRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void pqObjectBuilder::destroying(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void pqObjectBuilder::destroying(pqProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
