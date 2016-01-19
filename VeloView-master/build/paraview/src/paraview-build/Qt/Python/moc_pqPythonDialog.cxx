/****************************************************************************
** Meta object code from reading C++ file 'pqPythonDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Python/pqPythonDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPythonDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   16,   15,   15, 0x0a,
      46,   42,   15,   15, 0x0a,
      61,   15,   15,   15, 0x0a,
      99,   15,   84,   15, 0x0a,
     107,   15,   15,   15, 0x08,
     119,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqPythonDialog[] = {
    "pqPythonDialog\0\0script\0runString(QString)\0"
    "msg\0print(QString)\0runScript(QStringList)\0"
    "pqPythonShell*\0shell()\0runScript()\0"
    "clearConsole()\0"
};

void pqPythonDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPythonDialog *_t = static_cast<pqPythonDialog *>(_o);
        switch (_id) {
        case 0: _t->runString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->print((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->runScript((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: { pqPythonShell* _r = _t->shell();
            if (_a[0]) *reinterpret_cast< pqPythonShell**>(_a[0]) = _r; }  break;
        case 4: _t->runScript(); break;
        case 5: _t->clearConsole(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPythonDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPythonDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPythonDialog,
      qt_meta_data_pqPythonDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPythonDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPythonDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPythonDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonDialog))
        return static_cast<void*>(const_cast< pqPythonDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqPythonDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
