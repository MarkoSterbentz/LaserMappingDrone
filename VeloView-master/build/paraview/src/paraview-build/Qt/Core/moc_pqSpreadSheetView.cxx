/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqSpreadSheetView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSpreadSheetView[] = {

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
      24,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   18,   18,   18, 0x0a,
     107,   94,   18,   18, 0x09,
     162,   18,   18,   18, 0x09,
     178,   18,   18,   18, 0x09,
     202,  192,   18,   18, 0x09,
     239,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqSpreadSheetView[] = {
    "pqSpreadSheetView\0\0repr\0"
    "showing(pqDataRepresentation*)\0"
    "onAddRepresentation(pqRepresentation*)\0"
    "repr,visible\0"
    "updateRepresentationVisibility(pqRepresentation*,bool)\0"
    "onBeginRender()\0onEndRender()\0selSource\0"
    "onCreateSelection(vtkSMSourceProxy*)\0"
    "onSelectionOnly()\0"
};

void pqSpreadSheetView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSpreadSheetView *_t = static_cast<pqSpreadSheetView *>(_o);
        switch (_id) {
        case 0: _t->showing((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 1: _t->onAddRepresentation((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 2: _t->updateRepresentationVisibility((*reinterpret_cast< pqRepresentation*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->onBeginRender(); break;
        case 4: _t->onEndRender(); break;
        case 5: _t->onCreateSelection((*reinterpret_cast< vtkSMSourceProxy*(*)>(_a[1]))); break;
        case 6: _t->onSelectionOnly(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSpreadSheetView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSpreadSheetView::staticMetaObject = {
    { &pqView::staticMetaObject, qt_meta_stringdata_pqSpreadSheetView,
      qt_meta_data_pqSpreadSheetView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSpreadSheetView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSpreadSheetView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSpreadSheetView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetView))
        return static_cast<void*>(const_cast< pqSpreadSheetView*>(this));
    return pqView::qt_metacast(_clname);
}

int pqSpreadSheetView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqView::qt_metacall(_c, _id, _a);
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
void pqSpreadSheetView::showing(pqDataRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
