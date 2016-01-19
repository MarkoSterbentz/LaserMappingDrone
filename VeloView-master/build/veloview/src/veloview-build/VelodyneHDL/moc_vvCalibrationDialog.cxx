/****************************************************************************
** Meta object code from reading C++ file 'vvCalibrationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../VelodyneHDL/vvCalibrationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvCalibrationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vvCalibrationDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      30,   20,   20,   20, 0x09,
      40,   20,   20,   20, 0x09,
      65,   61,   20,   20, 0x09,

 // methods: signature, parameters, type, tag, flags
      98,   20,   90,   20, 0x02,
     136,   20,  124,   20, 0x02,
     166,   20,  155,   20, 0x02,
     191,   20,  184,   20, 0x02,
     200,   20,  184,   20, 0x02,
     210,   20,  184,   20, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_vvCalibrationDialog[] = {
    "vvCalibrationDialog\0\0accept()\0addFile()\0"
    "removeSelectedFile()\0row\0"
    "onCurrentRowChanged(int)\0QString\0"
    "selectedCalibrationFile()\0QStringList\0"
    "calibrationFiles()\0QMatrix4x4\0"
    "sensorTransform()\0double\0gpsYaw()\0"
    "gpsRoll()\0gpsPitch()\0"
};

void vvCalibrationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vvCalibrationDialog *_t = static_cast<vvCalibrationDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->addFile(); break;
        case 2: _t->removeSelectedFile(); break;
        case 3: _t->onCurrentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { QString _r = _t->selectedCalibrationFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->calibrationFiles();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: { QMatrix4x4 _r = _t->sensorTransform();
            if (_a[0]) *reinterpret_cast< QMatrix4x4*>(_a[0]) = _r; }  break;
        case 7: { double _r = _t->gpsYaw();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 8: { double _r = _t->gpsRoll();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: { double _r = _t->gpsPitch();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vvCalibrationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vvCalibrationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_vvCalibrationDialog,
      qt_meta_data_vvCalibrationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vvCalibrationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vvCalibrationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vvCalibrationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vvCalibrationDialog))
        return static_cast<void*>(const_cast< vvCalibrationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int vvCalibrationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
