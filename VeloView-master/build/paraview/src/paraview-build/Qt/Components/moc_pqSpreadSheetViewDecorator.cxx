/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetViewDecorator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSpreadSheetViewDecorator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetViewDecorator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSpreadSheetViewDecorator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x09,
      63,   27,   27,   27, 0x09,
      94,   27,   27,   27, 0x09,
     123,   27,   27,   27, 0x09,
     151,   27,   27,   27, 0x09,
     176,   27,   27,   27, 0x09,
     201,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqSpreadSheetViewDecorator[] = {
    "pqSpreadSheetViewDecorator\0\0"
    "currentIndexChanged(pqOutputPort*)\0"
    "showing(pqDataRepresentation*)\0"
    "displayPrecisionChanged(int)\0"
    "showToggleColumnPopupMenu()\0"
    "updateColumnVisibility()\0"
    "toggleCellConnectivity()\0"
    "toggleFixedRepresentation(bool)\0"
};

void pqSpreadSheetViewDecorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSpreadSheetViewDecorator *_t = static_cast<pqSpreadSheetViewDecorator *>(_o);
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->showing((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 2: _t->displayPrecisionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->showToggleColumnPopupMenu(); break;
        case 4: _t->updateColumnVisibility(); break;
        case 5: _t->toggleCellConnectivity(); break;
        case 6: _t->toggleFixedRepresentation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSpreadSheetViewDecorator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSpreadSheetViewDecorator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSpreadSheetViewDecorator,
      qt_meta_data_pqSpreadSheetViewDecorator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSpreadSheetViewDecorator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSpreadSheetViewDecorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSpreadSheetViewDecorator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetViewDecorator))
        return static_cast<void*>(const_cast< pqSpreadSheetViewDecorator*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSpreadSheetViewDecorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
