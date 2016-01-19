/****************************************************************************
** Meta object code from reading C++ file 'pqRepresentation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqRepresentation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRepresentation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqRepresentation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x05,
      50,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   60,   17,   17, 0x0a,
      83,   17,   17,   17, 0x0a,
     106,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqRepresentation[] = {
    "pqRepresentation\0\0visible\0"
    "visibilityChanged(bool)\0updated()\0"
    "force\0renderView(bool)\0renderViewEventually()\0"
    "onVisibilityChanged()\0"
};

void pqRepresentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqRepresentation *_t = static_cast<pqRepresentation *>(_o);
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updated(); break;
        case 2: _t->renderView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->renderViewEventually(); break;
        case 4: _t->onVisibilityChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqRepresentation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqRepresentation::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqRepresentation,
      qt_meta_data_pqRepresentation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqRepresentation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqRepresentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqRepresentation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqRepresentation))
        return static_cast<void*>(const_cast< pqRepresentation*>(this));
    return pqProxy::qt_metacast(_clname);
}

int pqRepresentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void pqRepresentation::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqRepresentation::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
