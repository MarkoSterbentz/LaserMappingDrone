/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineContextMenuBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqPipelineContextMenuBehavior.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineContextMenuBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPipelineContextMenuBehavior[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x09,
      52,   30,   30,   30, 0x09,
      59,   30,   30,   30, 0x09,
      71,   30,   30,   30, 0x09,
      87,   30,   30,   30, 0x09,
     103,   30,   30,   30, 0x09,
     126,   30,   30,   30, 0x09,
     142,   30,   30,   30, 0x09,
     160,   30,   30,   30, 0x09,
     178,   30,   30,   30, 0x09,
     205,  198,   30,   30, 0x09,
     231,  198,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPipelineContextMenuBehavior[] = {
    "pqPipelineContextMenuBehavior\0\0"
    "onViewAdded(pqView*)\0hide()\0hideBlock()\0"
    "showOnlyBlock()\0showAllBlocks()\0"
    "unsetBlockVisibility()\0setBlockColor()\0"
    "unsetBlockColor()\0setBlockOpacity()\0"
    "unsetBlockOpacity()\0action\0"
    "reprTypeChanged(QAction*)\0"
    "colorMenuTriggered(QAction*)\0"
};

void pqPipelineContextMenuBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPipelineContextMenuBehavior *_t = static_cast<pqPipelineContextMenuBehavior *>(_o);
        switch (_id) {
        case 0: _t->onViewAdded((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 1: _t->hide(); break;
        case 2: _t->hideBlock(); break;
        case 3: _t->showOnlyBlock(); break;
        case 4: _t->showAllBlocks(); break;
        case 5: _t->unsetBlockVisibility(); break;
        case 6: _t->setBlockColor(); break;
        case 7: _t->unsetBlockColor(); break;
        case 8: _t->setBlockOpacity(); break;
        case 9: _t->unsetBlockOpacity(); break;
        case 10: _t->reprTypeChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->colorMenuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPipelineContextMenuBehavior::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPipelineContextMenuBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPipelineContextMenuBehavior,
      qt_meta_data_pqPipelineContextMenuBehavior, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPipelineContextMenuBehavior::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPipelineContextMenuBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPipelineContextMenuBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineContextMenuBehavior))
        return static_cast<void*>(const_cast< pqPipelineContextMenuBehavior*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPipelineContextMenuBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
