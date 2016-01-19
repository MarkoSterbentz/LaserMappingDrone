/****************************************************************************
** Meta object code from reading C++ file 'pqColorChooserButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqColorChooserButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorChooserButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqColorChooserButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      49,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   21,   21,   21, 0x0a,
      97,   21,   21,   21, 0x0a,
     130,   21,   21,   21, 0x0a,
     164,   21,   21,   21, 0x0a,

 // properties: name, type, flags
     185,  178, 0x43095103,
     210,  197, 0x09095103,
     226,  197, 0x09095103,
     248,  243, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_pqColorChooserButton[] = {
    "pqColorChooserButton\0\0chosenColorChanged(QColor)\0"
    "validColorChosen(QColor)\0"
    "setChosenColor(QColor)\0"
    "setChosenColorRgbF(QVariantList)\0"
    "setChosenColorRgbaF(QVariantList)\0"
    "chooseColor()\0QColor\0chosenColor\0"
    "QVariantList\0chosenColorRgbF\0"
    "chosenColorRgbaF\0bool\0showAlphaChannel\0"
};

void pqColorChooserButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqColorChooserButton *_t = static_cast<pqColorChooserButton *>(_o);
        switch (_id) {
        case 0: _t->chosenColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->validColorChosen((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setChosenColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setChosenColorRgbF((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 4: _t->setChosenColorRgbaF((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 5: _t->chooseColor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqColorChooserButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorChooserButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_pqColorChooserButton,
      qt_meta_data_pqColorChooserButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorChooserButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorChooserButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorChooserButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorChooserButton))
        return static_cast<void*>(const_cast< pqColorChooserButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int pqColorChooserButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QColor*>(_v) = chosenColor(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = chosenColorRgbF(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = chosenColorRgbaF(); break;
        case 3: *reinterpret_cast< bool*>(_v) = showAlphaChannel(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setChosenColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setChosenColorRgbF(*reinterpret_cast< QVariantList*>(_v)); break;
        case 2: setChosenColorRgbaF(*reinterpret_cast< QVariantList*>(_v)); break;
        case 3: setShowAlphaChannel(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqColorChooserButton::chosenColorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqColorChooserButton::validColorChosen(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
