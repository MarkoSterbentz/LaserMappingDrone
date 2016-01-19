/****************************************************************************
** Meta object code from reading C++ file 'pqSignalAdaptors.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqSignalAdaptors.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSignalAdaptors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSignalAdaptorComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      53,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   24,   24,   24, 0x0a,
     108,  102,   24,   24, 0x0a,
     134,  129,   24,   24, 0x0a,

 // properties: name, type, flags
     167,  159, 0x0a095103,
     183,  179, 0x02095103,
     205,  196, 0xff095103,

       0        // eod
};

static const char qt_meta_stringdata_pqSignalAdaptorComboBox[] = {
    "pqSignalAdaptorComboBox\0\0"
    "currentTextChanged(QString)\0"
    "currentIndexChanged(int)\0"
    "setCurrentText(QString)\0index\0"
    "setCurrentIndex(int)\0data\0"
    "setCurrentData(QVariant)\0QString\0"
    "currentText\0int\0currentIndex\0QVariant\0"
    "currentData\0"
};

void pqSignalAdaptorComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSignalAdaptorComboBox *_t = static_cast<pqSignalAdaptorComboBox *>(_o);
        switch (_id) {
        case 0: _t->currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setCurrentData((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSignalAdaptorComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSignalAdaptorComboBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSignalAdaptorComboBox,
      qt_meta_data_pqSignalAdaptorComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSignalAdaptorComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSignalAdaptorComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSignalAdaptorComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSignalAdaptorComboBox))
        return static_cast<void*>(const_cast< pqSignalAdaptorComboBox*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSignalAdaptorComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = currentText(); break;
        case 1: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = currentData(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: setCurrentData(*reinterpret_cast< QVariant*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSignalAdaptorComboBox::currentTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqSignalAdaptorComboBox::currentIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_pqSignalAdaptorColor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   21,   21,   21, 0x0a,
      64,   21,   21,   21, 0x09,

 // properties: name, type, flags
      94,   85, 0xff095103,

       0        // eod
};

static const char qt_meta_stringdata_pqSignalAdaptorColor[] = {
    "pqSignalAdaptorColor\0\0colorChanged(QVariant)\0"
    "setColor(QVariant)\0handleColorChanged()\0"
    "QVariant\0color\0"
};

void pqSignalAdaptorColor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSignalAdaptorColor *_t = static_cast<pqSignalAdaptorColor *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->setColor((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->handleColorChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSignalAdaptorColor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSignalAdaptorColor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSignalAdaptorColor,
      qt_meta_data_pqSignalAdaptorColor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSignalAdaptorColor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSignalAdaptorColor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSignalAdaptorColor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSignalAdaptorColor))
        return static_cast<void*>(const_cast< pqSignalAdaptorColor*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSignalAdaptorColor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = color(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColor(*reinterpret_cast< QVariant*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSignalAdaptorColor::colorChanged(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_pqSignalAdaptorSliderRange[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   28,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   28,   27,   27, 0x0a,
      70,   27,   27,   27, 0x09,

 // properties: name, type, flags
      98,   91, 0x06095103,

       0        // eod
};

static const char qt_meta_stringdata_pqSignalAdaptorSliderRange[] = {
    "pqSignalAdaptorSliderRange\0\0val\0"
    "valueChanged(double)\0setValue(double)\0"
    "handleValueChanged()\0double\0value\0"
};

void pqSignalAdaptorSliderRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSignalAdaptorSliderRange *_t = static_cast<pqSignalAdaptorSliderRange *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->handleValueChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSignalAdaptorSliderRange::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSignalAdaptorSliderRange::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSignalAdaptorSliderRange,
      qt_meta_data_pqSignalAdaptorSliderRange, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSignalAdaptorSliderRange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSignalAdaptorSliderRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSignalAdaptorSliderRange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSignalAdaptorSliderRange))
        return static_cast<void*>(const_cast< pqSignalAdaptorSliderRange*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSignalAdaptorSliderRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = value(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSignalAdaptorSliderRange::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_pqSignalAdaptorTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   24,   24,   24, 0x0a,

 // properties: name, type, flags
      64,   56, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_pqSignalAdaptorTextEdit[] = {
    "pqSignalAdaptorTextEdit\0\0textChanged()\0"
    "setText(QString)\0QString\0text\0"
};

void pqSignalAdaptorTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSignalAdaptorTextEdit *_t = static_cast<pqSignalAdaptorTextEdit *>(_o);
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSignalAdaptorTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSignalAdaptorTextEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSignalAdaptorTextEdit,
      qt_meta_data_pqSignalAdaptorTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSignalAdaptorTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSignalAdaptorTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSignalAdaptorTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSignalAdaptorTextEdit))
        return static_cast<void*>(const_cast< pqSignalAdaptorTextEdit*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSignalAdaptorTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setText(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSignalAdaptorTextEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_pqSignalAdaptorSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   24,   23,   23, 0x0a,

 // properties: name, type, flags
      64,   60, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_pqSignalAdaptorSpinBox[] = {
    "pqSignalAdaptorSpinBox\0\0val\0"
    "valueChanged(int)\0setValue(int)\0int\0"
    "value\0"
};

void pqSignalAdaptorSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSignalAdaptorSpinBox *_t = static_cast<pqSignalAdaptorSpinBox *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSignalAdaptorSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSignalAdaptorSpinBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSignalAdaptorSpinBox,
      qt_meta_data_pqSignalAdaptorSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSignalAdaptorSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSignalAdaptorSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSignalAdaptorSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSignalAdaptorSpinBox))
        return static_cast<void*>(const_cast< pqSignalAdaptorSpinBox*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSignalAdaptorSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = value(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSignalAdaptorSpinBox::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
