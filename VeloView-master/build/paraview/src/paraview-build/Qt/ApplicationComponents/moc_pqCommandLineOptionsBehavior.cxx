/****************************************************************************
** Meta object code from reading C++ file 'pqCommandLineOptionsBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqCommandLineOptionsBehavior.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCommandLineOptionsBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCommandLineOptionsBehavior[] = {

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
      30,   29,   29,   29, 0x09,
      58,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqCommandLineOptionsBehavior[] = {
    "pqCommandLineOptionsBehavior\0\0"
    "processCommandLineOptions()\0playTests()\0"
};

void pqCommandLineOptionsBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCommandLineOptionsBehavior *_t = static_cast<pqCommandLineOptionsBehavior *>(_o);
        switch (_id) {
        case 0: _t->processCommandLineOptions(); break;
        case 1: _t->playTests(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqCommandLineOptionsBehavior::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCommandLineOptionsBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqCommandLineOptionsBehavior,
      qt_meta_data_pqCommandLineOptionsBehavior, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCommandLineOptionsBehavior::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCommandLineOptionsBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCommandLineOptionsBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCommandLineOptionsBehavior))
        return static_cast<void*>(const_cast< pqCommandLineOptionsBehavior*>(this));
    return QObject::qt_metacast(_clname);
}

int pqCommandLineOptionsBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
