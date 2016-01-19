/****************************************************************************
** Meta object code from reading C++ file 'pqMultiBlockInspectorPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqMultiBlockInspectorPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMultiBlockInspectorPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqMultiBlockInspectorPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   28,   27,   27, 0x0a,
      77,   62,   27,   27, 0x0a,
     114,   27,   27,   27, 0x0a,
     148,  134,   27,   27, 0x0a,
     184,  178,   27,   27, 0x0a,
     227,  211,   27,   27, 0x0a,
     272,  264,   27,   27, 0x0a,
     318,  306,   27,   27, 0x0a,
     345,  178,   27,   27, 0x0a,
     381,  367,   27,   27, 0x0a,
     415,  264,   27,   27, 0x0a,
     458,  444,   27,   27, 0x0a,
     487,  178,   27,   27, 0x0a,
     527,  511,   27,   27, 0x0a,
     563,  264,   27,   27, 0x0a,
     594,  178,   27,   27, 0x0a,
     625,  264,   27,   27, 0x0a,
     663,  178,   27,   27, 0x0a,
     683,  264,   27,   27, 0x0a,
     711,   27,   27,   27, 0x0a,
     731,  727,   27,   27, 0x08,
     788,  776,   27,   27, 0x08,
     827,   27,   27,   27, 0x08,
     896,  863,   27,   27, 0x08,
     990,   28,   27,   27, 0x08,
    1029,   27,   27,   27, 0x08,
    1063,   27,   27,   27, 0x08,
    1089,   27,   27,   27, 0x08,
    1109,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqMultiBlockInspectorPanel[] = {
    "pqMultiBlockInspectorPanel\0\0port\0"
    "setOutputPort(pqOutputPort*)\0"
    "representation\0setRepresentation(pqRepresentation*)\0"
    "updateInformation()\0index,visible\0"
    "setBlockVisibility(uint,bool)\0index\0"
    "clearBlockVisibility(uint)\0indices,visible\0"
    "setBlockVisibility(QList<uint>,bool)\0"
    "indices\0clearBlockVisibility(QList<uint>)\0"
    "index,color\0setBlockColor(uint,QColor)\0"
    "clearBlockColor(uint)\0indices,color\0"
    "setBlockColor(QList<uint>,QColor)\0"
    "clearBlockColor(QList<uint>)\0index,opacity\0"
    "setBlockOpacity(uint,double)\0"
    "clearBlockOpacity(uint)\0indices,opacity\0"
    "setBlockOpacity(QList<uint>,double)\0"
    "clearBlockOpacity(QList<uint>)\0"
    "promptAndSetBlockOpacity(uint)\0"
    "promptAndSetBlockOpacity(QList<uint>)\0"
    "showOnlyBlock(uint)\0showOnlyBlocks(QList<uint>)\0"
    "showAllBlocks()\0pos\0"
    "treeWidgetCustomContextMenuRequested(QPoint)\0"
    "item,column\0blockItemChanged(QTreeWidgetItem*,int)\0"
    "updateTreeWidgetBlockVisibilities()\0"
    "iter,parent,flatIndex,visibility\0"
    "updateTreeWidgetBlockVisibilities(vtkPVCompositeDataInformation*,QTree"
    "WidgetItem*,uint&,bool)\0"
    "currentSelectionChanged(pqOutputPort*)\0"
    "currentTreeItemSelectionChanged()\0"
    "updateBlockVisibilities()\0updateBlockColors()\0"
    "updateBlockOpacities()\0"
};

void pqMultiBlockInspectorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqMultiBlockInspectorPanel *_t = static_cast<pqMultiBlockInspectorPanel *>(_o);
        switch (_id) {
        case 0: _t->setOutputPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->setRepresentation((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 2: _t->updateInformation(); break;
        case 3: _t->setBlockVisibility((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->clearBlockVisibility((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->setBlockVisibility((*reinterpret_cast< const QList<uint>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->clearBlockVisibility((*reinterpret_cast< const QList<uint>(*)>(_a[1]))); break;
        case 7: _t->setBlockColor((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 8: _t->clearBlockColor((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->setBlockColor((*reinterpret_cast< const QList<uint>(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 10: _t->clearBlockColor((*reinterpret_cast< const QList<uint>(*)>(_a[1]))); break;
        case 11: _t->setBlockOpacity((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->clearBlockOpacity((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->setBlockOpacity((*reinterpret_cast< const QList<uint>(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->clearBlockOpacity((*reinterpret_cast< const QList<uint>(*)>(_a[1]))); break;
        case 15: _t->promptAndSetBlockOpacity((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 16: _t->promptAndSetBlockOpacity((*reinterpret_cast< const QList<uint>(*)>(_a[1]))); break;
        case 17: _t->showOnlyBlock((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 18: _t->showOnlyBlocks((*reinterpret_cast< const QList<uint>(*)>(_a[1]))); break;
        case 19: _t->showAllBlocks(); break;
        case 20: _t->treeWidgetCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 21: _t->blockItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->updateTreeWidgetBlockVisibilities(); break;
        case 23: _t->updateTreeWidgetBlockVisibilities((*reinterpret_cast< vtkPVCompositeDataInformation*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 24: _t->currentSelectionChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 25: _t->currentTreeItemSelectionChanged(); break;
        case 26: _t->updateBlockVisibilities(); break;
        case 27: _t->updateBlockColors(); break;
        case 28: _t->updateBlockOpacities(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqMultiBlockInspectorPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqMultiBlockInspectorPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqMultiBlockInspectorPanel,
      qt_meta_data_pqMultiBlockInspectorPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqMultiBlockInspectorPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqMultiBlockInspectorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqMultiBlockInspectorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqMultiBlockInspectorPanel))
        return static_cast<void*>(const_cast< pqMultiBlockInspectorPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqMultiBlockInspectorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
