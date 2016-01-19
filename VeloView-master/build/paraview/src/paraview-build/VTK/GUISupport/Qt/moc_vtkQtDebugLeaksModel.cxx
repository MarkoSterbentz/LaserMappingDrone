/****************************************************************************
** Meta object code from reading C++ file 'vtkQtDebugLeaksModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/VTK/GUISupport/Qt/vtkQtDebugLeaksModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vtkQtDebugLeaksModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vtkQtDebugLeaksModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x09,
      55,   22,   21,   21, 0x09,
      84,   22,   21,   21, 0x09,
     115,   21,   21,   21, 0x09,
     139,   21,   21,   21, 0x09,
     175,  169,  155,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_vtkQtDebugLeaksModel[] = {
    "vtkQtDebugLeaksModel\0\0object\0"
    "addObject(vtkObjectBase*)\0"
    "removeObject(vtkObjectBase*)\0"
    "registerObject(vtkObjectBase*)\0"
    "processPendingObjects()\0onAboutToQuit()\0"
    "Qt::ItemFlags\0index\0flags(QModelIndex)\0"
};

void vtkQtDebugLeaksModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vtkQtDebugLeaksModel *_t = static_cast<vtkQtDebugLeaksModel *>(_o);
        switch (_id) {
        case 0: _t->addObject((*reinterpret_cast< vtkObjectBase*(*)>(_a[1]))); break;
        case 1: _t->removeObject((*reinterpret_cast< vtkObjectBase*(*)>(_a[1]))); break;
        case 2: _t->registerObject((*reinterpret_cast< vtkObjectBase*(*)>(_a[1]))); break;
        case 3: _t->processPendingObjects(); break;
        case 4: _t->onAboutToQuit(); break;
        case 5: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vtkQtDebugLeaksModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vtkQtDebugLeaksModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_vtkQtDebugLeaksModel,
      qt_meta_data_vtkQtDebugLeaksModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vtkQtDebugLeaksModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vtkQtDebugLeaksModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vtkQtDebugLeaksModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vtkQtDebugLeaksModel))
        return static_cast<void*>(const_cast< vtkQtDebugLeaksModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int vtkQtDebugLeaksModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_ReferenceCountModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ReferenceCountModel[] = {
    "ReferenceCountModel\0\0updateReferenceCounts()\0"
};

void ReferenceCountModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReferenceCountModel *_t = static_cast<ReferenceCountModel *>(_o);
        switch (_id) {
        case 0: _t->updateReferenceCounts(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ReferenceCountModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReferenceCountModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_ReferenceCountModel,
      qt_meta_data_ReferenceCountModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReferenceCountModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReferenceCountModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReferenceCountModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReferenceCountModel))
        return static_cast<void*>(const_cast< ReferenceCountModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int ReferenceCountModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
