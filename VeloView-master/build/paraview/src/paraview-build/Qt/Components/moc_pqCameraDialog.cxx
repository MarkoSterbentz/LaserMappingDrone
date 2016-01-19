/****************************************************************************
** Meta object code from reading C++ file 'pqCameraDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqCameraDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCameraDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCameraDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      47,   15,   15,   15, 0x08,
      73,   15,   15,   15, 0x08,
      99,   15,   15,   15, 0x08,
     131,  122,   15,   15, 0x08,
     152,   15,   15,   15, 0x08,
     171,   15,   15,   15, 0x08,
     190,   15,   15,   15, 0x08,
     209,   15,   15,   15, 0x08,
     228,   15,   15,   15, 0x08,
     253,   15,   15,   15, 0x08,
     278,   15,   15,   15, 0x08,
     303,   15,   15,   15, 0x08,
     328,   15,   15,   15, 0x08,
     353,   15,   15,   15, 0x08,
     414,  378,   15,   15, 0x08,
     476,   15,   15,   15, 0x08,
     494,   15,   15,   15, 0x08,
     517,   15,   15,   15, 0x08,
     538,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqCameraDialog[] = {
    "pqCameraDialog\0\0setRenderModule(pqRenderView*)\0"
    "saveCameraConfiguration()\0"
    "loadCameraConfiguration()\0"
    "configureCustomViews()\0buttonId\0"
    "applyCustomView(int)\0applyCustomView0()\0"
    "applyCustomView1()\0applyCustomView2()\0"
    "applyCustomView3()\0resetViewDirectionPosX()\0"
    "resetViewDirectionNegX()\0"
    "resetViewDirectionPosY()\0"
    "resetViewDirectionNegY()\0"
    "resetViewDirectionPosZ()\0"
    "resetViewDirectionNegZ()\0"
    "look_x,look_y,look_z,up_x,up_y,up_z\0"
    "resetViewDirection(double,double,double,double,double,double)\0"
    "applyCameraRoll()\0applyCameraElevation()\0"
    "applyCameraAzimuth()\0"
    "resetRotationCenterWithCamera()\0"
};

void pqCameraDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCameraDialog *_t = static_cast<pqCameraDialog *>(_o);
        switch (_id) {
        case 0: _t->setRenderModule((*reinterpret_cast< pqRenderView*(*)>(_a[1]))); break;
        case 1: _t->saveCameraConfiguration(); break;
        case 2: _t->loadCameraConfiguration(); break;
        case 3: _t->configureCustomViews(); break;
        case 4: _t->applyCustomView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->applyCustomView0(); break;
        case 6: _t->applyCustomView1(); break;
        case 7: _t->applyCustomView2(); break;
        case 8: _t->applyCustomView3(); break;
        case 9: _t->resetViewDirectionPosX(); break;
        case 10: _t->resetViewDirectionNegX(); break;
        case 11: _t->resetViewDirectionPosY(); break;
        case 12: _t->resetViewDirectionNegY(); break;
        case 13: _t->resetViewDirectionPosZ(); break;
        case 14: _t->resetViewDirectionNegZ(); break;
        case 15: _t->resetViewDirection((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 16: _t->applyCameraRoll(); break;
        case 17: _t->applyCameraElevation(); break;
        case 18: _t->applyCameraAzimuth(); break;
        case 19: _t->resetRotationCenterWithCamera(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCameraDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCameraDialog::staticMetaObject = {
    { &pqDialog::staticMetaObject, qt_meta_stringdata_pqCameraDialog,
      qt_meta_data_pqCameraDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCameraDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCameraDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCameraDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCameraDialog))
        return static_cast<void*>(const_cast< pqCameraDialog*>(this));
    return pqDialog::qt_metacast(_clname);
}

int pqCameraDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
