/****************************************************************************
** Meta object code from reading C++ file 'pqSMSignalAdaptors.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSMSignalAdaptors.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSMSignalAdaptors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSignalAdaptorProxy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   21,   21,   21, 0x0a,
      64,   21,   21,   21, 0x09,

 // properties: name, type, flags
      94,   85, 0xff095103,

       0        // eod
};

static const char qt_meta_stringdata_pqSignalAdaptorProxy[] = {
    "pqSignalAdaptorProxy\0\0proxyChanged(QVariant)\0"
    "setProxy(QVariant)\0handleProxyChanged()\0"
    "QVariant\0proxy\0"
};

void pqSignalAdaptorProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSignalAdaptorProxy *_t = static_cast<pqSignalAdaptorProxy *>(_o);
        switch (_id) {
        case 0: _t->proxyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->setProxy((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->handleProxyChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSignalAdaptorProxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSignalAdaptorProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSignalAdaptorProxy,
      qt_meta_data_pqSignalAdaptorProxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSignalAdaptorProxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSignalAdaptorProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSignalAdaptorProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSignalAdaptorProxy))
        return static_cast<void*>(const_cast< pqSignalAdaptorProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSignalAdaptorProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = proxy(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setProxy(*reinterpret_cast< QVariant*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSignalAdaptorProxy::proxyChanged(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
