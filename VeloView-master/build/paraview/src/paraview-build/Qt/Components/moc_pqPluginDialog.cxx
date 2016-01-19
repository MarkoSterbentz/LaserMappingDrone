/****************************************************************************
** Meta object code from reading C++ file 'pqPluginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqPluginDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPluginDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPluginDialog[] = {

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
      16,   15,   15,   15, 0x0a,
      34,   15,   15,   15, 0x0a,
      55,   53,   15,   15, 0x09,
      97,   15,   15,   15, 0x09,
     109,   15,   15,   15, 0x09,
     119,   15,   15,   15, 0x09,
     148,   15,   15,   15, 0x09,
     176,   15,   15,   15, 0x09,
     207,   15,   15,   15, 0x09,
     237,   15,   15,   15, 0x09,
     264,   15,   15,   15, 0x09,
     290,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPluginDialog[] = {
    "pqPluginDialog\0\0loadLocalPlugin()\0"
    "loadRemotePlugin()\0,\0"
    "onPluginItemChanged(QTreeWidgetItem*,int)\0"
    "onRefresh()\0refresh()\0"
    "onLoadSelectedRemotePlugin()\0"
    "onLoadSelectedLocalPlugin()\0"
    "onRemoveSelectedRemotePlugin()\0"
    "onRemoveSelectedLocalPlugin()\0"
    "onRemoteSelectionChanged()\0"
    "onLocalSelectionChanged()\0"
    "resizeColumn(QTreeWidgetItem*)\0"
};

void pqPluginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPluginDialog *_t = static_cast<pqPluginDialog *>(_o);
        switch (_id) {
        case 0: _t->loadLocalPlugin(); break;
        case 1: _t->loadRemotePlugin(); break;
        case 2: _t->onPluginItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->onRefresh(); break;
        case 4: _t->refresh(); break;
        case 5: _t->onLoadSelectedRemotePlugin(); break;
        case 6: _t->onLoadSelectedLocalPlugin(); break;
        case 7: _t->onRemoveSelectedRemotePlugin(); break;
        case 8: _t->onRemoveSelectedLocalPlugin(); break;
        case 9: _t->onRemoteSelectionChanged(); break;
        case 10: _t->onLocalSelectionChanged(); break;
        case 11: _t->resizeColumn((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPluginDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPluginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPluginDialog,
      qt_meta_data_pqPluginDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPluginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPluginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPluginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPluginDialog))
        return static_cast<void*>(const_cast< pqPluginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqPluginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
