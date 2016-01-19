/****************************************************************************
** Meta object code from reading C++ file 'pqBoxChartView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqBoxChartView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqBoxChartView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqBoxChartView[] = {

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
      21,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   15,   15,   15, 0x0a,
      91,   15,   15,   15, 0x0a,
     146,  133,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqBoxChartView[] = {
    "pqBoxChartView\0\0repr\0"
    "showing(pqDataRepresentation*)\0"
    "onAddRepresentation(pqRepresentation*)\0"
    "onRemoveRepresentation(pqRepresentation*)\0"
    "repr,visible\0"
    "updateRepresentationVisibility(pqRepresentation*,bool)\0"
};

void pqBoxChartView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqBoxChartView *_t = static_cast<pqBoxChartView *>(_o);
        switch (_id) {
        case 0: _t->showing((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 1: _t->onAddRepresentation((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 2: _t->onRemoveRepresentation((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 3: _t->updateRepresentationVisibility((*reinterpret_cast< pqRepresentation*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqBoxChartView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqBoxChartView::staticMetaObject = {
    { &pqContextView::staticMetaObject, qt_meta_stringdata_pqBoxChartView,
      qt_meta_data_pqBoxChartView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqBoxChartView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqBoxChartView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqBoxChartView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqBoxChartView))
        return static_cast<void*>(const_cast< pqBoxChartView*>(this));
    return pqContextView::qt_metacast(_clname);
}

int pqBoxChartView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqContextView::qt_metacall(_c, _id, _a);
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
void pqBoxChartView::showing(pqDataRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
