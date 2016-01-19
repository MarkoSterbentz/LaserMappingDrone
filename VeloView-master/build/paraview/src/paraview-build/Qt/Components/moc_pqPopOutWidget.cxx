/****************************************************************************
** Meta object code from reading C++ file 'pqPopOutWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqPopOutWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPopOutWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPopOutWidget[] = {

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
      16,   15,   15,   15, 0x09,
      39,   15,   15,   15, 0x09,
      60,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPopOutWidget[] = {
    "pqPopOutWidget\0\0toggleWidgetLocation()\0"
    "moveWidgetToDialog()\0moveWidgetBackToParent()\0"
};

void pqPopOutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPopOutWidget *_t = static_cast<pqPopOutWidget *>(_o);
        switch (_id) {
        case 0: _t->toggleWidgetLocation(); break;
        case 1: _t->moveWidgetToDialog(); break;
        case 2: _t->moveWidgetBackToParent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqPopOutWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPopOutWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqPopOutWidget,
      qt_meta_data_pqPopOutWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPopOutWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPopOutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPopOutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPopOutWidget))
        return static_cast<void*>(const_cast< pqPopOutWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqPopOutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
