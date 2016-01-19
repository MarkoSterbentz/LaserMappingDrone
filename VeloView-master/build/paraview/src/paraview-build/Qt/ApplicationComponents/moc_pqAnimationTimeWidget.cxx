/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationTimeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqAnimationTimeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationTimeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimationTimeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      42,   22,   22,   22, 0x05,
      60,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   74,   22,   22, 0x0a,
     120,   22,   22,   22, 0x08,
     157,   22,   22,   22, 0x08,

 // properties: name, type, flags
     187,  180, 0x06495103,
     201,  197, 0x02095103,
     223,  215, 0x0a095103,
     237,  232, 0x01095103,
     254,  215, 0x0a095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimationTimeWidget[] = {
    "pqAnimationTimeWidget\0\0timeValueChanged()\0"
    "playModeChanged()\0dummySignal()\0"
    "animationScene\0setAnimationScene(vtkSMProxy*)\0"
    "updateTimestepCountLabelVisibility()\0"
    "timestepValueChanged()\0double\0timeValue\0"
    "int\0timeStepCount\0QString\0playMode\0"
    "bool\0playModeReadOnly\0timeLabel\0"
};

void pqAnimationTimeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimationTimeWidget *_t = static_cast<pqAnimationTimeWidget *>(_o);
        switch (_id) {
        case 0: _t->timeValueChanged(); break;
        case 1: _t->playModeChanged(); break;
        case 2: _t->dummySignal(); break;
        case 3: _t->setAnimationScene((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 4: _t->updateTimestepCountLabelVisibility(); break;
        case 5: _t->timestepValueChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimationTimeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimationTimeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqAnimationTimeWidget,
      qt_meta_data_pqAnimationTimeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimationTimeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimationTimeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimationTimeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationTimeWidget))
        return static_cast<void*>(const_cast< pqAnimationTimeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqAnimationTimeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = timeValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = timeStepCount(); break;
        case 2: *reinterpret_cast< QString*>(_v) = playMode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = playModeReadOnly(); break;
        case 4: *reinterpret_cast< QString*>(_v) = timeLabel(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTimeValue(*reinterpret_cast< double*>(_v)); break;
        case 1: setTimeStepCount(*reinterpret_cast< int*>(_v)); break;
        case 2: setPlayMode(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPlayModeReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 4: setTimeLabel(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqAnimationTimeWidget::timeValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqAnimationTimeWidget::playModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqAnimationTimeWidget::dummySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
