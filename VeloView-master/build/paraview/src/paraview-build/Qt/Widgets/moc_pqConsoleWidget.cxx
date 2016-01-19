/****************************************************************************
** Meta object code from reading C++ file 'pqConsoleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqConsoleWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqConsoleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqConsoleWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   49,   16,   16, 0x0a,
      79,   75,   16,   16, 0x0a,
     101,   16,   16,   16, 0x0a,
     114,  109,   16,   16, 0x0a,
     130,  109,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqConsoleWidget[] = {
    "pqConsoleWidget\0\0Command\0"
    "executeCommand(QString)\0Text\0"
    "printString(QString)\0cmd\0printCommand(QString)\0"
    "clear()\0text\0prompt(QString)\0"
    "insertCompletion(QString)\0"
};

void pqConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqConsoleWidget *_t = static_cast<pqConsoleWidget *>(_o);
        switch (_id) {
        case 0: _t->executeCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->printString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->printCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->prompt((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->insertCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqConsoleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqConsoleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqConsoleWidget,
      qt_meta_data_pqConsoleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqConsoleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqConsoleWidget))
        return static_cast<void*>(const_cast< pqConsoleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void pqConsoleWidget::executeCommand(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
