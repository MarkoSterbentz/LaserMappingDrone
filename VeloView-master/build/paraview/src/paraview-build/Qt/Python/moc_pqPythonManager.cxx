/****************************************************************************
** Meta object code from reading C++ file 'pqPythonManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Python/pqPythonManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPythonManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   49,   16,   16, 0x0a,
      90,   81,   16,   16, 0x0a,
     109,   16,   16,   16, 0x0a,
     138,  131,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPythonManager[] = {
    "pqPythonManager\0\0paraviewPythonModulesImported()\0"
    "filename\0executeScript(QString)\0"
    "fileName\0editMacro(QString)\0"
    "updateStatusMessage()\0server\0"
    "onRemovingServer(pqServer*)\0"
};

void pqPythonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPythonManager *_t = static_cast<pqPythonManager *>(_o);
        switch (_id) {
        case 0: _t->paraviewPythonModulesImported(); break;
        case 1: _t->executeScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->editMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateStatusMessage(); break;
        case 4: _t->onRemovingServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPythonManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPythonManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPythonManager,
      qt_meta_data_pqPythonManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPythonManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPythonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPythonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonManager))
        return static_cast<void*>(const_cast< pqPythonManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPythonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void pqPythonManager::paraviewPythonModulesImported()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
