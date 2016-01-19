/****************************************************************************
** Meta object code from reading C++ file 'pqSetBreakpointDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSetBreakpointDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSetBreakpointDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSetBreakpointDialog[] = {

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
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   22,   22,   22, 0x09,
      52,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqSetBreakpointDialog[] = {
    "pqSetBreakpointDialog\0\0breakpointHit()\0"
    "onAccepted()\0onTimeUpdated()\0"
};

void pqSetBreakpointDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSetBreakpointDialog *_t = static_cast<pqSetBreakpointDialog *>(_o);
        switch (_id) {
        case 0: _t->breakpointHit(); break;
        case 1: _t->onAccepted(); break;
        case 2: _t->onTimeUpdated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqSetBreakpointDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSetBreakpointDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqSetBreakpointDialog,
      qt_meta_data_pqSetBreakpointDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSetBreakpointDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSetBreakpointDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSetBreakpointDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSetBreakpointDialog))
        return static_cast<void*>(const_cast< pqSetBreakpointDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqSetBreakpointDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void pqSetBreakpointDialog::breakpointHit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
