/****************************************************************************
** Meta object code from reading C++ file 'pqMacroReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqMacroReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMacroReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqMacroReaction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqMacroReaction[] = {
    "pqMacroReaction\0\0enable(bool)\0"
};

void pqMacroReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqMacroReaction *_t = static_cast<pqMacroReaction *>(_o);
        switch (_id) {
        case 0: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqMacroReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqMacroReaction::staticMetaObject = {
    { &pqMasterOnlyReaction::staticMetaObject, qt_meta_stringdata_pqMacroReaction,
      qt_meta_data_pqMacroReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqMacroReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqMacroReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqMacroReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqMacroReaction))
        return static_cast<void*>(const_cast< pqMacroReaction*>(this));
    return pqMasterOnlyReaction::qt_metacast(_clname);
}

int pqMacroReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqMasterOnlyReaction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
