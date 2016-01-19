/****************************************************************************
** Meta object code from reading C++ file 'pqIntRangeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqIntRangeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqIntRangeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqIntRangeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      36,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   17,   17,   17, 0x0a,
      67,   17,   17,   17, 0x0a,
      83,   17,   17,   17, 0x0a,
      99,   17,   17,   17, 0x0a,
     120,   17,   17,   17, 0x08,
     139,   17,   17,   17, 0x08,
     160,   17,   17,   17, 0x08,
     178,   17,   17,   17, 0x08,
     196,   17,   17,   17, 0x08,

 // properties: name, type, flags
     216,  212, 0x02195103,
     222,  212, 0x02095103,
     230,  212, 0x02095103,
     243,  238, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_pqIntRangeWidget[] = {
    "pqIntRangeWidget\0\0valueChanged(int)\0"
    "valueEdited(int)\0setValue(int)\0"
    "setMinimum(int)\0setMaximum(int)\0"
    "setStrictRange(bool)\0sliderChanged(int)\0"
    "textChanged(QString)\0editingFinished()\0"
    "updateValidator()\0domainChanged()\0int\0"
    "value\0minimum\0maximum\0bool\0strictRange\0"
};

void pqIntRangeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqIntRangeWidget *_t = static_cast<pqIntRangeWidget *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setStrictRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->editingFinished(); break;
        case 9: _t->updateValidator(); break;
        case 10: _t->domainChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqIntRangeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqIntRangeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqIntRangeWidget,
      qt_meta_data_pqIntRangeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqIntRangeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqIntRangeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqIntRangeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqIntRangeWidget))
        return static_cast<void*>(const_cast< pqIntRangeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqIntRangeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = value(); break;
        case 1: *reinterpret_cast< int*>(_v) = minimum(); break;
        case 2: *reinterpret_cast< int*>(_v) = maximum(); break;
        case 3: *reinterpret_cast< bool*>(_v) = strictRange(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< int*>(_v)); break;
        case 1: setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 2: setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 3: setStrictRange(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqIntRangeWidget::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqIntRangeWidget::valueEdited(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
