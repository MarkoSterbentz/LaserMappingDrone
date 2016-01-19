/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqAnimationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      52,   18,   18,   18, 0x05,
      90,   18,   18,   18, 0x05,
     111,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     149,   18,   18,   18, 0x09,
     163,   18,   18,   18, 0x09,
     185,   18,   18,   18, 0x09,
     216,  210,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimationWidget[] = {
    "pqAnimationWidget\0\0trackSelected(pqAnimationTrack*)\0"
    "deleteTrackClicked(pqAnimationTrack*)\0"
    "createTrackClicked()\0"
    "enableTrackClicked(pqAnimationTrack*)\0"
    "updateSizes()\0headerDblClicked(int)\0"
    "headerDeleteClicked(int)\0which\0"
    "headerEnabledClicked(int)\0"
};

void pqAnimationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimationWidget *_t = static_cast<pqAnimationWidget *>(_o);
        switch (_id) {
        case 0: _t->trackSelected((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 1: _t->deleteTrackClicked((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 2: _t->createTrackClicked(); break;
        case 3: _t->enableTrackClicked((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 4: _t->updateSizes(); break;
        case 5: _t->headerDblClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->headerDeleteClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->headerEnabledClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimationWidget::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_pqAnimationWidget,
      qt_meta_data_pqAnimationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationWidget))
        return static_cast<void*>(const_cast< pqAnimationWidget*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int pqAnimationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void pqAnimationWidget::trackSelected(pqAnimationTrack * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqAnimationWidget::deleteTrackClicked(pqAnimationTrack * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqAnimationWidget::createTrackClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pqAnimationWidget::enableTrackClicked(pqAnimationTrack * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
