/****************************************************************************
** Meta object code from reading C++ file 'pqTextureSelectorPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqTextureSelectorPropertyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTextureSelectorPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTextureSelectorPropertyWidget[] = {

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
      38,   33,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqTextureSelectorPropertyWidget[] = {
    "pqTextureSelectorPropertyWidget\0\0view\0"
    "handleViewChanged(pqView*)\0"
};

void pqTextureSelectorPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTextureSelectorPropertyWidget *_t = static_cast<pqTextureSelectorPropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->handleViewChanged((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTextureSelectorPropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTextureSelectorPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqTextureSelectorPropertyWidget,
      qt_meta_data_pqTextureSelectorPropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTextureSelectorPropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTextureSelectorPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTextureSelectorPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTextureSelectorPropertyWidget))
        return static_cast<void*>(const_cast< pqTextureSelectorPropertyWidget*>(this));
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqTextureSelectorPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
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
