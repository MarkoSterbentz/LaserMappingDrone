/****************************************************************************
** Meta object code from reading C++ file 'pqQVTKWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqQVTKWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqQVTKWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqQVTKWidget[] = {

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
      18,   14,   13,   13, 0x0a,
      45,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqQVTKWidget[] = {
    "pqQVTKWidget\0\0x,y\0paintMousePointer(int,int)\0"
    "updateSizeProperties()\0"
};

void pqQVTKWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqQVTKWidget *_t = static_cast<pqQVTKWidget *>(_o);
        switch (_id) {
        case 0: _t->paintMousePointer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->updateSizeProperties(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqQVTKWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqQVTKWidget::staticMetaObject = {
    { &QVTKWidget::staticMetaObject, qt_meta_stringdata_pqQVTKWidget,
      qt_meta_data_pqQVTKWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqQVTKWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqQVTKWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqQVTKWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqQVTKWidget))
        return static_cast<void*>(const_cast< pqQVTKWidget*>(this));
    return QVTKWidget::qt_metacast(_clname);
}

int pqQVTKWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVTKWidget::qt_metacall(_c, _id, _a);
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
