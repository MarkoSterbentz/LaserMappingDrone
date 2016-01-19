/****************************************************************************
** Meta object code from reading C++ file 'pqApplicationCore.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqApplicationCore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqApplicationCore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqApplicationCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x05,
      72,   59,   18,   18, 0x05,
     121,   19,   18,   18, 0x05,
     150,   18,   18,   18, 0x05,
     181,   18,   18,   18, 0x05,
     207,   18,   18,   18, 0x05,
     232,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     262,   18,   18,   18, 0x0a,
     279,   18,   18,   18, 0x0a,
     286,   18,   18,   18, 0x0a,
     314,  305,   18,   18, 0x0a,
     349,  341,   18,   18, 0x0a,
     383,   18,   18,   18, 0x0a,
     392,   59,   18,   18, 0x09,
     443,   19,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqApplicationCore[] = {
    "pqApplicationCore\0\0root\0"
    "aboutToLoadState(vtkPVXMLElement*)\0"
    "root,locator\0"
    "stateLoaded(vtkPVXMLElement*,vtkSMProxyLocator*)\0"
    "stateSaved(vtkPVXMLElement*)\0"
    "undoStackChanged(pqUndoStack*)\0"
    "loadXML(vtkPVXMLElement*)\0"
    "forceFilterMenuRefresh()\0"
    "updateMasterEnableState(bool)\0"
    "prepareForQuit()\0quit()\0showOutputWindow()\0"
    "filename\0loadConfiguration(QString)\0"
    "xmldata\0loadConfigurationXML(const char*)\0"
    "render()\0onStateLoaded(vtkPVXMLElement*,vtkSMProxyLocator*)\0"
    "onStateSaved(vtkPVXMLElement*)\0"
};

void pqApplicationCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqApplicationCore *_t = static_cast<pqApplicationCore *>(_o);
        switch (_id) {
        case 0: _t->aboutToLoadState((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        case 1: _t->stateLoaded((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1])),(*reinterpret_cast< vtkSMProxyLocator*(*)>(_a[2]))); break;
        case 2: _t->stateSaved((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        case 3: _t->undoStackChanged((*reinterpret_cast< pqUndoStack*(*)>(_a[1]))); break;
        case 4: _t->loadXML((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        case 5: _t->forceFilterMenuRefresh(); break;
        case 6: _t->updateMasterEnableState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->prepareForQuit(); break;
        case 8: _t->quit(); break;
        case 9: _t->showOutputWindow(); break;
        case 10: _t->loadConfiguration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->loadConfigurationXML((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 12: _t->render(); break;
        case 13: _t->onStateLoaded((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1])),(*reinterpret_cast< vtkSMProxyLocator*(*)>(_a[2]))); break;
        case 14: _t->onStateSaved((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqApplicationCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqApplicationCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqApplicationCore,
      qt_meta_data_pqApplicationCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqApplicationCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqApplicationCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqApplicationCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqApplicationCore))
        return static_cast<void*>(const_cast< pqApplicationCore*>(this));
    return QObject::qt_metacast(_clname);
}

int pqApplicationCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void pqApplicationCore::aboutToLoadState(vtkPVXMLElement * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqApplicationCore::stateLoaded(vtkPVXMLElement * _t1, vtkSMProxyLocator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqApplicationCore::stateSaved(vtkPVXMLElement * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqApplicationCore::undoStackChanged(pqUndoStack * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqApplicationCore::loadXML(vtkPVXMLElement * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqApplicationCore::forceFilterMenuRefresh()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void pqApplicationCore::updateMasterEnableState(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
