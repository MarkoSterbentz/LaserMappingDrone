/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetViewModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqSpreadSheetViewModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetViewModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSpreadSheetViewModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   23,   23,   23, 0x0a,
      81,   23,   23,   23, 0x0a,
     128,   23,   23,   23, 0x0a,
     170,   23,   23,   23, 0x08,
     186,   23,   23,   23, 0x08,
     225,  212,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqSpreadSheetViewModel[] = {
    "pqSpreadSheetViewModel\0\0selection\0"
    "selectionChanged(QItemSelection)\0"
    "forceUpdate()\0"
    "setActiveRepresentation(pqDataRepresentation*)\0"
    "setActiveRepresentationProxy(vtkSMProxy*)\0"
    "delayedUpdate()\0triggerSelectionChanged()\0"
    ",,,call_data\0onDataFetched(vtkObject*,ulong,void*,void*)\0"
};

void pqSpreadSheetViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSpreadSheetViewModel *_t = static_cast<pqSpreadSheetViewModel *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 1: _t->forceUpdate(); break;
        case 2: _t->setActiveRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 3: _t->setActiveRepresentationProxy((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 4: _t->delayedUpdate(); break;
        case 5: _t->triggerSelectionChanged(); break;
        case 6: _t->onDataFetched((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSpreadSheetViewModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSpreadSheetViewModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_pqSpreadSheetViewModel,
      qt_meta_data_pqSpreadSheetViewModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSpreadSheetViewModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSpreadSheetViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSpreadSheetViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetViewModel))
        return static_cast<void*>(const_cast< pqSpreadSheetViewModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int pqSpreadSheetViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqSpreadSheetViewModel::selectionChanged(const QItemSelection & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
