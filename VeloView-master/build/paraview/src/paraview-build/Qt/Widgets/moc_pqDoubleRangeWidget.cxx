/****************************************************************************
** Meta object code from reading C++ file 'pqDoubleRangeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqDoubleRangeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDoubleRangeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDoubleRangeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      42,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   20,   20,   20, 0x0a,
      79,   20,   20,   20, 0x0a,
      98,   20,   20,   20, 0x0a,
     117,   20,   20,   20, 0x0a,
     138,   20,   20,   20, 0x0a,
     157,   20,   20,   20, 0x08,
     176,   20,   20,   20, 0x08,
     197,   20,   20,   20, 0x08,
     215,   20,   20,   20, 0x08,
     233,   20,   20,   20, 0x08,

 // properties: name, type, flags
     255,  248, 0x06195103,
     261,  248, 0x06095103,
     269,  248, 0x06095103,
     282,  277, 0x01095103,
     298,  294, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_pqDoubleRangeWidget[] = {
    "pqDoubleRangeWidget\0\0valueChanged(double)\0"
    "valueEdited(double)\0setValue(double)\0"
    "setMinimum(double)\0setMaximum(double)\0"
    "setStrictRange(bool)\0setResolution(int)\0"
    "sliderChanged(int)\0textChanged(QString)\0"
    "editingFinished()\0updateValidator()\0"
    "updateSlider()\0double\0value\0minimum\0"
    "maximum\0bool\0strictRange\0int\0resolution\0"
};

void pqDoubleRangeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDoubleRangeWidget *_t = static_cast<pqDoubleRangeWidget *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueEdited((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setMinimum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setMaximum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setStrictRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->editingFinished(); break;
        case 10: _t->updateValidator(); break;
        case 11: _t->updateSlider(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqDoubleRangeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDoubleRangeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqDoubleRangeWidget,
      qt_meta_data_pqDoubleRangeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDoubleRangeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDoubleRangeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDoubleRangeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDoubleRangeWidget))
        return static_cast<void*>(const_cast< pqDoubleRangeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqDoubleRangeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = value(); break;
        case 1: *reinterpret_cast< double*>(_v) = minimum(); break;
        case 2: *reinterpret_cast< double*>(_v) = maximum(); break;
        case 3: *reinterpret_cast< bool*>(_v) = strictRange(); break;
        case 4: *reinterpret_cast< int*>(_v) = resolution(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 2: setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 3: setStrictRange(*reinterpret_cast< bool*>(_v)); break;
        case 4: setResolution(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqDoubleRangeWidget::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqDoubleRangeWidget::valueEdited(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
