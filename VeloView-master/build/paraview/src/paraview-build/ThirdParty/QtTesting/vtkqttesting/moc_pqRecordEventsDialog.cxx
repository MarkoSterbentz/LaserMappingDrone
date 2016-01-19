/****************************************************************************
** Meta object code from reading C++ file 'pqRecordEventsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/ThirdParty/QtTesting/vtkqttesting/pqRecordEventsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRecordEventsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqRecordEventsDialog[] = {

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
      22,   21,   21,   21, 0x08,
      35,   32,   21,   21, 0x08,
      76,   21,   21,   21, 0x08,
      89,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqRecordEventsDialog[] = {
    "pqRecordEventsDialog\0\0done(int)\0,,\0"
    "onEventRecorded(QString,QString,QString)\0"
    "addComment()\0updateUi()\0"
};

void pqRecordEventsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqRecordEventsDialog *_t = static_cast<pqRecordEventsDialog *>(_o);
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onEventRecorded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->addComment(); break;
        case 3: _t->updateUi(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqRecordEventsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqRecordEventsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqRecordEventsDialog,
      qt_meta_data_pqRecordEventsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqRecordEventsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqRecordEventsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqRecordEventsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqRecordEventsDialog))
        return static_cast<void*>(const_cast< pqRecordEventsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqRecordEventsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
