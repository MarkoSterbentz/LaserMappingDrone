/****************************************************************************
** Meta object code from reading C++ file 'pqServerConfigurationImporter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqServerConfigurationImporter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServerConfigurationImporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqServerConfigurationImporter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      51,   30,   30,   30, 0x05,
      77,   75,   30,   30, 0x05,
     132,   30,   30,   30, 0x05,
     162,  154,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,   30,   30,   30, 0x0a,
     201,   30,   30,   30, 0x0a,
     214,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqServerConfigurationImporter[] = {
    "pqServerConfigurationImporter\0\0"
    "incrementalUpdate()\0configurationsUpdated()\0"
    ",\0authenticationRequired(QNetworkReply*,QAuthenticator*)\0"
    "abortFetchTriggered()\0message\0"
    "message(QString)\0fetchConfigurations()\0"
    "abortFetch()\0readCurrentData()\0"
};

void pqServerConfigurationImporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqServerConfigurationImporter *_t = static_cast<pqServerConfigurationImporter *>(_o);
        switch (_id) {
        case 0: _t->incrementalUpdate(); break;
        case 1: _t->configurationsUpdated(); break;
        case 2: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 3: _t->abortFetchTriggered(); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fetchConfigurations(); break;
        case 6: _t->abortFetch(); break;
        case 7: _t->readCurrentData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqServerConfigurationImporter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqServerConfigurationImporter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqServerConfigurationImporter,
      qt_meta_data_pqServerConfigurationImporter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqServerConfigurationImporter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqServerConfigurationImporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqServerConfigurationImporter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqServerConfigurationImporter))
        return static_cast<void*>(const_cast< pqServerConfigurationImporter*>(this));
    return QObject::qt_metacast(_clname);
}

int pqServerConfigurationImporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void pqServerConfigurationImporter::incrementalUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqServerConfigurationImporter::configurationsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqServerConfigurationImporter::authenticationRequired(QNetworkReply * _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqServerConfigurationImporter::abortFetchTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void pqServerConfigurationImporter::message(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
