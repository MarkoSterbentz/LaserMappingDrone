/****************************************************************************
** Meta object code from reading C++ file 'pqSelectionAdaptor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSelectionAdaptor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSelectionAdaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSelectionAdaptor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,
      39,   19,   19,   19, 0x09,
      61,   19,   19,   19, 0x09,
     120,   19,   85,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqSelectionAdaptor[] = {
    "pqSelectionAdaptor\0\0selectionChanged()\0"
    "currentProxyChanged()\0proxySelectionChanged()\0"
    "QItemSelectionModel::SelectionFlag\0"
    "qtSelectionFlags()\0"
};

void pqSelectionAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSelectionAdaptor *_t = static_cast<pqSelectionAdaptor *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->currentProxyChanged(); break;
        case 2: _t->proxySelectionChanged(); break;
        case 3: { QItemSelectionModel::SelectionFlag _r = _t->qtSelectionFlags();
            if (_a[0]) *reinterpret_cast< QItemSelectionModel::SelectionFlag*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSelectionAdaptor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSelectionAdaptor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSelectionAdaptor,
      qt_meta_data_pqSelectionAdaptor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSelectionAdaptor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSelectionAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSelectionAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSelectionAdaptor))
        return static_cast<void*>(const_cast< pqSelectionAdaptor*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSelectionAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
