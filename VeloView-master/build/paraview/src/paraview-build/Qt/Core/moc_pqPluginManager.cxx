/****************************************************************************
** Meta object code from reading C++ file 'pqPluginManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqPluginManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPluginManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPluginManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      34,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   16,   16,   16, 0x09,
     105,   16,   16,   16, 0x09,
     134,   16,   16,   16, 0x09,
     166,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPluginManager[] = {
    "pqPluginManager\0\0pluginsUpdated()\0"
    "requiredPluginsNotLoaded(pqServer*)\0"
    "loadPluginsFromSettings(pqServer*)\0"
    "onServerConnected(pqServer*)\0"
    "onServerDisconnected(pqServer*)\0"
    "updatePluginLists()\0"
};

void pqPluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPluginManager *_t = static_cast<pqPluginManager *>(_o);
        switch (_id) {
        case 0: _t->pluginsUpdated(); break;
        case 1: _t->requiredPluginsNotLoaded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->loadPluginsFromSettings((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->onServerConnected((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 4: _t->onServerDisconnected((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 5: _t->updatePluginLists(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPluginManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPluginManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPluginManager,
      qt_meta_data_pqPluginManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPluginManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPluginManager))
        return static_cast<void*>(const_cast< pqPluginManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void pqPluginManager::pluginsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqPluginManager::requiredPluginsNotLoaded(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
