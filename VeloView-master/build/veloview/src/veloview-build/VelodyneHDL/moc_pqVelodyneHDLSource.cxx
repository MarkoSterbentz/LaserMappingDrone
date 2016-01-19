/****************************************************************************
** Meta object code from reading C++ file 'pqVelodyneHDLSource.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../VelodyneHDL/pqVelodyneHDLSource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqVelodyneHDLSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqVelodyneHDLSource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      30,   20,   20,   20, 0x0a,
      47,   39,   20,   20, 0x0a,
      66,   39,   20,   20, 0x0a,
     105,   93,   20,   20, 0x0a,
     131,   20,   20,   20, 0x0a,
     150,   20,   20,   20, 0x0a,
     171,   20,   20,   20, 0x0a,
     197,   20,   20,   20, 0x0a,
     227,  218,   20,   20, 0x0a,
     248,  218,   20,   20, 0x0a,
     280,  218,   20,   20, 0x0a,
     307,   20,   20,   20, 0x0a,
     327,   20,  322,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqVelodyneHDLSource[] = {
    "pqVelodyneHDLSource\0\0onPlay()\0onStop()\0"
    "checked\0setStreaming(bool)\0"
    "onAutoRefreshChecked(bool)\0sliderValue\0"
    "onSliderValueChanged(int)\0onRefreshClicked()\0"
    "onChoosePacketFile()\0onChooseCalibrationFile()\0"
    "onChooseOutputFile()\0fileName\0"
    "setFileName(QString)\0"
    "setCalibrationFileName(QString)\0"
    "setOutputFileName(QString)\0onPollSource()\0"
    "bool\0snapToLatestTimeStep()\0"
};

void pqVelodyneHDLSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqVelodyneHDLSource *_t = static_cast<pqVelodyneHDLSource *>(_o);
        switch (_id) {
        case 0: _t->onPlay(); break;
        case 1: _t->onStop(); break;
        case 2: _t->setStreaming((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onAutoRefreshChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onRefreshClicked(); break;
        case 6: _t->onChoosePacketFile(); break;
        case 7: _t->onChooseCalibrationFile(); break;
        case 8: _t->onChooseOutputFile(); break;
        case 9: _t->setFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setCalibrationFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setOutputFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->onPollSource(); break;
        case 13: { bool _r = _t->snapToLatestTimeStep();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqVelodyneHDLSource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqVelodyneHDLSource::staticMetaObject = {
    { &pqObjectPanel::staticMetaObject, qt_meta_stringdata_pqVelodyneHDLSource,
      qt_meta_data_pqVelodyneHDLSource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqVelodyneHDLSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqVelodyneHDLSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqVelodyneHDLSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqVelodyneHDLSource))
        return static_cast<void*>(const_cast< pqVelodyneHDLSource*>(this));
    return pqObjectPanel::qt_metacast(_clname);
}

int pqVelodyneHDLSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqObjectPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
