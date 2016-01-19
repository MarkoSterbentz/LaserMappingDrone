/****************************************************************************
** Meta object code from reading C++ file 'pqTimeInspectorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqTimeInspectorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTimeInspectorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTimeInspectorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      37,   22,   22,   22, 0x05,
      63,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   94,   22,   22, 0x0a,
     122,   22,   22,   22, 0x0a,
     150,   22,   22,   22, 0x08,
     164,   22,   22,   22, 0x08,
     214,   22,   22,   22, 0x08,

 // properties: name, type, flags
     263,  256, 0x06095103,
     278,  256, 0x06095103,
     299,  291, 0x0a095103,
     329,  313, 0x09095103,
     348,  344, 0x02095103,
     368,  313, 0x09095103,
     380,  313, 0x09095103,
     402,  256, 0x06495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_pqTimeInspectorWidget[] = {
    "pqTimeInspectorWidget\0\0dummySignal()\0"
    "sceneCurrentTimeChanged()\0"
    "suppressedTimeSourcesChanged()\0server\0"
    "setServer(pqServer*)\0setSceneCurrentTime(double)\0"
    "updateScene()\0"
    "handleProxyNameChanged(pqServerManagerModelItem*)\0"
    "toggleTrackSuppression(pqAnimationTrack*)\0"
    "double\0sceneStartTime\0sceneEndTime\0"
    "QString\0scenePlayMode\0QList<QVariant>\0"
    "sceneTimeSteps\0int\0sceneNumberOfFrames\0"
    "timeSources\0suppressedTimeSources\0"
    "sceneCurrentTime\0"
};

void pqTimeInspectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTimeInspectorWidget *_t = static_cast<pqTimeInspectorWidget *>(_o);
        switch (_id) {
        case 0: _t->dummySignal(); break;
        case 1: _t->sceneCurrentTimeChanged(); break;
        case 2: _t->suppressedTimeSourcesChanged(); break;
        case 3: _t->setServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 4: _t->setSceneCurrentTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->updateScene(); break;
        case 6: _t->handleProxyNameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 7: _t->toggleTrackSuppression((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTimeInspectorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTimeInspectorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqTimeInspectorWidget,
      qt_meta_data_pqTimeInspectorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTimeInspectorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTimeInspectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTimeInspectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTimeInspectorWidget))
        return static_cast<void*>(const_cast< pqTimeInspectorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqTimeInspectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = sceneStartTime(); break;
        case 1: *reinterpret_cast< double*>(_v) = sceneEndTime(); break;
        case 2: *reinterpret_cast< QString*>(_v) = scenePlayMode(); break;
        case 3: *reinterpret_cast< QList<QVariant>*>(_v) = sceneTimeSteps(); break;
        case 4: *reinterpret_cast< int*>(_v) = sceneNumberOfFrames(); break;
        case 5: *reinterpret_cast< QList<QVariant>*>(_v) = timeSources(); break;
        case 6: *reinterpret_cast< QList<QVariant>*>(_v) = suppressedTimeSources(); break;
        case 7: *reinterpret_cast< double*>(_v) = sceneCurrentTime(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSceneStartTime(*reinterpret_cast< double*>(_v)); break;
        case 1: setSceneEndTime(*reinterpret_cast< double*>(_v)); break;
        case 2: setScenePlayMode(*reinterpret_cast< QString*>(_v)); break;
        case 3: setSceneTimeSteps(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 4: setSceneNumberOfFrames(*reinterpret_cast< int*>(_v)); break;
        case 5: setTimeSources(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 6: setSuppressedTimeSources(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 7: setSceneCurrentTime(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqTimeInspectorWidget::dummySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqTimeInspectorWidget::sceneCurrentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqTimeInspectorWidget::suppressedTimeSourcesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
