/****************************************************************************
** Meta object code from reading C++ file 'pqBackgroundEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqBackgroundEditorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqBackgroundEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqBackgroundEditorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      54,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   79,   25,   25, 0x0a,
     109,  104,   25,   25, 0x09,
     148,   25,   25,   25, 0x09,
     177,   25,   25,   25, 0x09,

 // properties: name, type, flags
     212,  207, 0x01095103,
     231,  207, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_pqBackgroundEditorWidget[] = {
    "pqBackgroundEditorWidget\0\0"
    "gradientBackgroundChanged()\0"
    "imageBackgroundChanged()\0newView\0"
    "setView(pqView*)\0type\0"
    "currentIndexChangedBackgroundType(int)\0"
    "clickedRestoreDefaultColor()\0"
    "clickedRestoreDefaultColor2()\0bool\0"
    "gradientBackground\0imageBackground\0"
};

void pqBackgroundEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqBackgroundEditorWidget *_t = static_cast<pqBackgroundEditorWidget *>(_o);
        switch (_id) {
        case 0: _t->gradientBackgroundChanged(); break;
        case 1: _t->imageBackgroundChanged(); break;
        case 2: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 3: _t->currentIndexChangedBackgroundType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clickedRestoreDefaultColor(); break;
        case 5: _t->clickedRestoreDefaultColor2(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqBackgroundEditorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqBackgroundEditorWidget::staticMetaObject = {
    { &pqPropertyGroupWidget::staticMetaObject, qt_meta_stringdata_pqBackgroundEditorWidget,
      qt_meta_data_pqBackgroundEditorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqBackgroundEditorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqBackgroundEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqBackgroundEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqBackgroundEditorWidget))
        return static_cast<void*>(const_cast< pqBackgroundEditorWidget*>(this));
    return pqPropertyGroupWidget::qt_metacast(_clname);
}

int pqBackgroundEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyGroupWidget::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< bool*>(_v) = gradientBackground(); break;
        case 1: *reinterpret_cast< bool*>(_v) = imageBackground(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGradientBackground(*reinterpret_cast< bool*>(_v)); break;
        case 1: setImageBackground(*reinterpret_cast< bool*>(_v)); break;
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
void pqBackgroundEditorWidget::gradientBackgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqBackgroundEditorWidget::imageBackgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
