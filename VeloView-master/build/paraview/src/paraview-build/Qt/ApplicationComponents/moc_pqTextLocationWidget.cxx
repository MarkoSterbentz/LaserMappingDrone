/****************************************************************************
** Meta object code from reading C++ file 'pqTextLocationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqTextLocationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTextLocationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTextLocationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   21,   21,   21, 0x09,
      88,   21,   21,   21, 0x09,
     118,   21,   21,   21, 0x09,

 // properties: name, type, flags
     156,  148, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_pqTextLocationWidget[] = {
    "pqTextLocationWidget\0\0"
    "windowLocationChanged(QString&)\0"
    "emitWindowLocationChangedSignal()\0"
    "groupBoxLocationClicked(bool)\0"
    "groupBoxPositionClicked(bool)\0QString\0"
    "windowLocation\0"
};

void pqTextLocationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTextLocationWidget *_t = static_cast<pqTextLocationWidget *>(_o);
        switch (_id) {
        case 0: _t->windowLocationChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->emitWindowLocationChangedSignal(); break;
        case 2: _t->groupBoxLocationClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->groupBoxPositionClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTextLocationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTextLocationWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqTextLocationWidget,
      qt_meta_data_pqTextLocationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTextLocationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTextLocationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTextLocationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTextLocationWidget))
        return static_cast<void*>(const_cast< pqTextLocationWidget*>(this));
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqTextLocationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = windowLocation(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWindowLocation(*reinterpret_cast< QString*>(_v)); break;
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
void pqTextLocationWidget::windowLocationChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
