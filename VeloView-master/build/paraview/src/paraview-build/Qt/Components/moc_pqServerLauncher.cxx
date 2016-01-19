/****************************************************************************
** Meta object code from reading C++ file 'pqServerLauncher.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqServerLauncher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServerLauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqServerLauncher[] = {

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
      18,   17,   17,   17, 0x09,
      56,   17,   17,   17, 0x09,
      77,   17,   17,   17, 0x09,
      97,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqServerLauncher[] = {
    "pqServerLauncher\0\0"
    "processFailed(QProcess::ProcessError)\0"
    "readStandardOutput()\0readStandardError()\0"
    "launchServerForReverseConnection()\0"
};

void pqServerLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqServerLauncher *_t = static_cast<pqServerLauncher *>(_o);
        switch (_id) {
        case 0: _t->processFailed((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 1: _t->readStandardOutput(); break;
        case 2: _t->readStandardError(); break;
        case 3: _t->launchServerForReverseConnection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqServerLauncher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqServerLauncher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqServerLauncher,
      qt_meta_data_pqServerLauncher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqServerLauncher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqServerLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqServerLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqServerLauncher))
        return static_cast<void*>(const_cast< pqServerLauncher*>(this));
    return QObject::qt_metacast(_clname);
}

int pqServerLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
