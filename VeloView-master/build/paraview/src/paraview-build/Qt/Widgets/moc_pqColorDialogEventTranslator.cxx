/****************************************************************************
** Meta object code from reading C++ file 'pqColorDialogEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqColorDialogEventTranslator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorDialogEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqColorDialogEventTranslator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x08,
      52,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqColorDialogEventTranslator[] = {
    "pqColorDialogEventTranslator\0\0"
    "onColorChosen(QColor)\0onFinished(int)\0"
};

void pqColorDialogEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqColorDialogEventTranslator *_t = static_cast<pqColorDialogEventTranslator *>(_o);
        switch (_id) {
        case 0: _t->onColorChosen((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->onFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqColorDialogEventTranslator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorDialogEventTranslator::staticMetaObject = {
    { &pqWidgetEventTranslator::staticMetaObject, qt_meta_stringdata_pqColorDialogEventTranslator,
      qt_meta_data_pqColorDialogEventTranslator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorDialogEventTranslator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorDialogEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorDialogEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorDialogEventTranslator))
        return static_cast<void*>(const_cast< pqColorDialogEventTranslator*>(this));
    return pqWidgetEventTranslator::qt_metacast(_clname);
}

int pqColorDialogEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqWidgetEventTranslator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
