/****************************************************************************
** Meta object code from reading C++ file 'pqReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqReaction[] = {

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
      12,   11,   11,   11, 0x09,
      26,   11,   11,   11, 0x09,
      46,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqReaction[] = {
    "pqReaction\0\0onTriggered()\0updateEnableState()\0"
    "updateMasterEnableState(bool)\0"
};

void pqReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqReaction *_t = static_cast<pqReaction *>(_o);
        switch (_id) {
        case 0: _t->onTriggered(); break;
        case 1: _t->updateEnableState(); break;
        case 2: _t->updateMasterEnableState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqReaction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqReaction,
      qt_meta_data_pqReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqReaction))
        return static_cast<void*>(const_cast< pqReaction*>(this));
    return QObject::qt_metacast(_clname);
}

int pqReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
