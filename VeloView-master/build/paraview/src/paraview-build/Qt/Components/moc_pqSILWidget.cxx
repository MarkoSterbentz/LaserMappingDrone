/****************************************************************************
** Meta object code from reading C++ file 'pqSILWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSILWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSILWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSILWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x09,
      28,   12,   12,   12, 0x09,
      50,   12,   12,   12, 0x09,
      82,   74,   12,   12, 0x09,
     109,   12,   12,   12, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_pqSILWidget[] = {
    "pqSILWidget\0\0onModelReset()\0"
    "checkSelectedBlocks()\0uncheckSelectedBlocks()\0"
    "checked\0toggleSelectedBlocks(bool)\0"
    "toggleSelectedBlocks()\0"
};

void pqSILWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSILWidget *_t = static_cast<pqSILWidget *>(_o);
        switch (_id) {
        case 0: _t->onModelReset(); break;
        case 1: _t->checkSelectedBlocks(); break;
        case 2: _t->uncheckSelectedBlocks(); break;
        case 3: _t->toggleSelectedBlocks((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->toggleSelectedBlocks(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSILWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSILWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqSILWidget,
      qt_meta_data_pqSILWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSILWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSILWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSILWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSILWidget))
        return static_cast<void*>(const_cast< pqSILWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqSILWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
