/****************************************************************************
** Meta object code from reading C++ file 'pqUndoStack.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqUndoStack.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqUndoStack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqUndoStack[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      49,   13,   12,   12, 0x05,
      89,   12,   12,   12, 0x05,
     110,   12,   12,   12, 0x05,
     131,   12,   12,   12, 0x05,
     157,   12,   12,   12, 0x05,
     183,   12,   12,   12, 0x05,
     192,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     207,  201,   12,   12, 0x0a,
     229,   12,   12,   12, 0x0a,
     242,   12,   12,   12, 0x0a,
     249,   12,   12,   12, 0x0a,
     256,   12,   12,   12, 0x0a,
     264,   12,   12,   12, 0x0a,
     290,   12,   12,   12, 0x0a,
     322,  314,   12,   12, 0x0a,
     358,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqUndoStack[] = {
    "pqUndoStack\0\0canUndo,undoLabel,canRedo,redoLabel\0"
    "stackChanged(bool,QString,bool,QString)\0"
    "canUndoChanged(bool)\0canRedoChanged(bool)\0"
    "undoLabelChanged(QString)\0"
    "redoLabelChanged(QString)\0undone()\0"
    "redone()\0label\0beginUndoSet(QString)\0"
    "endUndoSet()\0undo()\0redo()\0clear()\0"
    "beginNonUndoableChanges()\0"
    "endNonUndoableChanges()\0element\0"
    "addToActiveUndoSet(vtkUndoElement*)\0"
    "onStackChanged()\0"
};

void pqUndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqUndoStack *_t = static_cast<pqUndoStack *>(_o);
        switch (_id) {
        case 0: _t->stackChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->undoLabelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->redoLabelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->undone(); break;
        case 6: _t->redone(); break;
        case 7: _t->beginUndoSet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->endUndoSet(); break;
        case 9: _t->undo(); break;
        case 10: _t->redo(); break;
        case 11: _t->clear(); break;
        case 12: _t->beginNonUndoableChanges(); break;
        case 13: _t->endNonUndoableChanges(); break;
        case 14: _t->addToActiveUndoSet((*reinterpret_cast< vtkUndoElement*(*)>(_a[1]))); break;
        case 15: _t->onStackChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqUndoStack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqUndoStack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqUndoStack,
      qt_meta_data_pqUndoStack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqUndoStack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqUndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqUndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqUndoStack))
        return static_cast<void*>(const_cast< pqUndoStack*>(this));
    return QObject::qt_metacast(_clname);
}

int pqUndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void pqUndoStack::stackChanged(bool _t1, QString _t2, bool _t3, QString _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqUndoStack::canUndoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqUndoStack::canRedoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqUndoStack::undoLabelChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqUndoStack::redoLabelChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqUndoStack::undone()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void pqUndoStack::redone()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
