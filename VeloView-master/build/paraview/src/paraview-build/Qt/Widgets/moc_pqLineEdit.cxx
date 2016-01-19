/****************************************************************************
** Meta object code from reading C++ file 'pqLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqLineEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   44,   11,   11, 0x0a,
      84,   80,   11,   11, 0x0a,
     130,   11,   11,   11, 0x08,
     145,   11,   11,   11, 0x08,

 // properties: name, type, flags
     173,  165, 0x0a095003,
     184,  179, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_pqLineEdit[] = {
    "pqLineEdit\0\0textChangedAndEditingFinished()\0"
    "text\0setTextAndResetCursor(QString)\0"
    "val\0setResetCursorPositionOnEditingFinished(bool)\0"
    "onTextEdited()\0onEditingFinished()\0"
    "QString\0text2\0bool\0"
    "resetCursorPositionOnEditingFinished\0"
};

void pqLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqLineEdit *_t = static_cast<pqLineEdit *>(_o);
        switch (_id) {
        case 0: _t->textChangedAndEditingFinished(); break;
        case 1: _t->setTextAndResetCursor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setResetCursorPositionOnEditingFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onTextEdited(); break;
        case 4: _t->onEditingFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_pqLineEdit,
      qt_meta_data_pqLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqLineEdit))
        return static_cast<void*>(const_cast< pqLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int pqLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        case 1: *reinterpret_cast< bool*>(_v) = resetCursorPositionOnEditingFinished(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTextAndResetCursor(*reinterpret_cast< QString*>(_v)); break;
        case 1: setResetCursorPositionOnEditingFinished(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqLineEdit::textChangedAndEditingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
