/****************************************************************************
** Meta object code from reading C++ file 'pqKeyFrameTypeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqKeyFrameTypeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqKeyFrameTypeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqKeyFrameTypeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       7,   89, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      43,   21,   21,   21, 0x05,
      64,   21,   21,   21, 0x05,
      91,   21,   21,   21, 0x05,
     116,   21,   21,   21, 0x05,
     137,   21,   21,   21, 0x05,
     160,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     191,  186,   21,   21, 0x0a,
     208,  186,   21,   21, 0x0a,
     225,  186,   21,   21, 0x0a,
     248,  186,   21,   21, 0x0a,
     269,   21,   21,   21, 0x0a,
     286,  186,   21,   21, 0x0a,
     305,  186,   21,   21, 0x0a,
     327,   21,   21,   21, 0x09,

 // properties: name, type, flags
     351,  343, 0x0a095103,
     356,  343, 0x0a095103,
     361,  343, 0x0a095103,
     372,  343, 0x0a095103,
     388,  381, 0x06095103,
     394,  343, 0x0a095103,
     401,  343, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_pqKeyFrameTypeWidget[] = {
    "pqKeyFrameTypeWidget\0\0typeChanged(QString)\0"
    "baseChanged(QString)\0startPowerChanged(QString)\0"
    "endPowerChanged(QString)\0phaseChanged(double)\0"
    "offsetChanged(QString)\0frequencyChanged(QString)\0"
    "text\0setType(QString)\0setBase(QString)\0"
    "setStartPower(QString)\0setEndPower(QString)\0"
    "setPhase(double)\0setOffset(QString)\0"
    "setFrequency(QString)\0onTypeChanged()\0"
    "QString\0type\0base\0startPower\0endPower\0"
    "double\0phase\0offset\0frequency\0"
};

void pqKeyFrameTypeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqKeyFrameTypeWidget *_t = static_cast<pqKeyFrameTypeWidget *>(_o);
        switch (_id) {
        case 0: _t->typeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->baseChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->startPowerChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->endPowerChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->phaseChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->offsetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->frequencyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setBase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setStartPower((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setEndPower((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setPhase((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->setOffset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setFrequency((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->onTypeChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqKeyFrameTypeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqKeyFrameTypeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqKeyFrameTypeWidget,
      qt_meta_data_pqKeyFrameTypeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqKeyFrameTypeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqKeyFrameTypeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqKeyFrameTypeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqKeyFrameTypeWidget))
        return static_cast<void*>(const_cast< pqKeyFrameTypeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqKeyFrameTypeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = type(); break;
        case 1: *reinterpret_cast< QString*>(_v) = base(); break;
        case 2: *reinterpret_cast< QString*>(_v) = startPower(); break;
        case 3: *reinterpret_cast< QString*>(_v) = endPower(); break;
        case 4: *reinterpret_cast< double*>(_v) = phase(); break;
        case 5: *reinterpret_cast< QString*>(_v) = offset(); break;
        case 6: *reinterpret_cast< QString*>(_v) = frequency(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setType(*reinterpret_cast< QString*>(_v)); break;
        case 1: setBase(*reinterpret_cast< QString*>(_v)); break;
        case 2: setStartPower(*reinterpret_cast< QString*>(_v)); break;
        case 3: setEndPower(*reinterpret_cast< QString*>(_v)); break;
        case 4: setPhase(*reinterpret_cast< double*>(_v)); break;
        case 5: setOffset(*reinterpret_cast< QString*>(_v)); break;
        case 6: setFrequency(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqKeyFrameTypeWidget::typeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqKeyFrameTypeWidget::baseChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqKeyFrameTypeWidget::startPowerChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqKeyFrameTypeWidget::endPowerChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqKeyFrameTypeWidget::phaseChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqKeyFrameTypeWidget::offsetChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqKeyFrameTypeWidget::frequencyChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
