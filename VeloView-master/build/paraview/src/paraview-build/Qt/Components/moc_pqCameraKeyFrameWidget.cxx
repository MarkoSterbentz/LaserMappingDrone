/****************************************************************************
** Meta object code from reading C++ file 'pqCameraKeyFrameWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqCameraKeyFrameWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCameraKeyFrameWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCameraKeyFrameWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   43,   23,   23, 0x0a,
     101,   94,   23,   23, 0x0a,
     135,   23,   23,   23, 0x0a,
     161,   43,   23,   23, 0x0a,
     189,   23,   23,   23, 0x08,
     209,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqCameraKeyFrameWidget[] = {
    "pqCameraKeyFrameWidget\0\0useCurrentCamera()\0"
    "keyframeProxy\0initializeUsingKeyFrame(vtkSMProxy*)\0"
    "camera\0initializeUsingCamera(vtkCamera*)\0"
    "setUsePathBasedMode(bool)\0"
    "saveToKeyFrame(vtkSMProxy*)\0"
    "changeCurrentPage()\0updateSplineWidget()\0"
};

void pqCameraKeyFrameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCameraKeyFrameWidget *_t = static_cast<pqCameraKeyFrameWidget *>(_o);
        switch (_id) {
        case 0: _t->useCurrentCamera(); break;
        case 1: _t->initializeUsingKeyFrame((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 2: _t->initializeUsingCamera((*reinterpret_cast< vtkCamera*(*)>(_a[1]))); break;
        case 3: _t->setUsePathBasedMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->saveToKeyFrame((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 5: _t->changeCurrentPage(); break;
        case 6: _t->updateSplineWidget(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCameraKeyFrameWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCameraKeyFrameWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqCameraKeyFrameWidget,
      qt_meta_data_pqCameraKeyFrameWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCameraKeyFrameWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCameraKeyFrameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCameraKeyFrameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCameraKeyFrameWidget))
        return static_cast<void*>(const_cast< pqCameraKeyFrameWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqCameraKeyFrameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqCameraKeyFrameWidget::useCurrentCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
