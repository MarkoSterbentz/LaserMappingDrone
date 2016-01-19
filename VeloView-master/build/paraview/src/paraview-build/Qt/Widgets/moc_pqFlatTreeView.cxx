/****************************************************************************
** Meta object code from reading C++ file 'pqFlatTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqFlatTreeView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFlatTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFlatTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,
      45,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   15,   15,   15, 0x0a,
      74,   15,   15,   15, 0x0a,
      86,   16,   15,   15, 0x0a,
     115,   15,   15,   15, 0x0a,
     127,   16,   15,   15, 0x0a,
     147,   16,   15,   15, 0x0a,
     169,   16,   15,   15, 0x0a,
     208,  191,   15,   15, 0x09,
     240,  191,   15,   15, 0x09,
     277,  191,   15,   15, 0x09,
     315,  191,   15,   15, 0x09,
     350,  191,   15,   15, 0x09,
     390,  191,   15,   15, 0x09,
     451,  431,   15,   15, 0x09,
     509,  487,   15,   15, 0x08,
     569,  543,   15,   15, 0x08,
     618,  601,   15,   15, 0x08,
     657,  601,   15,   15, 0x08,
     699,  601,   15,   15, 0x08,
     764,  744,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqFlatTreeView[] = {
    "pqFlatTreeView\0\0index\0activated(QModelIndex)\0"
    "clicked(QModelIndex)\0reset()\0selectAll()\0"
    "setCurrentIndex(QModelIndex)\0expandAll()\0"
    "expand(QModelIndex)\0collapse(QModelIndex)\0"
    "scrollTo(QModelIndex)\0parent,start,end\0"
    "insertRows(QModelIndex,int,int)\0"
    "startRowRemoval(QModelIndex,int,int)\0"
    "finishRowRemoval(QModelIndex,int,int)\0"
    "insertColumns(QModelIndex,int,int)\0"
    "startColumnRemoval(QModelIndex,int,int)\0"
    "finishColumnRemoval(QModelIndex,int,int)\0"
    "topLeft,bottomRight\0"
    "updateData(QModelIndex,QModelIndex)\0"
    "index,oldSize,newSize\0"
    "handleSectionResized(int,int,int)\0"
    "index,oldVisual,newVisual\0"
    "handleSectionMoved(int,int,int)\0"
    "current,previous\0"
    "changeCurrent(QModelIndex,QModelIndex)\0"
    "changeCurrentRow(QModelIndex,QModelIndex)\0"
    "changeCurrentColumn(QModelIndex,QModelIndex)\0"
    "selected,deselected\0"
    "changeSelection(QItemSelection,QItemSelection)\0"
};

void pqFlatTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFlatTreeView *_t = static_cast<pqFlatTreeView *>(_o);
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->reset(); break;
        case 3: _t->selectAll(); break;
        case 4: _t->setCurrentIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->expandAll(); break;
        case 6: _t->expand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->collapse((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->scrollTo((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->insertRows((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->startRowRemoval((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->finishRowRemoval((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->insertColumns((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->startColumnRemoval((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->finishColumnRemoval((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->updateData((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 16: _t->handleSectionResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->handleSectionMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->changeCurrent((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 19: _t->changeCurrentRow((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 20: _t->changeCurrentColumn((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 21: _t->changeSelection((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFlatTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFlatTreeView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_pqFlatTreeView,
      qt_meta_data_pqFlatTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFlatTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFlatTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFlatTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFlatTreeView))
        return static_cast<void*>(const_cast< pqFlatTreeView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int pqFlatTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void pqFlatTreeView::activated(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqFlatTreeView::clicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
