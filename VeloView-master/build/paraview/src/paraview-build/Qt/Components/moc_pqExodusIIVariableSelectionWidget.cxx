/****************************************************************************
** Meta object code from reading C++ file 'pqExodusIIVariableSelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqExodusIIVariableSelectionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqExodusIIVariableSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqExodusIIVariableSelectionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   34,   34,   34, 0x09,
      81,   69,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqExodusIIVariableSelectionWidget[] = {
    "pqExodusIIVariableSelectionWidget\0\0"
    "widgetModified()\0updateProperty()\0"
    "check_state\0delayedUpdateProperty(bool)\0"
};

void pqExodusIIVariableSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqExodusIIVariableSelectionWidget *_t = static_cast<pqExodusIIVariableSelectionWidget *>(_o);
        switch (_id) {
        case 0: _t->widgetModified(); break;
        case 1: _t->updateProperty(); break;
        case 2: _t->delayedUpdateProperty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqExodusIIVariableSelectionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqExodusIIVariableSelectionWidget::staticMetaObject = {
    { &pqTreeWidget::staticMetaObject, qt_meta_stringdata_pqExodusIIVariableSelectionWidget,
      qt_meta_data_pqExodusIIVariableSelectionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqExodusIIVariableSelectionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqExodusIIVariableSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqExodusIIVariableSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqExodusIIVariableSelectionWidget))
        return static_cast<void*>(const_cast< pqExodusIIVariableSelectionWidget*>(this));
    return pqTreeWidget::qt_metacast(_clname);
}

int pqExodusIIVariableSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void pqExodusIIVariableSelectionWidget::widgetModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
