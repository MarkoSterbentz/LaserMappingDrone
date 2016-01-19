/****************************************************************************
** Meta object code from reading C++ file 'pqDisplayRepresentationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqDisplayRepresentationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDisplayRepresentationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDisplayRepresentationWidget[] = {

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
      31,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   66,   30,   30, 0x0a,
     121,  115,   30,   30, 0x0a,
     152,   30,   30,   30, 0x0a,

 // properties: name, type, flags
     191,  183, 0x0a495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_pqDisplayRepresentationWidget[] = {
    "pqDisplayRepresentationWidget\0\0"
    "representationTextChanged(QString)\0"
    "display\0setRepresentation(pqDataRepresentation*)\0"
    "proxy\0setRepresentation(vtkSMProxy*)\0"
    "setRepresentationText(QString)\0QString\0"
    "representationText\0"
};

void pqDisplayRepresentationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDisplayRepresentationWidget *_t = static_cast<pqDisplayRepresentationWidget *>(_o);
        switch (_id) {
        case 0: _t->representationTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 2: _t->setRepresentation((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 3: _t->setRepresentationText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqDisplayRepresentationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDisplayRepresentationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqDisplayRepresentationWidget,
      qt_meta_data_pqDisplayRepresentationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDisplayRepresentationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDisplayRepresentationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDisplayRepresentationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDisplayRepresentationWidget))
        return static_cast<void*>(const_cast< pqDisplayRepresentationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqDisplayRepresentationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = representationText(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRepresentationText(*reinterpret_cast< QString*>(_v)); break;
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
void pqDisplayRepresentationWidget::representationTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_pqDisplayRepresentationPropertyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_pqDisplayRepresentationPropertyWidget[] = {
    "pqDisplayRepresentationPropertyWidget\0"
};

void pqDisplayRepresentationPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqDisplayRepresentationPropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDisplayRepresentationPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqDisplayRepresentationPropertyWidget,
      qt_meta_data_pqDisplayRepresentationPropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDisplayRepresentationPropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDisplayRepresentationPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDisplayRepresentationPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDisplayRepresentationPropertyWidget))
        return static_cast<void*>(const_cast< pqDisplayRepresentationPropertyWidget*>(this));
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqDisplayRepresentationPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
