/****************************************************************************
** Meta object code from reading C++ file 'pqPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqPropertyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPropertyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x05,
      44,   17,   17,   17, 0x05,
      62,   17,   17,   17, 0x05,
      79,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   17,   17,   17, 0x0a,
     114,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqPropertyWidget[] = {
    "pqPropertyWidget\0\0view\0viewChanged(pqView*)\0"
    "changeAvailable()\0changeFinished()\0"
    "restartRequired()\0setView(pqView*)\0"
    "onChangeAvailable()\0"
};

void pqPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPropertyWidget *_t = static_cast<pqPropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->viewChanged((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 1: _t->changeAvailable(); break;
        case 2: _t->changeFinished(); break;
        case 3: _t->restartRequired(); break;
        case 4: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 5: _t->onChangeAvailable(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPropertyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqPropertyWidget,
      qt_meta_data_pqPropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPropertyWidget))
        return static_cast<void*>(const_cast< pqPropertyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void pqPropertyWidget::viewChanged(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqPropertyWidget::changeAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqPropertyWidget::changeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pqPropertyWidget::restartRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
