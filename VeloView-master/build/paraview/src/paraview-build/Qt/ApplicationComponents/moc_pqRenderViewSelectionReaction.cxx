/****************************************************************************
** Meta object code from reading C++ file 'pqRenderViewSelectionReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqRenderViewSelectionReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRenderViewSelectionReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqRenderViewSelectionReaction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      51,   31,   30,   30, 0x05,
      93,   86,   30,   30, 0x05,
     133,  125,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     173,  169,   30,   30, 0x08,
     200,  195,   30,   30, 0x08,
     217,   30,   30,   30, 0x08,
     234,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqRenderViewSelectionReaction[] = {
    "pqRenderViewSelectionReaction\0\0"
    "xmin,ymin,xmax,ymax\0"
    "selectedCustomBox(int,int,int,int)\0"
    "region\0selectedCustomBox(const int[4])\0"
    "polygon\0selectedCustomPolygon(vtkIntArray*)\0"
    "val\0actionTriggered(bool)\0view\0"
    "setView(pqView*)\0beginSelection()\0"
    "endSelection()\0"
};

void pqRenderViewSelectionReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqRenderViewSelectionReaction *_t = static_cast<pqRenderViewSelectionReaction *>(_o);
        switch (_id) {
        case 0: _t->selectedCustomBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->selectedCustomBox((*reinterpret_cast< const int(*)[4]>(_a[1]))); break;
        case 2: _t->selectedCustomPolygon((*reinterpret_cast< vtkIntArray*(*)>(_a[1]))); break;
        case 3: _t->actionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 5: _t->beginSelection(); break;
        case 6: _t->endSelection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqRenderViewSelectionReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqRenderViewSelectionReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqRenderViewSelectionReaction,
      qt_meta_data_pqRenderViewSelectionReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqRenderViewSelectionReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqRenderViewSelectionReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqRenderViewSelectionReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqRenderViewSelectionReaction))
        return static_cast<void*>(const_cast< pqRenderViewSelectionReaction*>(this));
    return pqReaction::qt_metacast(_clname);
}

int pqRenderViewSelectionReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqRenderViewSelectionReaction::selectedCustomBox(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqRenderViewSelectionReaction::selectedCustomBox(const int _t1[4])
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqRenderViewSelectionReaction::selectedCustomPolygon(vtkIntArray * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
