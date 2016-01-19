/****************************************************************************
** Meta object code from reading C++ file 'pqPythonShell.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Python/pqPythonShell.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonShell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPythonShell[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   14,   14,   14, 0x0a,
      62,   14,   14,   14, 0x0a,
      70,   14,   14,   14, 0x0a,
      93,   14,   14,   14, 0x0a,
     106,   14,  101,   14, 0x0a,
     126,  120,   14,   14, 0x0a,
     157,   14,   14,   14, 0x2a,
     178,   14,   14,   14, 0x09,
     202,  198,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPythonShell[] = {
    "pqPythonShell\0\0starting\0executing(bool)\0"
    "printMessage(QString)\0clear()\0"
    "executeScript(QString)\0reset()\0bool\0"
    "isExecuting()\0,mode\0printString(QString,PrintMode)\0"
    "printString(QString)\0pushScript(QString)\0"
    "val\0setExecuting(bool)\0"
};

void pqPythonShell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPythonShell *_t = static_cast<pqPythonShell *>(_o);
        switch (_id) {
        case 0: _t->executing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->printMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->executeScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->reset(); break;
        case 5: { bool _r = _t->isExecuting();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->printString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< PrintMode(*)>(_a[2]))); break;
        case 7: _t->printString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->pushScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setExecuting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPythonShell::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPythonShell::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqPythonShell,
      qt_meta_data_pqPythonShell, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPythonShell::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPythonShell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPythonShell::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonShell))
        return static_cast<void*>(const_cast< pqPythonShell*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqPythonShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void pqPythonShell::executing(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
