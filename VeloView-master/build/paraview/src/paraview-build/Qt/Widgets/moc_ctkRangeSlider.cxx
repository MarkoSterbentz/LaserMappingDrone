/****************************************************************************
** Meta object code from reading C++ file 'ctkRangeSlider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/ctkRangeSlider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkRangeSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ctkRangeSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x05,
      49,   45,   15,   15, 0x05,
      82,   74,   15,   15, 0x05,
     105,   16,   15,   15, 0x05,
     133,   45,   15,   15, 0x05,
     161,   74,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     187,   16,   15,   15, 0x0a,
     208,   45,   15,   15, 0x0a,
     229,   74,   15,   15, 0x0a,
     264,  248,   15,   15, 0x09,

 // properties: name, type, flags
     292,  288, 0x02095103,
     305,  288, 0x02095103,
     318,  288, 0x02095103,
     334,  288, 0x02095103,
     355,  350, 0x01095103,
     378,  370, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_ctkRangeSlider[] = {
    "ctkRangeSlider\0\0min\0minimumValueChanged(int)\0"
    "max\0maximumValueChanged(int)\0min,max\0"
    "valuesChanged(int,int)\0"
    "minimumPositionChanged(int)\0"
    "maximumPositionChanged(int)\0"
    "positionsChanged(int,int)\0"
    "setMinimumValue(int)\0setMaximumValue(int)\0"
    "setValues(int,int)\0minimum,maximum\0"
    "onRangeChanged(int,int)\0int\0minimumValue\0"
    "maximumValue\0minimumPosition\0"
    "maximumPosition\0bool\0symmetricMoves\0"
    "QString\0handleToolTip\0"
};

void ctkRangeSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ctkRangeSlider *_t = static_cast<ctkRangeSlider *>(_o);
        switch (_id) {
        case 0: _t->minimumValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->maximumValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->valuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->minimumPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->maximumPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->positionsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->setMinimumValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setMaximumValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->onRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ctkRangeSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ctkRangeSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_ctkRangeSlider,
      qt_meta_data_ctkRangeSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ctkRangeSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ctkRangeSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ctkRangeSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ctkRangeSlider))
        return static_cast<void*>(const_cast< ctkRangeSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int ctkRangeSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = minimumValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = maximumValue(); break;
        case 2: *reinterpret_cast< int*>(_v) = minimumPosition(); break;
        case 3: *reinterpret_cast< int*>(_v) = maximumPosition(); break;
        case 4: *reinterpret_cast< bool*>(_v) = symmetricMoves(); break;
        case 5: *reinterpret_cast< QString*>(_v) = handleToolTip(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMinimumValue(*reinterpret_cast< int*>(_v)); break;
        case 1: setMaximumValue(*reinterpret_cast< int*>(_v)); break;
        case 2: setMinimumPosition(*reinterpret_cast< int*>(_v)); break;
        case 3: setMaximumPosition(*reinterpret_cast< int*>(_v)); break;
        case 4: setSymmetricMoves(*reinterpret_cast< bool*>(_v)); break;
        case 5: setHandleToolTip(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkRangeSlider::minimumValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkRangeSlider::maximumValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkRangeSlider::valuesChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkRangeSlider::minimumPositionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkRangeSlider::maximumPositionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ctkRangeSlider::positionsChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
