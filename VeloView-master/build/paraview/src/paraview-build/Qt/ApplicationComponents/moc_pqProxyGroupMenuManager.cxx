/****************************************************************************
** Meta object code from reading C++ file 'pqProxyGroupMenuManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqProxyGroupMenuManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxyGroupMenuManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxyGroupMenuManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   25,   24,   24, 0x05,
      63,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   24,   24,   24, 0x0a,
     115,   24,   24,   24, 0x0a,
     139,   24,   24,   24, 0x0a,
     178,   24,   24,   24, 0x0a,
     221,  214,   24,   24, 0x0a,
     238,   24,   24,   24, 0x0a,
     253,   24,   24,   24, 0x09,
     265,   24,   24,   24, 0x09,
     279,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqProxyGroupMenuManager[] = {
    "pqProxyGroupMenuManager\0\0group,name\0"
    "triggered(QString,QString)\0menuPopulated()\0"
    "loadConfiguration(vtkPVXMLElement*)\0"
    "lookForNewDefinitions()\0"
    "removeProxyDefinitionUpdateObservers()\0"
    "addProxyDefinitionUpdateObservers()\0"
    "enable\0setEnabled(bool)\0populateMenu()\0"
    "triggered()\0quickLaunch()\0"
    "switchActiveServer()\0"
};

void pqProxyGroupMenuManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxyGroupMenuManager *_t = static_cast<pqProxyGroupMenuManager *>(_o);
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->menuPopulated(); break;
        case 2: _t->loadConfiguration((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        case 3: _t->lookForNewDefinitions(); break;
        case 4: _t->removeProxyDefinitionUpdateObservers(); break;
        case 5: _t->addProxyDefinitionUpdateObservers(); break;
        case 6: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->populateMenu(); break;
        case 8: _t->triggered(); break;
        case 9: _t->quickLaunch(); break;
        case 10: _t->switchActiveServer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProxyGroupMenuManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxyGroupMenuManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqProxyGroupMenuManager,
      qt_meta_data_pqProxyGroupMenuManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxyGroupMenuManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxyGroupMenuManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxyGroupMenuManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxyGroupMenuManager))
        return static_cast<void*>(const_cast< pqProxyGroupMenuManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqProxyGroupMenuManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void pqProxyGroupMenuManager::triggered(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqProxyGroupMenuManager::menuPopulated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
