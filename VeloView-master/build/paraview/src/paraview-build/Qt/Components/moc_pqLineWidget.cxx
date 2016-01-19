/****************************************************************************
** Meta object code from reading C++ file 'pqLineWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqLineWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLineWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqLineWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      24,   13,   13,   13, 0x0a,
      34,   13,   13,   13, 0x0a,
      52,   44,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqLineWidget[] = {
    "pqLineWidget\0\0onXAxis()\0onYAxis()\0"
    "onZAxis()\0visible\0onWidgetVisibilityChanged(bool)\0"
};

void pqLineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqLineWidget *_t = static_cast<pqLineWidget *>(_o);
        switch (_id) {
        case 0: _t->onXAxis(); break;
        case 1: _t->onYAxis(); break;
        case 2: _t->onZAxis(); break;
        case 3: _t->onWidgetVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqLineWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqLineWidget::staticMetaObject = {
    { &pq3DWidget::staticMetaObject, qt_meta_stringdata_pqLineWidget,
      qt_meta_data_pqLineWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqLineWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqLineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqLineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqLineWidget))
        return static_cast<void*>(const_cast< pqLineWidget*>(this));
    return pq3DWidget::qt_metacast(_clname);
}

int pqLineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pq3DWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
