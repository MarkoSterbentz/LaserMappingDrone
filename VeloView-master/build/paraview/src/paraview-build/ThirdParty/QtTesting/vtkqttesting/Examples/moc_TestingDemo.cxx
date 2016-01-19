/****************************************************************************
** Meta object code from reading C++ file 'TestingDemo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../paraview/ThirdParty/QtTesting/vtkqttesting/Examples/TestingDemo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestingDemo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestingDemo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x09,
      22,   12,   12,   12, 0x09,
      29,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TestingDemo[] = {
    "TestingDemo\0\0record()\0play()\0popup()\0"
};

void TestingDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestingDemo *_t = static_cast<TestingDemo *>(_o);
        switch (_id) {
        case 0: _t->record(); break;
        case 1: _t->play(); break;
        case 2: _t->popup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestingDemo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestingDemo::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TestingDemo,
      qt_meta_data_TestingDemo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestingDemo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestingDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestingDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestingDemo))
        return static_cast<void*>(const_cast< TestingDemo*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TestingDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
