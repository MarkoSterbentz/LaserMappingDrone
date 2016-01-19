/****************************************************************************
** Meta object code from reading C++ file 'pqBoxWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqBoxWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqBoxWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqBoxWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x08,
      53,   12,   12,   12, 0x08,
      67,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqBoxWidget[] = {
    "pqBoxWidget\0\0visible\0"
    "onWidgetVisibilityChanged(bool)\0"
    "showHandles()\0hideHandles()\0"
};

void pqBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqBoxWidget *_t = static_cast<pqBoxWidget *>(_o);
        switch (_id) {
        case 0: _t->onWidgetVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showHandles(); break;
        case 2: _t->hideHandles(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqBoxWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqBoxWidget::staticMetaObject = {
    { &pq3DWidget::staticMetaObject, qt_meta_stringdata_pqBoxWidget,
      qt_meta_data_pqBoxWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqBoxWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqBoxWidget))
        return static_cast<void*>(const_cast< pqBoxWidget*>(this));
    return pq3DWidget::qt_metacast(_clname);
}

int pqBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pq3DWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
