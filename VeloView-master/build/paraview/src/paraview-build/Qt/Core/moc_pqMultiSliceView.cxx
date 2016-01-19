/****************************************************************************
** Meta object code from reading C++ file 'pqMultiSliceView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqMultiSliceView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMultiSliceView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqMultiSliceView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      78,   34,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,   17,   17,   17, 0x0a,
     126,   17,   17,   17, 0x08,
     167,  145,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqMultiSliceView[] = {
    "pqMultiSliceView\0\0slicesChanged()\0"
    "axisIndex,sliceOffsetOnAxis,button,modifier\0"
    "sliceClicked(int,double,int,int)\0"
    "updateSlices()\0updateAxisBounds()\0"
    "button,modifier,value\0"
    "onSliceClicked(int,int,double)\0"
};

void pqMultiSliceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqMultiSliceView *_t = static_cast<pqMultiSliceView *>(_o);
        switch (_id) {
        case 0: _t->slicesChanged(); break;
        case 1: _t->sliceClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->updateSlices(); break;
        case 3: _t->updateAxisBounds(); break;
        case 4: _t->onSliceClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqMultiSliceView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqMultiSliceView::staticMetaObject = {
    { &pqRenderView::staticMetaObject, qt_meta_stringdata_pqMultiSliceView,
      qt_meta_data_pqMultiSliceView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqMultiSliceView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqMultiSliceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqMultiSliceView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqMultiSliceView))
        return static_cast<void*>(const_cast< pqMultiSliceView*>(this));
    return pqRenderView::qt_metacast(_clname);
}

int pqMultiSliceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqRenderView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void pqMultiSliceView::slicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqMultiSliceView::sliceClicked(int _t1, double _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
