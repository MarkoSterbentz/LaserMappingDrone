/****************************************************************************
** Meta object code from reading C++ file 'pqDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      29,    9,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_pqDialog[] = {
    "pqDialog\0\0beginUndo(QString)\0endUndo()\0"
};

void pqDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDialog *_t = static_cast<pqDialog *>(_o);
        switch (_id) {
        case 0: _t->beginUndo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->endUndo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqDialog,
      qt_meta_data_pqDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDialog))
        return static_cast<void*>(const_cast< pqDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void pqDialog::beginUndo(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqDialog::endUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
