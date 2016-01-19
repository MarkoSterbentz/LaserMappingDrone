/****************************************************************************
** Meta object code from reading C++ file 'ctkDoubleRangeSlider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/ctkDoubleRangeSlider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDoubleRangeSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ctkDoubleRangeSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      12,   99, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x05,
      64,   57,   21,   21, 0x05,
     106,   92,   21,   21, 0x05,
     142,  135,   21,   21, 0x05,
     180,  173,   21,   21, 0x05,
     225,  211,   21,   21, 0x05,
     257,   21,   21,   21, 0x05,
     273,   21,   21,   21, 0x05,
     298,  290,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     326,   22,   21,   21, 0x0a,
     350,   57,   21,   21, 0x0a,
     374,   92,   21,   21, 0x0a,
     399,  290,   21,   21, 0x09,
     430,  424,   21,   21, 0x09,
     451,  424,   21,   21, 0x09,
     472,  290,   21,   21, 0x09,
     500,  290,   21,   21, 0x09,

 // properties: name, type, flags
     531,  524, 0x06095103,
     539,  524, 0x06095103,
     547,  524, 0x06095103,
     558,  524, 0x06095103,
     571,  524, 0x06095103,
     584,  524, 0x06095103,
     600,  524, 0x06095103,
     621,  616, 0x01095103,
     646,  630, 0x0009510b,
     658,  524, 0x06095103,
     693,  671, 0x0009510b,
     706,  616, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_ctkDoubleRangeSlider[] = {
    "ctkDoubleRangeSlider\0\0minVal\0"
    "minimumValueChanged(double)\0maxVal\0"
    "maximumValueChanged(double)\0minVal,maxVal\0"
    "valuesChanged(double,double)\0minPos\0"
    "minimumPositionChanged(double)\0maxPos\0"
    "maximumPositionChanged(double)\0"
    "minPos,maxPos\0positionsChanged(double,double)\0"
    "sliderPressed()\0sliderReleased()\0"
    "min,max\0rangeChanged(double,double)\0"
    "setMinimumValue(double)\0setMaximumValue(double)\0"
    "setValues(double,double)\0"
    "onValuesChanged(int,int)\0value\0"
    "onMinPosChanged(int)\0onMaxPosChanged(int)\0"
    "onPositionsChanged(int,int)\0"
    "onRangeChanged(int,int)\0double\0minimum\0"
    "maximum\0singleStep\0minimumValue\0"
    "maximumValue\0minimumPosition\0"
    "maximumPosition\0bool\0tracking\0"
    "Qt::Orientation\0orientation\0tickInterval\0"
    "QSlider::TickPosition\0tickPosition\0"
    "symmetricMoves\0"
};

void ctkDoubleRangeSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ctkDoubleRangeSlider *_t = static_cast<ctkDoubleRangeSlider *>(_o);
        switch (_id) {
        case 0: _t->minimumValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->maximumValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->valuesChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->minimumPositionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->maximumPositionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->positionsChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->sliderPressed(); break;
        case 7: _t->sliderReleased(); break;
        case 8: _t->rangeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->setMinimumValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setMaximumValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->onValuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->onMinPosChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onMaxPosChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onPositionsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->onRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

#ifdef Q_NO_DATA_RELOCATION
static const QMetaObjectAccessor qt_meta_extradata_ctkDoubleRangeSlider[] = {
        QSlider::getStaticMetaObject,
#else
static const QMetaObject *qt_meta_extradata_ctkDoubleRangeSlider[] = {
        &QSlider::staticMetaObject,
#endif //Q_NO_DATA_RELOCATION
    0
};

const QMetaObjectExtraData ctkDoubleRangeSlider::staticMetaObjectExtraData = {
    qt_meta_extradata_ctkDoubleRangeSlider,  qt_static_metacall 
};

const QMetaObject ctkDoubleRangeSlider::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDoubleRangeSlider,
      qt_meta_data_ctkDoubleRangeSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ctkDoubleRangeSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ctkDoubleRangeSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ctkDoubleRangeSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDoubleRangeSlider))
        return static_cast<void*>(const_cast< ctkDoubleRangeSlider*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDoubleRangeSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = minimum(); break;
        case 1: *reinterpret_cast< double*>(_v) = maximum(); break;
        case 2: *reinterpret_cast< double*>(_v) = singleStep(); break;
        case 3: *reinterpret_cast< double*>(_v) = minimumValue(); break;
        case 4: *reinterpret_cast< double*>(_v) = maximumValue(); break;
        case 5: *reinterpret_cast< double*>(_v) = minimumPosition(); break;
        case 6: *reinterpret_cast< double*>(_v) = maximumPosition(); break;
        case 7: *reinterpret_cast< bool*>(_v) = hasTracking(); break;
        case 8: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 9: *reinterpret_cast< double*>(_v) = tickInterval(); break;
        case 10: *reinterpret_cast< QSlider::TickPosition*>(_v) = tickPosition(); break;
        case 11: *reinterpret_cast< bool*>(_v) = symmetricMoves(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 1: setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 2: setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 3: setMinimumValue(*reinterpret_cast< double*>(_v)); break;
        case 4: setMaximumValue(*reinterpret_cast< double*>(_v)); break;
        case 5: setMinimumPosition(*reinterpret_cast< double*>(_v)); break;
        case 6: setMaximumPosition(*reinterpret_cast< double*>(_v)); break;
        case 7: setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 8: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 9: setTickInterval(*reinterpret_cast< double*>(_v)); break;
        case 10: setTickPosition(*reinterpret_cast< QSlider::TickPosition*>(_v)); break;
        case 11: setSymmetricMoves(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDoubleRangeSlider::minimumValueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDoubleRangeSlider::maximumValueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkDoubleRangeSlider::valuesChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkDoubleRangeSlider::minimumPositionChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkDoubleRangeSlider::maximumPositionChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ctkDoubleRangeSlider::positionsChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ctkDoubleRangeSlider::sliderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void ctkDoubleRangeSlider::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void ctkDoubleRangeSlider::rangeChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
