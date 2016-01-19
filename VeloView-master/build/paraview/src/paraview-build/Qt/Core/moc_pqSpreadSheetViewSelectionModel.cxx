/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetViewSelectionModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqSpreadSheetViewSelectionModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetViewSelectionModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSpreadSheetViewSelectionModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   62,   32,   32, 0x0a,
     150,  132,   32,   32, 0x0a,
     209,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqSpreadSheetViewSelectionModel[] = {
    "pqSpreadSheetViewSelectionModel\0\0"
    "selection(vtkSMSourceProxy*)\0index,command\0"
    "select(QModelIndex,QItemSelectionModel::SelectionFlags)\0"
    "selection,command\0"
    "select(QItemSelection,QItemSelectionModel::SelectionFlags)\0"
    "serverSelectionChanged(QItemSelection)\0"
};

void pqSpreadSheetViewSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSpreadSheetViewSelectionModel *_t = static_cast<pqSpreadSheetViewSelectionModel *>(_o);
        switch (_id) {
        case 0: _t->selection((*reinterpret_cast< vtkSMSourceProxy*(*)>(_a[1]))); break;
        case 1: _t->select((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 2: _t->select((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 3: _t->serverSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSpreadSheetViewSelectionModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSpreadSheetViewSelectionModel::staticMetaObject = {
    { &QItemSelectionModel::staticMetaObject, qt_meta_stringdata_pqSpreadSheetViewSelectionModel,
      qt_meta_data_pqSpreadSheetViewSelectionModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSpreadSheetViewSelectionModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSpreadSheetViewSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSpreadSheetViewSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetViewSelectionModel))
        return static_cast<void*>(const_cast< pqSpreadSheetViewSelectionModel*>(this));
    return QItemSelectionModel::qt_metacast(_clname);
}

int pqSpreadSheetViewSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemSelectionModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqSpreadSheetViewSelectionModel::selection(vtkSMSourceProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
