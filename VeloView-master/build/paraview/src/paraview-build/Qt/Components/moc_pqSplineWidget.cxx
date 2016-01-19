/****************************************************************************
** Meta object code from reading C++ file 'pqSplineWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSplineWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSplineWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSplineWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x09,
      27,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqSplineWidget[] = {
    "pqSplineWidget\0\0addPoint()\0removePoints()\0"
};

void pqSplineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSplineWidget *_t = static_cast<pqSplineWidget *>(_o);
        switch (_id) {
        case 0: _t->addPoint(); break;
        case 1: _t->removePoints(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqSplineWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSplineWidget::staticMetaObject = {
    { &pq3DWidget::staticMetaObject, qt_meta_stringdata_pqSplineWidget,
      qt_meta_data_pqSplineWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSplineWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSplineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSplineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSplineWidget))
        return static_cast<void*>(const_cast< pqSplineWidget*>(this));
    return pq3DWidget::qt_metacast(_clname);
}

int pqSplineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pq3DWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
