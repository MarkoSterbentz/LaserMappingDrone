/****************************************************************************
** Meta object code from reading C++ file 'pqPythonMacroSupervisor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Python/pqPythonMacroSupervisor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonMacroSupervisor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPythonMacroSupervisor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   25,   24,   24, 0x05,
      66,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,   87,   24,   24, 0x0a,
     132,   25,   24,   24, 0x0a,
     150,   25,   24,   24, 0x0a,
     171,   24,   24,   24, 0x0a,
     189,   24,   24,   24, 0x09,
     208,   24,   24,   24, 0x09,
     233,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPythonMacroSupervisor[] = {
    "pqPythonMacroSupervisor\0\0filename\0"
    "executeScriptRequested(QString)\0"
    "onEditMacro(QString)\0macroName,filename\0"
    "addMacro(QString,QString)\0addMacro(QString)\0"
    "removeMacro(QString)\0updateMacroList()\0"
    "onMacroTriggered()\0onDeleteMacroTriggered()\0"
    "onEditMacroTriggered()\0"
};

void pqPythonMacroSupervisor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPythonMacroSupervisor *_t = static_cast<pqPythonMacroSupervisor *>(_o);
        switch (_id) {
        case 0: _t->executeScriptRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onEditMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addMacro((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->addMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->removeMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateMacroList(); break;
        case 6: _t->onMacroTriggered(); break;
        case 7: _t->onDeleteMacroTriggered(); break;
        case 8: _t->onEditMacroTriggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPythonMacroSupervisor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPythonMacroSupervisor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPythonMacroSupervisor,
      qt_meta_data_pqPythonMacroSupervisor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPythonMacroSupervisor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPythonMacroSupervisor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPythonMacroSupervisor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonMacroSupervisor))
        return static_cast<void*>(const_cast< pqPythonMacroSupervisor*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPythonMacroSupervisor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void pqPythonMacroSupervisor::executeScriptRequested(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqPythonMacroSupervisor::onEditMacro(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
