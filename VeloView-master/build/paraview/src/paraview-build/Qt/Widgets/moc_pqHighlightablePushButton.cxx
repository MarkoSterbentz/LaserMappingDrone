/****************************************************************************
** Meta object code from reading C++ file 'pqHighlightablePushButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqHighlightablePushButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqHighlightablePushButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqHighlightablePushButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   27,   26,   26, 0x0a,
      49,   26,   26,   26, 0x2a,
      61,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqHighlightablePushButton[] = {
    "pqHighlightablePushButton\0\0clear\0"
    "highlight(bool)\0highlight()\0clear()\0"
};

void pqHighlightablePushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqHighlightablePushButton *_t = static_cast<pqHighlightablePushButton *>(_o);
        switch (_id) {
        case 0: _t->highlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->highlight(); break;
        case 2: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqHighlightablePushButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqHighlightablePushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_pqHighlightablePushButton,
      qt_meta_data_pqHighlightablePushButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqHighlightablePushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqHighlightablePushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqHighlightablePushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqHighlightablePushButton))
        return static_cast<void*>(const_cast< pqHighlightablePushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int pqHighlightablePushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
