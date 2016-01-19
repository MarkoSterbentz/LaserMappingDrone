/****************************************************************************
** Meta object code from reading C++ file 'vvPythonQtDecorators.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../VelodyneHDL/vvPythonQtDecorators.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvPythonQtDecorators.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vvPythonQtDecorators[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   43,   22,   21, 0x0a,
     103,   43,   82,   21, 0x0a,
     159,   43,  137,   21, 0x0a,
     218,   43,  194,   21, 0x0a,
     273,  268,  255,   21, 0x0a,
     334,  324,   21,   21, 0x0a,
     413,  398,   21,   21, 0x0a,
     501,  481,   21,   21, 0x0a,
     608,  578,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_vvPythonQtDecorators[] = {
    "vvPythonQtDecorators\0\0vvCalibrationDialog*\0"
    "arg0\0new_vvCalibrationDialog(QWidget*)\0"
    "vvCropReturnsDialog*\0"
    "new_vvCropReturnsDialog(QWidget*)\0"
    "vvSelectFramesDialog*\0"
    "new_vvSelectFramesDialog(QWidget*)\0"
    "vvLaserSelectionDialog*\0"
    "new_vvLaserSelectionDialog(QWidget*)\0"
    "QVector<int>\0inst\0"
    "getLaserSelectionSelector(vvLaserSelectionDialog*)\0"
    "inst,arg0\0"
    "setLaserSelectionSelector(vvLaserSelectionDialog*,QVector<int>)\0"
    "inst,arg0,arg1\0"
    "setVerticalCorrections(vvLaserSelectionDialog*,QVector<double>,int)\0"
    "arg0,arg1,arg2,arg3\0"
    "static_pqVelodyneManager_saveFramesToPCAP(vtkSMSourceProxy*,int,int,QS"
    "tring)\0"
    "arg0,arg1,arg2,arg3,arg4,arg5\0"
    "static_pqVelodyneManager_saveFramesToLAS(vtkVelodyneHDLReader*,vtkPoly"
    "Data*,int,int,QString,int)\0"
};

void vvPythonQtDecorators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vvPythonQtDecorators *_t = static_cast<vvPythonQtDecorators *>(_o);
        switch (_id) {
        case 0: { vvCalibrationDialog* _r = _t->new_vvCalibrationDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vvCalibrationDialog**>(_a[0]) = _r; }  break;
        case 1: { vvCropReturnsDialog* _r = _t->new_vvCropReturnsDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vvCropReturnsDialog**>(_a[0]) = _r; }  break;
        case 2: { vvSelectFramesDialog* _r = _t->new_vvSelectFramesDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vvSelectFramesDialog**>(_a[0]) = _r; }  break;
        case 3: { vvLaserSelectionDialog* _r = _t->new_vvLaserSelectionDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vvLaserSelectionDialog**>(_a[0]) = _r; }  break;
        case 4: { QVector<int> _r = _t->getLaserSelectionSelector((*reinterpret_cast< vvLaserSelectionDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = _r; }  break;
        case 5: _t->setLaserSelectionSelector((*reinterpret_cast< vvLaserSelectionDialog*(*)>(_a[1])),(*reinterpret_cast< const QVector<int>(*)>(_a[2]))); break;
        case 6: _t->setVerticalCorrections((*reinterpret_cast< vvLaserSelectionDialog*(*)>(_a[1])),(*reinterpret_cast< const QVector<double>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->static_pqVelodyneManager_saveFramesToPCAP((*reinterpret_cast< vtkSMSourceProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 8: _t->static_pqVelodyneManager_saveFramesToLAS((*reinterpret_cast< vtkVelodyneHDLReader*(*)>(_a[1])),(*reinterpret_cast< vtkPolyData*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vvPythonQtDecorators::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vvPythonQtDecorators::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_vvPythonQtDecorators,
      qt_meta_data_vvPythonQtDecorators, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vvPythonQtDecorators::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vvPythonQtDecorators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vvPythonQtDecorators::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vvPythonQtDecorators))
        return static_cast<void*>(const_cast< vvPythonQtDecorators*>(this));
    return QObject::qt_metacast(_clname);
}

int vvPythonQtDecorators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
