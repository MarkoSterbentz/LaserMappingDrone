/****************************************************************************
** Meta object code from reading C++ file 'pqPlayBackEventsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/ThirdParty/QtTesting/vtkqttesting/pqPlayBackEventsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPlayBackEventsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPlayBackEventsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   24,   23,   23, 0x08,
      75,   23,   23,   23, 0x08,
      87,   23,   23,   23, 0x08,
     101,   23,   23,   23, 0x08,
     115,   23,   23,   23, 0x08,
     135,   23,   23,   23, 0x08,
     147,   23,   23,   23, 0x08,
     159,   23,   23,   23, 0x08,
     178,   23,   23,   23, 0x08,
     196,  190,   23,   23, 0x08,
     210,   23,   23,   23, 0x0a,
     220,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqPlayBackEventsDialog[] = {
    "pqPlayBackEventsDialog\0\0,,\0"
    "onEventAboutToBePlayed(QString,QString,QString)\0"
    "loadFiles()\0insertFiles()\0removeFiles()\0"
    "onPlayOrPause(bool)\0onOneStep()\0"
    "onStarted()\0onStarted(QString)\0"
    "onStopped()\0value\0onModal(bool)\0"
    "done(int)\0updateUi()\0"
};

void pqPlayBackEventsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPlayBackEventsDialog *_t = static_cast<pqPlayBackEventsDialog *>(_o);
        switch (_id) {
        case 0: _t->onEventAboutToBePlayed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->loadFiles(); break;
        case 2: _t->insertFiles(); break;
        case 3: _t->removeFiles(); break;
        case 4: _t->onPlayOrPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onOneStep(); break;
        case 6: _t->onStarted(); break;
        case 7: _t->onStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onStopped(); break;
        case 9: _t->onModal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateUi(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPlayBackEventsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPlayBackEventsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPlayBackEventsDialog,
      qt_meta_data_pqPlayBackEventsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPlayBackEventsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPlayBackEventsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPlayBackEventsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPlayBackEventsDialog))
        return static_cast<void*>(const_cast< pqPlayBackEventsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqPlayBackEventsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
