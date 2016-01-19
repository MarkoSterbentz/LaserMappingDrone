/****************************************************************************
** Meta object code from reading C++ file 'pqAutoApplyReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqAutoApplyReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAutoApplyReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAutoApplyReaction[] = {

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
      35,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqAutoApplyReaction[] = {
    "pqAutoApplyReaction\0\0updateState()\0"
    "checkStateChanged(bool)\0"
};

void pqAutoApplyReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAutoApplyReaction *_t = static_cast<pqAutoApplyReaction *>(_o);
        switch (_id) {
        case 0: _t->updateState(); break;
        case 1: _t->checkStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAutoApplyReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAutoApplyReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqAutoApplyReaction,
      qt_meta_data_pqAutoApplyReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAutoApplyReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAutoApplyReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAutoApplyReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAutoApplyReaction))
        return static_cast<void*>(const_cast< pqAutoApplyReaction*>(this));
    return pqReaction::qt_metacast(_clname);
}

int pqAutoApplyReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
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
