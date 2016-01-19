/****************************************************************************
** Meta object code from reading C++ file 'pqSignalAdaptorCompositeTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSignalAdaptorCompositeTreeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSignalAdaptorCompositeTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSignalAdaptorCompositeTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   52,   35,   35, 0x0a,
      86,   35,   35,   35, 0x0a,
     102,   35,   35,   35, 0x0a,
     127,   35,   35,   35, 0x08,

 // properties: name, type, flags
      52,  151, 0x09095103,

       0        // eod
};

static const char qt_meta_stringdata_pqSignalAdaptorCompositeTreeWidget[] = {
    "pqSignalAdaptorCompositeTreeWidget\0\0"
    "valuesChanged()\0values\0"
    "setValues(QList<QVariant>)\0domainChanged()\0"
    "portInformationChanged()\0"
    "updateSelectionCounts()\0QList<QVariant>\0"
};

void pqSignalAdaptorCompositeTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSignalAdaptorCompositeTreeWidget *_t = static_cast<pqSignalAdaptorCompositeTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->valuesChanged(); break;
        case 1: _t->setValues((*reinterpret_cast< const QList<QVariant>(*)>(_a[1]))); break;
        case 2: _t->domainChanged(); break;
        case 3: _t->portInformationChanged(); break;
        case 4: _t->updateSelectionCounts(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSignalAdaptorCompositeTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSignalAdaptorCompositeTreeWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSignalAdaptorCompositeTreeWidget,
      qt_meta_data_pqSignalAdaptorCompositeTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSignalAdaptorCompositeTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSignalAdaptorCompositeTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSignalAdaptorCompositeTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSignalAdaptorCompositeTreeWidget))
        return static_cast<void*>(const_cast< pqSignalAdaptorCompositeTreeWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSignalAdaptorCompositeTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = values(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValues(*reinterpret_cast< QList<QVariant>*>(_v)); break;
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
void pqSignalAdaptorCompositeTreeWidget::valuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
