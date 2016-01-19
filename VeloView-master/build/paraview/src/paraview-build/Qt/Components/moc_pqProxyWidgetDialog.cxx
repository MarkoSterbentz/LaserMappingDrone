/****************************************************************************
** Meta object code from reading C++ file 'pqProxyWidgetDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqProxyWidgetDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxyWidgetDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxyWidgetDialog[] = {

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
      21,   20,   20,   20, 0x09,
      41,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqProxyWidgetDialog[] = {
    "pqProxyWidgetDialog\0\0onChangeAvailable()\0"
    "onAccepted()\0"
};

void pqProxyWidgetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxyWidgetDialog *_t = static_cast<pqProxyWidgetDialog *>(_o);
        switch (_id) {
        case 0: _t->onChangeAvailable(); break;
        case 1: _t->onAccepted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqProxyWidgetDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxyWidgetDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqProxyWidgetDialog,
      qt_meta_data_pqProxyWidgetDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxyWidgetDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxyWidgetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxyWidgetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxyWidgetDialog))
        return static_cast<void*>(const_cast< pqProxyWidgetDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqProxyWidgetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
