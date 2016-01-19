/****************************************************************************
** Meta object code from reading C++ file 'pqSearchBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSearchBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSearchBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSearchBox[] = {

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
      13,   12,   12,   12, 0x05,
      43,   12,   12,   12, 0x05,
      64,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   91,   12,   12, 0x0a,
     130,  125,   12,   12, 0x0a,
     159,  155,  147,   12, 0x0a,
     189,  182,   12,   12, 0x0a,
     220,   12,   12,   12, 0x09,
     250,   12,   12,   12, 0x09,
     267,   12,   12,   12, 0x09,

 // properties: name, type, flags
     125,  147, 0x0a595103,
     288,  147, 0x0a095103,
     309,  304, 0x01495103,
     330,  304, 0x01095103,
     352,  147, 0x0a495103,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       2,

       0        // eod
};

static const char qt_meta_stringdata_pqSearchBox[] = {
    "pqSearchBox\0\0advancedSearchActivated(bool)\0"
    "textChanged(QString)\0settingKeyChanged(QString)\0"
    "use\0setAdvancedSearchActive(bool)\0"
    "text\0setText(QString)\0QString\0key\0"
    "setSettingKey(QString)\0enable\0"
    "setAdvancedSearchEnabled(bool)\0"
    "onAdvancedButtonClicked(bool)\0"
    "updateSettings()\0updateFromSettings()\0"
    "placeholderText\0bool\0advancedSearchActive\0"
    "advancedSearchEnabled\0settingKey\0"
};

void pqSearchBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSearchBox *_t = static_cast<pqSearchBox *>(_o);
        switch (_id) {
        case 0: _t->advancedSearchActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->settingKeyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setAdvancedSearchActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { QString _r = _t->setSettingKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: _t->setAdvancedSearchEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onAdvancedButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateSettings(); break;
        case 9: _t->updateFromSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSearchBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSearchBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqSearchBox,
      qt_meta_data_pqSearchBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSearchBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSearchBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSearchBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSearchBox))
        return static_cast<void*>(const_cast< pqSearchBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqSearchBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        case 1: *reinterpret_cast< QString*>(_v) = placeholderText(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isAdvancedSearchActive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isAdvancedSearchEnabled(); break;
        case 4: *reinterpret_cast< QString*>(_v) = settingKey(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        case 2: setAdvancedSearchActive(*reinterpret_cast< bool*>(_v)); break;
        case 3: setAdvancedSearchEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: setSettingKey(*reinterpret_cast< QString*>(_v)); break;
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
void pqSearchBox::advancedSearchActivated(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqSearchBox::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqSearchBox::settingKeyChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
