/****************************************************************************
** Meta object code from reading C++ file 'pqHandleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqHandleWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqHandleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqHandleWidget[] = {

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
      24,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqHandleWidget[] = {
    "pqHandleWidget\0\0visible\0"
    "onWidgetVisibilityChanged(bool)\0"
};

void pqHandleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqHandleWidget *_t = static_cast<pqHandleWidget *>(_o);
        switch (_id) {
        case 0: _t->onWidgetVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqHandleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqHandleWidget::staticMetaObject = {
    { &pq3DWidget::staticMetaObject, qt_meta_stringdata_pqHandleWidget,
      qt_meta_data_pqHandleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqHandleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqHandleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqHandleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqHandleWidget))
        return static_cast<void*>(const_cast< pqHandleWidget*>(this));
    return pq3DWidget::qt_metacast(_clname);
}

int pqHandleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pq3DWidget::qt_metacall(_c, _id, _a);
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
