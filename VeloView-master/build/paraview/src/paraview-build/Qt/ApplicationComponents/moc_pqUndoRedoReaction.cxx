/****************************************************************************
** Meta object code from reading C++ file 'pqUndoRedoReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqUndoRedoReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqUndoRedoReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqUndoRedoReaction[] = {

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
      20,   19,   19,   19, 0x09,
      39,   33,   19,   19, 0x09,
      57,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqUndoRedoReaction[] = {
    "pqUndoRedoReaction\0\0enable(bool)\0label\0"
    "setLabel(QString)\0setUndoStack(pqUndoStack*)\0"
};

void pqUndoRedoReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqUndoRedoReaction *_t = static_cast<pqUndoRedoReaction *>(_o);
        switch (_id) {
        case 0: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setUndoStack((*reinterpret_cast< pqUndoStack*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqUndoRedoReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqUndoRedoReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqUndoRedoReaction,
      qt_meta_data_pqUndoRedoReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqUndoRedoReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqUndoRedoReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqUndoRedoReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqUndoRedoReaction))
        return static_cast<void*>(const_cast< pqUndoRedoReaction*>(this));
    return pqReaction::qt_metacast(_clname);
}

int pqUndoRedoReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
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
