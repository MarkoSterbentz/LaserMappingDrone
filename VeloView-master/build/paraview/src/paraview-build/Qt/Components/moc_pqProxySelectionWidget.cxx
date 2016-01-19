/****************************************************************************
** Meta object code from reading C++ file 'pqProxySelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqProxySelectionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxySelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxySelectionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      48,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   23,   23,   23, 0x0a,
      79,   23,   23,   23, 0x0a,
      88,   23,   23,   23, 0x0a,
      99,   23,   23,   23, 0x0a,
     108,   23,   23,   23, 0x0a,
     119,  116,   23,   23, 0x0a,
     136,   23,   23,   23, 0x09,

 // properties: name, type, flags
     167,  157, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_pqProxySelectionWidget[] = {
    "pqProxySelectionWidget\0\0proxyChanged(pqSMProxy)\0"
    "modified()\0setProxy(pqSMProxy)\0select()\0"
    "deselect()\0accept()\0reset()\0rm\0"
    "setView(pqView*)\0handleProxyChanged()\0"
    "pqSMProxy\0proxy\0"
};

void pqProxySelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxySelectionWidget *_t = static_cast<pqProxySelectionWidget *>(_o);
        switch (_id) {
        case 0: _t->proxyChanged((*reinterpret_cast< pqSMProxy(*)>(_a[1]))); break;
        case 1: _t->modified(); break;
        case 2: _t->setProxy((*reinterpret_cast< pqSMProxy(*)>(_a[1]))); break;
        case 3: _t->select(); break;
        case 4: _t->deselect(); break;
        case 5: _t->accept(); break;
        case 6: _t->reset(); break;
        case 7: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 8: _t->handleProxyChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProxySelectionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxySelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProxySelectionWidget,
      qt_meta_data_pqProxySelectionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxySelectionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxySelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxySelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxySelectionWidget))
        return static_cast<void*>(const_cast< pqProxySelectionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqProxySelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pqSMProxy*>(_v) = proxy(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setProxy(*reinterpret_cast< pqSMProxy*>(_v)); break;
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
void pqProxySelectionWidget::proxyChanged(pqSMProxy _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqProxySelectionWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
