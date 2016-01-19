/****************************************************************************
** Meta object code from reading C++ file 'pqTestUtility.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/ThirdParty/QtTesting/vtkqttesting/pqTestUtility.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTestUtility.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTestUtility[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      33,   14,   14,   14, 0x05,
      60,   51,   14,   14, 0x05,
     100,   85,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     135,   51,  130,   14, 0x0a,
     154,   14,   14,   14, 0x0a,
     173,   14,   14,   14, 0x0a,
     191,  185,   14,   14, 0x0a,
     208,   14,   14,   14, 0x0a,

 // methods: signature, parameters, type, tag, flags
     226,   51,   14,   14, 0x02,
     254,  247,   14,   14, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_pqTestUtility[] = {
    "pqTestUtility\0\0playbackStarted()\0"
    "playbackStopped()\0filename\0"
    "playbackStarted(QString)\0filename,error\0"
    "playbackStopped(QString,bool)\0bool\0"
    "playTests(QString)\0openPlayerDialog()\0"
    "stopTests()\0value\0stopRecords(int)\0"
    "onRecordStopped()\0recordTests(QString)\0"
    "suffix\0recordTestsBySuffix(QString)\0"
};

void pqTestUtility::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTestUtility *_t = static_cast<pqTestUtility *>(_o);
        switch (_id) {
        case 0: _t->playbackStarted(); break;
        case 1: _t->playbackStopped(); break;
        case 2: _t->playbackStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->playbackStopped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: { bool _r = _t->playTests((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->openPlayerDialog(); break;
        case 6: _t->stopTests(); break;
        case 7: _t->stopRecords((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onRecordStopped(); break;
        case 9: _t->recordTests((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->recordTestsBySuffix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTestUtility::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTestUtility::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqTestUtility,
      qt_meta_data_pqTestUtility, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTestUtility::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTestUtility::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTestUtility::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTestUtility))
        return static_cast<void*>(const_cast< pqTestUtility*>(this));
    return QObject::qt_metacast(_clname);
}

int pqTestUtility::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void pqTestUtility::playbackStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqTestUtility::playbackStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqTestUtility::playbackStarted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqTestUtility::playbackStopped(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
