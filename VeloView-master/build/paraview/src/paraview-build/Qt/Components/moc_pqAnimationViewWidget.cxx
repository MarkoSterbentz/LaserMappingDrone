/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqAnimationViewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimationViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   23,   22,   22, 0x0a,
      57,   22,   22,   22, 0x09,
      78,   22,   22,   22, 0x09,
     105,   22,   22,   22, 0x09,
     128,   22,   22,   22, 0x09,
     146,   22,   22,   22, 0x09,
     166,  160,   22,   22, 0x09,
     199,   22,   22,   22, 0x09,
     216,  160,   22,   22, 0x09,
     254,  160,   22,   22, 0x09,
     285,   22,   22,   22, 0x09,
     299,   22,   22,   22, 0x09,
     319,   22,   22,   22, 0x09,
     342,   22,   22,   22, 0x09,
     385,  381,   22,   22, 0x09,
     414,   22,   22,   22, 0x09,
     441,  437,   22,   22, 0x09,
     508,   22,   22,   22, 0x09,
     529,   22,   22,   22, 0x09,
     567,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimationViewWidget[] = {
    "pqAnimationViewWidget\0\0scene\0"
    "setScene(pqAnimationScene*)\0"
    "onSceneCuesChanged()\0keyFramesChanged(QObject*)\0"
    "updateSceneTimeRange()\0updateSceneTime()\0"
    "updateTicks()\0track\0"
    "trackSelected(pqAnimationTrack*)\0"
    "updatePlayMode()\0toggleTrackEnabled(pqAnimationTrack*)\0"
    "deleteTrack(pqAnimationTrack*)\0"
    "createTrack()\0createPythonTrack()\0"
    "setActiveView(pqView*)\0"
    "setCurrentSelection(pqPipelineSource*)\0"
    "pxy\0setCurrentProxy(vtkSMProxy*)\0"
    "setCurrentTime(double)\0,,,\0"
    "setKeyFrameTime(pqAnimationTrack*,pqAnimationKeyFrame*,int,double)\0"
    "onTimeLabelChanged()\0"
    "selectedDataProxyChanged(vtkSMProxy*)\0"
    "changeDataProxyDialogAccepted()\0"
};

void pqAnimationViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimationViewWidget *_t = static_cast<pqAnimationViewWidget *>(_o);
        switch (_id) {
        case 0: _t->setScene((*reinterpret_cast< pqAnimationScene*(*)>(_a[1]))); break;
        case 1: _t->onSceneCuesChanged(); break;
        case 2: _t->keyFramesChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->updateSceneTimeRange(); break;
        case 4: _t->updateSceneTime(); break;
        case 5: _t->updateTicks(); break;
        case 6: _t->trackSelected((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 7: _t->updatePlayMode(); break;
        case 8: _t->toggleTrackEnabled((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 9: _t->deleteTrack((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 10: _t->createTrack(); break;
        case 11: _t->createPythonTrack(); break;
        case 12: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 13: _t->setCurrentSelection((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 14: _t->setCurrentProxy((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 15: _t->setCurrentTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setKeyFrameTime((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1])),(*reinterpret_cast< pqAnimationKeyFrame*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 17: _t->onTimeLabelChanged(); break;
        case 18: _t->selectedDataProxyChanged((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 19: _t->changeDataProxyDialogAccepted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimationViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimationViewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqAnimationViewWidget,
      qt_meta_data_pqAnimationViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimationViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimationViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimationViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationViewWidget))
        return static_cast<void*>(const_cast< pqAnimationViewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqAnimationViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
