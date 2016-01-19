/****************************************************************************
** Meta object code from reading C++ file 'vvSelectFramesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../VelodyneHDL/vvSelectFramesDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvSelectFramesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vvSelectFramesDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      11,   84, // properties
       3,  117, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      41,   31,   21,   21, 0x0a,
      70,   59,   21,   21, 0x0a,
      99,   89,   21,   21, 0x0a,
     129,  117,   21,   21, 0x0a,
     159,  149,   21,   21, 0x0a,
     192,  177,   21,   21, 0x0a,
     224,  215,   21,   21, 0x0a,
     254,  245,   21,   21, 0x0a,
     283,  275,   21,   21, 0x0a,
     314,  275,   21,   21, 0x0a,
     343,  275,   21,   21, 0x0a,
     377,   21,   21,   21, 0x0a,
     389,   21,   21,   21, 0x0a,

 // properties: name, type, flags
      31,  404, 0x02095103,
      59,  404, 0x02095103,
      89,  404, 0x02095103,
     117,  404, 0x02095103,
     149,  404, 0x02095103,
     408,  404, 0x02095102,
     421,  404, 0x02095102,
     177,  404, 0x02095103,
     439,  434, 0x01095102,
     461,  434, 0x01095102,
     481,  434, 0x01095102,

 // enums: name, flags, count, data
     506, 0x0,    3,  129,
     516, 0x0,    2,  135,
     526, 0x0,    4,  139,

 // enum data: key, value
     541, uint(vvSelectFramesDialog::CURRENT_FRAME),
     555, uint(vvSelectFramesDialog::ALL_FRAMES),
     566, uint(vvSelectFramesDialog::FRAME_RANGE),
     578, uint(vvSelectFramesDialog::SINGLE_FILE),
     590, uint(vvSelectFramesDialog::FILE_PER_FRAME),
     605, uint(vvSelectFramesDialog::SENSOR),
     612, uint(vvSelectFramesDialog::RELATIVE_GEOPOSITION),
     633, uint(vvSelectFramesDialog::ABSOLUTE_GEOPOSITION_UTM),
     658, uint(vvSelectFramesDialog::ABSOLUTE_GEOPOSITION_LATLON),

       0        // eod
};

static const char qt_meta_stringdata_vvSelectFramesDialog[] = {
    "vvSelectFramesDialog\0\0accept()\0frameMode\0"
    "setFrameMode(int)\0frameStart\0"
    "setFrameStart(int)\0frameStop\0"
    "setFrameStop(int)\0frameStride\0"
    "setFrameStride(int)\0framePack\0"
    "setFramePack(int)\0frameTransform\0"
    "setFrameTransform(int)\0frameMin\0"
    "setFrameMinimum(int)\0frameMax\0"
    "setFrameMaximum(int)\0visible\0"
    "setFrameStrideVisibility(bool)\0"
    "setFramePackVisibility(bool)\0"
    "setFrameTransformVisibility(bool)\0"
    "saveState()\0restoreState()\0int\0"
    "frameMinimum\0frameMaximum\0bool\0"
    "frameStrideVisibility\0framePackVisibility\0"
    "frameTransformVisibility\0FrameMode\0"
    "FramePack\0FrameTransform\0CURRENT_FRAME\0"
    "ALL_FRAMES\0FRAME_RANGE\0SINGLE_FILE\0"
    "FILE_PER_FRAME\0SENSOR\0RELATIVE_GEOPOSITION\0"
    "ABSOLUTE_GEOPOSITION_UTM\0"
    "ABSOLUTE_GEOPOSITION_LATLON\0"
};

void vvSelectFramesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vvSelectFramesDialog *_t = static_cast<vvSelectFramesDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->setFrameMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setFrameStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setFrameStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setFrameStride((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFramePack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setFrameTransform((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setFrameMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setFrameMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setFrameStrideVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setFramePackVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setFrameTransformVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->saveState(); break;
        case 13: _t->restoreState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vvSelectFramesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vvSelectFramesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_vvSelectFramesDialog,
      qt_meta_data_vvSelectFramesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vvSelectFramesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vvSelectFramesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vvSelectFramesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vvSelectFramesDialog))
        return static_cast<void*>(const_cast< vvSelectFramesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int vvSelectFramesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = frameMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = frameStart(); break;
        case 2: *reinterpret_cast< int*>(_v) = frameStop(); break;
        case 3: *reinterpret_cast< int*>(_v) = frameStride(); break;
        case 4: *reinterpret_cast< int*>(_v) = framePack(); break;
        case 7: *reinterpret_cast< int*>(_v) = frameTransform(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFrameMode(*reinterpret_cast< int*>(_v)); break;
        case 1: setFrameStart(*reinterpret_cast< int*>(_v)); break;
        case 2: setFrameStop(*reinterpret_cast< int*>(_v)); break;
        case 3: setFrameStride(*reinterpret_cast< int*>(_v)); break;
        case 4: setFramePack(*reinterpret_cast< int*>(_v)); break;
        case 5: setFrameMinimum(*reinterpret_cast< int*>(_v)); break;
        case 6: setFrameMaximum(*reinterpret_cast< int*>(_v)); break;
        case 7: setFrameTransform(*reinterpret_cast< int*>(_v)); break;
        case 8: setFrameStrideVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 9: setFramePackVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 10: setFrameTransformVisibility(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
