/****************************************************************************
** Meta object code from reading C++ file 'pqColorOpacityEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqColorOpacityEditorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorOpacityEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqColorOpacityEditorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       4,  139, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,
      48,   27,   27,   27, 0x05,
      68,   27,   27,   27, 0x05,
      89,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     114,   27,   27,   27, 0x0a,
     145,   27,   27,   27, 0x0a,
     182,  176,   27,   27, 0x0a,
     207,  203,   27,   27, 0x0a,
     232,   27,   27,   27, 0x0a,
     251,   27,   27,   27, 0x0a,
     280,  272,   27,   27, 0x0a,
     314,   27,   27,   27, 0x0a,
     341,   27,   27,   27, 0x0a,
     367,   27,   27,   27, 0x0a,
     401,  393,   27,   27, 0x0a,
     438,   27,   27,   27, 0x2a,
     453,   27,   27,   27, 0x0a,
     468,   27,   27,   27, 0x09,
     501,   27,   27,   27, 0x09,
     532,   27,   27,   27, 0x09,
     546,   27,   27,   27, 0x09,
     566,   27,   27,   27, 0x09,
     586,   27,   27,   27, 0x09,
     622,   27,   27,   27, 0x09,
     649,   27,   27,   27, 0x09,

 // properties: name, type, flags
     690,  674, 0x09095103,
     701,  674, 0x09095103,
     717,  712, 0x01095103,
     729,  712, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_pqColorOpacityEditorWidget[] = {
    "pqColorOpacityEditorWidget\0\0"
    "xrgbPointsChanged()\0xvmsPointsChanged()\0"
    "useLogScaleChanged()\0lockScalarRangeChanged()\0"
    "setXvmsPoints(QList<QVariant>)\0"
    "setXrgbPoints(QList<QVariant>)\0value\0"
    "setUseLogScale(bool)\0val\0"
    "setLockScalarRange(bool)\0resetRangeToData()\0"
    "resetRangeToCustom()\0min,max\0"
    "resetRangeToCustom(double,double)\0"
    "resetRangeToDataOverTime()\0"
    "resetRangeToVisibleData()\0"
    "invertTransferFunctions()\0add_new\0"
    "choosePreset(const pqColorMapModel*)\0"
    "choosePreset()\0saveAsPreset()\0"
    "opacityCurrentChanged(vtkIdType)\0"
    "colorCurrentChanged(vtkIdType)\0"
    "updatePanel()\0updateCurrentData()\0"
    "currentDataEdited()\0"
    "applyPreset(const pqColorMapModel*)\0"
    "updateIndexedLookupState()\0"
    "useLogScaleClicked(bool)\0QList<QVariant>\0"
    "xrgbPoints\0xvmsPoints\0bool\0useLogScale\0"
    "lockScalarRange\0"
};

void pqColorOpacityEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqColorOpacityEditorWidget *_t = static_cast<pqColorOpacityEditorWidget *>(_o);
        switch (_id) {
        case 0: _t->xrgbPointsChanged(); break;
        case 1: _t->xvmsPointsChanged(); break;
        case 2: _t->useLogScaleChanged(); break;
        case 3: _t->lockScalarRangeChanged(); break;
        case 4: _t->setXvmsPoints((*reinterpret_cast< const QList<QVariant>(*)>(_a[1]))); break;
        case 5: _t->setXrgbPoints((*reinterpret_cast< const QList<QVariant>(*)>(_a[1]))); break;
        case 6: _t->setUseLogScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setLockScalarRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->resetRangeToData(); break;
        case 9: _t->resetRangeToCustom(); break;
        case 10: _t->resetRangeToCustom((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->resetRangeToDataOverTime(); break;
        case 12: _t->resetRangeToVisibleData(); break;
        case 13: _t->invertTransferFunctions(); break;
        case 14: _t->choosePreset((*reinterpret_cast< const pqColorMapModel*(*)>(_a[1]))); break;
        case 15: _t->choosePreset(); break;
        case 16: _t->saveAsPreset(); break;
        case 17: _t->opacityCurrentChanged((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 18: _t->colorCurrentChanged((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 19: _t->updatePanel(); break;
        case 20: _t->updateCurrentData(); break;
        case 21: _t->currentDataEdited(); break;
        case 22: _t->applyPreset((*reinterpret_cast< const pqColorMapModel*(*)>(_a[1]))); break;
        case 23: _t->updateIndexedLookupState(); break;
        case 24: _t->useLogScaleClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqColorOpacityEditorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorOpacityEditorWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqColorOpacityEditorWidget,
      qt_meta_data_pqColorOpacityEditorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorOpacityEditorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorOpacityEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorOpacityEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorOpacityEditorWidget))
        return static_cast<void*>(const_cast< pqColorOpacityEditorWidget*>(this));
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqColorOpacityEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = xrgbPoints(); break;
        case 1: *reinterpret_cast< QList<QVariant>*>(_v) = xvmsPoints(); break;
        case 2: *reinterpret_cast< bool*>(_v) = useLogScale(); break;
        case 3: *reinterpret_cast< bool*>(_v) = lockScalarRange(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setXrgbPoints(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 1: setXvmsPoints(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 2: setUseLogScale(*reinterpret_cast< bool*>(_v)); break;
        case 3: setLockScalarRange(*reinterpret_cast< bool*>(_v)); break;
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
void pqColorOpacityEditorWidget::xrgbPointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqColorOpacityEditorWidget::xvmsPointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqColorOpacityEditorWidget::useLogScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pqColorOpacityEditorWidget::lockScalarRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
