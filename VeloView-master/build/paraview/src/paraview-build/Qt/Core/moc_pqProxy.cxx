/****************************************************************************
** Meta object code from reading C++ file 'pqProxy.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqProxy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      48,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   96,    8,    8, 0x09,
     146,   96,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqProxy[] = {
    "pqProxy\0\0nameChanged(pqServerManagerModelItem*)\0"
    "modifiedStateChanged(pqServerManagerModelItem*)\0"
    ",,\0onProxyRegistered(QString,QString,vtkSMProxy*)\0"
    "onProxyUnRegistered(QString,QString,vtkSMProxy*)\0"
};

void pqProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxy *_t = static_cast<pqProxy *>(_o);
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 1: _t->modifiedStateChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 2: _t->onProxyRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 3: _t->onProxyUnRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxy::staticMetaObject = {
    { &pqServerManagerModelItem::staticMetaObject, qt_meta_stringdata_pqProxy,
      qt_meta_data_pqProxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxy))
        return static_cast<void*>(const_cast< pqProxy*>(this));
    return pqServerManagerModelItem::qt_metacast(_clname);
}

int pqProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqServerManagerModelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqProxy::nameChanged(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqProxy::modifiedStateChanged(pqServerManagerModelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
