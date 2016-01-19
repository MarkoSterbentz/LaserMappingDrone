/****************************************************************************
** Meta object code from reading C++ file 'pqTreeViewSelectionHelper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqTreeViewSelectionHelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTreeViewSelectionHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTreeViewSelectionHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   27,   26,   26, 0x09,
      54,   27,   26,   26, 0x09,
      77,   26,   26,   26, 0x09,
     101,   26,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqTreeViewSelectionHelper[] = {
    "pqTreeViewSelectionHelper\0\0idx\0"
    "onClicked(QModelIndex)\0onPressed(QModelIndex)\0"
    "showContextMenu(QPoint)\0saveSelection()\0"
};

void pqTreeViewSelectionHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTreeViewSelectionHelper *_t = static_cast<pqTreeViewSelectionHelper *>(_o);
        switch (_id) {
        case 0: _t->onClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onPressed((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->saveSelection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTreeViewSelectionHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTreeViewSelectionHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqTreeViewSelectionHelper,
      qt_meta_data_pqTreeViewSelectionHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTreeViewSelectionHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTreeViewSelectionHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTreeViewSelectionHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTreeViewSelectionHelper))
        return static_cast<void*>(const_cast< pqTreeViewSelectionHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int pqTreeViewSelectionHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
