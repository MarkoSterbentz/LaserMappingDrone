/****************************************************************************
** Meta object code from reading C++ file 'pqRecentFilesMenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqRecentFilesMenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRecentFilesMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqRecentFilesMenu[] = {

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
      19,   18,   18,   18, 0x08,
      40,   18,   18,   18, 0x08,
      65,   18,   18,   18, 0x08,
      82,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqRecentFilesMenu[] = {
    "pqRecentFilesMenu\0\0onResourcesChanged()\0"
    "onOpenResource(QAction*)\0onOpenResource()\0"
    "onServerStarted(pqServer*)\0"
};

void pqRecentFilesMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqRecentFilesMenu *_t = static_cast<pqRecentFilesMenu *>(_o);
        switch (_id) {
        case 0: _t->onResourcesChanged(); break;
        case 1: _t->onOpenResource((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->onOpenResource(); break;
        case 3: _t->onServerStarted((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqRecentFilesMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqRecentFilesMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqRecentFilesMenu,
      qt_meta_data_pqRecentFilesMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqRecentFilesMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqRecentFilesMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqRecentFilesMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqRecentFilesMenu))
        return static_cast<void*>(const_cast< pqRecentFilesMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int pqRecentFilesMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
