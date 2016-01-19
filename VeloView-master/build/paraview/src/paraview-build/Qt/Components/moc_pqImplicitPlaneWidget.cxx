/****************************************************************************
** Meta object code from reading C++ file 'pqImplicitPlaneWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqImplicitPlaneWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqImplicitPlaneWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqImplicitPlaneWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      44,   37,   22,   22, 0x0a,
      67,   22,   22,   22, 0x0a,
      76,   22,   22,   22, 0x0a,
      84,   22,   22,   22, 0x0a,
      93,   22,   22,   22, 0x08,
     114,   22,   22,   22, 0x08,
     134,   22,   22,   22, 0x08,
     149,   22,   22,   22, 0x08,
     164,   22,   22,   22, 0x08,
     179,   22,   22,   22, 0x08,
     199,   22,   22,   22, 0x08,
     228,  220,   22,   22, 0x08,
     260,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqImplicitPlaneWidget[] = {
    "pqImplicitPlaneWidget\0\0resetBounds()\0"
    "bounds\0resetBounds(double[6])\0accept()\0"
    "reset()\0select()\0onShow3DWidget(bool)\0"
    "onUseCenterBounds()\0onUseXNormal()\0"
    "onUseYNormal()\0onUseZNormal()\0"
    "onUseCameraNormal()\0onStartInteraction()\0"
    "visible\0onWidgetVisibilityChanged(bool)\0"
    "resetCameraToNormal()\0"
};

void pqImplicitPlaneWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqImplicitPlaneWidget *_t = static_cast<pqImplicitPlaneWidget *>(_o);
        switch (_id) {
        case 0: _t->resetBounds(); break;
        case 1: _t->resetBounds((*reinterpret_cast< double(*)[6]>(_a[1]))); break;
        case 2: _t->accept(); break;
        case 3: _t->reset(); break;
        case 4: _t->select(); break;
        case 5: _t->onShow3DWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onUseCenterBounds(); break;
        case 7: _t->onUseXNormal(); break;
        case 8: _t->onUseYNormal(); break;
        case 9: _t->onUseZNormal(); break;
        case 10: _t->onUseCameraNormal(); break;
        case 11: _t->onStartInteraction(); break;
        case 12: _t->onWidgetVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->resetCameraToNormal(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqImplicitPlaneWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqImplicitPlaneWidget::staticMetaObject = {
    { &pq3DWidget::staticMetaObject, qt_meta_stringdata_pqImplicitPlaneWidget,
      qt_meta_data_pqImplicitPlaneWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqImplicitPlaneWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqImplicitPlaneWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqImplicitPlaneWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqImplicitPlaneWidget))
        return static_cast<void*>(const_cast< pqImplicitPlaneWidget*>(this));
    return pq3DWidget::qt_metacast(_clname);
}

int pqImplicitPlaneWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pq3DWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
