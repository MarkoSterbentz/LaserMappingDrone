/****************************************************************************
** Meta object code from reading C++ file 'pqChangeInputDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqChangeInputDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqChangeInputDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqChangeInputDialog[] = {

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
      44,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqChangeInputDialog[] = {
    "pqChangeInputDialog\0\0inputPortToggled(bool)\0"
    "selectionChanged()\0"
};

void pqChangeInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqChangeInputDialog *_t = static_cast<pqChangeInputDialog *>(_o);
        switch (_id) {
        case 0: _t->inputPortToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqChangeInputDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqChangeInputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqChangeInputDialog,
      qt_meta_data_pqChangeInputDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqChangeInputDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqChangeInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqChangeInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqChangeInputDialog))
        return static_cast<void*>(const_cast< pqChangeInputDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqChangeInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
