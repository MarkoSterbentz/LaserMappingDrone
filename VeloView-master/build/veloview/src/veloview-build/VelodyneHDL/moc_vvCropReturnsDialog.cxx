/****************************************************************************
** Meta object code from reading C++ file 'vvCropReturnsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../VelodyneHDL/vvCropReturnsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvCropReturnsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vvCropReturnsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,

 // properties: name, type, flags
      35,   30, 0x01095103,
      51,   30, 0x01095103,
      72,   62, 0x54095103,
      84,   62, 0x54095103,

       0        // eod
};

static const char qt_meta_stringdata_vvCropReturnsDialog[] = {
    "vvCropReturnsDialog\0\0accept()\0bool\0"
    "croppingEnabled\0cropInside\0QVector3D\0"
    "firstCorner\0secondCorner\0"
};

void vvCropReturnsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vvCropReturnsDialog *_t = static_cast<vvCropReturnsDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData vvCropReturnsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vvCropReturnsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_vvCropReturnsDialog,
      qt_meta_data_vvCropReturnsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vvCropReturnsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vvCropReturnsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vvCropReturnsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vvCropReturnsDialog))
        return static_cast<void*>(const_cast< vvCropReturnsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int vvCropReturnsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = croppingEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = cropInside(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = firstCorner(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = secondCorner(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCroppingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setCropInside(*reinterpret_cast< bool*>(_v)); break;
        case 2: setFirstCorner(*reinterpret_cast< QVector3D*>(_v)); break;
        case 3: setSecondCorner(*reinterpret_cast< QVector3D*>(_v)); break;
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
QT_END_MOC_NAMESPACE
