/****************************************************************************
** Meta object code from reading C++ file 'pqTreeWidgetSelectionHelper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqTreeWidgetSelectionHelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTreeWidgetSelectionHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTreeWidgetSelectionHelper[] = {

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
      41,   29,   28,   28, 0x09,
      77,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqTreeWidgetSelectionHelper[] = {
    "pqTreeWidgetSelectionHelper\0\0item,column\0"
    "onItemPressed(QTreeWidgetItem*,int)\0"
    "showContextMenu(QPoint)\0"
};

void pqTreeWidgetSelectionHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTreeWidgetSelectionHelper *_t = static_cast<pqTreeWidgetSelectionHelper *>(_o);
        switch (_id) {
        case 0: _t->onItemPressed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTreeWidgetSelectionHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTreeWidgetSelectionHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqTreeWidgetSelectionHelper,
      qt_meta_data_pqTreeWidgetSelectionHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTreeWidgetSelectionHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTreeWidgetSelectionHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTreeWidgetSelectionHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTreeWidgetSelectionHelper))
        return static_cast<void*>(const_cast< pqTreeWidgetSelectionHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int pqTreeWidgetSelectionHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
