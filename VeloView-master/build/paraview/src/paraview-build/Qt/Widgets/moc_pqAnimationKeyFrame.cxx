/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationKeyFrame.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqAnimationKeyFrame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationKeyFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimationKeyFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      41,   20,   20,   20, 0x05,
      59,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   73,   20,   20, 0x0a,
     106,   73,   20,   20, 0x0a,
     135,   20,   20,   20, 0x0a,
     159,   20,   20,   20, 0x0a,
     186,  181,   20,   20, 0x0a,
     203,  201,   20,   20, 0x0a,
     227,   20,   20,   20, 0x0a,

 // properties: name, type, flags
     247,  240, 0x06095103,
     267,  240, 0x06095103,
     294,  285, 0xff095103,
     305,  285, 0xff095103,
     181,  314, 0x45095103,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimationKeyFrame[] = {
    "pqAnimationKeyFrame\0\0startValueChanged()\0"
    "endValueChanged()\0iconChanged()\0t\0"
    "setNormalizedStartTime(double)\0"
    "setNormalizedEndTime(double)\0"
    "setStartValue(QVariant)\0setEndValue(QVariant)\0"
    "icon\0setIcon(QIcon)\0r\0setBoundingRect(QRectF)\0"
    "adjustRect()\0double\0normalizedStartTime\0"
    "normalizedEndTime\0QVariant\0startValue\0"
    "endValue\0QIcon\0"
};

void pqAnimationKeyFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimationKeyFrame *_t = static_cast<pqAnimationKeyFrame *>(_o);
        switch (_id) {
        case 0: _t->startValueChanged(); break;
        case 1: _t->endValueChanged(); break;
        case 2: _t->iconChanged(); break;
        case 3: _t->setNormalizedStartTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setNormalizedEndTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setStartValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 6: _t->setEndValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->setIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 8: _t->setBoundingRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 9: _t->adjustRect(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimationKeyFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimationKeyFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqAnimationKeyFrame,
      qt_meta_data_pqAnimationKeyFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimationKeyFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimationKeyFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimationKeyFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationKeyFrame))
        return static_cast<void*>(const_cast< pqAnimationKeyFrame*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< pqAnimationKeyFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int pqAnimationKeyFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = normalizedStartTime(); break;
        case 1: *reinterpret_cast< double*>(_v) = normalizedEndTime(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = startValue(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = endValue(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNormalizedStartTime(*reinterpret_cast< double*>(_v)); break;
        case 1: setNormalizedEndTime(*reinterpret_cast< double*>(_v)); break;
        case 2: setStartValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: setEndValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: setIcon(*reinterpret_cast< QIcon*>(_v)); break;
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
void pqAnimationKeyFrame::startValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqAnimationKeyFrame::endValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqAnimationKeyFrame::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
