/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui7.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_gui/com_trolltech_qt_gui7.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui7.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QShortcutEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   48,   32,   31, 0x0a,
     114,  107,   32,   31, 0x2a,
     155,  151,   31,   31, 0x0a,
     216,  199,  194,   31, 0x0a,
     265,  199,  245,   31, 0x0a,
     290,  199,  286,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QShortcutEvent[] = {
    "PythonQtWrapper_QShortcutEvent\0\0"
    "QShortcutEvent*\0key,id,ambiguous\0"
    "new_QShortcutEvent(QKeySequence,int,bool)\0"
    "key,id\0new_QShortcutEvent(QKeySequence,int)\0"
    "obj\0delete_QShortcutEvent(QShortcutEvent*)\0"
    "bool\0theWrappedObject\0"
    "isAmbiguous(QShortcutEvent*)\0"
    "const QKeySequence*\0key(QShortcutEvent*)\0"
    "int\0shortcutId(QShortcutEvent*)\0"
};

void PythonQtWrapper_QShortcutEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QShortcutEvent *_t = static_cast<PythonQtWrapper_QShortcutEvent *>(_o);
        switch (_id) {
        case 0: { QShortcutEvent* _r = _t->new_QShortcutEvent((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QShortcutEvent**>(_a[0]) = _r; }  break;
        case 1: { QShortcutEvent* _r = _t->new_QShortcutEvent((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QShortcutEvent**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QShortcutEvent((*reinterpret_cast< QShortcutEvent*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isAmbiguous((*reinterpret_cast< QShortcutEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { const QKeySequence* _r = _t->key((*reinterpret_cast< QShortcutEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QKeySequence**>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->shortcutId((*reinterpret_cast< QShortcutEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QShortcutEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QShortcutEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QShortcutEvent,
      qt_meta_data_PythonQtWrapper_QShortcutEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QShortcutEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QShortcutEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QShortcutEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QShortcutEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QShortcutEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QShortcutEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QShowEvent[] = {

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
      40,   27,   28,   27, 0x0a,
      61,   57,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QShowEvent[] = {
    "PythonQtWrapper_QShowEvent\0\0QShowEvent*\0"
    "new_QShowEvent()\0obj\0"
    "delete_QShowEvent(QShowEvent*)\0"
};

void PythonQtWrapper_QShowEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QShowEvent *_t = static_cast<PythonQtWrapper_QShowEvent *>(_o);
        switch (_id) {
        case 0: { QShowEvent* _r = _t->new_QShowEvent();
            if (_a[0]) *reinterpret_cast< QShowEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QShowEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QShowEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QShowEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QShowEvent,
      qt_meta_data_PythonQtWrapper_QShowEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QShowEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QShowEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QShowEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QShowEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QShowEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QShowEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSizeGrip[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   27,   26, 0x0a,
      73,   69,   26,   26, 0x0a,
     131,  107,  102,   26, 0x0a,
     188,  157,  102,   26, 0x0a,
     256,  229,   26,   26, 0x0a,
     290,  107,   26,   26, 0x0a,
     330,  107,   26,   26, 0x0a,
     399,  371,   26,   26, 0x0a,
     469,  442,   26,   26, 0x0a,
     503,  107,   26,   26, 0x0a,
     539,  107,   26,   26, 0x0a,
     594,  567,   26,   26, 0x0a,
     651,  634,  628,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSizeGrip[] = {
    "PythonQtWrapper_QSizeGrip\0\0QSizeGrip*\0"
    "parent\0new_QSizeGrip(QWidget*)\0obj\0"
    "delete_QSizeGrip(QSizeGrip*)\0bool\0"
    "theWrappedObject,arg__1\0"
    "event(QSizeGrip*,QEvent*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "eventFilter(QSizeGrip*,QObject*,QEvent*)\0"
    "theWrappedObject,hideEvent\0"
    "hideEvent(QSizeGrip*,QHideEvent*)\0"
    "mouseMoveEvent(QSizeGrip*,QMouseEvent*)\0"
    "mousePressEvent(QSizeGrip*,QMouseEvent*)\0"
    "theWrappedObject,mouseEvent\0"
    "mouseReleaseEvent(QSizeGrip*,QMouseEvent*)\0"
    "theWrappedObject,moveEvent\0"
    "moveEvent(QSizeGrip*,QMoveEvent*)\0"
    "paintEvent(QSizeGrip*,QPaintEvent*)\0"
    "setVisible(QSizeGrip*,bool)\0"
    "theWrappedObject,showEvent\0"
    "showEvent(QSizeGrip*,QShowEvent*)\0"
    "QSize\0theWrappedObject\0sizeHint(QSizeGrip*)\0"
};

void PythonQtWrapper_QSizeGrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSizeGrip *_t = static_cast<PythonQtWrapper_QSizeGrip *>(_o);
        switch (_id) {
        case 0: { QSizeGrip* _r = _t->new_QSizeGrip((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeGrip**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSizeGrip((*reinterpret_cast< QSizeGrip*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->event((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->eventFilter((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->hideEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QHideEvent*(*)>(_a[2]))); break;
        case 5: _t->mouseMoveEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 6: _t->mousePressEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 7: _t->mouseReleaseEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 8: _t->moveEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QMoveEvent*(*)>(_a[2]))); break;
        case 9: _t->paintEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 10: _t->setVisible((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->showEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 12: { QSize _r = _t->sizeHint((*reinterpret_cast< QSizeGrip*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSizeGrip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSizeGrip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSizeGrip,
      qt_meta_data_PythonQtWrapper_QSizeGrip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSizeGrip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSizeGrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSizeGrip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSizeGrip))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSizeGrip*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSizeGrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   34,   25,   24, 0x0a,
      63,   24,   25,   24, 0x2a,
      96,   77,   25,   24, 0x0a,
     146,  134,   25,   24, 0x2a,
     179,  175,   24,   24, 0x0a,
     232,  209,  204,   24, 0x0a,
     279,  262,  256,   24, 0x0a,
     325,  305,   24,   24, 0x0a,
     363,  305,   24,   24, 0x0a,
     402,  305,   24,   24, 0x0a,
     443,  305,   24,   24, 0x0a,
     497,  477,   24,   24, 0x0a,
     553,  527,   24,   24, 0x0a,
     601,  262,  256,   24, 0x0a,
     624,  262,  620,   24, 0x0a,
     669,  262,  647,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSlider[] = {
    "PythonQtWrapper_QSlider\0\0QSlider*\0"
    "parent\0new_QSlider(QWidget*)\0new_QSlider()\0"
    "orientation,parent\0"
    "new_QSlider(Qt::Orientation,QWidget*)\0"
    "orientation\0new_QSlider(Qt::Orientation)\0"
    "obj\0delete_QSlider(QSlider*)\0bool\0"
    "theWrappedObject,event\0event(QSlider*,QEvent*)\0"
    "QSize\0theWrappedObject\0minimumSizeHint(QSlider*)\0"
    "theWrappedObject,ev\0"
    "mouseMoveEvent(QSlider*,QMouseEvent*)\0"
    "mousePressEvent(QSlider*,QMouseEvent*)\0"
    "mouseReleaseEvent(QSlider*,QMouseEvent*)\0"
    "paintEvent(QSlider*,QPaintEvent*)\0"
    "theWrappedObject,ti\0setTickInterval(QSlider*,int)\0"
    "theWrappedObject,position\0"
    "setTickPosition(QSlider*,QSlider::TickPosition)\0"
    "sizeHint(QSlider*)\0int\0tickInterval(QSlider*)\0"
    "QSlider::TickPosition\0tickPosition(QSlider*)\0"
};

void PythonQtWrapper_QSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSlider *_t = static_cast<PythonQtWrapper_QSlider *>(_o);
        switch (_id) {
        case 0: { QSlider* _r = _t->new_QSlider((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = _r; }  break;
        case 1: { QSlider* _r = _t->new_QSlider();
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = _r; }  break;
        case 2: { QSlider* _r = _t->new_QSlider((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = _r; }  break;
        case 3: { QSlider* _r = _t->new_QSlider((*reinterpret_cast< Qt::Orientation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSlider((*reinterpret_cast< QSlider*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 7: _t->mouseMoveEvent((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 8: _t->mousePressEvent((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 9: _t->mouseReleaseEvent((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 10: _t->paintEvent((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 11: _t->setTickInterval((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->setTickPosition((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QSlider::TickPosition(*)>(_a[2]))); break;
        case 13: { QSize _r = _t->sizeHint((*reinterpret_cast< QSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->tickInterval((*reinterpret_cast< QSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { QSlider::TickPosition _r = _t->tickPosition((*reinterpret_cast< QSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSlider::TickPosition*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSlider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSlider,
      qt_meta_data_PythonQtWrapper_QSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSlider))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSlider*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSortFilterProxyModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      69,   62,   39,   38, 0x0a,
     105,   38,   39,   38, 0x2a,
     137,  133,   38,   38, 0x0a,
     225,  202,  190,   38, 0x0a,
     296,  272,  267,   38, 0x0a,
     349,  272,  345,   38, 0x0a,
     414,  397,  345,   38, 0x2a,
     487,  459,  450,   38, 0x0a,
     532,  202,  450,   38, 0x2a,
     620,  573,  267,   38, 0x0a,
     709,  397,  267,   38, 0x0a,
     751,  272,   38,   38, 0x0a,
     842,  797,  267,   38, 0x0a,
     944,  902,  267,   38, 0x0a,
    1021,  397, 1001,   38, 0x0a,
    1067,  397,  345,   38, 0x0a,
    1115,  397, 1107,   38, 0x0a,
    1152,  397,  345,   38, 0x0a,
    1201,  202, 1187,   38, 0x0a,
    1243,  272,  267,   38, 0x0a,
    1291,  397,  267,   38, 0x2a,
    1369, 1327,  450,   38, 0x0a,
    1465, 1428,  450,   38, 0x2a,
    1555, 1520,  190,   38, 0x0a,
    1633, 1605,  190,   38, 0x2a,
    1708, 1671,  267,   38, 0x0a,
    1796, 1766,  267,   38, 0x2a,
    1876, 1842,  267,   38, 0x0a,
    1958, 1931,  267,   38, 0x2a,
    2001,  397,  267,   38, 0x0a,
    2071, 2043,  267,   38, 0x0a,
    2157, 2128,  190,   38, 0x0a,
    2255, 2222, 2207,   38, 0x0a,
    2349, 2317, 2207,   38, 0x0a,
    2437, 2409,  190,   38, 0x0a,
    2549, 2504, 2485,   38, 0x0a,
    2662, 2623, 2485,   38, 0x2a,
    2755, 2721, 2485,   38, 0x2a,
    2846, 2821, 2810,   38, 0x0a,
    2910,  397, 2898,   38, 0x0a,
    2953,  397, 2944,   38, 0x0a,
    3007, 2984,  190,   38, 0x0a,
    3050, 1671,  267,   38, 0x0a,
    3108, 1766,  267,   38, 0x2a,
    3154, 1842,  267,   38, 0x0a,
    3209, 1931,  267,   38, 0x2a,
    3252,  272,  345,   38, 0x0a,
    3297,  397,  345,   38, 0x2a,
    3364, 3330,  267,   38, 0x0a,
    3450, 3421,  267,   38, 0x2a,
    3527, 3503,   38,   38, 0x0a,
    3597, 3577,   38,   38, 0x0a,
    3690, 3666,   38,   38, 0x0a,
    3761, 3737,   38,   38, 0x0a,
    3831, 3809,   38,   38, 0x0a,
    3921, 3873,  267,   38, 0x0a,
    4035, 3992,  267,   38, 0x2a,
    4102, 3577,   38,   38, 0x0a,
    4189, 4169,   38,   38, 0x0a,
    4237, 3809,   38,   38, 0x0a,
    4306, 4277,   38,   38, 0x0a,
    4395, 4365,   38,   38, 0x0a,
    4442, 3666,   38,   38, 0x2a,
    4475,  397, 1001,   38, 0x0a,
    4519,  397,  345,   38, 0x0a,
    4568,  397, 4554,   38, 0x0a,
    4602,  397,  345,   38, 0x0a,
    4641,  202, 4635,   38, 0x0a,
    4698,  397, 4682,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel[] = {
    "PythonQtWrapper_QSortFilterProxyModel\0"
    "\0QSortFilterProxyModel*\0parent\0"
    "new_QSortFilterProxyModel(QObject*)\0"
    "new_QSortFilterProxyModel()\0obj\0"
    "delete_QSortFilterProxyModel(QSortFilterProxyModel*)\0"
    "QModelIndex\0theWrappedObject,index\0"
    "buddy(QSortFilterProxyModel*,QModelIndex)\0"
    "bool\0theWrappedObject,parent\0"
    "canFetchMore(QSortFilterProxyModel*,QModelIndex)\0"
    "int\0columnCount(QSortFilterProxyModel*,QModelIndex)\0"
    "theWrappedObject\0columnCount(QSortFilterProxyModel*)\0"
    "QVariant\0theWrappedObject,index,role\0"
    "data(QSortFilterProxyModel*,QModelIndex,int)\0"
    "data(QSortFilterProxyModel*,QModelIndex)\0"
    "theWrappedObject,data,action,row,column,parent\0"
    "dropMimeData(QSortFilterProxyModel*,const QMimeData*,Qt::DropAction,in"
    "t,int,QModelIndex)\0"
    "dynamicSortFilter(QSortFilterProxyModel*)\0"
    "fetchMore(QSortFilterProxyModel*,QModelIndex)\0"
    "theWrappedObject,source_column,source_parent\0"
    "filterAcceptsColumn(QSortFilterProxyModel*,int,QModelIndex)\0"
    "theWrappedObject,source_row,source_parent\0"
    "filterAcceptsRow(QSortFilterProxyModel*,int,QModelIndex)\0"
    "Qt::CaseSensitivity\0"
    "filterCaseSensitivity(QSortFilterProxyModel*)\0"
    "filterKeyColumn(QSortFilterProxyModel*)\0"
    "QRegExp\0filterRegExp(QSortFilterProxyModel*)\0"
    "filterRole(QSortFilterProxyModel*)\0"
    "Qt::ItemFlags\0flags(QSortFilterProxyModel*,QModelIndex)\0"
    "hasChildren(QSortFilterProxyModel*,QModelIndex)\0"
    "hasChildren(QSortFilterProxyModel*)\0"
    "theWrappedObject,section,orientation,role\0"
    "headerData(QSortFilterProxyModel*,int,Qt::Orientation,int)\0"
    "theWrappedObject,section,orientation\0"
    "headerData(QSortFilterProxyModel*,int,Qt::Orientation)\0"
    "theWrappedObject,row,column,parent\0"
    "index(QSortFilterProxyModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,column\0"
    "index(QSortFilterProxyModel*,int,int)\0"
    "theWrappedObject,column,count,parent\0"
    "insertColumns(QSortFilterProxyModel*,int,int,QModelIndex)\0"
    "theWrappedObject,column,count\0"
    "insertColumns(QSortFilterProxyModel*,int,int)\0"
    "theWrappedObject,row,count,parent\0"
    "insertRows(QSortFilterProxyModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,count\0"
    "insertRows(QSortFilterProxyModel*,int,int)\0"
    "isSortLocaleAware(QSortFilterProxyModel*)\0"
    "theWrappedObject,left,right\0"
    "lessThan(QSortFilterProxyModel*,QModelIndex,QModelIndex)\0"
    "theWrappedObject,sourceIndex\0"
    "mapFromSource(QSortFilterProxyModel*,QModelIndex)\0"
    "QItemSelection\0theWrappedObject,sourceSelection\0"
    "mapSelectionFromSource(QSortFilterProxyModel*,QItemSelection)\0"
    "theWrappedObject,proxySelection\0"
    "mapSelectionToSource(QSortFilterProxyModel*,QItemSelection)\0"
    "theWrappedObject,proxyIndex\0"
    "mapToSource(QSortFilterProxyModel*,QModelIndex)\0"
    "QList<QModelIndex>\0"
    "theWrappedObject,start,role,value,hits,flags\0"
    "match(QSortFilterProxyModel*,QModelIndex,int,QVariant,int,Qt::MatchFla"
    "gs)\0"
    "theWrappedObject,start,role,value,hits\0"
    "match(QSortFilterProxyModel*,QModelIndex,int,QVariant,int)\0"
    "theWrappedObject,start,role,value\0"
    "match(QSortFilterProxyModel*,QModelIndex,int,QVariant)\0"
    "QMimeData*\0theWrappedObject,indexes\0"
    "mimeData(QSortFilterProxyModel*,QList<QModelIndex>)\0"
    "QStringList\0mimeTypes(QSortFilterProxyModel*)\0"
    "QObject*\0parent(QSortFilterProxyModel*)\0"
    "theWrappedObject,child\0"
    "parent(QSortFilterProxyModel*,QModelIndex)\0"
    "removeColumns(QSortFilterProxyModel*,int,int,QModelIndex)\0"
    "removeColumns(QSortFilterProxyModel*,int,int)\0"
    "removeRows(QSortFilterProxyModel*,int,int,QModelIndex)\0"
    "removeRows(QSortFilterProxyModel*,int,int)\0"
    "rowCount(QSortFilterProxyModel*,QModelIndex)\0"
    "rowCount(QSortFilterProxyModel*)\0"
    "theWrappedObject,index,value,role\0"
    "setData(QSortFilterProxyModel*,QModelIndex,QVariant,int)\0"
    "theWrappedObject,index,value\0"
    "setData(QSortFilterProxyModel*,QModelIndex,QVariant)\0"
    "theWrappedObject,enable\0"
    "setDynamicSortFilter(QSortFilterProxyModel*,bool)\0"
    "theWrappedObject,cs\0"
    "setFilterCaseSensitivity(QSortFilterProxyModel*,Qt::CaseSensitivity)\0"
    "theWrappedObject,column\0"
    "setFilterKeyColumn(QSortFilterProxyModel*,int)\0"
    "theWrappedObject,regExp\0"
    "setFilterRegExp(QSortFilterProxyModel*,QRegExp)\0"
    "theWrappedObject,role\0"
    "setFilterRole(QSortFilterProxyModel*,int)\0"
    "theWrappedObject,section,orientation,value,role\0"
    "setHeaderData(QSortFilterProxyModel*,int,Qt::Orientation,QVariant,int)\0"
    "theWrappedObject,section,orientation,value\0"
    "setHeaderData(QSortFilterProxyModel*,int,Qt::Orientation,QVariant)\0"
    "setSortCaseSensitivity(QSortFilterProxyModel*,Qt::CaseSensitivity)\0"
    "theWrappedObject,on\0"
    "setSortLocaleAware(QSortFilterProxyModel*,bool)\0"
    "setSortRole(QSortFilterProxyModel*,int)\0"
    "theWrappedObject,sourceModel\0"
    "setSourceModel(QSortFilterProxyModel*,QAbstractItemModel*)\0"
    "theWrappedObject,column,order\0"
    "sort(QSortFilterProxyModel*,int,Qt::SortOrder)\0"
    "sort(QSortFilterProxyModel*,int)\0"
    "sortCaseSensitivity(QSortFilterProxyModel*)\0"
    "sortColumn(QSortFilterProxyModel*)\0"
    "Qt::SortOrder\0sortOrder(QSortFilterProxyModel*)\0"
    "sortRole(QSortFilterProxyModel*)\0QSize\0"
    "span(QSortFilterProxyModel*,QModelIndex)\0"
    "Qt::DropActions\0"
    "supportedDropActions(QSortFilterProxyModel*)\0"
};

void PythonQtWrapper_QSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSortFilterProxyModel *_t = static_cast<PythonQtWrapper_QSortFilterProxyModel *>(_o);
        switch (_id) {
        case 0: { QSortFilterProxyModel* _r = _t->new_QSortFilterProxyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSortFilterProxyModel**>(_a[0]) = _r; }  break;
        case 1: { QSortFilterProxyModel* _r = _t->new_QSortFilterProxyModel();
            if (_a[0]) *reinterpret_cast< QSortFilterProxyModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSortFilterProxyModel((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1]))); break;
        case 3: { QModelIndex _r = _t->buddy((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->canFetchMore((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->columnCount((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->columnCount((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->data((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->data((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->dropMimeData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->dynamicSortFilter((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->fetchMore((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 12: { bool _r = _t->filterAcceptsColumn((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->filterAcceptsRow((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { Qt::CaseSensitivity _r = _t->filterCaseSensitivity((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CaseSensitivity*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->filterKeyColumn((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QRegExp _r = _t->filterRegExp((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegExp*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->filterRole((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->hasChildren((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->hasChildren((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QVariant _r = _t->headerData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 22: { QVariant _r = _t->headerData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 23: { QModelIndex _r = _t->index((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 24: { QModelIndex _r = _t->index((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->insertColumns((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->insertColumns((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->insertRows((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->insertRows((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isSortLocaleAware((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->lessThan((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { QModelIndex _r = _t->mapFromSource((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 32: { QItemSelection _r = _t->mapSelectionFromSource((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = _r; }  break;
        case 33: { QItemSelection _r = _t->mapSelectionToSource((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = _r; }  break;
        case 34: { QModelIndex _r = _t->mapToSource((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 35: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 36: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 37: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 38: { QMimeData* _r = _t->mimeData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QModelIndex>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 39: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 40: { QObject* _r = _t->parent((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 41: { QModelIndex _r = _t->parent((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->removeColumns((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->removeColumns((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->removeRows((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->removeRows((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { int _r = _t->rowCount((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->rowCount((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->setData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->setData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: _t->setDynamicSortFilter((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->setFilterCaseSensitivity((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 52: _t->setFilterKeyColumn((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->setFilterRegExp((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2]))); break;
        case 54: _t->setFilterRole((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: { bool _r = _t->setHeaderData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->setHeaderData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: _t->setSortCaseSensitivity((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 58: _t->setSortLocaleAware((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 59: _t->setSortRole((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->setSourceModel((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2]))); break;
        case 61: _t->sort((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 62: _t->sort((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 63: { Qt::CaseSensitivity _r = _t->sortCaseSensitivity((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CaseSensitivity*>(_a[0]) = _r; }  break;
        case 64: { int _r = _t->sortColumn((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 65: { Qt::SortOrder _r = _t->sortOrder((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::SortOrder*>(_a[0]) = _r; }  break;
        case 66: { int _r = _t->sortRole((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 67: { QSize _r = _t->span((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 68: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSortFilterProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSortFilterProxyModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel,
      qt_meta_data_PythonQtWrapper_QSortFilterProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSortFilterProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSortFilterProxyModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSound[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   32,   24,   23, 0x0a,
      86,   77,   24,   23, 0x2a,
     110,  106,   23,   23, 0x0a,
     158,  141,  133,   23, 0x0a,
     181,   23,  176,   23, 0x0a,
     209,  141,  176,   23, 0x0a,
     233,  141,  229,   23, 0x0a,
     248,  141,  229,   23, 0x0a,
     272,   77,   23,   23, 0x0a,
     324,  300,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSound[] = {
    "PythonQtWrapper_QSound\0\0QSound*\0"
    "filename,parent\0new_QSound(QString,QObject*)\0"
    "filename\0new_QSound(QString)\0obj\0"
    "delete_QSound(QSound*)\0QString\0"
    "theWrappedObject\0fileName(QSound*)\0"
    "bool\0static_QSound_isAvailable()\0"
    "isFinished(QSound*)\0int\0loops(QSound*)\0"
    "loopsRemaining(QSound*)\0"
    "static_QSound_play(QString)\0"
    "theWrappedObject,arg__1\0setLoops(QSound*,int)\0"
};

void PythonQtWrapper_QSound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSound *_t = static_cast<PythonQtWrapper_QSound *>(_o);
        switch (_id) {
        case 0: { QSound* _r = _t->new_QSound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSound**>(_a[0]) = _r; }  break;
        case 1: { QSound* _r = _t->new_QSound((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSound**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSound((*reinterpret_cast< QSound*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->fileName((*reinterpret_cast< QSound*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->static_QSound_isAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isFinished((*reinterpret_cast< QSound*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->loops((*reinterpret_cast< QSound*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->loopsRemaining((*reinterpret_cast< QSound*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->static_QSound_play((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setLoops((*reinterpret_cast< QSound*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSound::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSound::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSound,
      qt_meta_data_PythonQtWrapper_QSound, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSound))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSound*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSpacerItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   42,   29,   28, 0x0a,
     133,  123,   29,   28, 0x2a,
     182,  178,   29,   28, 0x2a,
     211,  207,   28,   28, 0x0a,
     277,  244,   28,   28, 0x0a,
     377,  350,   28,   28, 0x2a,
     451,  430,   28,   28, 0x2a,
     518,  501,  484,   28, 0x0a,
     558,  501,  552,   28, 0x0a,
     586,  501,  581,   28, 0x0a,
     614,  501,  608,   28, 0x0a,
     640,  501,  608,   28, 0x0a,
     690,  666,   28,   28, 0x0a,
     722,  501,  608,   28, 0x0a,
     745,  501,   29,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSpacerItem[] = {
    "PythonQtWrapper_QSpacerItem\0\0QSpacerItem*\0"
    "w,h,hData,vData\0"
    "new_QSpacerItem(int,int,QSizePolicy::Policy,QSizePolicy::Policy)\0"
    "w,h,hData\0new_QSpacerItem(int,int,QSizePolicy::Policy)\0"
    "w,h\0new_QSpacerItem(int,int)\0obj\0"
    "delete_QSpacerItem(QSpacerItem*)\0"
    "theWrappedObject,w,h,hData,vData\0"
    "changeSize(QSpacerItem*,int,int,QSizePolicy::Policy,QSizePolicy::Polic"
    "y)\0"
    "theWrappedObject,w,h,hData\0"
    "changeSize(QSpacerItem*,int,int,QSizePolicy::Policy)\0"
    "theWrappedObject,w,h\0"
    "changeSize(QSpacerItem*,int,int)\0"
    "Qt::Orientations\0theWrappedObject\0"
    "expandingDirections(QSpacerItem*)\0"
    "QRect\0geometry(QSpacerItem*)\0bool\0"
    "isEmpty(QSpacerItem*)\0QSize\0"
    "maximumSize(QSpacerItem*)\0"
    "minimumSize(QSpacerItem*)\0"
    "theWrappedObject,arg__1\0"
    "setGeometry(QSpacerItem*,QRect)\0"
    "sizeHint(QSpacerItem*)\0spacerItem(QSpacerItem*)\0"
};

void PythonQtWrapper_QSpacerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSpacerItem *_t = static_cast<PythonQtWrapper_QSpacerItem *>(_o);
        switch (_id) {
        case 0: { QSpacerItem* _r = _t->new_QSpacerItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[3])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        case 1: { QSpacerItem* _r = _t->new_QSpacerItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        case 2: { QSpacerItem* _r = _t->new_QSpacerItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSpacerItem((*reinterpret_cast< QSpacerItem*(*)>(_a[1]))); break;
        case 4: _t->changeSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[4])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[5]))); break;
        case 5: _t->changeSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[4]))); break;
        case 6: _t->changeSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: { Qt::Orientations _r = _t->expandingDirections((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientations*>(_a[0]) = _r; }  break;
        case 8: { QRect _r = _t->geometry((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isEmpty((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QSize _r = _t->maximumSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 11: { QSize _r = _t->minimumSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 12: _t->setGeometry((*reinterpret_cast< QSpacerItem*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 13: { QSize _r = _t->sizeHint((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 14: { QSpacerItem* _r = _t->spacerItem((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSpacerItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSpacerItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSpacerItem,
      qt_meta_data_PythonQtWrapper_QSpacerItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSpacerItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSpacerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSpacerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSpacerItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSpacerItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSpacerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   36,   26,   25, 0x0a,
      66,   25,   26,   25, 0x2a,
      85,   81,   25,   25, 0x0a,
     137,  120,  112,   25, 0x0a,
     186,  163,  158,   25, 0x0a,
     232,  211,   25,   25, 0x0a,
     262,  120,  258,   25, 0x0a,
     281,  120,  258,   25, 0x0a,
     300,  120,  112,   25, 0x0a,
     339,  318,   25,   25, 0x0a,
     386,  365,   25,   25, 0x0a,
     436,  412,   25,   25, 0x0a,
     490,  465,   25,   25, 0x0a,
     539,  518,   25,   25, 0x0a,
     592,  568,   25,   25, 0x0a,
     621,  120,  258,   25, 0x0a,
     643,  120,  112,   25, 0x0a,
     661,  518,  112,   25, 0x0a,
     735,  708,  690,   25, 0x0a,
     769,  120,  258,   25, 0x0a,
     808,  786,  258,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSpinBox[] = {
    "PythonQtWrapper_QSpinBox\0\0QSpinBox*\0"
    "parent\0new_QSpinBox(QWidget*)\0"
    "new_QSpinBox()\0obj\0delete_QSpinBox(QSpinBox*)\0"
    "QString\0theWrappedObject\0cleanText(QSpinBox*)\0"
    "bool\0theWrappedObject,event\0"
    "event(QSpinBox*,QEvent*)\0theWrappedObject,str\0"
    "fixup(QSpinBox*,QString&)\0int\0"
    "maximum(QSpinBox*)\0minimum(QSpinBox*)\0"
    "prefix(QSpinBox*)\0theWrappedObject,max\0"
    "setMaximum(QSpinBox*,int)\0"
    "theWrappedObject,min\0setMinimum(QSpinBox*,int)\0"
    "theWrappedObject,prefix\0"
    "setPrefix(QSpinBox*,QString)\0"
    "theWrappedObject,min,max\0"
    "setRange(QSpinBox*,int,int)\0"
    "theWrappedObject,val\0setSingleStep(QSpinBox*,int)\0"
    "theWrappedObject,suffix\0"
    "setSuffix(QSpinBox*,QString)\0"
    "singleStep(QSpinBox*)\0suffix(QSpinBox*)\0"
    "textFromValue(QSpinBox*,int)\0"
    "QValidator::State\0theWrappedObject,input,pos\0"
    "validate(QSpinBox*,QString&,int&)\0"
    "value(QSpinBox*)\0theWrappedObject,text\0"
    "valueFromText(QSpinBox*,QString)\0"
};

void PythonQtWrapper_QSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSpinBox *_t = static_cast<PythonQtWrapper_QSpinBox *>(_o);
        switch (_id) {
        case 0: { QSpinBox* _r = _t->new_QSpinBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSpinBox**>(_a[0]) = _r; }  break;
        case 1: { QSpinBox* _r = _t->new_QSpinBox();
            if (_a[0]) *reinterpret_cast< QSpinBox**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSpinBox((*reinterpret_cast< QSpinBox*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->cleanText((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->fixup((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: { int _r = _t->maximum((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->minimum((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->prefix((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->setMaximum((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setMinimum((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->setPrefix((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setRange((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->setSingleStep((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->setSuffix((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: { int _r = _t->singleStep((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->suffix((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->textFromValue((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QValidator::State _r = _t->validate((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QValidator::State*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->value((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->valueFromText((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSpinBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSpinBox,
      qt_meta_data_PythonQtWrapper_QSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSpinBox))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSpinBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSplashScreen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      62,   46,   31,   30, 0x0a,
     128,  114,   31,   30, 0x2a,
     171,  164,   31,   30, 0x2a,
     208,  199,   31,   30, 0x0a,
     258,  251,   31,   30, 0x2a,
     285,   30,   31,   30, 0x2a,
     309,  305,   30,   30, 0x0a,
     371,  346,   30,   30, 0x0a,
     434,  415,  410,   30, 0x0a,
     483,  464,   30,   30, 0x0a,
     539,  515,   30,   30, 0x0a,
     609,  592,  584,   30, 0x0a,
     656,  632,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSplashScreen[] = {
    "PythonQtWrapper_QSplashScreen\0\0"
    "QSplashScreen*\0parent,pixmap,f\0"
    "new_QSplashScreen(QWidget*,QPixmap,Qt::WindowFlags)\0"
    "parent,pixmap\0new_QSplashScreen(QWidget*,QPixmap)\0"
    "parent\0new_QSplashScreen(QWidget*)\0"
    "pixmap,f\0new_QSplashScreen(QPixmap,Qt::WindowFlags)\0"
    "pixmap\0new_QSplashScreen(QPixmap)\0"
    "new_QSplashScreen()\0obj\0"
    "delete_QSplashScreen(QSplashScreen*)\0"
    "theWrappedObject,painter\0"
    "drawContents(QSplashScreen*,QPainter*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QSplashScreen*,QEvent*)\0"
    "theWrappedObject,w\0finish(QSplashScreen*,QWidget*)\0"
    "theWrappedObject,arg__1\0"
    "mousePressEvent(QSplashScreen*,QMouseEvent*)\0"
    "QPixmap\0theWrappedObject\0"
    "pixmap(QSplashScreen*)\0theWrappedObject,pixmap\0"
    "setPixmap(QSplashScreen*,QPixmap)\0"
};

void PythonQtWrapper_QSplashScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSplashScreen *_t = static_cast<PythonQtWrapper_QSplashScreen *>(_o);
        switch (_id) {
        case 0: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 1: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 2: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 3: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 4: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< const QPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 5: { QSplashScreen* _r = _t->new_QSplashScreen();
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QSplashScreen((*reinterpret_cast< QSplashScreen*(*)>(_a[1]))); break;
        case 7: _t->drawContents((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->finish((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 10: _t->mousePressEvent((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 11: { QPixmap _r = _t->pixmap((*reinterpret_cast< QSplashScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 12: _t->setPixmap((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSplashScreen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSplashScreen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSplashScreen,
      qt_meta_data_PythonQtWrapper_QSplashScreen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSplashScreen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSplashScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSplashScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSplashScreen))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSplashScreen*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSplashScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSplitter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   27,   26, 0x0a,
      69,   26,   27,   26, 0x2a,
      99,   85,   27,   26, 0x0a,
     146,  139,   27,   26, 0x2a,
     181,  177,   26,   26, 0x0a,
     234,  210,   26,   26, 0x0a,
     289,  265,   26,   26, 0x0a,
     321,  265,   26,   26, 0x0a,
     379,  362,  357,   26, 0x0a,
     415,  362,  411,   26, 0x0a,
     450,  362,  433,   26, 0x0a,
     475,  265,  357,   26, 0x0a,
     538,  501,   26,   26, 0x0a,
     596,  573,  433,   26, 0x0a,
     619,  362,  411,   26, 0x0a,
     662,  643,  411,   26, 0x0a,
     721,  691,   26,   26, 0x0a,
     759,  573,  357,   26, 0x0a,
     795,  362,  789,   26, 0x0a,
     823,  362,  357,   26, 0x0a,
     848,  265,   26,   26, 0x0a,
     881,  265,   26,   26, 0x0a,
     931,  362,  915,   26, 0x0a,
     955,  362,   26,   26, 0x0a,
     975,  265,   26,   26, 0x0a,
    1036, 1013,  357,   26, 0x0a,
    1083,  362, 1072,   26, 0x0a,
    1105,  265,   26,   26, 0x0a,
    1175, 1145,   26,   26, 0x0a,
    1211,  265,   26,   26, 0x0a,
    1266, 1242,   26,   26, 0x0a,
    1299,  362,   26,   26, 0x2a,
    1327,  265,   26,   26, 0x0a,
    1392, 1370,   26,   26, 0x0a,
    1455, 1424,   26,   26, 0x0a,
    1492,  362,  789,   26, 0x0a,
    1524,  362, 1513,   26, 0x0a,
    1551,  573, 1542,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSplitter[] = {
    "PythonQtWrapper_QSplitter\0\0QSplitter*\0"
    "parent\0new_QSplitter(QWidget*)\0"
    "new_QSplitter()\0arg__1,parent\0"
    "new_QSplitter(Qt::Orientation,QWidget*)\0"
    "arg__1\0new_QSplitter(Qt::Orientation)\0"
    "obj\0delete_QSplitter(QSplitter*)\0"
    "theWrappedObject,widget\0"
    "addWidget(QSplitter*,QWidget*)\0"
    "theWrappedObject,arg__1\0"
    "changeEvent(QSplitter*,QEvent*)\0"
    "childEvent(QSplitter*,QChildEvent*)\0"
    "bool\0theWrappedObject\0"
    "childrenCollapsible(QSplitter*)\0int\0"
    "count(QSplitter*)\0QSplitterHandle*\0"
    "createHandle(QSplitter*)\0"
    "event(QSplitter*,QEvent*)\0"
    "theWrappedObject,index,arg__2,arg__3\0"
    "getRange(QSplitter*,int,int*,int*)\0"
    "theWrappedObject,index\0handle(QSplitter*,int)\0"
    "handleWidth(QSplitter*)\0theWrappedObject,w\0"
    "indexOf(QSplitter*,QWidget*)\0"
    "theWrappedObject,index,widget\0"
    "insertWidget(QSplitter*,int,QWidget*)\0"
    "isCollapsible(QSplitter*,int)\0QSize\0"
    "minimumSizeHint(QSplitter*)\0"
    "opaqueResize(QSplitter*)\0"
    "writeTo(QSplitter*,QTextStream&)\0"
    "readFrom(QSplitter*,QTextStream&)\0"
    "Qt::Orientation\0orientation(QSplitter*)\0"
    "refresh(QSplitter*)\0"
    "resizeEvent(QSplitter*,QResizeEvent*)\0"
    "theWrappedObject,state\0"
    "restoreState(QSplitter*,QByteArray)\0"
    "QByteArray\0saveState(QSplitter*)\0"
    "setChildrenCollapsible(QSplitter*,bool)\0"
    "theWrappedObject,index,arg__2\0"
    "setCollapsible(QSplitter*,int,bool)\0"
    "setHandleWidth(QSplitter*,int)\0"
    "theWrappedObject,opaque\0"
    "setOpaqueResize(QSplitter*,bool)\0"
    "setOpaqueResize(QSplitter*)\0"
    "setOrientation(QSplitter*,Qt::Orientation)\0"
    "theWrappedObject,list\0"
    "setSizes(QSplitter*,QList<int>)\0"
    "theWrappedObject,index,stretch\0"
    "setStretchFactor(QSplitter*,int,int)\0"
    "sizeHint(QSplitter*)\0QList<int>\0"
    "sizes(QSplitter*)\0QWidget*\0"
    "widget(QSplitter*,int)\0"
};

void PythonQtWrapper_QSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSplitter *_t = static_cast<PythonQtWrapper_QSplitter *>(_o);
        switch (_id) {
        case 0: { QSplitter* _r = _t->new_QSplitter((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        case 1: { QSplitter* _r = _t->new_QSplitter();
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        case 2: { QSplitter* _r = _t->new_QSplitter((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        case 3: { QSplitter* _r = _t->new_QSplitter((*reinterpret_cast< Qt::Orientation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSplitter((*reinterpret_cast< QSplitter*(*)>(_a[1]))); break;
        case 5: _t->addWidget((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 6: _t->changeEvent((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 7: _t->childEvent((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QChildEvent*(*)>(_a[2]))); break;
        case 8: { bool _r = _t->childrenCollapsible((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->count((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QSplitterHandle* _r = _t->createHandle((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplitterHandle**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->event((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->getRange((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4]))); break;
        case 13: { QSplitterHandle* _r = _t->handle((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplitterHandle**>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->handleWidth((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->indexOf((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: _t->insertWidget((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 17: { bool _r = _t->isCollapsible((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->opaqueResize((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->writeTo((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2]))); break;
        case 21: _t->readFrom((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2]))); break;
        case 22: { Qt::Orientation _r = _t->orientation((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 23: _t->refresh((*reinterpret_cast< QSplitter*(*)>(_a[1]))); break;
        case 24: _t->resizeEvent((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 25: { bool _r = _t->restoreState((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { QByteArray _r = _t->saveState((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 27: _t->setChildrenCollapsible((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->setCollapsible((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 29: _t->setHandleWidth((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->setOpaqueResize((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->setOpaqueResize((*reinterpret_cast< QSplitter*(*)>(_a[1]))); break;
        case 32: _t->setOrientation((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 33: _t->setSizes((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 34: _t->setStretchFactor((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: { QSize _r = _t->sizeHint((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 36: { QList<int> _r = _t->sizes((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 37: { QWidget* _r = _t->widget((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSplitter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSplitter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSplitter,
      qt_meta_data_PythonQtWrapper_QSplitter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSplitter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSplitter))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSplitter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSplitterHandle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      59,   50,   33,   32, 0x0a,
     111,  107,   32,   32, 0x0a,
     181,  157,  152,   32, 0x0a,
     213,  157,   32,   32, 0x0a,
     259,  157,   32,   32, 0x0a,
     306,  157,   32,   32, 0x0a,
     372,  355,  152,   32, 0x0a,
     419,  355,  403,   32, 0x0a,
     449,  157,   32,   32, 0x0a,
     491,  157,   32,   32, 0x0a,
     554,  535,   32,   32, 0x0a,
     609,  355,  603,   32, 0x0a,
     647,  355,  636,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSplitterHandle[] = {
    "PythonQtWrapper_QSplitterHandle\0\0"
    "QSplitterHandle*\0o,parent\0"
    "new_QSplitterHandle(Qt::Orientation,QSplitter*)\0"
    "obj\0delete_QSplitterHandle(QSplitterHandle*)\0"
    "bool\0theWrappedObject,arg__1\0"
    "event(QSplitterHandle*,QEvent*)\0"
    "mouseMoveEvent(QSplitterHandle*,QMouseEvent*)\0"
    "mousePressEvent(QSplitterHandle*,QMouseEvent*)\0"
    "mouseReleaseEvent(QSplitterHandle*,QMouseEvent*)\0"
    "theWrappedObject\0opaqueResize(QSplitterHandle*)\0"
    "Qt::Orientation\0orientation(QSplitterHandle*)\0"
    "paintEvent(QSplitterHandle*,QPaintEvent*)\0"
    "resizeEvent(QSplitterHandle*,QResizeEvent*)\0"
    "theWrappedObject,o\0"
    "setOrientation(QSplitterHandle*,Qt::Orientation)\0"
    "QSize\0sizeHint(QSplitterHandle*)\0"
    "QSplitter*\0splitter(QSplitterHandle*)\0"
};

void PythonQtWrapper_QSplitterHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSplitterHandle *_t = static_cast<PythonQtWrapper_QSplitterHandle *>(_o);
        switch (_id) {
        case 0: { QSplitterHandle* _r = _t->new_QSplitterHandle((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QSplitter*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplitterHandle**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSplitterHandle((*reinterpret_cast< QSplitterHandle*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->event((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->mouseMoveEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 4: _t->mousePressEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 5: _t->mouseReleaseEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 6: { bool _r = _t->opaqueResize((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { Qt::Orientation _r = _t->orientation((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 8: _t->paintEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 9: _t->resizeEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 10: _t->setOrientation((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 11: { QSize _r = _t->sizeHint((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 12: { QSplitter* _r = _t->splitter((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSplitterHandle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSplitterHandle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSplitterHandle,
      qt_meta_data_PythonQtWrapper_QSplitterHandle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSplitterHandle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSplitterHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSplitterHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSplitterHandle))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSplitterHandle*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSplitterHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStackedLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   31,   32,   31, 0x0a,
      82,   69,   32,   31, 0x0a,
     118,  111,   32,   31, 0x0a,
     151,  147,   31,   31, 0x0a,
     212,  190,   31,   31, 0x0a,
     273,  254,  250,   31, 0x0a,
     326,  309,  250,   31, 0x0a,
     349,  309,  250,   31, 0x0a,
     388,  309,  379,   31, 0x0a,
     444,  419,  250,   31, 0x0a,
     524,  500,  487,   31, 0x0a,
     558,  309,  552,   31, 0x0a,
     609,  587,   31,   31, 0x0a,
     674,  644,   31,   31, 0x0a,
     736,  309,  552,   31, 0x0a,
     791,  309,  762,   31, 0x0a,
     821,  500,  487,   31, 0x0a,
     849,  309,  379,   31, 0x0a,
     873,  500,  379,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStackedLayout[] = {
    "PythonQtWrapper_QStackedLayout\0\0"
    "QStackedLayout*\0new_QStackedLayout()\0"
    "parentLayout\0new_QStackedLayout(QLayout*)\0"
    "parent\0new_QStackedLayout(QWidget*)\0"
    "obj\0delete_QStackedLayout(QStackedLayout*)\0"
    "theWrappedObject,item\0"
    "addItem(QStackedLayout*,QLayoutItem*)\0"
    "int\0theWrappedObject,w\0"
    "addWidget(QStackedLayout*,QWidget*)\0"
    "theWrappedObject\0count(QStackedLayout*)\0"
    "currentIndex(QStackedLayout*)\0QWidget*\0"
    "currentWidget(QStackedLayout*)\0"
    "theWrappedObject,index,w\0"
    "insertWidget(QStackedLayout*,int,QWidget*)\0"
    "QLayoutItem*\0theWrappedObject,arg__1\0"
    "itemAt(QStackedLayout*,int)\0QSize\0"
    "minimumSize(QStackedLayout*)\0"
    "theWrappedObject,rect\0"
    "setGeometry(QStackedLayout*,QRect)\0"
    "theWrappedObject,stackingMode\0"
    "setStackingMode(QStackedLayout*,QStackedLayout::StackingMode)\0"
    "sizeHint(QStackedLayout*)\0"
    "QStackedLayout::StackingMode\0"
    "stackingMode(QStackedLayout*)\0"
    "takeAt(QStackedLayout*,int)\0"
    "widget(QStackedLayout*)\0"
    "widget(QStackedLayout*,int)\0"
};

void PythonQtWrapper_QStackedLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStackedLayout *_t = static_cast<PythonQtWrapper_QStackedLayout *>(_o);
        switch (_id) {
        case 0: { QStackedLayout* _r = _t->new_QStackedLayout();
            if (_a[0]) *reinterpret_cast< QStackedLayout**>(_a[0]) = _r; }  break;
        case 1: { QStackedLayout* _r = _t->new_QStackedLayout((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStackedLayout**>(_a[0]) = _r; }  break;
        case 2: { QStackedLayout* _r = _t->new_QStackedLayout((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStackedLayout**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStackedLayout((*reinterpret_cast< QStackedLayout*(*)>(_a[1]))); break;
        case 4: _t->addItem((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< QLayoutItem*(*)>(_a[2]))); break;
        case 5: { int _r = _t->addWidget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->count((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->currentIndex((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QWidget* _r = _t->currentWidget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->insertWidget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QLayoutItem* _r = _t->itemAt((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 11: { QSize _r = _t->minimumSize((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 12: _t->setGeometry((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 13: _t->setStackingMode((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< QStackedLayout::StackingMode(*)>(_a[2]))); break;
        case 14: { QSize _r = _t->sizeHint((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: { QStackedLayout::StackingMode _r = _t->stackingMode((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStackedLayout::StackingMode*>(_a[0]) = _r; }  break;
        case 16: { QLayoutItem* _r = _t->takeAt((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 17: { QWidget* _r = _t->widget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 18: { QWidget* _r = _t->widget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStackedLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStackedLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStackedLayout,
      qt_meta_data_PythonQtWrapper_QStackedLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStackedLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStackedLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStackedLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStackedLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStackedLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStackedLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStackedWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      55,   48,   32,   31, 0x0a,
      84,   31,   32,   31, 0x2a,
     109,  105,   31,   31, 0x0a,
     171,  152,  148,   31, 0x0a,
     224,  207,  148,   31, 0x0a,
     247,  207,  148,   31, 0x0a,
     286,  207,  277,   31, 0x0a,
     341,  322,  317,   31, 0x0a,
     396,  372,  148,   31, 0x0a,
     455,  430,  148,   31, 0x0a,
     498,  152,   31,   31, 0x0a,
     537,  372,  277,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStackedWidget[] = {
    "PythonQtWrapper_QStackedWidget\0\0"
    "QStackedWidget*\0parent\0"
    "new_QStackedWidget(QWidget*)\0"
    "new_QStackedWidget()\0obj\0"
    "delete_QStackedWidget(QStackedWidget*)\0"
    "int\0theWrappedObject,w\0"
    "addWidget(QStackedWidget*,QWidget*)\0"
    "theWrappedObject\0count(QStackedWidget*)\0"
    "currentIndex(QStackedWidget*)\0QWidget*\0"
    "currentWidget(QStackedWidget*)\0bool\0"
    "theWrappedObject,e\0event(QStackedWidget*,QEvent*)\0"
    "theWrappedObject,arg__1\0"
    "indexOf(QStackedWidget*,QWidget*)\0"
    "theWrappedObject,index,w\0"
    "insertWidget(QStackedWidget*,int,QWidget*)\0"
    "removeWidget(QStackedWidget*,QWidget*)\0"
    "widget(QStackedWidget*,int)\0"
};

void PythonQtWrapper_QStackedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStackedWidget *_t = static_cast<PythonQtWrapper_QStackedWidget *>(_o);
        switch (_id) {
        case 0: { QStackedWidget* _r = _t->new_QStackedWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStackedWidget**>(_a[0]) = _r; }  break;
        case 1: { QStackedWidget* _r = _t->new_QStackedWidget();
            if (_a[0]) *reinterpret_cast< QStackedWidget**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStackedWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1]))); break;
        case 3: { int _r = _t->addWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->count((*reinterpret_cast< QStackedWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->currentIndex((*reinterpret_cast< QStackedWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QWidget* _r = _t->currentWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->event((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->indexOf((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->insertWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->removeWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 11: { QWidget* _r = _t->widget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStackedWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStackedWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStackedWidget,
      qt_meta_data_PythonQtWrapper_QStackedWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStackedWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStackedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStackedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStackedWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStackedWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStackedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStandardItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      90,   14, // methods
       0,    0, // properties
       1,  464, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   31,   30, 0x0a,
      76,   66,   31,   30, 0x0a,
     114,  109,   31,   30, 0x0a,
     154,  141,   31,   30, 0x0a,
     186,  181,   31,   30, 0x2a,
     213,  209,   30,   30, 0x0a,
     275,  258,  250,   30, 0x0a,
     313,  258,  250,   30, 0x0a,
     367,  344,   30,   30, 0x0a,
     440,  418,   30,   30, 0x0a,
     481,  344,   30,   30, 0x0a,
     529,  344,   30,   30, 0x0a,
     585,  258,  578,   30, 0x0a,
     627,  258,  612,   30, 0x0a,
     682,  654,   31,   30, 0x0a,
     733,  712,   31,   30, 0x2a,
     759,  258,   31,   30, 0x0a,
     785,  258,  781,   30, 0x0a,
     808,  258,  781,   30, 0x0a,
     867,  845,  836,   30, 0x0a,
     892,  258,  836,   30, 0x2a,
     927,  258,  913,   30, 0x0a,
     955,  258,  949,   30, 0x0a,
     976,  258,  578,   30, 0x0a,
    1008,  258, 1003,   30, 0x0a,
    1042,  258, 1036,   30, 0x0a,
    1075,  258, 1063,   30, 0x0a,
    1127, 1097,   30,   30, 0x0a,
    1212, 1182,   30,   30, 0x0a,
    1276, 1250,   30,   30, 0x0a,
    1348, 1321,   30,   30, 0x0a,
    1400, 1321,   30,   30, 0x0a,
    1480, 1453,   30,   30, 0x0a,
    1515,  258, 1003,   30, 0x0a,
    1543,  258, 1003,   30, 0x0a,
    1573,  258, 1003,   30, 0x0a,
    1603,  258, 1003,   30, 0x0a,
    1630,  258, 1003,   30, 0x0a,
    1656,  258, 1003,   30, 0x0a,
    1685,  258, 1003,   30, 0x0a,
    1732,  258, 1712,   30, 0x0a,
    1775, 1754,   30,   30, 0x0a,
    1832, 1812,   30,   30, 0x0a,
    1870,  258,   31,   30, 0x0a,
    1917, 1893,   30,   30, 0x0a,
    1950, 1182,   30,   30, 0x0a,
    1988,  712,   30,   30, 0x0a,
    2018, 1453,   30,   30, 0x0a,
    2053,  258,  781,   30, 0x0a,
    2073,  258,  781,   30, 0x0a,
    2137, 2098,   30,   30, 0x0a,
    2218, 2186,   30,   30, 0x0a,
    2283, 2260,   30,   30, 0x0a,
    2348, 2320,   30,   30, 0x0a,
    2420, 2393,   30,   30, 0x0a,
    2454, 1250,   30,   30, 0x0a,
    2531, 2498,   30,   30, 0x0a,
    2604, 2579,   30,   30, 0x0a,
    2667, 2639,   30,   30, 0x0a,
    2727, 2704,   30,   30, 0x2a,
    2789, 2760,   30,   30, 0x0a,
    2854, 2825,   30,   30, 0x0a,
    2916, 2890,   30,   30, 0x0a,
    2974, 2949,   30,   30, 0x0a,
    3029, 3006,   30,   30, 0x0a,
    3090, 3068,   30,   30, 0x0a,
    3120, 2260,   30,   30, 0x0a,
    3179, 3157,   30,   30, 0x0a,
    3231, 3209,   30,   30, 0x0a,
    3291, 3263,   30,   30, 0x0a,
    3352, 3326,   30,   30, 0x0a,
    3413, 3386,   30,   30, 0x0a,
    3472, 3450,   30,   30, 0x0a,
    3535, 3504,   30,   30, 0x0a,
    3607, 3582,   30,   30, 0x0a,
    3668, 3642,   30,   30, 0x0a,
    3728, 3701,   30,   30, 0x0a,
    3771,  258, 3765,   30, 0x0a,
    3826, 3796,   30,   30, 0x0a,
    3873, 1893,   30,   30, 0x2a,
    3906,  258,  250,   30, 0x0a,
    3932,  654,   31,   30, 0x0a,
    3966,  712,   31,   30, 0x2a,
    4018, 1893, 3996,   30, 0x0a,
    4049,  712, 3996,   30, 0x0a,
    4077,  258,  250,   30, 0x0a,
    4112,  258, 4098,   30, 0x0a,
    4142,  258,  250,   30, 0x0a,
    4166,  258,  781,   30, 0x0a,
    4187,  258,  250,   30, 0x0a,

 // enums: name, flags, count, data
    4213, 0x0,    2,  468,

 // enum data: key, value
    4222, uint(PythonQtWrapper_QStandardItem::Type),
    4227, uint(PythonQtWrapper_QStandardItem::UserType),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStandardItem[] = {
    "PythonQtWrapper_QStandardItem\0\0"
    "QStandardItem*\0new_QStandardItem()\0"
    "icon,text\0new_QStandardItem(QIcon,QString)\0"
    "text\0new_QStandardItem(QString)\0"
    "rows,columns\0new_QStandardItem(int,int)\0"
    "rows\0new_QStandardItem(int)\0obj\0"
    "delete_QStandardItem(QStandardItem*)\0"
    "QString\0theWrappedObject\0"
    "accessibleDescription(QStandardItem*)\0"
    "accessibleText(QStandardItem*)\0"
    "theWrappedObject,items\0"
    "appendColumn(QStandardItem*,QList<QStandardItem*>)\0"
    "theWrappedObject,item\0"
    "appendRow(QStandardItem*,QStandardItem*)\0"
    "appendRow(QStandardItem*,QList<QStandardItem*>)\0"
    "appendRows(QStandardItem*,QList<QStandardItem*>)\0"
    "QBrush\0background(QStandardItem*)\0"
    "Qt::CheckState\0checkState(QStandardItem*)\0"
    "theWrappedObject,row,column\0"
    "child(QStandardItem*,int,int)\0"
    "theWrappedObject,row\0child(QStandardItem*,int)\0"
    "clone(QStandardItem*)\0int\0"
    "column(QStandardItem*)\0"
    "columnCount(QStandardItem*)\0QVariant\0"
    "theWrappedObject,role\0data(QStandardItem*,int)\0"
    "data(QStandardItem*)\0Qt::ItemFlags\0"
    "flags(QStandardItem*)\0QFont\0"
    "font(QStandardItem*)\0foreground(QStandardItem*)\0"
    "bool\0hasChildren(QStandardItem*)\0QIcon\0"
    "icon(QStandardItem*)\0QModelIndex\0"
    "index(QStandardItem*)\0"
    "theWrappedObject,column,items\0"
    "insertColumn(QStandardItem*,int,QList<QStandardItem*>)\0"
    "theWrappedObject,column,count\0"
    "insertColumns(QStandardItem*,int,int)\0"
    "theWrappedObject,row,item\0"
    "insertRow(QStandardItem*,int,QStandardItem*)\0"
    "theWrappedObject,row,items\0"
    "insertRow(QStandardItem*,int,QList<QStandardItem*>)\0"
    "insertRows(QStandardItem*,int,QList<QStandardItem*>)\0"
    "theWrappedObject,row,count\0"
    "insertRows(QStandardItem*,int,int)\0"
    "isCheckable(QStandardItem*)\0"
    "isDragEnabled(QStandardItem*)\0"
    "isDropEnabled(QStandardItem*)\0"
    "isEditable(QStandardItem*)\0"
    "isEnabled(QStandardItem*)\0"
    "isSelectable(QStandardItem*)\0"
    "isTristate(QStandardItem*)\0"
    "QStandardItemModel*\0model(QStandardItem*)\0"
    "theWrappedObject,out\0"
    "writeTo(QStandardItem*,QDataStream&)\0"
    "theWrappedObject,in\0"
    "readFrom(QStandardItem*,QDataStream&)\0"
    "parent(QStandardItem*)\0theWrappedObject,column\0"
    "removeColumn(QStandardItem*,int)\0"
    "removeColumns(QStandardItem*,int,int)\0"
    "removeRow(QStandardItem*,int)\0"
    "removeRows(QStandardItem*,int,int)\0"
    "row(QStandardItem*)\0rowCount(QStandardItem*)\0"
    "theWrappedObject,accessibleDescription\0"
    "setAccessibleDescription(QStandardItem*,QString)\0"
    "theWrappedObject,accessibleText\0"
    "setAccessibleText(QStandardItem*,QString)\0"
    "theWrappedObject,brush\0"
    "setBackground(QStandardItem*,QBrush)\0"
    "theWrappedObject,checkState\0"
    "setCheckState(QStandardItem*,Qt::CheckState)\0"
    "theWrappedObject,checkable\0"
    "setCheckable(QStandardItem*,bool)\0"
    "setChild(QStandardItem*,int,QStandardItem*)\0"
    "theWrappedObject,row,column,item\0"
    "setChild(QStandardItem*,int,int,QStandardItem*)\0"
    "theWrappedObject,columns\0"
    "setColumnCount(QStandardItem*,int)\0"
    "theWrappedObject,value,role\0"
    "setData(QStandardItem*,QVariant,int)\0"
    "theWrappedObject,value\0"
    "setData(QStandardItem*,QVariant)\0"
    "theWrappedObject,dragEnabled\0"
    "setDragEnabled(QStandardItem*,bool)\0"
    "theWrappedObject,dropEnabled\0"
    "setDropEnabled(QStandardItem*,bool)\0"
    "theWrappedObject,editable\0"
    "setEditable(QStandardItem*,bool)\0"
    "theWrappedObject,enabled\0"
    "setEnabled(QStandardItem*,bool)\0"
    "theWrappedObject,flags\0"
    "setFlags(QStandardItem*,Qt::ItemFlags)\0"
    "theWrappedObject,font\0"
    "setFont(QStandardItem*,QFont)\0"
    "setForeground(QStandardItem*,QBrush)\0"
    "theWrappedObject,icon\0"
    "setIcon(QStandardItem*,QIcon)\0"
    "theWrappedObject,rows\0"
    "setRowCount(QStandardItem*,int)\0"
    "theWrappedObject,selectable\0"
    "setSelectable(QStandardItem*,bool)\0"
    "theWrappedObject,sizeHint\0"
    "setSizeHint(QStandardItem*,QSize)\0"
    "theWrappedObject,statusTip\0"
    "setStatusTip(QStandardItem*,QString)\0"
    "theWrappedObject,text\0"
    "setText(QStandardItem*,QString)\0"
    "theWrappedObject,textAlignment\0"
    "setTextAlignment(QStandardItem*,Qt::Alignment)\0"
    "theWrappedObject,toolTip\0"
    "setToolTip(QStandardItem*,QString)\0"
    "theWrappedObject,tristate\0"
    "setTristate(QStandardItem*,bool)\0"
    "theWrappedObject,whatsThis\0"
    "setWhatsThis(QStandardItem*,QString)\0"
    "QSize\0sizeHint(QStandardItem*)\0"
    "theWrappedObject,column,order\0"
    "sortChildren(QStandardItem*,int,Qt::SortOrder)\0"
    "sortChildren(QStandardItem*,int)\0"
    "statusTip(QStandardItem*)\0"
    "takeChild(QStandardItem*,int,int)\0"
    "takeChild(QStandardItem*,int)\0"
    "QList<QStandardItem*>\0"
    "takeColumn(QStandardItem*,int)\0"
    "takeRow(QStandardItem*,int)\0"
    "text(QStandardItem*)\0Qt::Alignment\0"
    "textAlignment(QStandardItem*)\0"
    "toolTip(QStandardItem*)\0type(QStandardItem*)\0"
    "whatsThis(QStandardItem*)\0ItemType\0"
    "Type\0UserType\0"
};

void PythonQtWrapper_QStandardItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStandardItem *_t = static_cast<PythonQtWrapper_QStandardItem *>(_o);
        switch (_id) {
        case 0: { QStandardItem* _r = _t->new_QStandardItem();
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 1: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< const QIcon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 2: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 3: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 4: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QStandardItem((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 6: { QString _r = _t->accessibleDescription((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->accessibleText((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: _t->appendColumn((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[2]))); break;
        case 9: _t->appendRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< QStandardItem*(*)>(_a[2]))); break;
        case 10: _t->appendRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[2]))); break;
        case 11: _t->appendRows((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[2]))); break;
        case 12: { QBrush _r = _t->background((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 13: { Qt::CheckState _r = _t->checkState((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CheckState*>(_a[0]) = _r; }  break;
        case 14: { QStandardItem* _r = _t->child((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 15: { QStandardItem* _r = _t->child((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 16: { QStandardItem* _r = _t->clone((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->column((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->columnCount((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { QVariant _r = _t->data((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 20: { QVariant _r = _t->data((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 21: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 22: { QFont _r = _t->font((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 23: { QBrush _r = _t->foreground((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->hasChildren((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { QIcon _r = _t->icon((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 26: { QModelIndex _r = _t->index((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 27: _t->insertColumn((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[3]))); break;
        case 28: _t->insertColumns((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 29: _t->insertRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStandardItem*(*)>(_a[3]))); break;
        case 30: _t->insertRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[3]))); break;
        case 31: _t->insertRows((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[3]))); break;
        case 32: _t->insertRows((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 33: { bool _r = _t->isCheckable((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->isDragEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->isDropEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->isEditable((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->isEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->isSelectable((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->isTristate((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { QStandardItemModel* _r = _t->model((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 41: _t->writeTo((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 42: _t->readFrom((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 43: { QStandardItem* _r = _t->parent((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 44: _t->removeColumn((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->removeColumns((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 46: _t->removeRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->removeRows((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 48: { int _r = _t->row((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 49: { int _r = _t->rowCount((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 50: _t->setAccessibleDescription((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 51: _t->setAccessibleText((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 52: _t->setBackground((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 53: _t->setCheckState((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 54: _t->setCheckable((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 55: _t->setChild((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStandardItem*(*)>(_a[3]))); break;
        case 56: _t->setChild((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QStandardItem*(*)>(_a[4]))); break;
        case 57: _t->setColumnCount((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 58: _t->setData((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 59: _t->setData((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 60: _t->setDragEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 61: _t->setDropEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 62: _t->setEditable((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 63: _t->setEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 64: _t->setFlags((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< Qt::ItemFlags(*)>(_a[2]))); break;
        case 65: _t->setFont((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 66: _t->setForeground((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 67: _t->setIcon((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2]))); break;
        case 68: _t->setRowCount((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 69: _t->setSelectable((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 70: _t->setSizeHint((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 71: _t->setStatusTip((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 72: _t->setText((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 73: _t->setTextAlignment((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 74: _t->setToolTip((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 75: _t->setTristate((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 76: _t->setWhatsThis((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 77: { QSize _r = _t->sizeHint((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 78: _t->sortChildren((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 79: _t->sortChildren((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 80: { QString _r = _t->statusTip((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 81: { QStandardItem* _r = _t->takeChild((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 82: { QStandardItem* _r = _t->takeChild((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 83: { QList<QStandardItem*> _r = _t->takeColumn((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 84: { QList<QStandardItem*> _r = _t->takeRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 85: { QString _r = _t->text((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 86: { Qt::Alignment _r = _t->textAlignment((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 87: { QString _r = _t->toolTip((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 88: { int _r = _t->type((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 89: { QString _r = _t->whatsThis((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStandardItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStandardItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStandardItem,
      qt_meta_data_PythonQtWrapper_QStandardItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStandardItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStandardItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStandardItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStandardItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStandardItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStandardItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 90)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 90;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStandardItemModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   56,   36,   35, 0x0a,
      96,   35,   36,   35, 0x2a,
     141,  121,   36,   35, 0x0a,
     195,  182,   36,   35, 0x2a,
     231,  227,   35,   35, 0x0a,
     301,  278,   35,   35, 0x0a,
     379,  357,   35,   35, 0x0a,
     425,  278,   35,   35, 0x0a,
     495,  478,   35,   35, 0x0a,
     550,  526,  522,   35, 0x0a,
     595,  478,  522,   35, 0x2a,
     665,  637,  628,   35, 0x0a,
     730,  707,  628,   35, 0x2a,
     820,  773,  768,   35, 0x0a,
     963,  928,  906,   35, 0x0a,
    1049, 1021,  906,   35, 0x2a,
    1125, 1103,  906,   35, 0x2a,
    1178,  707, 1164,   35, 0x0a,
    1217,  526,  768,   35, 0x0a,
    1262,  478,  768,   35, 0x2a,
    1337, 1295,  628,   35, 0x0a,
    1430, 1393,  628,   35, 0x2a,
    1521, 1497, 1482,   35, 0x0a,
    1614, 1579, 1567,   35, 0x0a,
    1689, 1661, 1567,   35, 0x2a,
    1724,  357, 1567,   35, 0x0a,
    1810, 1780,   35,   35, 0x0a,
    1907, 1870,  768,   35, 0x0a,
    1992, 1962,  768,   35, 0x2a,
    2061, 2035,   35,   35, 0x0a,
    2138, 2111,   35,   35, 0x0a,
    2229, 2195,  768,   35, 0x0a,
    2308, 2281,  768,   35, 0x2a,
    2348,  478, 1482,   35, 0x0a,
    2387, 1661, 1482,   35, 0x0a,
    2442, 2421, 1482,   35, 0x2a,
    2491,  707, 2472,   35, 0x0a,
    2533,  707, 1482,   35, 0x0a,
    2601,  478, 2580,   35, 0x0a,
    2672, 2647, 2636,   35, 0x0a,
    2733,  478, 2721,   35, 0x0a,
    2787, 2764, 1567,   35, 0x0a,
    2827, 1870,  768,   35, 0x0a,
    2882, 1962,  768,   35, 0x2a,
    2925, 2195,  768,   35, 0x0a,
    2977, 2281,  768,   35, 0x2a,
    3017,  526,  522,   35, 0x0a,
    3059,  478,  522,   35, 0x2a,
    3114, 3089,   35,   35, 0x0a,
    3188, 3154,  768,   35, 0x0a,
    3271, 3242,  768,   35, 0x2a,
    3369, 3321,  768,   35, 0x0a,
    3480, 3437,  768,   35, 0x2a,
    3573, 3544,   35,   35, 0x0a,
    3661, 3637,   35,   35, 0x0a,
    3720, 2035,   35,   35, 0x0a,
    3801, 3768,   35,   35, 0x0a,
    3882, 3853,  768,   35, 0x0a,
    3946,  357,   35,   35, 0x0a,
    4027, 4005,   35,   35, 0x0a,
    4086, 4064,   35,   35, 0x0a,
    4123, 2035,   35,   35, 0x0a,
    4185, 3637,   35,   35, 0x0a,
    4272, 4242,   35,   35, 0x0a,
    4316, 1497,   35,   35, 0x2a,
    4346,  478,  522,   35, 0x0a,
    4392,  478, 4376,   35, 0x0a,
    4434, 1497,  906,   35, 0x0a,
    4470, 1497, 1482,   35, 0x0a,
    4520, 1661, 1482,   35, 0x0a,
    4558, 2421, 1482,   35, 0x2a,
    4592, 2421,  906,   35, 0x0a,
    4625, 2421, 1482,   35, 0x0a,
    4673, 2421, 1482,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStandardItemModel[] = {
    "PythonQtWrapper_QStandardItemModel\0\0"
    "QStandardItemModel*\0parent\0"
    "new_QStandardItemModel(QObject*)\0"
    "new_QStandardItemModel()\0rows,columns,parent\0"
    "new_QStandardItemModel(int,int,QObject*)\0"
    "rows,columns\0new_QStandardItemModel(int,int)\0"
    "obj\0delete_QStandardItemModel(QStandardItemModel*)\0"
    "theWrappedObject,items\0"
    "appendColumn(QStandardItemModel*,QList<QStandardItem*>)\0"
    "theWrappedObject,item\0"
    "appendRow(QStandardItemModel*,QStandardItem*)\0"
    "appendRow(QStandardItemModel*,QList<QStandardItem*>)\0"
    "theWrappedObject\0clear(QStandardItemModel*)\0"
    "int\0theWrappedObject,parent\0"
    "columnCount(QStandardItemModel*,QModelIndex)\0"
    "columnCount(QStandardItemModel*)\0"
    "QVariant\0theWrappedObject,index,role\0"
    "data(QStandardItemModel*,QModelIndex,int)\0"
    "theWrappedObject,index\0"
    "data(QStandardItemModel*,QModelIndex)\0"
    "bool\0theWrappedObject,data,action,row,column,parent\0"
    "dropMimeData(QStandardItemModel*,const QMimeData*,Qt::DropAction,int,i"
    "nt,QModelIndex)\0"
    "QList<QStandardItem*>\0"
    "theWrappedObject,text,flags,column\0"
    "findItems(QStandardItemModel*,QString,Qt::MatchFlags,int)\0"
    "theWrappedObject,text,flags\0"
    "findItems(QStandardItemModel*,QString,Qt::MatchFlags)\0"
    "theWrappedObject,text\0"
    "findItems(QStandardItemModel*,QString)\0"
    "Qt::ItemFlags\0flags(QStandardItemModel*,QModelIndex)\0"
    "hasChildren(QStandardItemModel*,QModelIndex)\0"
    "hasChildren(QStandardItemModel*)\0"
    "theWrappedObject,section,orientation,role\0"
    "headerData(QStandardItemModel*,int,Qt::Orientation,int)\0"
    "theWrappedObject,section,orientation\0"
    "headerData(QStandardItemModel*,int,Qt::Orientation)\0"
    "QStandardItem*\0theWrappedObject,column\0"
    "horizontalHeaderItem(QStandardItemModel*,int)\0"
    "QModelIndex\0theWrappedObject,row,column,parent\0"
    "index(QStandardItemModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,column\0"
    "index(QStandardItemModel*,int,int)\0"
    "indexFromItem(QStandardItemModel*,const QStandardItem*)\0"
    "theWrappedObject,column,items\0"
    "insertColumn(QStandardItemModel*,int,QList<QStandardItem*>)\0"
    "theWrappedObject,column,count,parent\0"
    "insertColumns(QStandardItemModel*,int,int,QModelIndex)\0"
    "theWrappedObject,column,count\0"
    "insertColumns(QStandardItemModel*,int,int)\0"
    "theWrappedObject,row,item\0"
    "insertRow(QStandardItemModel*,int,QStandardItem*)\0"
    "theWrappedObject,row,items\0"
    "insertRow(QStandardItemModel*,int,QList<QStandardItem*>)\0"
    "theWrappedObject,row,count,parent\0"
    "insertRows(QStandardItemModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,count\0"
    "insertRows(QStandardItemModel*,int,int)\0"
    "invisibleRootItem(QStandardItemModel*)\0"
    "item(QStandardItemModel*,int,int)\0"
    "theWrappedObject,row\0item(QStandardItemModel*,int)\0"
    "QMap<int,QVariant>\0"
    "itemData(QStandardItemModel*,QModelIndex)\0"
    "itemFromIndex(QStandardItemModel*,QModelIndex)\0"
    "const QStandardItem*\0"
    "itemPrototype(QStandardItemModel*)\0"
    "QMimeData*\0theWrappedObject,indexes\0"
    "mimeData(QStandardItemModel*,QList<QModelIndex>)\0"
    "QStringList\0mimeTypes(QStandardItemModel*)\0"
    "theWrappedObject,child\0"
    "parent(QStandardItemModel*,QModelIndex)\0"
    "removeColumns(QStandardItemModel*,int,int,QModelIndex)\0"
    "removeColumns(QStandardItemModel*,int,int)\0"
    "removeRows(QStandardItemModel*,int,int,QModelIndex)\0"
    "removeRows(QStandardItemModel*,int,int)\0"
    "rowCount(QStandardItemModel*,QModelIndex)\0"
    "rowCount(QStandardItemModel*)\0"
    "theWrappedObject,columns\0"
    "setColumnCount(QStandardItemModel*,int)\0"
    "theWrappedObject,index,value,role\0"
    "setData(QStandardItemModel*,QModelIndex,QVariant,int)\0"
    "theWrappedObject,index,value\0"
    "setData(QStandardItemModel*,QModelIndex,QVariant)\0"
    "theWrappedObject,section,orientation,value,role\0"
    "setHeaderData(QStandardItemModel*,int,Qt::Orientation,QVariant,int)\0"
    "theWrappedObject,section,orientation,value\0"
    "setHeaderData(QStandardItemModel*,int,Qt::Orientation,QVariant)\0"
    "theWrappedObject,column,item\0"
    "setHorizontalHeaderItem(QStandardItemModel*,int,QStandardItem*)\0"
    "theWrappedObject,labels\0"
    "setHorizontalHeaderLabels(QStandardItemModel*,QStringList)\0"
    "setItem(QStandardItemModel*,int,QStandardItem*)\0"
    "theWrappedObject,row,column,item\0"
    "setItem(QStandardItemModel*,int,int,QStandardItem*)\0"
    "theWrappedObject,index,roles\0"
    "setItemData(QStandardItemModel*,QModelIndex,QMap<int,QVariant>)\0"
    "setItemPrototype(QStandardItemModel*,const QStandardItem*)\0"
    "theWrappedObject,rows\0"
    "setRowCount(QStandardItemModel*,int)\0"
    "theWrappedObject,role\0"
    "setSortRole(QStandardItemModel*,int)\0"
    "setVerticalHeaderItem(QStandardItemModel*,int,QStandardItem*)\0"
    "setVerticalHeaderLabels(QStandardItemModel*,QStringList)\0"
    "theWrappedObject,column,order\0"
    "sort(QStandardItemModel*,int,Qt::SortOrder)\0"
    "sort(QStandardItemModel*,int)\0"
    "sortRole(QStandardItemModel*)\0"
    "Qt::DropActions\0"
    "supportedDropActions(QStandardItemModel*)\0"
    "takeColumn(QStandardItemModel*,int)\0"
    "takeHorizontalHeaderItem(QStandardItemModel*,int)\0"
    "takeItem(QStandardItemModel*,int,int)\0"
    "takeItem(QStandardItemModel*,int)\0"
    "takeRow(QStandardItemModel*,int)\0"
    "takeVerticalHeaderItem(QStandardItemModel*,int)\0"
    "verticalHeaderItem(QStandardItemModel*,int)\0"
};

void PythonQtWrapper_QStandardItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStandardItemModel *_t = static_cast<PythonQtWrapper_QStandardItemModel *>(_o);
        switch (_id) {
        case 0: { QStandardItemModel* _r = _t->new_QStandardItemModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 1: { QStandardItemModel* _r = _t->new_QStandardItemModel();
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 2: { QStandardItemModel* _r = _t->new_QStandardItemModel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 3: { QStandardItemModel* _r = _t->new_QStandardItemModel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QStandardItemModel((*reinterpret_cast< QStandardItemModel*(*)>(_a[1]))); break;
        case 5: _t->appendColumn((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[2]))); break;
        case 6: _t->appendRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< QStandardItem*(*)>(_a[2]))); break;
        case 7: _t->appendRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[2]))); break;
        case 8: _t->clear((*reinterpret_cast< QStandardItemModel*(*)>(_a[1]))); break;
        case 9: { int _r = _t->columnCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->columnCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QVariant _r = _t->data((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 12: { QVariant _r = _t->data((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->dropMimeData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QList<QStandardItem*> _r = _t->findItems((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 15: { QList<QStandardItem*> _r = _t->findItems((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 16: { QList<QStandardItem*> _r = _t->findItems((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 17: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->hasChildren((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->hasChildren((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QVariant _r = _t->headerData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 21: { QVariant _r = _t->headerData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 22: { QStandardItem* _r = _t->horizontalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 23: { QModelIndex _r = _t->index((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 24: { QModelIndex _r = _t->index((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 25: { QModelIndex _r = _t->indexFromItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QStandardItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 26: _t->insertColumn((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[3]))); break;
        case 27: { bool _r = _t->insertColumns((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->insertColumns((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->insertRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStandardItem*(*)>(_a[3]))); break;
        case 30: _t->insertRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QList<QStandardItem*>(*)>(_a[3]))); break;
        case 31: { bool _r = _t->insertRows((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->insertRows((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { QStandardItem* _r = _t->invisibleRootItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 34: { QStandardItem* _r = _t->item((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 35: { QStandardItem* _r = _t->item((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 36: { QMap<int,QVariant> _r = _t->itemData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMap<int,QVariant>*>(_a[0]) = _r; }  break;
        case 37: { QStandardItem* _r = _t->itemFromIndex((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 38: { const QStandardItem* _r = _t->itemPrototype((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QStandardItem**>(_a[0]) = _r; }  break;
        case 39: { QMimeData* _r = _t->mimeData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QModelIndex>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 40: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 41: { QModelIndex _r = _t->parent((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->removeColumns((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->removeColumns((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->removeRows((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->removeRows((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { int _r = _t->rowCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->rowCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: _t->setColumnCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: { bool _r = _t->setData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->setData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->setHeaderData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->setHeaderData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: _t->setHorizontalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStandardItem*(*)>(_a[3]))); break;
        case 54: _t->setHorizontalHeaderLabels((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 55: _t->setItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStandardItem*(*)>(_a[3]))); break;
        case 56: _t->setItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QStandardItem*(*)>(_a[4]))); break;
        case 57: { bool _r = _t->setItemData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QMap<int,QVariant>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: _t->setItemPrototype((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QStandardItem*(*)>(_a[2]))); break;
        case 59: _t->setRowCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->setSortRole((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->setVerticalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStandardItem*(*)>(_a[3]))); break;
        case 62: _t->setVerticalHeaderLabels((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 63: _t->sort((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 64: _t->sort((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 65: { int _r = _t->sortRole((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 66: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        case 67: { QList<QStandardItem*> _r = _t->takeColumn((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 68: { QStandardItem* _r = _t->takeHorizontalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 69: { QStandardItem* _r = _t->takeItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 70: { QStandardItem* _r = _t->takeItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 71: { QList<QStandardItem*> _r = _t->takeRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 72: { QStandardItem* _r = _t->takeVerticalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 73: { QStandardItem* _r = _t->verticalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStandardItemModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStandardItemModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStandardItemModel,
      qt_meta_data_PythonQtWrapper_QStandardItemModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStandardItemModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStandardItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStandardItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStandardItemModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStandardItemModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStandardItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStaticText[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       1,  119, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      66,   60,   29,   28, 0x0a,
     100,   95,   29,   28, 0x0a,
     129,  125,   28,   28, 0x0a,
     191,  167,  162,   28, 0x0a,
     224,  167,   29,   28, 0x0a,
     266,  167,  162,   28, 0x0a,
     345,  328,  299,   28, 0x0a,
     404,  375,   28,   28, 0x0a,
     467,  443,   28,   28, 0x2a,
     500,  328,   28,   28, 0x2a,
     555,  522,   28,   28, 0x0a,
     639,  617,   28,   28, 0x0a,
     697,  669,   28,   28, 0x0a,
     768,  740,   28,   28, 0x0a,
     835,  808,   28,   28, 0x0a,
     875,  328,  868,   28, 0x0a,
     902,  328,  894,   28, 0x0a,
     936,  328,  921,   28, 0x0a,
     973,  328,  961,   28, 0x0a,
    1004,  328,  998,   28, 0x0a,

 // enums: name, flags, count, data
    1028, 0x0,    2,  123,

 // enum data: key, value
    1044, uint(PythonQtWrapper_QStaticText::ModerateCaching),
    1060, uint(PythonQtWrapper_QStaticText::AggressiveCaching),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStaticText[] = {
    "PythonQtWrapper_QStaticText\0\0QStaticText*\0"
    "new_QStaticText()\0other\0"
    "new_QStaticText(QStaticText)\0text\0"
    "new_QStaticText(QString)\0obj\0"
    "delete_QStaticText(QStaticText*)\0bool\0"
    "theWrappedObject,arg__1\0"
    "__ne__(QStaticText*,QStaticText)\0"
    "operator_assign(QStaticText*,QStaticText)\0"
    "__eq__(QStaticText*,QStaticText)\0"
    "QStaticText::PerformanceHint\0"
    "theWrappedObject\0performanceHint(QStaticText*)\0"
    "theWrappedObject,matrix,font\0"
    "prepare(QStaticText*,QTransform,QFont)\0"
    "theWrappedObject,matrix\0"
    "prepare(QStaticText*,QTransform)\0"
    "prepare(QStaticText*)\0"
    "theWrappedObject,performanceHint\0"
    "setPerformanceHint(QStaticText*,QStaticText::PerformanceHint)\0"
    "theWrappedObject,text\0"
    "setText(QStaticText*,QString)\0"
    "theWrappedObject,textFormat\0"
    "setTextFormat(QStaticText*,Qt::TextFormat)\0"
    "theWrappedObject,textOption\0"
    "setTextOption(QStaticText*,QTextOption)\0"
    "theWrappedObject,textWidth\0"
    "setTextWidth(QStaticText*,qreal)\0"
    "QSizeF\0size(QStaticText*)\0QString\0"
    "text(QStaticText*)\0Qt::TextFormat\0"
    "textFormat(QStaticText*)\0QTextOption\0"
    "textOption(QStaticText*)\0qreal\0"
    "textWidth(QStaticText*)\0PerformanceHint\0"
    "ModerateCaching\0AggressiveCaching\0"
};

void PythonQtWrapper_QStaticText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStaticText *_t = static_cast<PythonQtWrapper_QStaticText *>(_o);
        switch (_id) {
        case 0: { QStaticText* _r = _t->new_QStaticText();
            if (_a[0]) *reinterpret_cast< QStaticText**>(_a[0]) = _r; }  break;
        case 1: { QStaticText* _r = _t->new_QStaticText((*reinterpret_cast< const QStaticText(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStaticText**>(_a[0]) = _r; }  break;
        case 2: { QStaticText* _r = _t->new_QStaticText((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStaticText**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStaticText((*reinterpret_cast< QStaticText*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->__ne__((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QStaticText(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QStaticText* _r = _t->operator_assign((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QStaticText(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStaticText**>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__eq__((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QStaticText(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QStaticText::PerformanceHint _r = _t->performanceHint((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStaticText::PerformanceHint*>(_a[0]) = _r; }  break;
        case 8: _t->prepare((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])),(*reinterpret_cast< const QFont(*)>(_a[3]))); break;
        case 9: _t->prepare((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2]))); break;
        case 10: _t->prepare((*reinterpret_cast< QStaticText*(*)>(_a[1]))); break;
        case 11: _t->setPerformanceHint((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< QStaticText::PerformanceHint(*)>(_a[2]))); break;
        case 12: _t->setText((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->setTextFormat((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< Qt::TextFormat(*)>(_a[2]))); break;
        case 14: _t->setTextOption((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QTextOption(*)>(_a[2]))); break;
        case 15: _t->setTextWidth((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 16: { QSizeF _r = _t->size((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->text((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { Qt::TextFormat _r = _t->textFormat((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextFormat*>(_a[0]) = _r; }  break;
        case 19: { QTextOption _r = _t->textOption((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption*>(_a[0]) = _r; }  break;
        case 20: { qreal _r = _t->textWidth((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStaticText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStaticText::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStaticText,
      qt_meta_data_PythonQtWrapper_QStaticText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStaticText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStaticText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStaticText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStaticText))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStaticText*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStaticText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStatusBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     156,  124,   27,   27, 0x0a,
     225,  201,   27,   27, 0x2a,
     266,  124,   27,   27, 0x0a,
     302,  201,   27,   27, 0x2a,
     359,  342,  334,   27, 0x0a,
     416,  392,  387,   27, 0x0a,
     485,  447,  443,   27, 0x0a,
     567,  537,  443,   27, 0x2a,
     615,  447,  443,   27, 0x0a,
     658,  537,  443,   27, 0x2a,
     697,  342,  387,   27, 0x0a,
     728,  392,   27,   27, 0x0a,
     765,  201,   27,   27, 0x0a,
     800,  392,   27,   27, 0x0a,
     839,  392,   27,   27, 0x0a,
     876,  392,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStatusBar[] = {
    "PythonQtWrapper_QStatusBar\0\0QStatusBar*\0"
    "parent\0new_QStatusBar(QWidget*)\0"
    "new_QStatusBar()\0obj\0"
    "delete_QStatusBar(QStatusBar*)\0"
    "theWrappedObject,widget,stretch\0"
    "addPermanentWidget(QStatusBar*,QWidget*,int)\0"
    "theWrappedObject,widget\0"
    "addPermanentWidget(QStatusBar*,QWidget*)\0"
    "addWidget(QStatusBar*,QWidget*,int)\0"
    "addWidget(QStatusBar*,QWidget*)\0QString\0"
    "theWrappedObject\0currentMessage(QStatusBar*)\0"
    "bool\0theWrappedObject,arg__1\0"
    "event(QStatusBar*,QEvent*)\0int\0"
    "theWrappedObject,index,widget,stretch\0"
    "insertPermanentWidget(QStatusBar*,int,QWidget*,int)\0"
    "theWrappedObject,index,widget\0"
    "insertPermanentWidget(QStatusBar*,int,QWidget*)\0"
    "insertWidget(QStatusBar*,int,QWidget*,int)\0"
    "insertWidget(QStatusBar*,int,QWidget*)\0"
    "isSizeGripEnabled(QStatusBar*)\0"
    "paintEvent(QStatusBar*,QPaintEvent*)\0"
    "removeWidget(QStatusBar*,QWidget*)\0"
    "resizeEvent(QStatusBar*,QResizeEvent*)\0"
    "setSizeGripEnabled(QStatusBar*,bool)\0"
    "showEvent(QStatusBar*,QShowEvent*)\0"
};

void PythonQtWrapper_QStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStatusBar *_t = static_cast<PythonQtWrapper_QStatusBar *>(_o);
        switch (_id) {
        case 0: { QStatusBar* _r = _t->new_QStatusBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStatusBar**>(_a[0]) = _r; }  break;
        case 1: { QStatusBar* _r = _t->new_QStatusBar();
            if (_a[0]) *reinterpret_cast< QStatusBar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStatusBar((*reinterpret_cast< QStatusBar*(*)>(_a[1]))); break;
        case 3: _t->addPermanentWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->addPermanentWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 5: _t->addWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->addWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 7: { QString _r = _t->currentMessage((*reinterpret_cast< QStatusBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->insertPermanentWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->insertPermanentWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->insertWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->insertWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isSizeGripEnabled((*reinterpret_cast< QStatusBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->paintEvent((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 15: _t->removeWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 16: _t->resizeEvent((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 17: _t->setSizeGripEnabled((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->showEvent((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStatusBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStatusBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStatusBar,
      qt_meta_data_PythonQtWrapper_QStatusBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStatusBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStatusBar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStatusBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStatusTipEvent[] = {

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
      54,   50,   33,   32, 0x0a,
      87,   83,   32,   32, 0x0a,
     153,  136,  128,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent[] = {
    "PythonQtWrapper_QStatusTipEvent\0\0"
    "QStatusTipEvent*\0tip\0new_QStatusTipEvent(QString)\0"
    "obj\0delete_QStatusTipEvent(QStatusTipEvent*)\0"
    "QString\0theWrappedObject\0tip(QStatusTipEvent*)\0"
};

void PythonQtWrapper_QStatusTipEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStatusTipEvent *_t = static_cast<PythonQtWrapper_QStatusTipEvent *>(_o);
        switch (_id) {
        case 0: { QStatusTipEvent* _r = _t->new_QStatusTipEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStatusTipEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QStatusTipEvent((*reinterpret_cast< QStatusTipEvent*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->tip((*reinterpret_cast< QStatusTipEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStatusTipEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStatusTipEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent,
      qt_meta_data_PythonQtWrapper_QStatusTipEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStatusTipEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStatusTipEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStatusTipEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStatusTipEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStatusTipEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStringListModel[] = {

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
      59,   52,   34,   33, 0x0a,
      90,   33,   34,   33, 0x2a,
     128,  113,   34,   33, 0x0a,
     179,  171,   34,   33, 0x2a,
     217,  213,   33,   33, 0x0a,
     297,  269,  260,   33, 0x0a,
     374,  351,  337,   33, 0x0a,
     450,  416,  411,   33, 0x0a,
     527,  500,  411,   33, 0x2a,
     565,  416,  411,   33, 0x0a,
     615,  500,  411,   33, 0x2a,
     681,  657,  653,   33, 0x0a,
     738,  721,  653,   33, 0x2a,
     800,  766,  411,   33, 0x0a,
     881,  852,  411,   33, 0x2a,
     954,  929,   33,   33, 0x0a,
    1029,  999,   33,   33, 0x0a,
    1095, 1071,   33,   33, 0x2a,
    1135,  721, 1123,   33, 0x0a,
    1181,  721, 1165,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStringListModel[] = {
    "PythonQtWrapper_QStringListModel\0\0"
    "QStringListModel*\0parent\0"
    "new_QStringListModel(QObject*)\0"
    "new_QStringListModel()\0strings,parent\0"
    "new_QStringListModel(QStringList,QObject*)\0"
    "strings\0new_QStringListModel(QStringList)\0"
    "obj\0delete_QStringListModel(QStringListModel*)\0"
    "QVariant\0theWrappedObject,index,role\0"
    "data(QStringListModel*,QModelIndex,int)\0"
    "Qt::ItemFlags\0theWrappedObject,index\0"
    "flags(QStringListModel*,QModelIndex)\0"
    "bool\0theWrappedObject,row,count,parent\0"
    "insertRows(QStringListModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,count\0"
    "insertRows(QStringListModel*,int,int)\0"
    "removeRows(QStringListModel*,int,int,QModelIndex)\0"
    "removeRows(QStringListModel*,int,int)\0"
    "int\0theWrappedObject,parent\0"
    "rowCount(QStringListModel*,QModelIndex)\0"
    "theWrappedObject\0rowCount(QStringListModel*)\0"
    "theWrappedObject,index,value,role\0"
    "setData(QStringListModel*,QModelIndex,QVariant,int)\0"
    "theWrappedObject,index,value\0"
    "setData(QStringListModel*,QModelIndex,QVariant)\0"
    "theWrappedObject,strings\0"
    "setStringList(QStringListModel*,QStringList)\0"
    "theWrappedObject,column,order\0"
    "sort(QStringListModel*,int,Qt::SortOrder)\0"
    "theWrappedObject,column\0"
    "sort(QStringListModel*,int)\0QStringList\0"
    "stringList(QStringListModel*)\0"
    "Qt::DropActions\0supportedDropActions(QStringListModel*)\0"
};

void PythonQtWrapper_QStringListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStringListModel *_t = static_cast<PythonQtWrapper_QStringListModel *>(_o);
        switch (_id) {
        case 0: { QStringListModel* _r = _t->new_QStringListModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringListModel**>(_a[0]) = _r; }  break;
        case 1: { QStringListModel* _r = _t->new_QStringListModel();
            if (_a[0]) *reinterpret_cast< QStringListModel**>(_a[0]) = _r; }  break;
        case 2: { QStringListModel* _r = _t->new_QStringListModel((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringListModel**>(_a[0]) = _r; }  break;
        case 3: { QStringListModel* _r = _t->new_QStringListModel((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringListModel**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QStringListModel((*reinterpret_cast< QStringListModel*(*)>(_a[1]))); break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->insertRows((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->insertRows((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->removeRows((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->removeRows((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->rowCount((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->rowCount((*reinterpret_cast< QStringListModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->setData((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->setData((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->setStringList((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 16: _t->sort((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 17: _t->sort((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: { QStringList _r = _t->stringList((*reinterpret_cast< QStringListModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 19: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QStringListModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStringListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStringListModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStringListModel,
      qt_meta_data_PythonQtWrapper_QStringListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStringListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStringListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStringListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStringListModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStringListModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStringListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
      13,  164, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   23,   24,   23, 0x0a,
      49,   45,   23,   23, 0x0a,
     113,   78,   72,   23, 0x0a,
     253,  190,  186,   23, 0x0a,
     431,  375,  186,   23, 0x2a,
     593,  544,  186,   23, 0x2a,
     739,  692,   23,   23, 0x0a,
     853,  791,   23,   23, 0x0a,
     990,  937,   23,   23, 0x2a,
    1086, 1054,   72,   23, 0x0a,
    1189, 1128,  186,   23, 0x0a,
    1367, 1313,  186,   23, 0x2a,
    1523, 1476,  186,   23, 0x2a,
    1636, 1612,   23,   23, 0x0a,
    1666, 1612,   23,   23, 0x0a,
    1692, 1612,   23,   23, 0x0a,
    1748, 1731, 1717,   23, 0x0a,
    1792, 1763,  186,   23, 0x0a,
    1870, 1852,  186,   23, 0x2a,
    1954, 1925,  186,   23, 0x0a,
    2032, 2014,  186,   23, 0x2a,
    2137, 2093, 2087,   23, 0x0a,
    2254, 2217, 2087,   23, 0x2a,
    2349, 2319, 2087,   23, 0x2a,
    2403, 1731, 2394,   23, 0x0a,
    2428, 1612,   23,   23, 0x0a,
    2460, 1612,   23,   23, 0x0a,
    2521, 2501, 2487,   23, 0x0a,
    2627, 2593, 2586,   23, 0x0a,
    2720, 2685,   72,   23, 0x0a,

 // enums: name, flags, count, data
    2778, 0x0,   95,  216,
    2790, 0x0,   46,  406,
    2801, 0x1,   46,  498,
    2813, 0x0,   70,  590,
    2828, 0x0,  100,  730,
    2838, 0x0,   57,  930,
    2855, 0x0,   49, 1044,
    2870, 0x0,   26, 1142,
    2883, 0x0,   28, 1194,
    2893, 0x1,   28, 1250,
    2899, 0x0,   11, 1306,
    2914, 0x0,    2, 1328,
    2940, 0x0,   66, 1332,

 // enum data: key, value
    2951, uint(PythonQtWrapper_QStyle::PM_ButtonMargin),
    2967, uint(PythonQtWrapper_QStyle::PM_ButtonDefaultIndicator),
    2993, uint(PythonQtWrapper_QStyle::PM_MenuButtonIndicator),
    3016, uint(PythonQtWrapper_QStyle::PM_ButtonShiftHorizontal),
    3041, uint(PythonQtWrapper_QStyle::PM_ButtonShiftVertical),
    3064, uint(PythonQtWrapper_QStyle::PM_DefaultFrameWidth),
    3085, uint(PythonQtWrapper_QStyle::PM_SpinBoxFrameWidth),
    3106, uint(PythonQtWrapper_QStyle::PM_ComboBoxFrameWidth),
    3128, uint(PythonQtWrapper_QStyle::PM_MaximumDragDistance),
    3151, uint(PythonQtWrapper_QStyle::PM_ScrollBarExtent),
    3170, uint(PythonQtWrapper_QStyle::PM_ScrollBarSliderMin),
    3192, uint(PythonQtWrapper_QStyle::PM_SliderThickness),
    3211, uint(PythonQtWrapper_QStyle::PM_SliderControlThickness),
    3237, uint(PythonQtWrapper_QStyle::PM_SliderLength),
    3253, uint(PythonQtWrapper_QStyle::PM_SliderTickmarkOffset),
    3277, uint(PythonQtWrapper_QStyle::PM_SliderSpaceAvailable),
    3301, uint(PythonQtWrapper_QStyle::PM_DockWidgetSeparatorExtent),
    3330, uint(PythonQtWrapper_QStyle::PM_DockWidgetHandleExtent),
    3356, uint(PythonQtWrapper_QStyle::PM_DockWidgetFrameWidth),
    3380, uint(PythonQtWrapper_QStyle::PM_TabBarTabOverlap),
    3400, uint(PythonQtWrapper_QStyle::PM_TabBarTabHSpace),
    3419, uint(PythonQtWrapper_QStyle::PM_TabBarTabVSpace),
    3438, uint(PythonQtWrapper_QStyle::PM_TabBarBaseHeight),
    3458, uint(PythonQtWrapper_QStyle::PM_TabBarBaseOverlap),
    3479, uint(PythonQtWrapper_QStyle::PM_ProgressBarChunkWidth),
    3504, uint(PythonQtWrapper_QStyle::PM_SplitterWidth),
    3521, uint(PythonQtWrapper_QStyle::PM_TitleBarHeight),
    3539, uint(PythonQtWrapper_QStyle::PM_MenuScrollerHeight),
    3561, uint(PythonQtWrapper_QStyle::PM_MenuHMargin),
    3576, uint(PythonQtWrapper_QStyle::PM_MenuVMargin),
    3591, uint(PythonQtWrapper_QStyle::PM_MenuPanelWidth),
    3609, uint(PythonQtWrapper_QStyle::PM_MenuTearoffHeight),
    3630, uint(PythonQtWrapper_QStyle::PM_MenuDesktopFrameWidth),
    3655, uint(PythonQtWrapper_QStyle::PM_MenuBarPanelWidth),
    3676, uint(PythonQtWrapper_QStyle::PM_MenuBarItemSpacing),
    3698, uint(PythonQtWrapper_QStyle::PM_MenuBarVMargin),
    3716, uint(PythonQtWrapper_QStyle::PM_MenuBarHMargin),
    3734, uint(PythonQtWrapper_QStyle::PM_IndicatorWidth),
    3752, uint(PythonQtWrapper_QStyle::PM_IndicatorHeight),
    3771, uint(PythonQtWrapper_QStyle::PM_ExclusiveIndicatorWidth),
    3798, uint(PythonQtWrapper_QStyle::PM_ExclusiveIndicatorHeight),
    3826, uint(PythonQtWrapper_QStyle::PM_CheckListButtonSize),
    3849, uint(PythonQtWrapper_QStyle::PM_CheckListControllerSize),
    3876, uint(PythonQtWrapper_QStyle::PM_DialogButtonsSeparator),
    3902, uint(PythonQtWrapper_QStyle::PM_DialogButtonsButtonWidth),
    3930, uint(PythonQtWrapper_QStyle::PM_DialogButtonsButtonHeight),
    3959, uint(PythonQtWrapper_QStyle::PM_MdiSubWindowFrameWidth),
    3985, uint(PythonQtWrapper_QStyle::PM_MDIFrameWidth),
    4002, uint(PythonQtWrapper_QStyle::PM_MdiSubWindowMinimizedWidth),
    4032, uint(PythonQtWrapper_QStyle::PM_MDIMinimizedWidth),
    4053, uint(PythonQtWrapper_QStyle::PM_HeaderMargin),
    4069, uint(PythonQtWrapper_QStyle::PM_HeaderMarkSize),
    4087, uint(PythonQtWrapper_QStyle::PM_HeaderGripMargin),
    4107, uint(PythonQtWrapper_QStyle::PM_TabBarTabShiftHorizontal),
    4135, uint(PythonQtWrapper_QStyle::PM_TabBarTabShiftVertical),
    4161, uint(PythonQtWrapper_QStyle::PM_TabBarScrollButtonWidth),
    4188, uint(PythonQtWrapper_QStyle::PM_ToolBarFrameWidth),
    4209, uint(PythonQtWrapper_QStyle::PM_ToolBarHandleExtent),
    4232, uint(PythonQtWrapper_QStyle::PM_ToolBarItemSpacing),
    4254, uint(PythonQtWrapper_QStyle::PM_ToolBarItemMargin),
    4275, uint(PythonQtWrapper_QStyle::PM_ToolBarSeparatorExtent),
    4301, uint(PythonQtWrapper_QStyle::PM_ToolBarExtensionExtent),
    4327, uint(PythonQtWrapper_QStyle::PM_SpinBoxSliderHeight),
    4350, uint(PythonQtWrapper_QStyle::PM_DefaultTopLevelMargin),
    4375, uint(PythonQtWrapper_QStyle::PM_DefaultChildMargin),
    4397, uint(PythonQtWrapper_QStyle::PM_DefaultLayoutSpacing),
    4421, uint(PythonQtWrapper_QStyle::PM_ToolBarIconSize),
    4440, uint(PythonQtWrapper_QStyle::PM_ListViewIconSize),
    4460, uint(PythonQtWrapper_QStyle::PM_IconViewIconSize),
    4480, uint(PythonQtWrapper_QStyle::PM_SmallIconSize),
    4497, uint(PythonQtWrapper_QStyle::PM_LargeIconSize),
    4514, uint(PythonQtWrapper_QStyle::PM_FocusFrameVMargin),
    4535, uint(PythonQtWrapper_QStyle::PM_FocusFrameHMargin),
    4556, uint(PythonQtWrapper_QStyle::PM_ToolTipLabelFrameWidth),
    4582, uint(PythonQtWrapper_QStyle::PM_CheckBoxLabelSpacing),
    4606, uint(PythonQtWrapper_QStyle::PM_TabBarIconSize),
    4624, uint(PythonQtWrapper_QStyle::PM_SizeGripSize),
    4640, uint(PythonQtWrapper_QStyle::PM_DockWidgetTitleMargin),
    4665, uint(PythonQtWrapper_QStyle::PM_MessageBoxIconSize),
    4687, uint(PythonQtWrapper_QStyle::PM_ButtonIconSize),
    4705, uint(PythonQtWrapper_QStyle::PM_DockWidgetTitleBarButtonMargin),
    4739, uint(PythonQtWrapper_QStyle::PM_RadioButtonLabelSpacing),
    4766, uint(PythonQtWrapper_QStyle::PM_LayoutLeftMargin),
    4786, uint(PythonQtWrapper_QStyle::PM_LayoutTopMargin),
    4805, uint(PythonQtWrapper_QStyle::PM_LayoutRightMargin),
    4826, uint(PythonQtWrapper_QStyle::PM_LayoutBottomMargin),
    4848, uint(PythonQtWrapper_QStyle::PM_LayoutHorizontalSpacing),
    4875, uint(PythonQtWrapper_QStyle::PM_LayoutVerticalSpacing),
    4900, uint(PythonQtWrapper_QStyle::PM_TabBar_ScrollButtonOverlap),
    4930, uint(PythonQtWrapper_QStyle::PM_TextCursorWidth),
    4949, uint(PythonQtWrapper_QStyle::PM_TabCloseIndicatorWidth),
    4975, uint(PythonQtWrapper_QStyle::PM_TabCloseIndicatorHeight),
    5002, uint(PythonQtWrapper_QStyle::PM_ScrollView_ScrollBarSpacing),
    5033, uint(PythonQtWrapper_QStyle::PM_SubMenuOverlap),
    5051, uint(PythonQtWrapper_QStyle::PM_CustomBase),
    5065, uint(PythonQtWrapper_QStyle::SC_None),
    5073, uint(PythonQtWrapper_QStyle::SC_ScrollBarAddLine),
    5093, uint(PythonQtWrapper_QStyle::SC_ScrollBarSubLine),
    5113, uint(PythonQtWrapper_QStyle::SC_ScrollBarAddPage),
    5133, uint(PythonQtWrapper_QStyle::SC_ScrollBarSubPage),
    5153, uint(PythonQtWrapper_QStyle::SC_ScrollBarFirst),
    5171, uint(PythonQtWrapper_QStyle::SC_ScrollBarLast),
    5188, uint(PythonQtWrapper_QStyle::SC_ScrollBarSlider),
    5207, uint(PythonQtWrapper_QStyle::SC_ScrollBarGroove),
    5226, uint(PythonQtWrapper_QStyle::SC_SpinBoxUp),
    5239, uint(PythonQtWrapper_QStyle::SC_SpinBoxDown),
    5254, uint(PythonQtWrapper_QStyle::SC_SpinBoxFrame),
    5270, uint(PythonQtWrapper_QStyle::SC_SpinBoxEditField),
    5290, uint(PythonQtWrapper_QStyle::SC_ComboBoxFrame),
    5307, uint(PythonQtWrapper_QStyle::SC_ComboBoxEditField),
    5328, uint(PythonQtWrapper_QStyle::SC_ComboBoxArrow),
    5345, uint(PythonQtWrapper_QStyle::SC_ComboBoxListBoxPopup),
    5369, uint(PythonQtWrapper_QStyle::SC_SliderGroove),
    5385, uint(PythonQtWrapper_QStyle::SC_SliderHandle),
    5401, uint(PythonQtWrapper_QStyle::SC_SliderTickmarks),
    5420, uint(PythonQtWrapper_QStyle::SC_ToolButton),
    5434, uint(PythonQtWrapper_QStyle::SC_ToolButtonMenu),
    5452, uint(PythonQtWrapper_QStyle::SC_TitleBarSysMenu),
    5471, uint(PythonQtWrapper_QStyle::SC_TitleBarMinButton),
    5492, uint(PythonQtWrapper_QStyle::SC_TitleBarMaxButton),
    5513, uint(PythonQtWrapper_QStyle::SC_TitleBarCloseButton),
    5536, uint(PythonQtWrapper_QStyle::SC_TitleBarNormalButton),
    5560, uint(PythonQtWrapper_QStyle::SC_TitleBarShadeButton),
    5583, uint(PythonQtWrapper_QStyle::SC_TitleBarUnshadeButton),
    5608, uint(PythonQtWrapper_QStyle::SC_TitleBarContextHelpButton),
    5637, uint(PythonQtWrapper_QStyle::SC_TitleBarLabel),
    5654, uint(PythonQtWrapper_QStyle::SC_Q3ListView),
    5668, uint(PythonQtWrapper_QStyle::SC_Q3ListViewBranch),
    5688, uint(PythonQtWrapper_QStyle::SC_Q3ListViewExpand),
    5708, uint(PythonQtWrapper_QStyle::SC_DialGroove),
    5722, uint(PythonQtWrapper_QStyle::SC_DialHandle),
    5736, uint(PythonQtWrapper_QStyle::SC_DialTickmarks),
    5753, uint(PythonQtWrapper_QStyle::SC_GroupBoxCheckBox),
    5773, uint(PythonQtWrapper_QStyle::SC_GroupBoxLabel),
    5790, uint(PythonQtWrapper_QStyle::SC_GroupBoxContents),
    5810, uint(PythonQtWrapper_QStyle::SC_GroupBoxFrame),
    5827, uint(PythonQtWrapper_QStyle::SC_MdiMinButton),
    5843, uint(PythonQtWrapper_QStyle::SC_MdiNormalButton),
    5862, uint(PythonQtWrapper_QStyle::SC_MdiCloseButton),
    5880, uint(PythonQtWrapper_QStyle::SC_CustomBase),
    5894, uint(PythonQtWrapper_QStyle::SC_All),
    5065, uint(PythonQtWrapper_QStyle::SC_None),
    5073, uint(PythonQtWrapper_QStyle::SC_ScrollBarAddLine),
    5093, uint(PythonQtWrapper_QStyle::SC_ScrollBarSubLine),
    5113, uint(PythonQtWrapper_QStyle::SC_ScrollBarAddPage),
    5133, uint(PythonQtWrapper_QStyle::SC_ScrollBarSubPage),
    5153, uint(PythonQtWrapper_QStyle::SC_ScrollBarFirst),
    5171, uint(PythonQtWrapper_QStyle::SC_ScrollBarLast),
    5188, uint(PythonQtWrapper_QStyle::SC_ScrollBarSlider),
    5207, uint(PythonQtWrapper_QStyle::SC_ScrollBarGroove),
    5226, uint(PythonQtWrapper_QStyle::SC_SpinBoxUp),
    5239, uint(PythonQtWrapper_QStyle::SC_SpinBoxDown),
    5254, uint(PythonQtWrapper_QStyle::SC_SpinBoxFrame),
    5270, uint(PythonQtWrapper_QStyle::SC_SpinBoxEditField),
    5290, uint(PythonQtWrapper_QStyle::SC_ComboBoxFrame),
    5307, uint(PythonQtWrapper_QStyle::SC_ComboBoxEditField),
    5328, uint(PythonQtWrapper_QStyle::SC_ComboBoxArrow),
    5345, uint(PythonQtWrapper_QStyle::SC_ComboBoxListBoxPopup),
    5369, uint(PythonQtWrapper_QStyle::SC_SliderGroove),
    5385, uint(PythonQtWrapper_QStyle::SC_SliderHandle),
    5401, uint(PythonQtWrapper_QStyle::SC_SliderTickmarks),
    5420, uint(PythonQtWrapper_QStyle::SC_ToolButton),
    5434, uint(PythonQtWrapper_QStyle::SC_ToolButtonMenu),
    5452, uint(PythonQtWrapper_QStyle::SC_TitleBarSysMenu),
    5471, uint(PythonQtWrapper_QStyle::SC_TitleBarMinButton),
    5492, uint(PythonQtWrapper_QStyle::SC_TitleBarMaxButton),
    5513, uint(PythonQtWrapper_QStyle::SC_TitleBarCloseButton),
    5536, uint(PythonQtWrapper_QStyle::SC_TitleBarNormalButton),
    5560, uint(PythonQtWrapper_QStyle::SC_TitleBarShadeButton),
    5583, uint(PythonQtWrapper_QStyle::SC_TitleBarUnshadeButton),
    5608, uint(PythonQtWrapper_QStyle::SC_TitleBarContextHelpButton),
    5637, uint(PythonQtWrapper_QStyle::SC_TitleBarLabel),
    5654, uint(PythonQtWrapper_QStyle::SC_Q3ListView),
    5668, uint(PythonQtWrapper_QStyle::SC_Q3ListViewBranch),
    5688, uint(PythonQtWrapper_QStyle::SC_Q3ListViewExpand),
    5708, uint(PythonQtWrapper_QStyle::SC_DialGroove),
    5722, uint(PythonQtWrapper_QStyle::SC_DialHandle),
    5736, uint(PythonQtWrapper_QStyle::SC_DialTickmarks),
    5753, uint(PythonQtWrapper_QStyle::SC_GroupBoxCheckBox),
    5773, uint(PythonQtWrapper_QStyle::SC_GroupBoxLabel),
    5790, uint(PythonQtWrapper_QStyle::SC_GroupBoxContents),
    5810, uint(PythonQtWrapper_QStyle::SC_GroupBoxFrame),
    5827, uint(PythonQtWrapper_QStyle::SC_MdiMinButton),
    5843, uint(PythonQtWrapper_QStyle::SC_MdiNormalButton),
    5862, uint(PythonQtWrapper_QStyle::SC_MdiCloseButton),
    5880, uint(PythonQtWrapper_QStyle::SC_CustomBase),
    5894, uint(PythonQtWrapper_QStyle::SC_All),
    5901, uint(PythonQtWrapper_QStyle::SP_TitleBarMenuButton),
    5923, uint(PythonQtWrapper_QStyle::SP_TitleBarMinButton),
    5944, uint(PythonQtWrapper_QStyle::SP_TitleBarMaxButton),
    5965, uint(PythonQtWrapper_QStyle::SP_TitleBarCloseButton),
    5988, uint(PythonQtWrapper_QStyle::SP_TitleBarNormalButton),
    6012, uint(PythonQtWrapper_QStyle::SP_TitleBarShadeButton),
    6035, uint(PythonQtWrapper_QStyle::SP_TitleBarUnshadeButton),
    6060, uint(PythonQtWrapper_QStyle::SP_TitleBarContextHelpButton),
    6089, uint(PythonQtWrapper_QStyle::SP_DockWidgetCloseButton),
    6114, uint(PythonQtWrapper_QStyle::SP_MessageBoxInformation),
    6139, uint(PythonQtWrapper_QStyle::SP_MessageBoxWarning),
    6160, uint(PythonQtWrapper_QStyle::SP_MessageBoxCritical),
    6182, uint(PythonQtWrapper_QStyle::SP_MessageBoxQuestion),
    6204, uint(PythonQtWrapper_QStyle::SP_DesktopIcon),
    6219, uint(PythonQtWrapper_QStyle::SP_TrashIcon),
    6232, uint(PythonQtWrapper_QStyle::SP_ComputerIcon),
    6248, uint(PythonQtWrapper_QStyle::SP_DriveFDIcon),
    6263, uint(PythonQtWrapper_QStyle::SP_DriveHDIcon),
    6278, uint(PythonQtWrapper_QStyle::SP_DriveCDIcon),
    6293, uint(PythonQtWrapper_QStyle::SP_DriveDVDIcon),
    6309, uint(PythonQtWrapper_QStyle::SP_DriveNetIcon),
    6325, uint(PythonQtWrapper_QStyle::SP_DirOpenIcon),
    6340, uint(PythonQtWrapper_QStyle::SP_DirClosedIcon),
    6357, uint(PythonQtWrapper_QStyle::SP_DirLinkIcon),
    6372, uint(PythonQtWrapper_QStyle::SP_FileIcon),
    6384, uint(PythonQtWrapper_QStyle::SP_FileLinkIcon),
    6400, uint(PythonQtWrapper_QStyle::SP_ToolBarHorizontalExtensionButton),
    6436, uint(PythonQtWrapper_QStyle::SP_ToolBarVerticalExtensionButton),
    6470, uint(PythonQtWrapper_QStyle::SP_FileDialogStart),
    6489, uint(PythonQtWrapper_QStyle::SP_FileDialogEnd),
    6506, uint(PythonQtWrapper_QStyle::SP_FileDialogToParent),
    6528, uint(PythonQtWrapper_QStyle::SP_FileDialogNewFolder),
    6551, uint(PythonQtWrapper_QStyle::SP_FileDialogDetailedView),
    6577, uint(PythonQtWrapper_QStyle::SP_FileDialogInfoView),
    6599, uint(PythonQtWrapper_QStyle::SP_FileDialogContentsView),
    6625, uint(PythonQtWrapper_QStyle::SP_FileDialogListView),
    6647, uint(PythonQtWrapper_QStyle::SP_FileDialogBack),
    6665, uint(PythonQtWrapper_QStyle::SP_DirIcon),
    6676, uint(PythonQtWrapper_QStyle::SP_DialogOkButton),
    6694, uint(PythonQtWrapper_QStyle::SP_DialogCancelButton),
    6716, uint(PythonQtWrapper_QStyle::SP_DialogHelpButton),
    6736, uint(PythonQtWrapper_QStyle::SP_DialogOpenButton),
    6756, uint(PythonQtWrapper_QStyle::SP_DialogSaveButton),
    6776, uint(PythonQtWrapper_QStyle::SP_DialogCloseButton),
    6797, uint(PythonQtWrapper_QStyle::SP_DialogApplyButton),
    6818, uint(PythonQtWrapper_QStyle::SP_DialogResetButton),
    6839, uint(PythonQtWrapper_QStyle::SP_DialogDiscardButton),
    6862, uint(PythonQtWrapper_QStyle::SP_DialogYesButton),
    6881, uint(PythonQtWrapper_QStyle::SP_DialogNoButton),
    6899, uint(PythonQtWrapper_QStyle::SP_ArrowUp),
    6910, uint(PythonQtWrapper_QStyle::SP_ArrowDown),
    6923, uint(PythonQtWrapper_QStyle::SP_ArrowLeft),
    6936, uint(PythonQtWrapper_QStyle::SP_ArrowRight),
    6950, uint(PythonQtWrapper_QStyle::SP_ArrowBack),
    6963, uint(PythonQtWrapper_QStyle::SP_ArrowForward),
    6979, uint(PythonQtWrapper_QStyle::SP_DirHomeIcon),
    6994, uint(PythonQtWrapper_QStyle::SP_CommandLink),
    7009, uint(PythonQtWrapper_QStyle::SP_VistaShield),
    7024, uint(PythonQtWrapper_QStyle::SP_BrowserReload),
    7041, uint(PythonQtWrapper_QStyle::SP_BrowserStop),
    7056, uint(PythonQtWrapper_QStyle::SP_MediaPlay),
    7069, uint(PythonQtWrapper_QStyle::SP_MediaStop),
    7082, uint(PythonQtWrapper_QStyle::SP_MediaPause),
    7096, uint(PythonQtWrapper_QStyle::SP_MediaSkipForward),
    7116, uint(PythonQtWrapper_QStyle::SP_MediaSkipBackward),
    7137, uint(PythonQtWrapper_QStyle::SP_MediaSeekForward),
    7157, uint(PythonQtWrapper_QStyle::SP_MediaSeekBackward),
    7178, uint(PythonQtWrapper_QStyle::SP_MediaVolume),
    7193, uint(PythonQtWrapper_QStyle::SP_MediaVolumeMuted),
    7213, uint(PythonQtWrapper_QStyle::SP_CustomBase),
    7227, uint(PythonQtWrapper_QStyle::SH_EtchDisabledText),
    7247, uint(PythonQtWrapper_QStyle::SH_DitherDisabledText),
    7269, uint(PythonQtWrapper_QStyle::SH_ScrollBar_MiddleClickAbsolutePosition),
    7310, uint(PythonQtWrapper_QStyle::SH_ScrollBar_ScrollWhenPointerLeavesControl),
    7354, uint(PythonQtWrapper_QStyle::SH_TabBar_SelectMouseType),
    7380, uint(PythonQtWrapper_QStyle::SH_TabBar_Alignment),
    7400, uint(PythonQtWrapper_QStyle::SH_Header_ArrowAlignment),
    7425, uint(PythonQtWrapper_QStyle::SH_Slider_SnapToValue),
    7447, uint(PythonQtWrapper_QStyle::SH_Slider_SloppyKeyEvents),
    7473, uint(PythonQtWrapper_QStyle::SH_ProgressDialog_CenterCancelButton),
    7510, uint(PythonQtWrapper_QStyle::SH_ProgressDialog_TextLabelAlignment),
    7547, uint(PythonQtWrapper_QStyle::SH_PrintDialog_RightAlignButtons),
    7580, uint(PythonQtWrapper_QStyle::SH_MainWindow_SpaceBelowMenuBar),
    7612, uint(PythonQtWrapper_QStyle::SH_FontDialog_SelectAssociatedText),
    7647, uint(PythonQtWrapper_QStyle::SH_Menu_AllowActiveAndDisabled),
    7678, uint(PythonQtWrapper_QStyle::SH_Menu_SpaceActivatesItem),
    7705, uint(PythonQtWrapper_QStyle::SH_Menu_SubMenuPopupDelay),
    7731, uint(PythonQtWrapper_QStyle::SH_ScrollView_FrameOnlyAroundContents),
    7769, uint(PythonQtWrapper_QStyle::SH_MenuBar_AltKeyNavigation),
    7797, uint(PythonQtWrapper_QStyle::SH_ComboBox_ListMouseTracking),
    7827, uint(PythonQtWrapper_QStyle::SH_Menu_MouseTracking),
    7849, uint(PythonQtWrapper_QStyle::SH_MenuBar_MouseTracking),
    7874, uint(PythonQtWrapper_QStyle::SH_ItemView_ChangeHighlightOnFocus),
    7909, uint(PythonQtWrapper_QStyle::SH_Widget_ShareActivation),
    7935, uint(PythonQtWrapper_QStyle::SH_Workspace_FillSpaceOnMaximize),
    7968, uint(PythonQtWrapper_QStyle::SH_ComboBox_Popup),
    7986, uint(PythonQtWrapper_QStyle::SH_TitleBar_NoBorder),
    8007, uint(PythonQtWrapper_QStyle::SH_Slider_StopMouseOverSlider),
    8037, uint(PythonQtWrapper_QStyle::SH_ScrollBar_StopMouseOverSlider),
    8070, uint(PythonQtWrapper_QStyle::SH_BlinkCursorWhenTextSelected),
    8101, uint(PythonQtWrapper_QStyle::SH_RichText_FullWidthSelection),
    8132, uint(PythonQtWrapper_QStyle::SH_Menu_Scrollable),
    8151, uint(PythonQtWrapper_QStyle::SH_GroupBox_TextLabelVerticalAlignment),
    8190, uint(PythonQtWrapper_QStyle::SH_GroupBox_TextLabelColor),
    8217, uint(PythonQtWrapper_QStyle::SH_Menu_SloppySubMenus),
    8240, uint(PythonQtWrapper_QStyle::SH_Table_GridLineColor),
    8263, uint(PythonQtWrapper_QStyle::SH_LineEdit_PasswordCharacter),
    8293, uint(PythonQtWrapper_QStyle::SH_DialogButtons_DefaultButton),
    8324, uint(PythonQtWrapper_QStyle::SH_ToolBox_SelectedPageTitleBold),
    8357, uint(PythonQtWrapper_QStyle::SH_TabBar_PreferNoArrows),
    8382, uint(PythonQtWrapper_QStyle::SH_ScrollBar_LeftClickAbsolutePosition),
    8421, uint(PythonQtWrapper_QStyle::SH_Q3ListViewExpand_SelectMouseType),
    8457, uint(PythonQtWrapper_QStyle::SH_UnderlineShortcut),
    8478, uint(PythonQtWrapper_QStyle::SH_SpinBox_AnimateButton),
    8503, uint(PythonQtWrapper_QStyle::SH_SpinBox_KeyPressAutoRepeatRate),
    8537, uint(PythonQtWrapper_QStyle::SH_SpinBox_ClickAutoRepeatRate),
    8568, uint(PythonQtWrapper_QStyle::SH_Menu_FillScreenWithScroll),
    8597, uint(PythonQtWrapper_QStyle::SH_ToolTipLabel_Opacity),
    8621, uint(PythonQtWrapper_QStyle::SH_DrawMenuBarSeparator),
    8645, uint(PythonQtWrapper_QStyle::SH_TitleBar_ModifyNotification),
    8676, uint(PythonQtWrapper_QStyle::SH_Button_FocusPolicy),
    8698, uint(PythonQtWrapper_QStyle::SH_MenuBar_DismissOnSecondClick),
    8730, uint(PythonQtWrapper_QStyle::SH_MessageBox_UseBorderForButtonSpacing),
    8770, uint(PythonQtWrapper_QStyle::SH_TitleBar_AutoRaise),
    8792, uint(PythonQtWrapper_QStyle::SH_ToolButton_PopupDelay),
    8817, uint(PythonQtWrapper_QStyle::SH_FocusFrame_Mask),
    8836, uint(PythonQtWrapper_QStyle::SH_RubberBand_Mask),
    8855, uint(PythonQtWrapper_QStyle::SH_WindowFrame_Mask),
    8875, uint(PythonQtWrapper_QStyle::SH_SpinControls_DisableOnBounds),
    8907, uint(PythonQtWrapper_QStyle::SH_Dial_BackgroundRole),
    8930, uint(PythonQtWrapper_QStyle::SH_ComboBox_LayoutDirection),
    8958, uint(PythonQtWrapper_QStyle::SH_ItemView_EllipsisLocation),
    8987, uint(PythonQtWrapper_QStyle::SH_ItemView_ShowDecorationSelected),
    9022, uint(PythonQtWrapper_QStyle::SH_ItemView_ActivateItemOnSingleClick),
    9060, uint(PythonQtWrapper_QStyle::SH_ScrollBar_ContextMenu),
    9085, uint(PythonQtWrapper_QStyle::SH_ScrollBar_RollBetweenButtons),
    9117, uint(PythonQtWrapper_QStyle::SH_Slider_AbsoluteSetButtons),
    9146, uint(PythonQtWrapper_QStyle::SH_Slider_PageSetButtons),
    9171, uint(PythonQtWrapper_QStyle::SH_Menu_KeyboardSearch),
    9194, uint(PythonQtWrapper_QStyle::SH_TabBar_ElideMode),
    9214, uint(PythonQtWrapper_QStyle::SH_DialogButtonLayout),
    9236, uint(PythonQtWrapper_QStyle::SH_ComboBox_PopupFrameStyle),
    9264, uint(PythonQtWrapper_QStyle::SH_MessageBox_TextInteractionFlags),
    9299, uint(PythonQtWrapper_QStyle::SH_DialogButtonBox_ButtonsHaveIcons),
    9335, uint(PythonQtWrapper_QStyle::SH_SpellCheckUnderlineStyle),
    9363, uint(PythonQtWrapper_QStyle::SH_MessageBox_CenterButtons),
    9391, uint(PythonQtWrapper_QStyle::SH_Menu_SelectionWrap),
    9413, uint(PythonQtWrapper_QStyle::SH_ItemView_MovementWithoutUpdatingSelection),
    9458, uint(PythonQtWrapper_QStyle::SH_ToolTip_Mask),
    9474, uint(PythonQtWrapper_QStyle::SH_FocusFrame_AboveWidget),
    9500, uint(PythonQtWrapper_QStyle::SH_TextControl_FocusIndicatorTextCharFormat),
    9544, uint(PythonQtWrapper_QStyle::SH_WizardStyle),
    9559, uint(PythonQtWrapper_QStyle::SH_ItemView_ArrowKeysNavigateIntoChildren),
    9601, uint(PythonQtWrapper_QStyle::SH_Menu_Mask),
    9614, uint(PythonQtWrapper_QStyle::SH_Menu_FlashTriggeredItem),
    9641, uint(PythonQtWrapper_QStyle::SH_Menu_FadeOutOnHide),
    9663, uint(PythonQtWrapper_QStyle::SH_SpinBox_ClickAutoRepeatThreshold),
    9699, uint(PythonQtWrapper_QStyle::SH_ItemView_PaintAlternatingRowColorsForEmptyArea),
    9749, uint(PythonQtWrapper_QStyle::SH_FormLayoutWrapPolicy),
    9773, uint(PythonQtWrapper_QStyle::SH_TabWidget_DefaultTabPosition),
    9805, uint(PythonQtWrapper_QStyle::SH_ToolBar_Movable),
    9824, uint(PythonQtWrapper_QStyle::SH_FormLayoutFieldGrowthPolicy),
    9855, uint(PythonQtWrapper_QStyle::SH_FormLayoutFormAlignment),
    9882, uint(PythonQtWrapper_QStyle::SH_FormLayoutLabelAlignment),
    9910, uint(PythonQtWrapper_QStyle::SH_ItemView_DrawDelegateFrame),
    9940, uint(PythonQtWrapper_QStyle::SH_TabBar_CloseButtonPosition),
    9970, uint(PythonQtWrapper_QStyle::SH_DockWidget_ButtonsHaveFrame),
    10001, uint(PythonQtWrapper_QStyle::SH_ToolButtonStyle),
    10020, uint(PythonQtWrapper_QStyle::SH_RequestSoftwareInputPanel),
    10049, uint(PythonQtWrapper_QStyle::SH_CustomBase),
    10063, uint(PythonQtWrapper_QStyle::PE_Q3CheckListController),
    10088, uint(PythonQtWrapper_QStyle::PE_Q3CheckListExclusiveIndicator),
    10121, uint(PythonQtWrapper_QStyle::PE_Q3CheckListIndicator),
    10145, uint(PythonQtWrapper_QStyle::PE_Q3DockWindowSeparator),
    10170, uint(PythonQtWrapper_QStyle::PE_Q3Separator),
    10185, uint(PythonQtWrapper_QStyle::PE_Frame),
    10194, uint(PythonQtWrapper_QStyle::PE_FrameDefaultButton),
    10216, uint(PythonQtWrapper_QStyle::PE_FrameDockWidget),
    10235, uint(PythonQtWrapper_QStyle::PE_FrameFocusRect),
    10253, uint(PythonQtWrapper_QStyle::PE_FrameGroupBox),
    10270, uint(PythonQtWrapper_QStyle::PE_FrameLineEdit),
    10287, uint(PythonQtWrapper_QStyle::PE_FrameMenu),
    10300, uint(PythonQtWrapper_QStyle::PE_FrameStatusBar),
    10318, uint(PythonQtWrapper_QStyle::PE_FrameStatusBarItem),
    10340, uint(PythonQtWrapper_QStyle::PE_FrameTabWidget),
    10358, uint(PythonQtWrapper_QStyle::PE_FrameWindow),
    10373, uint(PythonQtWrapper_QStyle::PE_FrameButtonBevel),
    10393, uint(PythonQtWrapper_QStyle::PE_FrameButtonTool),
    10412, uint(PythonQtWrapper_QStyle::PE_FrameTabBarBase),
    10431, uint(PythonQtWrapper_QStyle::PE_PanelButtonCommand),
    10453, uint(PythonQtWrapper_QStyle::PE_PanelButtonBevel),
    10473, uint(PythonQtWrapper_QStyle::PE_PanelButtonTool),
    10492, uint(PythonQtWrapper_QStyle::PE_PanelMenuBar),
    10508, uint(PythonQtWrapper_QStyle::PE_PanelToolBar),
    10524, uint(PythonQtWrapper_QStyle::PE_PanelLineEdit),
    10541, uint(PythonQtWrapper_QStyle::PE_IndicatorArrowDown),
    10563, uint(PythonQtWrapper_QStyle::PE_IndicatorArrowLeft),
    10585, uint(PythonQtWrapper_QStyle::PE_IndicatorArrowRight),
    10608, uint(PythonQtWrapper_QStyle::PE_IndicatorArrowUp),
    10628, uint(PythonQtWrapper_QStyle::PE_IndicatorBranch),
    10647, uint(PythonQtWrapper_QStyle::PE_IndicatorButtonDropDown),
    10674, uint(PythonQtWrapper_QStyle::PE_IndicatorViewItemCheck),
    10700, uint(PythonQtWrapper_QStyle::PE_IndicatorItemViewItemCheck),
    10730, uint(PythonQtWrapper_QStyle::PE_IndicatorCheckBox),
    10751, uint(PythonQtWrapper_QStyle::PE_IndicatorDockWidgetResizeHandle),
    10786, uint(PythonQtWrapper_QStyle::PE_IndicatorHeaderArrow),
    10810, uint(PythonQtWrapper_QStyle::PE_IndicatorMenuCheckMark),
    10836, uint(PythonQtWrapper_QStyle::PE_IndicatorProgressChunk),
    10862, uint(PythonQtWrapper_QStyle::PE_IndicatorRadioButton),
    10886, uint(PythonQtWrapper_QStyle::PE_IndicatorSpinDown),
    10907, uint(PythonQtWrapper_QStyle::PE_IndicatorSpinMinus),
    10929, uint(PythonQtWrapper_QStyle::PE_IndicatorSpinPlus),
    10950, uint(PythonQtWrapper_QStyle::PE_IndicatorSpinUp),
    10969, uint(PythonQtWrapper_QStyle::PE_IndicatorToolBarHandle),
    10995, uint(PythonQtWrapper_QStyle::PE_IndicatorToolBarSeparator),
    11024, uint(PythonQtWrapper_QStyle::PE_PanelTipLabel),
    11041, uint(PythonQtWrapper_QStyle::PE_IndicatorTabTear),
    11061, uint(PythonQtWrapper_QStyle::PE_PanelScrollAreaCorner),
    11086, uint(PythonQtWrapper_QStyle::PE_Widget),
    11096, uint(PythonQtWrapper_QStyle::PE_IndicatorColumnViewArrow),
    11124, uint(PythonQtWrapper_QStyle::PE_IndicatorItemViewItemDrop),
    11153, uint(PythonQtWrapper_QStyle::PE_PanelItemViewItem),
    11174, uint(PythonQtWrapper_QStyle::PE_PanelItemViewRow),
    11194, uint(PythonQtWrapper_QStyle::PE_PanelStatusBar),
    11212, uint(PythonQtWrapper_QStyle::PE_IndicatorTabClose),
    11233, uint(PythonQtWrapper_QStyle::PE_PanelMenu),
    11246, uint(PythonQtWrapper_QStyle::PE_CustomBase),
    11260, uint(PythonQtWrapper_QStyle::CE_PushButton),
    11274, uint(PythonQtWrapper_QStyle::CE_PushButtonBevel),
    11293, uint(PythonQtWrapper_QStyle::CE_PushButtonLabel),
    11312, uint(PythonQtWrapper_QStyle::CE_CheckBox),
    11324, uint(PythonQtWrapper_QStyle::CE_CheckBoxLabel),
    11341, uint(PythonQtWrapper_QStyle::CE_RadioButton),
    11356, uint(PythonQtWrapper_QStyle::CE_RadioButtonLabel),
    11376, uint(PythonQtWrapper_QStyle::CE_TabBarTab),
    11389, uint(PythonQtWrapper_QStyle::CE_TabBarTabShape),
    11407, uint(PythonQtWrapper_QStyle::CE_TabBarTabLabel),
    11425, uint(PythonQtWrapper_QStyle::CE_ProgressBar),
    11440, uint(PythonQtWrapper_QStyle::CE_ProgressBarGroove),
    11461, uint(PythonQtWrapper_QStyle::CE_ProgressBarContents),
    11484, uint(PythonQtWrapper_QStyle::CE_ProgressBarLabel),
    11504, uint(PythonQtWrapper_QStyle::CE_MenuItem),
    11516, uint(PythonQtWrapper_QStyle::CE_MenuScroller),
    11532, uint(PythonQtWrapper_QStyle::CE_MenuVMargin),
    11547, uint(PythonQtWrapper_QStyle::CE_MenuHMargin),
    11562, uint(PythonQtWrapper_QStyle::CE_MenuTearoff),
    11577, uint(PythonQtWrapper_QStyle::CE_MenuEmptyArea),
    11594, uint(PythonQtWrapper_QStyle::CE_MenuBarItem),
    11609, uint(PythonQtWrapper_QStyle::CE_MenuBarEmptyArea),
    11629, uint(PythonQtWrapper_QStyle::CE_ToolButtonLabel),
    11648, uint(PythonQtWrapper_QStyle::CE_Header),
    11658, uint(PythonQtWrapper_QStyle::CE_HeaderSection),
    11675, uint(PythonQtWrapper_QStyle::CE_HeaderLabel),
    11690, uint(PythonQtWrapper_QStyle::CE_Q3DockWindowEmptyArea),
    11715, uint(PythonQtWrapper_QStyle::CE_ToolBoxTab),
    11729, uint(PythonQtWrapper_QStyle::CE_SizeGrip),
    11741, uint(PythonQtWrapper_QStyle::CE_Splitter),
    11753, uint(PythonQtWrapper_QStyle::CE_RubberBand),
    11767, uint(PythonQtWrapper_QStyle::CE_DockWidgetTitle),
    11786, uint(PythonQtWrapper_QStyle::CE_ScrollBarAddLine),
    11806, uint(PythonQtWrapper_QStyle::CE_ScrollBarSubLine),
    11826, uint(PythonQtWrapper_QStyle::CE_ScrollBarAddPage),
    11846, uint(PythonQtWrapper_QStyle::CE_ScrollBarSubPage),
    11866, uint(PythonQtWrapper_QStyle::CE_ScrollBarSlider),
    11885, uint(PythonQtWrapper_QStyle::CE_ScrollBarFirst),
    11903, uint(PythonQtWrapper_QStyle::CE_ScrollBarLast),
    11920, uint(PythonQtWrapper_QStyle::CE_FocusFrame),
    11934, uint(PythonQtWrapper_QStyle::CE_ComboBoxLabel),
    11951, uint(PythonQtWrapper_QStyle::CE_ToolBar),
    11962, uint(PythonQtWrapper_QStyle::CE_ToolBoxTabShape),
    11981, uint(PythonQtWrapper_QStyle::CE_ToolBoxTabLabel),
    12000, uint(PythonQtWrapper_QStyle::CE_HeaderEmptyArea),
    12019, uint(PythonQtWrapper_QStyle::CE_ColumnViewGrip),
    12037, uint(PythonQtWrapper_QStyle::CE_ItemViewItem),
    12053, uint(PythonQtWrapper_QStyle::CE_ShapedFrame),
    12068, uint(PythonQtWrapper_QStyle::CE_CustomBase),
    12082, uint(PythonQtWrapper_QStyle::CT_PushButton),
    12096, uint(PythonQtWrapper_QStyle::CT_CheckBox),
    12108, uint(PythonQtWrapper_QStyle::CT_RadioButton),
    12123, uint(PythonQtWrapper_QStyle::CT_ToolButton),
    12137, uint(PythonQtWrapper_QStyle::CT_ComboBox),
    12149, uint(PythonQtWrapper_QStyle::CT_Splitter),
    12161, uint(PythonQtWrapper_QStyle::CT_Q3DockWindow),
    12177, uint(PythonQtWrapper_QStyle::CT_ProgressBar),
    12192, uint(PythonQtWrapper_QStyle::CT_MenuItem),
    12204, uint(PythonQtWrapper_QStyle::CT_MenuBarItem),
    12219, uint(PythonQtWrapper_QStyle::CT_MenuBar),
    12230, uint(PythonQtWrapper_QStyle::CT_Menu),
    12238, uint(PythonQtWrapper_QStyle::CT_TabBarTab),
    12251, uint(PythonQtWrapper_QStyle::CT_Slider),
    12261, uint(PythonQtWrapper_QStyle::CT_ScrollBar),
    12274, uint(PythonQtWrapper_QStyle::CT_Q3Header),
    12286, uint(PythonQtWrapper_QStyle::CT_LineEdit),
    12298, uint(PythonQtWrapper_QStyle::CT_SpinBox),
    12309, uint(PythonQtWrapper_QStyle::CT_SizeGrip),
    12321, uint(PythonQtWrapper_QStyle::CT_TabWidget),
    12334, uint(PythonQtWrapper_QStyle::CT_DialogButtons),
    12351, uint(PythonQtWrapper_QStyle::CT_HeaderSection),
    12368, uint(PythonQtWrapper_QStyle::CT_GroupBox),
    12380, uint(PythonQtWrapper_QStyle::CT_MdiControls),
    12395, uint(PythonQtWrapper_QStyle::CT_ItemViewItem),
    12411, uint(PythonQtWrapper_QStyle::CT_CustomBase),
    12425, uint(PythonQtWrapper_QStyle::State_None),
    12436, uint(PythonQtWrapper_QStyle::State_Enabled),
    12450, uint(PythonQtWrapper_QStyle::State_Raised),
    12463, uint(PythonQtWrapper_QStyle::State_Sunken),
    12476, uint(PythonQtWrapper_QStyle::State_Off),
    12486, uint(PythonQtWrapper_QStyle::State_NoChange),
    12501, uint(PythonQtWrapper_QStyle::State_On),
    12510, uint(PythonQtWrapper_QStyle::State_DownArrow),
    12526, uint(PythonQtWrapper_QStyle::State_Horizontal),
    12543, uint(PythonQtWrapper_QStyle::State_HasFocus),
    12558, uint(PythonQtWrapper_QStyle::State_Top),
    12568, uint(PythonQtWrapper_QStyle::State_Bottom),
    12581, uint(PythonQtWrapper_QStyle::State_FocusAtBorder),
    12601, uint(PythonQtWrapper_QStyle::State_AutoRaise),
    12617, uint(PythonQtWrapper_QStyle::State_MouseOver),
    12633, uint(PythonQtWrapper_QStyle::State_UpArrow),
    12647, uint(PythonQtWrapper_QStyle::State_Selected),
    12662, uint(PythonQtWrapper_QStyle::State_Active),
    12675, uint(PythonQtWrapper_QStyle::State_Window),
    12688, uint(PythonQtWrapper_QStyle::State_Open),
    12699, uint(PythonQtWrapper_QStyle::State_Children),
    12714, uint(PythonQtWrapper_QStyle::State_Item),
    12725, uint(PythonQtWrapper_QStyle::State_Sibling),
    12739, uint(PythonQtWrapper_QStyle::State_Editing),
    12753, uint(PythonQtWrapper_QStyle::State_KeyboardFocusChange),
    12779, uint(PythonQtWrapper_QStyle::State_ReadOnly),
    12794, uint(PythonQtWrapper_QStyle::State_Small),
    12806, uint(PythonQtWrapper_QStyle::State_Mini),
    12425, uint(PythonQtWrapper_QStyle::State_None),
    12436, uint(PythonQtWrapper_QStyle::State_Enabled),
    12450, uint(PythonQtWrapper_QStyle::State_Raised),
    12463, uint(PythonQtWrapper_QStyle::State_Sunken),
    12476, uint(PythonQtWrapper_QStyle::State_Off),
    12486, uint(PythonQtWrapper_QStyle::State_NoChange),
    12501, uint(PythonQtWrapper_QStyle::State_On),
    12510, uint(PythonQtWrapper_QStyle::State_DownArrow),
    12526, uint(PythonQtWrapper_QStyle::State_Horizontal),
    12543, uint(PythonQtWrapper_QStyle::State_HasFocus),
    12558, uint(PythonQtWrapper_QStyle::State_Top),
    12568, uint(PythonQtWrapper_QStyle::State_Bottom),
    12581, uint(PythonQtWrapper_QStyle::State_FocusAtBorder),
    12601, uint(PythonQtWrapper_QStyle::State_AutoRaise),
    12617, uint(PythonQtWrapper_QStyle::State_MouseOver),
    12633, uint(PythonQtWrapper_QStyle::State_UpArrow),
    12647, uint(PythonQtWrapper_QStyle::State_Selected),
    12662, uint(PythonQtWrapper_QStyle::State_Active),
    12675, uint(PythonQtWrapper_QStyle::State_Window),
    12688, uint(PythonQtWrapper_QStyle::State_Open),
    12699, uint(PythonQtWrapper_QStyle::State_Children),
    12714, uint(PythonQtWrapper_QStyle::State_Item),
    12725, uint(PythonQtWrapper_QStyle::State_Sibling),
    12739, uint(PythonQtWrapper_QStyle::State_Editing),
    12753, uint(PythonQtWrapper_QStyle::State_KeyboardFocusChange),
    12779, uint(PythonQtWrapper_QStyle::State_ReadOnly),
    12794, uint(PythonQtWrapper_QStyle::State_Small),
    12806, uint(PythonQtWrapper_QStyle::State_Mini),
    12817, uint(PythonQtWrapper_QStyle::CC_SpinBox),
    12828, uint(PythonQtWrapper_QStyle::CC_ComboBox),
    12840, uint(PythonQtWrapper_QStyle::CC_ScrollBar),
    12853, uint(PythonQtWrapper_QStyle::CC_Slider),
    12863, uint(PythonQtWrapper_QStyle::CC_ToolButton),
    12877, uint(PythonQtWrapper_QStyle::CC_TitleBar),
    12889, uint(PythonQtWrapper_QStyle::CC_Q3ListView),
    12903, uint(PythonQtWrapper_QStyle::CC_Dial),
    12911, uint(PythonQtWrapper_QStyle::CC_GroupBox),
    12923, uint(PythonQtWrapper_QStyle::CC_MdiControls),
    12938, uint(PythonQtWrapper_QStyle::CC_CustomBase),
    12952, uint(PythonQtWrapper_QStyle::RSIP_OnMouseClickAndAlreadyFocused),
    12987, uint(PythonQtWrapper_QStyle::RSIP_OnMouseClick),
    13005, uint(PythonQtWrapper_QStyle::SE_PushButtonContents),
    13027, uint(PythonQtWrapper_QStyle::SE_PushButtonFocusRect),
    13050, uint(PythonQtWrapper_QStyle::SE_CheckBoxIndicator),
    13071, uint(PythonQtWrapper_QStyle::SE_CheckBoxContents),
    13091, uint(PythonQtWrapper_QStyle::SE_CheckBoxFocusRect),
    13112, uint(PythonQtWrapper_QStyle::SE_CheckBoxClickRect),
    13133, uint(PythonQtWrapper_QStyle::SE_RadioButtonIndicator),
    13157, uint(PythonQtWrapper_QStyle::SE_RadioButtonContents),
    13180, uint(PythonQtWrapper_QStyle::SE_RadioButtonFocusRect),
    13204, uint(PythonQtWrapper_QStyle::SE_RadioButtonClickRect),
    13228, uint(PythonQtWrapper_QStyle::SE_ComboBoxFocusRect),
    13249, uint(PythonQtWrapper_QStyle::SE_SliderFocusRect),
    13268, uint(PythonQtWrapper_QStyle::SE_Q3DockWindowHandleRect),
    13294, uint(PythonQtWrapper_QStyle::SE_ProgressBarGroove),
    13315, uint(PythonQtWrapper_QStyle::SE_ProgressBarContents),
    13338, uint(PythonQtWrapper_QStyle::SE_ProgressBarLabel),
    13358, uint(PythonQtWrapper_QStyle::SE_DialogButtonAccept),
    13380, uint(PythonQtWrapper_QStyle::SE_DialogButtonReject),
    13402, uint(PythonQtWrapper_QStyle::SE_DialogButtonApply),
    13423, uint(PythonQtWrapper_QStyle::SE_DialogButtonHelp),
    13443, uint(PythonQtWrapper_QStyle::SE_DialogButtonAll),
    13462, uint(PythonQtWrapper_QStyle::SE_DialogButtonAbort),
    13483, uint(PythonQtWrapper_QStyle::SE_DialogButtonIgnore),
    13505, uint(PythonQtWrapper_QStyle::SE_DialogButtonRetry),
    13526, uint(PythonQtWrapper_QStyle::SE_DialogButtonCustom),
    13548, uint(PythonQtWrapper_QStyle::SE_ToolBoxTabContents),
    13570, uint(PythonQtWrapper_QStyle::SE_HeaderLabel),
    13585, uint(PythonQtWrapper_QStyle::SE_HeaderArrow),
    13600, uint(PythonQtWrapper_QStyle::SE_TabWidgetTabBar),
    13619, uint(PythonQtWrapper_QStyle::SE_TabWidgetTabPane),
    13639, uint(PythonQtWrapper_QStyle::SE_TabWidgetTabContents),
    13663, uint(PythonQtWrapper_QStyle::SE_TabWidgetLeftCorner),
    13686, uint(PythonQtWrapper_QStyle::SE_TabWidgetRightCorner),
    13710, uint(PythonQtWrapper_QStyle::SE_ViewItemCheckIndicator),
    13736, uint(PythonQtWrapper_QStyle::SE_ItemViewItemCheckIndicator),
    13766, uint(PythonQtWrapper_QStyle::SE_TabBarTearIndicator),
    13789, uint(PythonQtWrapper_QStyle::SE_TreeViewDisclosureItem),
    13815, uint(PythonQtWrapper_QStyle::SE_LineEditContents),
    13835, uint(PythonQtWrapper_QStyle::SE_FrameContents),
    13852, uint(PythonQtWrapper_QStyle::SE_DockWidgetCloseButton),
    13877, uint(PythonQtWrapper_QStyle::SE_DockWidgetFloatButton),
    13902, uint(PythonQtWrapper_QStyle::SE_DockWidgetTitleBarText),
    13928, uint(PythonQtWrapper_QStyle::SE_DockWidgetIcon),
    13946, uint(PythonQtWrapper_QStyle::SE_CheckBoxLayoutItem),
    13968, uint(PythonQtWrapper_QStyle::SE_ComboBoxLayoutItem),
    13990, uint(PythonQtWrapper_QStyle::SE_DateTimeEditLayoutItem),
    14016, uint(PythonQtWrapper_QStyle::SE_DialogButtonBoxLayoutItem),
    14045, uint(PythonQtWrapper_QStyle::SE_LabelLayoutItem),
    14064, uint(PythonQtWrapper_QStyle::SE_ProgressBarLayoutItem),
    14089, uint(PythonQtWrapper_QStyle::SE_PushButtonLayoutItem),
    14113, uint(PythonQtWrapper_QStyle::SE_RadioButtonLayoutItem),
    14138, uint(PythonQtWrapper_QStyle::SE_SliderLayoutItem),
    14158, uint(PythonQtWrapper_QStyle::SE_SpinBoxLayoutItem),
    14179, uint(PythonQtWrapper_QStyle::SE_ToolButtonLayoutItem),
    14203, uint(PythonQtWrapper_QStyle::SE_FrameLayoutItem),
    14222, uint(PythonQtWrapper_QStyle::SE_GroupBoxLayoutItem),
    14244, uint(PythonQtWrapper_QStyle::SE_TabWidgetLayoutItem),
    14267, uint(PythonQtWrapper_QStyle::SE_ItemViewItemDecoration),
    14293, uint(PythonQtWrapper_QStyle::SE_ItemViewItemText),
    14313, uint(PythonQtWrapper_QStyle::SE_ItemViewItemFocusRect),
    14338, uint(PythonQtWrapper_QStyle::SE_TabBarTabLeftButton),
    14361, uint(PythonQtWrapper_QStyle::SE_TabBarTabRightButton),
    14385, uint(PythonQtWrapper_QStyle::SE_TabBarTabText),
    14402, uint(PythonQtWrapper_QStyle::SE_ShapedFrameContents),
    14425, uint(PythonQtWrapper_QStyle::SE_ToolBarHandle),
    14442, uint(PythonQtWrapper_QStyle::SE_CustomBase),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyle[] = {
    "PythonQtWrapper_QStyle\0\0QStyle*\0"
    "new_QStyle()\0obj\0delete_QStyle(QStyle*)\0"
    "QRect\0direction,alignment,size,rectangle\0"
    "static_QStyle_alignedRect(Qt::LayoutDirection,Qt::Alignment,QSize,QRec"
    "t)\0"
    "int\0theWrappedObject,controls1,controls2,orientation,option,widget\0"
    "combinedLayoutSpacing(QStyle*,QSizePolicy::ControlTypes,QSizePolicy::C"
    "ontrolTypes,Qt::Orientation,QStyleOption*,QWidget*)\0"
    "theWrappedObject,controls1,controls2,orientation,option\0"
    "combinedLayoutSpacing(QStyle*,QSizePolicy::ControlTypes,QSizePolicy::C"
    "ontrolTypes,Qt::Orientation,QStyleOption*)\0"
    "theWrappedObject,controls1,controls2,orientation\0"
    "combinedLayoutSpacing(QStyle*,QSizePolicy::ControlTypes,QSizePolicy::C"
    "ontrolTypes,Qt::Orientation)\0"
    "theWrappedObject,painter,rect,alignment,pixmap\0"
    "drawItemPixmap(QStyle*,QPainter*,QRect,int,QPixmap)\0"
    "theWrappedObject,painter,rect,flags,pal,enabled,text,textRole\0"
    "drawItemText(QStyle*,QPainter*,QRect,int,QPalette,bool,QString,QPalett"
    "e::ColorRole)\0"
    "theWrappedObject,painter,rect,flags,pal,enabled,text\0"
    "drawItemText(QStyle*,QPainter*,QRect,int,QPalette,bool,QString)\0"
    "theWrappedObject,r,flags,pixmap\0"
    "itemPixmapRect(QStyle*,QRect,int,QPixmap)\0"
    "theWrappedObject,control1,control2,orientation,option,widget\0"
    "layoutSpacing(QStyle*,QSizePolicy::ControlType,QSizePolicy::ControlTyp"
    "e,Qt::Orientation,const QStyleOption*,const QWidget*)\0"
    "theWrappedObject,control1,control2,orientation,option\0"
    "layoutSpacing(QStyle*,QSizePolicy::ControlType,QSizePolicy::ControlTyp"
    "e,Qt::Orientation,const QStyleOption*)\0"
    "theWrappedObject,control1,control2,orientation\0"
    "layoutSpacing(QStyle*,QSizePolicy::ControlType,QSizePolicy::ControlTyp"
    "e,Qt::Orientation)\0"
    "theWrappedObject,arg__1\0"
    "polish(QStyle*,QApplication*)\0"
    "polish(QStyle*,QPalette&)\0"
    "polish(QStyle*,QWidget*)\0const QStyle*\0"
    "theWrappedObject\0proxy(QStyle*)\0"
    "min,max,val,space,upsideDown\0"
    "static_QStyle_sliderPositionFromValue(int,int,int,int,bool)\0"
    "min,max,val,space\0"
    "static_QStyle_sliderPositionFromValue(int,int,int,int)\0"
    "min,max,pos,space,upsideDown\0"
    "static_QStyle_sliderValueFromPosition(int,int,int,int,bool)\0"
    "min,max,pos,space\0"
    "static_QStyle_sliderValueFromPosition(int,int,int,int)\0"
    "QIcon\0theWrappedObject,standardIcon,option,widget\0"
    "standardIcon(QStyle*,QStyle::StandardPixmap,const QStyleOption*,const "
    "QWidget*)\0"
    "theWrappedObject,standardIcon,option\0"
    "standardIcon(QStyle*,QStyle::StandardPixmap,const QStyleOption*)\0"
    "theWrappedObject,standardIcon\0"
    "standardIcon(QStyle*,QStyle::StandardPixmap)\0"
    "QPalette\0standardPalette(QStyle*)\0"
    "unpolish(QStyle*,QApplication*)\0"
    "unpolish(QStyle*,QWidget*)\0Qt::Alignment\0"
    "direction,alignment\0"
    "static_QStyle_visualAlignment(Qt::LayoutDirection,Qt::Alignment)\0"
    "QPoint\0direction,boundingRect,logicalPos\0"
    "static_QStyle_visualPos(Qt::LayoutDirection,QRect,QPoint)\0"
    "direction,boundingRect,logicalRect\0"
    "static_QStyle_visualRect(Qt::LayoutDirection,QRect,QRect)\0"
    "PixelMetric\0SubControl\0SubControls\0"
    "StandardPixmap\0StyleHint\0PrimitiveElement\0"
    "ControlElement\0ContentsType\0StateFlag\0"
    "State\0ComplexControl\0RequestSoftwareInputPanel\0"
    "SubElement\0PM_ButtonMargin\0"
    "PM_ButtonDefaultIndicator\0"
    "PM_MenuButtonIndicator\0PM_ButtonShiftHorizontal\0"
    "PM_ButtonShiftVertical\0PM_DefaultFrameWidth\0"
    "PM_SpinBoxFrameWidth\0PM_ComboBoxFrameWidth\0"
    "PM_MaximumDragDistance\0PM_ScrollBarExtent\0"
    "PM_ScrollBarSliderMin\0PM_SliderThickness\0"
    "PM_SliderControlThickness\0PM_SliderLength\0"
    "PM_SliderTickmarkOffset\0PM_SliderSpaceAvailable\0"
    "PM_DockWidgetSeparatorExtent\0"
    "PM_DockWidgetHandleExtent\0"
    "PM_DockWidgetFrameWidth\0PM_TabBarTabOverlap\0"
    "PM_TabBarTabHSpace\0PM_TabBarTabVSpace\0"
    "PM_TabBarBaseHeight\0PM_TabBarBaseOverlap\0"
    "PM_ProgressBarChunkWidth\0PM_SplitterWidth\0"
    "PM_TitleBarHeight\0PM_MenuScrollerHeight\0"
    "PM_MenuHMargin\0PM_MenuVMargin\0"
    "PM_MenuPanelWidth\0PM_MenuTearoffHeight\0"
    "PM_MenuDesktopFrameWidth\0PM_MenuBarPanelWidth\0"
    "PM_MenuBarItemSpacing\0PM_MenuBarVMargin\0"
    "PM_MenuBarHMargin\0PM_IndicatorWidth\0"
    "PM_IndicatorHeight\0PM_ExclusiveIndicatorWidth\0"
    "PM_ExclusiveIndicatorHeight\0"
    "PM_CheckListButtonSize\0"
    "PM_CheckListControllerSize\0"
    "PM_DialogButtonsSeparator\0"
    "PM_DialogButtonsButtonWidth\0"
    "PM_DialogButtonsButtonHeight\0"
    "PM_MdiSubWindowFrameWidth\0PM_MDIFrameWidth\0"
    "PM_MdiSubWindowMinimizedWidth\0"
    "PM_MDIMinimizedWidth\0PM_HeaderMargin\0"
    "PM_HeaderMarkSize\0PM_HeaderGripMargin\0"
    "PM_TabBarTabShiftHorizontal\0"
    "PM_TabBarTabShiftVertical\0"
    "PM_TabBarScrollButtonWidth\0"
    "PM_ToolBarFrameWidth\0PM_ToolBarHandleExtent\0"
    "PM_ToolBarItemSpacing\0PM_ToolBarItemMargin\0"
    "PM_ToolBarSeparatorExtent\0"
    "PM_ToolBarExtensionExtent\0"
    "PM_SpinBoxSliderHeight\0PM_DefaultTopLevelMargin\0"
    "PM_DefaultChildMargin\0PM_DefaultLayoutSpacing\0"
    "PM_ToolBarIconSize\0PM_ListViewIconSize\0"
    "PM_IconViewIconSize\0PM_SmallIconSize\0"
    "PM_LargeIconSize\0PM_FocusFrameVMargin\0"
    "PM_FocusFrameHMargin\0PM_ToolTipLabelFrameWidth\0"
    "PM_CheckBoxLabelSpacing\0PM_TabBarIconSize\0"
    "PM_SizeGripSize\0PM_DockWidgetTitleMargin\0"
    "PM_MessageBoxIconSize\0PM_ButtonIconSize\0"
    "PM_DockWidgetTitleBarButtonMargin\0"
    "PM_RadioButtonLabelSpacing\0"
    "PM_LayoutLeftMargin\0PM_LayoutTopMargin\0"
    "PM_LayoutRightMargin\0PM_LayoutBottomMargin\0"
    "PM_LayoutHorizontalSpacing\0"
    "PM_LayoutVerticalSpacing\0"
    "PM_TabBar_ScrollButtonOverlap\0"
    "PM_TextCursorWidth\0PM_TabCloseIndicatorWidth\0"
    "PM_TabCloseIndicatorHeight\0"
    "PM_ScrollView_ScrollBarSpacing\0"
    "PM_SubMenuOverlap\0PM_CustomBase\0SC_None\0"
    "SC_ScrollBarAddLine\0SC_ScrollBarSubLine\0"
    "SC_ScrollBarAddPage\0SC_ScrollBarSubPage\0"
    "SC_ScrollBarFirst\0SC_ScrollBarLast\0"
    "SC_ScrollBarSlider\0SC_ScrollBarGroove\0"
    "SC_SpinBoxUp\0SC_SpinBoxDown\0SC_SpinBoxFrame\0"
    "SC_SpinBoxEditField\0SC_ComboBoxFrame\0"
    "SC_ComboBoxEditField\0SC_ComboBoxArrow\0"
    "SC_ComboBoxListBoxPopup\0SC_SliderGroove\0"
    "SC_SliderHandle\0SC_SliderTickmarks\0"
    "SC_ToolButton\0SC_ToolButtonMenu\0"
    "SC_TitleBarSysMenu\0SC_TitleBarMinButton\0"
    "SC_TitleBarMaxButton\0SC_TitleBarCloseButton\0"
    "SC_TitleBarNormalButton\0SC_TitleBarShadeButton\0"
    "SC_TitleBarUnshadeButton\0"
    "SC_TitleBarContextHelpButton\0"
    "SC_TitleBarLabel\0SC_Q3ListView\0"
    "SC_Q3ListViewBranch\0SC_Q3ListViewExpand\0"
    "SC_DialGroove\0SC_DialHandle\0"
    "SC_DialTickmarks\0SC_GroupBoxCheckBox\0"
    "SC_GroupBoxLabel\0SC_GroupBoxContents\0"
    "SC_GroupBoxFrame\0SC_MdiMinButton\0"
    "SC_MdiNormalButton\0SC_MdiCloseButton\0"
    "SC_CustomBase\0SC_All\0SP_TitleBarMenuButton\0"
    "SP_TitleBarMinButton\0SP_TitleBarMaxButton\0"
    "SP_TitleBarCloseButton\0SP_TitleBarNormalButton\0"
    "SP_TitleBarShadeButton\0SP_TitleBarUnshadeButton\0"
    "SP_TitleBarContextHelpButton\0"
    "SP_DockWidgetCloseButton\0"
    "SP_MessageBoxInformation\0SP_MessageBoxWarning\0"
    "SP_MessageBoxCritical\0SP_MessageBoxQuestion\0"
    "SP_DesktopIcon\0SP_TrashIcon\0SP_ComputerIcon\0"
    "SP_DriveFDIcon\0SP_DriveHDIcon\0"
    "SP_DriveCDIcon\0SP_DriveDVDIcon\0"
    "SP_DriveNetIcon\0SP_DirOpenIcon\0"
    "SP_DirClosedIcon\0SP_DirLinkIcon\0"
    "SP_FileIcon\0SP_FileLinkIcon\0"
    "SP_ToolBarHorizontalExtensionButton\0"
    "SP_ToolBarVerticalExtensionButton\0"
    "SP_FileDialogStart\0SP_FileDialogEnd\0"
    "SP_FileDialogToParent\0SP_FileDialogNewFolder\0"
    "SP_FileDialogDetailedView\0"
    "SP_FileDialogInfoView\0SP_FileDialogContentsView\0"
    "SP_FileDialogListView\0SP_FileDialogBack\0"
    "SP_DirIcon\0SP_DialogOkButton\0"
    "SP_DialogCancelButton\0SP_DialogHelpButton\0"
    "SP_DialogOpenButton\0SP_DialogSaveButton\0"
    "SP_DialogCloseButton\0SP_DialogApplyButton\0"
    "SP_DialogResetButton\0SP_DialogDiscardButton\0"
    "SP_DialogYesButton\0SP_DialogNoButton\0"
    "SP_ArrowUp\0SP_ArrowDown\0SP_ArrowLeft\0"
    "SP_ArrowRight\0SP_ArrowBack\0SP_ArrowForward\0"
    "SP_DirHomeIcon\0SP_CommandLink\0"
    "SP_VistaShield\0SP_BrowserReload\0"
    "SP_BrowserStop\0SP_MediaPlay\0SP_MediaStop\0"
    "SP_MediaPause\0SP_MediaSkipForward\0"
    "SP_MediaSkipBackward\0SP_MediaSeekForward\0"
    "SP_MediaSeekBackward\0SP_MediaVolume\0"
    "SP_MediaVolumeMuted\0SP_CustomBase\0"
    "SH_EtchDisabledText\0SH_DitherDisabledText\0"
    "SH_ScrollBar_MiddleClickAbsolutePosition\0"
    "SH_ScrollBar_ScrollWhenPointerLeavesControl\0"
    "SH_TabBar_SelectMouseType\0SH_TabBar_Alignment\0"
    "SH_Header_ArrowAlignment\0SH_Slider_SnapToValue\0"
    "SH_Slider_SloppyKeyEvents\0"
    "SH_ProgressDialog_CenterCancelButton\0"
    "SH_ProgressDialog_TextLabelAlignment\0"
    "SH_PrintDialog_RightAlignButtons\0"
    "SH_MainWindow_SpaceBelowMenuBar\0"
    "SH_FontDialog_SelectAssociatedText\0"
    "SH_Menu_AllowActiveAndDisabled\0"
    "SH_Menu_SpaceActivatesItem\0"
    "SH_Menu_SubMenuPopupDelay\0"
    "SH_ScrollView_FrameOnlyAroundContents\0"
    "SH_MenuBar_AltKeyNavigation\0"
    "SH_ComboBox_ListMouseTracking\0"
    "SH_Menu_MouseTracking\0SH_MenuBar_MouseTracking\0"
    "SH_ItemView_ChangeHighlightOnFocus\0"
    "SH_Widget_ShareActivation\0"
    "SH_Workspace_FillSpaceOnMaximize\0"
    "SH_ComboBox_Popup\0SH_TitleBar_NoBorder\0"
    "SH_Slider_StopMouseOverSlider\0"
    "SH_ScrollBar_StopMouseOverSlider\0"
    "SH_BlinkCursorWhenTextSelected\0"
    "SH_RichText_FullWidthSelection\0"
    "SH_Menu_Scrollable\0"
    "SH_GroupBox_TextLabelVerticalAlignment\0"
    "SH_GroupBox_TextLabelColor\0"
    "SH_Menu_SloppySubMenus\0SH_Table_GridLineColor\0"
    "SH_LineEdit_PasswordCharacter\0"
    "SH_DialogButtons_DefaultButton\0"
    "SH_ToolBox_SelectedPageTitleBold\0"
    "SH_TabBar_PreferNoArrows\0"
    "SH_ScrollBar_LeftClickAbsolutePosition\0"
    "SH_Q3ListViewExpand_SelectMouseType\0"
    "SH_UnderlineShortcut\0SH_SpinBox_AnimateButton\0"
    "SH_SpinBox_KeyPressAutoRepeatRate\0"
    "SH_SpinBox_ClickAutoRepeatRate\0"
    "SH_Menu_FillScreenWithScroll\0"
    "SH_ToolTipLabel_Opacity\0SH_DrawMenuBarSeparator\0"
    "SH_TitleBar_ModifyNotification\0"
    "SH_Button_FocusPolicy\0"
    "SH_MenuBar_DismissOnSecondClick\0"
    "SH_MessageBox_UseBorderForButtonSpacing\0"
    "SH_TitleBar_AutoRaise\0SH_ToolButton_PopupDelay\0"
    "SH_FocusFrame_Mask\0SH_RubberBand_Mask\0"
    "SH_WindowFrame_Mask\0SH_SpinControls_DisableOnBounds\0"
    "SH_Dial_BackgroundRole\0"
    "SH_ComboBox_LayoutDirection\0"
    "SH_ItemView_EllipsisLocation\0"
    "SH_ItemView_ShowDecorationSelected\0"
    "SH_ItemView_ActivateItemOnSingleClick\0"
    "SH_ScrollBar_ContextMenu\0"
    "SH_ScrollBar_RollBetweenButtons\0"
    "SH_Slider_AbsoluteSetButtons\0"
    "SH_Slider_PageSetButtons\0"
    "SH_Menu_KeyboardSearch\0SH_TabBar_ElideMode\0"
    "SH_DialogButtonLayout\0SH_ComboBox_PopupFrameStyle\0"
    "SH_MessageBox_TextInteractionFlags\0"
    "SH_DialogButtonBox_ButtonsHaveIcons\0"
    "SH_SpellCheckUnderlineStyle\0"
    "SH_MessageBox_CenterButtons\0"
    "SH_Menu_SelectionWrap\0"
    "SH_ItemView_MovementWithoutUpdatingSelection\0"
    "SH_ToolTip_Mask\0SH_FocusFrame_AboveWidget\0"
    "SH_TextControl_FocusIndicatorTextCharFormat\0"
    "SH_WizardStyle\0SH_ItemView_ArrowKeysNavigateIntoChildren\0"
    "SH_Menu_Mask\0SH_Menu_FlashTriggeredItem\0"
    "SH_Menu_FadeOutOnHide\0"
    "SH_SpinBox_ClickAutoRepeatThreshold\0"
    "SH_ItemView_PaintAlternatingRowColorsForEmptyArea\0"
    "SH_FormLayoutWrapPolicy\0"
    "SH_TabWidget_DefaultTabPosition\0"
    "SH_ToolBar_Movable\0SH_FormLayoutFieldGrowthPolicy\0"
    "SH_FormLayoutFormAlignment\0"
    "SH_FormLayoutLabelAlignment\0"
    "SH_ItemView_DrawDelegateFrame\0"
    "SH_TabBar_CloseButtonPosition\0"
    "SH_DockWidget_ButtonsHaveFrame\0"
    "SH_ToolButtonStyle\0SH_RequestSoftwareInputPanel\0"
    "SH_CustomBase\0PE_Q3CheckListController\0"
    "PE_Q3CheckListExclusiveIndicator\0"
    "PE_Q3CheckListIndicator\0"
    "PE_Q3DockWindowSeparator\0PE_Q3Separator\0"
    "PE_Frame\0PE_FrameDefaultButton\0"
    "PE_FrameDockWidget\0PE_FrameFocusRect\0"
    "PE_FrameGroupBox\0PE_FrameLineEdit\0"
    "PE_FrameMenu\0PE_FrameStatusBar\0"
    "PE_FrameStatusBarItem\0PE_FrameTabWidget\0"
    "PE_FrameWindow\0PE_FrameButtonBevel\0"
    "PE_FrameButtonTool\0PE_FrameTabBarBase\0"
    "PE_PanelButtonCommand\0PE_PanelButtonBevel\0"
    "PE_PanelButtonTool\0PE_PanelMenuBar\0"
    "PE_PanelToolBar\0PE_PanelLineEdit\0"
    "PE_IndicatorArrowDown\0PE_IndicatorArrowLeft\0"
    "PE_IndicatorArrowRight\0PE_IndicatorArrowUp\0"
    "PE_IndicatorBranch\0PE_IndicatorButtonDropDown\0"
    "PE_IndicatorViewItemCheck\0"
    "PE_IndicatorItemViewItemCheck\0"
    "PE_IndicatorCheckBox\0"
    "PE_IndicatorDockWidgetResizeHandle\0"
    "PE_IndicatorHeaderArrow\0"
    "PE_IndicatorMenuCheckMark\0"
    "PE_IndicatorProgressChunk\0"
    "PE_IndicatorRadioButton\0PE_IndicatorSpinDown\0"
    "PE_IndicatorSpinMinus\0PE_IndicatorSpinPlus\0"
    "PE_IndicatorSpinUp\0PE_IndicatorToolBarHandle\0"
    "PE_IndicatorToolBarSeparator\0"
    "PE_PanelTipLabel\0PE_IndicatorTabTear\0"
    "PE_PanelScrollAreaCorner\0PE_Widget\0"
    "PE_IndicatorColumnViewArrow\0"
    "PE_IndicatorItemViewItemDrop\0"
    "PE_PanelItemViewItem\0PE_PanelItemViewRow\0"
    "PE_PanelStatusBar\0PE_IndicatorTabClose\0"
    "PE_PanelMenu\0PE_CustomBase\0CE_PushButton\0"
    "CE_PushButtonBevel\0CE_PushButtonLabel\0"
    "CE_CheckBox\0CE_CheckBoxLabel\0"
    "CE_RadioButton\0CE_RadioButtonLabel\0"
    "CE_TabBarTab\0CE_TabBarTabShape\0"
    "CE_TabBarTabLabel\0CE_ProgressBar\0"
    "CE_ProgressBarGroove\0CE_ProgressBarContents\0"
    "CE_ProgressBarLabel\0CE_MenuItem\0"
    "CE_MenuScroller\0CE_MenuVMargin\0"
    "CE_MenuHMargin\0CE_MenuTearoff\0"
    "CE_MenuEmptyArea\0CE_MenuBarItem\0"
    "CE_MenuBarEmptyArea\0CE_ToolButtonLabel\0"
    "CE_Header\0CE_HeaderSection\0CE_HeaderLabel\0"
    "CE_Q3DockWindowEmptyArea\0CE_ToolBoxTab\0"
    "CE_SizeGrip\0CE_Splitter\0CE_RubberBand\0"
    "CE_DockWidgetTitle\0CE_ScrollBarAddLine\0"
    "CE_ScrollBarSubLine\0CE_ScrollBarAddPage\0"
    "CE_ScrollBarSubPage\0CE_ScrollBarSlider\0"
    "CE_ScrollBarFirst\0CE_ScrollBarLast\0"
    "CE_FocusFrame\0CE_ComboBoxLabel\0"
    "CE_ToolBar\0CE_ToolBoxTabShape\0"
    "CE_ToolBoxTabLabel\0CE_HeaderEmptyArea\0"
    "CE_ColumnViewGrip\0CE_ItemViewItem\0"
    "CE_ShapedFrame\0CE_CustomBase\0CT_PushButton\0"
    "CT_CheckBox\0CT_RadioButton\0CT_ToolButton\0"
    "CT_ComboBox\0CT_Splitter\0CT_Q3DockWindow\0"
    "CT_ProgressBar\0CT_MenuItem\0CT_MenuBarItem\0"
    "CT_MenuBar\0CT_Menu\0CT_TabBarTab\0"
    "CT_Slider\0CT_ScrollBar\0CT_Q3Header\0"
    "CT_LineEdit\0CT_SpinBox\0CT_SizeGrip\0"
    "CT_TabWidget\0CT_DialogButtons\0"
    "CT_HeaderSection\0CT_GroupBox\0"
    "CT_MdiControls\0CT_ItemViewItem\0"
    "CT_CustomBase\0State_None\0State_Enabled\0"
    "State_Raised\0State_Sunken\0State_Off\0"
    "State_NoChange\0State_On\0State_DownArrow\0"
    "State_Horizontal\0State_HasFocus\0"
    "State_Top\0State_Bottom\0State_FocusAtBorder\0"
    "State_AutoRaise\0State_MouseOver\0"
    "State_UpArrow\0State_Selected\0State_Active\0"
    "State_Window\0State_Open\0State_Children\0"
    "State_Item\0State_Sibling\0State_Editing\0"
    "State_KeyboardFocusChange\0State_ReadOnly\0"
    "State_Small\0State_Mini\0CC_SpinBox\0"
    "CC_ComboBox\0CC_ScrollBar\0CC_Slider\0"
    "CC_ToolButton\0CC_TitleBar\0CC_Q3ListView\0"
    "CC_Dial\0CC_GroupBox\0CC_MdiControls\0"
    "CC_CustomBase\0RSIP_OnMouseClickAndAlreadyFocused\0"
    "RSIP_OnMouseClick\0SE_PushButtonContents\0"
    "SE_PushButtonFocusRect\0SE_CheckBoxIndicator\0"
    "SE_CheckBoxContents\0SE_CheckBoxFocusRect\0"
    "SE_CheckBoxClickRect\0SE_RadioButtonIndicator\0"
    "SE_RadioButtonContents\0SE_RadioButtonFocusRect\0"
    "SE_RadioButtonClickRect\0SE_ComboBoxFocusRect\0"
    "SE_SliderFocusRect\0SE_Q3DockWindowHandleRect\0"
    "SE_ProgressBarGroove\0SE_ProgressBarContents\0"
    "SE_ProgressBarLabel\0SE_DialogButtonAccept\0"
    "SE_DialogButtonReject\0SE_DialogButtonApply\0"
    "SE_DialogButtonHelp\0SE_DialogButtonAll\0"
    "SE_DialogButtonAbort\0SE_DialogButtonIgnore\0"
    "SE_DialogButtonRetry\0SE_DialogButtonCustom\0"
    "SE_ToolBoxTabContents\0SE_HeaderLabel\0"
    "SE_HeaderArrow\0SE_TabWidgetTabBar\0"
    "SE_TabWidgetTabPane\0SE_TabWidgetTabContents\0"
    "SE_TabWidgetLeftCorner\0SE_TabWidgetRightCorner\0"
    "SE_ViewItemCheckIndicator\0"
    "SE_ItemViewItemCheckIndicator\0"
    "SE_TabBarTearIndicator\0SE_TreeViewDisclosureItem\0"
    "SE_LineEditContents\0SE_FrameContents\0"
    "SE_DockWidgetCloseButton\0"
    "SE_DockWidgetFloatButton\0"
    "SE_DockWidgetTitleBarText\0SE_DockWidgetIcon\0"
    "SE_CheckBoxLayoutItem\0SE_ComboBoxLayoutItem\0"
    "SE_DateTimeEditLayoutItem\0"
    "SE_DialogButtonBoxLayoutItem\0"
    "SE_LabelLayoutItem\0SE_ProgressBarLayoutItem\0"
    "SE_PushButtonLayoutItem\0"
    "SE_RadioButtonLayoutItem\0SE_SliderLayoutItem\0"
    "SE_SpinBoxLayoutItem\0SE_ToolButtonLayoutItem\0"
    "SE_FrameLayoutItem\0SE_GroupBoxLayoutItem\0"
    "SE_TabWidgetLayoutItem\0SE_ItemViewItemDecoration\0"
    "SE_ItemViewItemText\0SE_ItemViewItemFocusRect\0"
    "SE_TabBarTabLeftButton\0SE_TabBarTabRightButton\0"
    "SE_TabBarTabText\0SE_ShapedFrameContents\0"
    "SE_ToolBarHandle\0SE_CustomBase\0"
};

void PythonQtWrapper_QStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyle *_t = static_cast<PythonQtWrapper_QStyle *>(_o);
        switch (_id) {
        case 0: { QStyle* _r = _t->new_QStyle();
            if (_a[0]) *reinterpret_cast< QStyle**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QStyle((*reinterpret_cast< QStyle*(*)>(_a[1]))); break;
        case 2: { QRect _r = _t->static_QStyle_alignedRect((*reinterpret_cast< Qt::LayoutDirection(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->combinedLayoutSpacing((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlTypes(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::ControlTypes(*)>(_a[3])),(*reinterpret_cast< Qt::Orientation(*)>(_a[4])),(*reinterpret_cast< QStyleOption*(*)>(_a[5])),(*reinterpret_cast< QWidget*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->combinedLayoutSpacing((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlTypes(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::ControlTypes(*)>(_a[3])),(*reinterpret_cast< Qt::Orientation(*)>(_a[4])),(*reinterpret_cast< QStyleOption*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->combinedLayoutSpacing((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlTypes(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::ControlTypes(*)>(_a[3])),(*reinterpret_cast< Qt::Orientation(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->drawItemPixmap((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QPixmap(*)>(_a[5]))); break;
        case 7: _t->drawItemText((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QPalette(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[8]))); break;
        case 8: _t->drawItemText((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QPalette(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 9: { QRect _r = _t->itemPixmapRect((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPixmap(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->layoutSpacing((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[3])),(*reinterpret_cast< Qt::Orientation(*)>(_a[4])),(*reinterpret_cast< const QStyleOption*(*)>(_a[5])),(*reinterpret_cast< const QWidget*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->layoutSpacing((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[3])),(*reinterpret_cast< Qt::Orientation(*)>(_a[4])),(*reinterpret_cast< const QStyleOption*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->layoutSpacing((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[3])),(*reinterpret_cast< Qt::Orientation(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: _t->polish((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QApplication*(*)>(_a[2]))); break;
        case 14: _t->polish((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QPalette(*)>(_a[2]))); break;
        case 15: _t->polish((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 16: { const QStyle* _r = _t->proxy((*reinterpret_cast< QStyle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QStyle**>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->static_QStyle_sliderPositionFromValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->static_QStyle_sliderPositionFromValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->static_QStyle_sliderValueFromPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->static_QStyle_sliderValueFromPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { QIcon _r = _t->standardIcon((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StandardPixmap(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 22: { QIcon _r = _t->standardIcon((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StandardPixmap(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 23: { QIcon _r = _t->standardIcon((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StandardPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 24: { QPalette _r = _t->standardPalette((*reinterpret_cast< QStyle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette*>(_a[0]) = _r; }  break;
        case 25: _t->unpolish((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QApplication*(*)>(_a[2]))); break;
        case 26: _t->unpolish((*reinterpret_cast< QStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 27: { Qt::Alignment _r = _t->static_QStyle_visualAlignment((*reinterpret_cast< Qt::LayoutDirection(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 28: { QPoint _r = _t->static_QStyle_visualPos((*reinterpret_cast< Qt::LayoutDirection(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 29: { QRect _r = _t->static_QStyle_visualRect((*reinterpret_cast< Qt::LayoutDirection(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyle,
      qt_meta_data_PythonQtWrapper_QStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyle))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyle*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   31,   30, 0x0a,
      70,   66,   30,   30, 0x0a,
     122,  115,  107,   30, 0x0a,
     171,   30,  159,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleFactory[] = {
    "PythonQtWrapper_QStyleFactory\0\0"
    "QStyleFactory*\0new_QStyleFactory()\0"
    "obj\0delete_QStyleFactory(QStyleFactory*)\0"
    "QStyle*\0arg__1\0static_QStyleFactory_create(QString)\0"
    "QStringList\0static_QStyleFactory_keys()\0"
};

void PythonQtWrapper_QStyleFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleFactory *_t = static_cast<PythonQtWrapper_QStyleFactory *>(_o);
        switch (_id) {
        case 0: { QStyleFactory* _r = _t->new_QStyleFactory();
            if (_a[0]) *reinterpret_cast< QStyleFactory**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QStyleFactory((*reinterpret_cast< QStyleFactory*(*)>(_a[1]))); break;
        case 2: { QStyle* _r = _t->static_QStyleFactory_create((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyle**>(_a[0]) = _r; }  break;
        case 3: { QStringList _r = _t->static_QStyleFactory_keys();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleFactory,
      qt_meta_data_PythonQtWrapper_QStyleFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleFactory))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleHintReturn[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       3,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   52,   34,   33, 0x0a,
     103,   95,   34,   33, 0x2a,
     129,   33,   34,   33, 0x2a,
     156,  152,   33,   33, 0x0a,
     224,  199,   33,   33, 0x0a,
     283,  266,  262,   33, 0x0a,
     339,  317,   33,   33, 0x0a,
     374,  266,  262,   33, 0x0a,

 // enums: name, flags, count, data
     405, 0x0,    3,   66,
     420, 0x0,    1,   72,
     439, 0x0,    1,   74,

 // enum data: key, value
     455, uint(PythonQtWrapper_QStyleHintReturn::SH_Default),
     466, uint(PythonQtWrapper_QStyleHintReturn::SH_Mask),
     474, uint(PythonQtWrapper_QStyleHintReturn::SH_Variant),
     485, uint(PythonQtWrapper_QStyleHintReturn::Version),
     493, uint(PythonQtWrapper_QStyleHintReturn::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleHintReturn[] = {
    "PythonQtWrapper_QStyleHintReturn\0\0"
    "QStyleHintReturn*\0version,type\0"
    "new_QStyleHintReturn(int,int)\0version\0"
    "new_QStyleHintReturn(int)\0"
    "new_QStyleHintReturn()\0obj\0"
    "delete_QStyleHintReturn(QStyleHintReturn*)\0"
    "theWrappedObject,version\0"
    "py_set_version(QStyleHintReturn*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_version(QStyleHintReturn*)\0"
    "theWrappedObject,type\0"
    "py_set_type(QStyleHintReturn*,int)\0"
    "py_get_type(QStyleHintReturn*)\0"
    "HintReturnType\0StyleOptionVersion\0"
    "StyleOptionType\0SH_Default\0SH_Mask\0"
    "SH_Variant\0Version\0Type\0"
};

void PythonQtWrapper_QStyleHintReturn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleHintReturn *_t = static_cast<PythonQtWrapper_QStyleHintReturn *>(_o);
        switch (_id) {
        case 0: { QStyleHintReturn* _r = _t->new_QStyleHintReturn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStyleHintReturn**>(_a[0]) = _r; }  break;
        case 1: { QStyleHintReturn* _r = _t->new_QStyleHintReturn((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleHintReturn**>(_a[0]) = _r; }  break;
        case 2: { QStyleHintReturn* _r = _t->new_QStyleHintReturn();
            if (_a[0]) *reinterpret_cast< QStyleHintReturn**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleHintReturn((*reinterpret_cast< QStyleHintReturn*(*)>(_a[1]))); break;
        case 4: _t->py_set_version((*reinterpret_cast< QStyleHintReturn*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: { int _r = _t->py_get_version((*reinterpret_cast< QStyleHintReturn*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_type((*reinterpret_cast< QStyleHintReturn*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: { int _r = _t->py_get_type((*reinterpret_cast< QStyleHintReturn*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleHintReturn::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleHintReturn::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleHintReturn,
      qt_meta_data_PythonQtWrapper_QStyleHintReturn, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleHintReturn::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleHintReturn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleHintReturn::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleHintReturn))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleHintReturn*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleHintReturn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleHintReturnMask[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      91,   87,   37,   37, 0x0a,
     166,  142,   37,   37, 0x0a,
     236,  219,  211,   37, 0x0a,

 // enums: name, flags, count, data
     273, 0x0,    1,   42,
     292, 0x0,    1,   44,

 // enum data: key, value
     308, uint(PythonQtWrapper_QStyleHintReturnMask::Version),
     316, uint(PythonQtWrapper_QStyleHintReturnMask::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleHintReturnMask[] = {
    "PythonQtWrapper_QStyleHintReturnMask\0"
    "\0QStyleHintReturnMask*\0"
    "new_QStyleHintReturnMask()\0obj\0"
    "delete_QStyleHintReturnMask(QStyleHintReturnMask*)\0"
    "theWrappedObject,region\0"
    "py_set_region(QStyleHintReturnMask*,QRegion)\0"
    "QRegion\0theWrappedObject\0"
    "py_get_region(QStyleHintReturnMask*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleHintReturnMask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleHintReturnMask *_t = static_cast<PythonQtWrapper_QStyleHintReturnMask *>(_o);
        switch (_id) {
        case 0: { QStyleHintReturnMask* _r = _t->new_QStyleHintReturnMask();
            if (_a[0]) *reinterpret_cast< QStyleHintReturnMask**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QStyleHintReturnMask((*reinterpret_cast< QStyleHintReturnMask*(*)>(_a[1]))); break;
        case 2: _t->py_set_region((*reinterpret_cast< QStyleHintReturnMask*(*)>(_a[1])),(*reinterpret_cast< QRegion(*)>(_a[2]))); break;
        case 3: { QRegion _r = _t->py_get_region((*reinterpret_cast< QStyleHintReturnMask*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleHintReturnMask::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleHintReturnMask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleHintReturnMask,
      qt_meta_data_PythonQtWrapper_QStyleHintReturnMask, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleHintReturnMask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleHintReturnMask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleHintReturnMask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleHintReturnMask))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleHintReturnMask*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleHintReturnMask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleHintReturnVariant[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      66,   40,   41,   40, 0x0a,
     100,   96,   40,   40, 0x0a,
     182,  157,   40,   40, 0x0a,
     258,  241,  232,   40, 0x0a,

 // enums: name, flags, count, data
     299, 0x0,    1,   42,
     318, 0x0,    1,   44,

 // enum data: key, value
     334, uint(PythonQtWrapper_QStyleHintReturnVariant::Version),
     342, uint(PythonQtWrapper_QStyleHintReturnVariant::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleHintReturnVariant[] = {
    "PythonQtWrapper_QStyleHintReturnVariant\0"
    "\0QStyleHintReturnVariant*\0"
    "new_QStyleHintReturnVariant()\0obj\0"
    "delete_QStyleHintReturnVariant(QStyleHintReturnVariant*)\0"
    "theWrappedObject,variant\0"
    "py_set_variant(QStyleHintReturnVariant*,QVariant)\0"
    "QVariant\0theWrappedObject\0"
    "py_get_variant(QStyleHintReturnVariant*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleHintReturnVariant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleHintReturnVariant *_t = static_cast<PythonQtWrapper_QStyleHintReturnVariant *>(_o);
        switch (_id) {
        case 0: { QStyleHintReturnVariant* _r = _t->new_QStyleHintReturnVariant();
            if (_a[0]) *reinterpret_cast< QStyleHintReturnVariant**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QStyleHintReturnVariant((*reinterpret_cast< QStyleHintReturnVariant*(*)>(_a[1]))); break;
        case 2: _t->py_set_variant((*reinterpret_cast< QStyleHintReturnVariant*(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 3: { QVariant _r = _t->py_get_variant((*reinterpret_cast< QStyleHintReturnVariant*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleHintReturnVariant::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleHintReturnVariant::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleHintReturnVariant,
      qt_meta_data_PythonQtWrapper_QStyleHintReturnVariant, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleHintReturnVariant::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleHintReturnVariant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleHintReturnVariant::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleHintReturnVariant))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleHintReturnVariant*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleHintReturnVariant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOption[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       3,  119, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   44,   30,   29, 0x0a,
      94,   81,   30,   29, 0x0a,
     128,  120,   30,   29, 0x2a,
     150,   29,   30,   29, 0x2a,
     173,  169,   29,   29, 0x0a,
     227,  208,   29,   29, 0x0a,
     274,   29,  266,   29, 0x0a,
     326,  301,   29,   29, 0x0a,
     391,  374,  365,   29, 0x0a,
     446,  421,   29,   29, 0x0a,
     484,  374,  480,   29, 0x0a,
     541,  514,   29,   29, 0x0a,
     613,  374,  593,   29, 0x0a,
     667,  645,   29,   29, 0x0a,
     706,  374,  700,   29, 0x0a,
     755,  733,   29,   29, 0x0a,
     786,  374,  480,   29, 0x0a,
     836,  813,   29,   29, 0x0a,
     892,  374,  878,   29, 0x0a,
     949,  920,   29,   29, 0x0a,
    1009,  374,  996,   29, 0x0a,

 // enums: name, flags, count, data
    1043, 0x0,    1,  131,
    1062, 0x0,    1,  133,
    1078, 0x0,   29,  135,

 // enum data: key, value
    1089, uint(PythonQtWrapper_QStyleOption::Version),
    1097, uint(PythonQtWrapper_QStyleOption::Type),
    1102, uint(PythonQtWrapper_QStyleOption::SO_Default),
    1113, uint(PythonQtWrapper_QStyleOption::SO_FocusRect),
    1126, uint(PythonQtWrapper_QStyleOption::SO_Button),
    1136, uint(PythonQtWrapper_QStyleOption::SO_Tab),
    1143, uint(PythonQtWrapper_QStyleOption::SO_MenuItem),
    1155, uint(PythonQtWrapper_QStyleOption::SO_Frame),
    1164, uint(PythonQtWrapper_QStyleOption::SO_ProgressBar),
    1179, uint(PythonQtWrapper_QStyleOption::SO_ToolBox),
    1190, uint(PythonQtWrapper_QStyleOption::SO_Header),
    1200, uint(PythonQtWrapper_QStyleOption::SO_Q3DockWindow),
    1216, uint(PythonQtWrapper_QStyleOption::SO_DockWidget),
    1230, uint(PythonQtWrapper_QStyleOption::SO_Q3ListViewItem),
    1248, uint(PythonQtWrapper_QStyleOption::SO_ViewItem),
    1260, uint(PythonQtWrapper_QStyleOption::SO_TabWidgetFrame),
    1278, uint(PythonQtWrapper_QStyleOption::SO_TabBarBase),
    1292, uint(PythonQtWrapper_QStyleOption::SO_RubberBand),
    1306, uint(PythonQtWrapper_QStyleOption::SO_ToolBar),
    1317, uint(PythonQtWrapper_QStyleOption::SO_GraphicsItem),
    1333, uint(PythonQtWrapper_QStyleOption::SO_Complex),
    1344, uint(PythonQtWrapper_QStyleOption::SO_Slider),
    1354, uint(PythonQtWrapper_QStyleOption::SO_SpinBox),
    1365, uint(PythonQtWrapper_QStyleOption::SO_ToolButton),
    1379, uint(PythonQtWrapper_QStyleOption::SO_ComboBox),
    1391, uint(PythonQtWrapper_QStyleOption::SO_Q3ListView),
    1405, uint(PythonQtWrapper_QStyleOption::SO_TitleBar),
    1417, uint(PythonQtWrapper_QStyleOption::SO_GroupBox),
    1429, uint(PythonQtWrapper_QStyleOption::SO_SizeGrip),
    1441, uint(PythonQtWrapper_QStyleOption::SO_CustomBase),
    1455, uint(PythonQtWrapper_QStyleOption::SO_ComplexCustomBase),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOption[] = {
    "PythonQtWrapper_QStyleOption\0\0"
    "QStyleOption*\0other\0new_QStyleOption(QStyleOption)\0"
    "version,type\0new_QStyleOption(int,int)\0"
    "version\0new_QStyleOption(int)\0"
    "new_QStyleOption()\0obj\0"
    "delete_QStyleOption(QStyleOption*)\0"
    "theWrappedObject,w\0"
    "initFrom(QStyleOption*,const QWidget*)\0"
    "QString\0py_toString(QStyleOption*)\0"
    "theWrappedObject,palette\0"
    "py_set_palette(QStyleOption*,QPalette)\0"
    "QPalette\0theWrappedObject\0"
    "py_get_palette(QStyleOption*)\0"
    "theWrappedObject,version\0"
    "py_set_version(QStyleOption*,int)\0int\0"
    "py_get_version(QStyleOption*)\0"
    "theWrappedObject,direction\0"
    "py_set_direction(QStyleOption*,Qt::LayoutDirection)\0"
    "Qt::LayoutDirection\0py_get_direction(QStyleOption*)\0"
    "theWrappedObject,rect\0"
    "py_set_rect(QStyleOption*,QRect)\0QRect\0"
    "py_get_rect(QStyleOption*)\0"
    "theWrappedObject,type\0"
    "py_set_type(QStyleOption*,int)\0"
    "py_get_type(QStyleOption*)\0"
    "theWrappedObject,state\0"
    "py_set_state(QStyleOption*,QStyle::State)\0"
    "QStyle::State\0py_get_state(QStyleOption*)\0"
    "theWrappedObject,fontMetrics\0"
    "py_set_fontMetrics(QStyleOption*,QFontMetrics)\0"
    "QFontMetrics\0py_get_fontMetrics(QStyleOption*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "OptionType\0Version\0Type\0SO_Default\0"
    "SO_FocusRect\0SO_Button\0SO_Tab\0SO_MenuItem\0"
    "SO_Frame\0SO_ProgressBar\0SO_ToolBox\0"
    "SO_Header\0SO_Q3DockWindow\0SO_DockWidget\0"
    "SO_Q3ListViewItem\0SO_ViewItem\0"
    "SO_TabWidgetFrame\0SO_TabBarBase\0"
    "SO_RubberBand\0SO_ToolBar\0SO_GraphicsItem\0"
    "SO_Complex\0SO_Slider\0SO_SpinBox\0"
    "SO_ToolButton\0SO_ComboBox\0SO_Q3ListView\0"
    "SO_TitleBar\0SO_GroupBox\0SO_SizeGrip\0"
    "SO_CustomBase\0SO_ComplexCustomBase\0"
};

void PythonQtWrapper_QStyleOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOption *_t = static_cast<PythonQtWrapper_QStyleOption *>(_o);
        switch (_id) {
        case 0: { QStyleOption* _r = _t->new_QStyleOption((*reinterpret_cast< const QStyleOption(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOption**>(_a[0]) = _r; }  break;
        case 1: { QStyleOption* _r = _t->new_QStyleOption((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStyleOption**>(_a[0]) = _r; }  break;
        case 2: { QStyleOption* _r = _t->new_QStyleOption((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOption**>(_a[0]) = _r; }  break;
        case 3: { QStyleOption* _r = _t->new_QStyleOption();
            if (_a[0]) *reinterpret_cast< QStyleOption**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QStyleOption((*reinterpret_cast< QStyleOption*(*)>(_a[1]))); break;
        case 5: _t->initFrom((*reinterpret_cast< QStyleOption*(*)>(_a[1])),(*reinterpret_cast< const QWidget*(*)>(_a[2]))); break;
        case 6: { QString _r = _t->py_toString((*reinterpret_cast< QStyleOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_palette((*reinterpret_cast< QStyleOption*(*)>(_a[1])),(*reinterpret_cast< QPalette(*)>(_a[2]))); break;
        case 8: { QPalette _r = _t->py_get_palette((*reinterpret_cast< QStyleOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_version((*reinterpret_cast< QStyleOption*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: { int _r = _t->py_get_version((*reinterpret_cast< QStyleOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_direction((*reinterpret_cast< QStyleOption*(*)>(_a[1])),(*reinterpret_cast< Qt::LayoutDirection(*)>(_a[2]))); break;
        case 12: { Qt::LayoutDirection _r = _t->py_get_direction((*reinterpret_cast< QStyleOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_rect((*reinterpret_cast< QStyleOption*(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 14: { QRect _r = _t->py_get_rect((*reinterpret_cast< QStyleOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 15: _t->py_set_type((*reinterpret_cast< QStyleOption*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: { int _r = _t->py_get_type((*reinterpret_cast< QStyleOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: _t->py_set_state((*reinterpret_cast< QStyleOption*(*)>(_a[1])),(*reinterpret_cast< QStyle::State(*)>(_a[2]))); break;
        case 18: { QStyle::State _r = _t->py_get_state((*reinterpret_cast< QStyleOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyle::State*>(_a[0]) = _r; }  break;
        case 19: _t->py_set_fontMetrics((*reinterpret_cast< QStyleOption*(*)>(_a[1])),(*reinterpret_cast< QFontMetrics(*)>(_a[2]))); break;
        case 20: { QFontMetrics _r = _t->py_get_fontMetrics((*reinterpret_cast< QStyleOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontMetrics*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOption::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOption::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOption,
      qt_meta_data_PythonQtWrapper_QStyleOption, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOption::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOption::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOption))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOption*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       4,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      87,   81,   36,   35, 0x0a,
     134,  130,   35,   35, 0x0a,
     207,  181,   35,   35, 0x0a,
     273,  256,  250,   35, 0x0a,
     336,  310,   35,   35, 0x0a,
     443,  256,  408,   35, 0x0a,
     502,  480,   35,   35, 0x0a,
     547,  256,  541,   35, 0x0a,
     602,  580,   35,   35, 0x0a,
     651,  256,  643,   35, 0x0a,

 // enums: name, flags, count, data
     684, 0x0,    1,   85,
     703, 0x0,    6,   87,
     717, 0x1,    6,   99,
     732, 0x0,    1,  111,

 // enum data: key, value
     748, uint(PythonQtWrapper_QStyleOptionButton::Version),
     756, uint(PythonQtWrapper_QStyleOptionButton::None),
     761, uint(PythonQtWrapper_QStyleOptionButton::Flat),
     766, uint(PythonQtWrapper_QStyleOptionButton::HasMenu),
     774, uint(PythonQtWrapper_QStyleOptionButton::DefaultButton),
     788, uint(PythonQtWrapper_QStyleOptionButton::AutoDefaultButton),
     806, uint(PythonQtWrapper_QStyleOptionButton::CommandLinkButton),
     756, uint(PythonQtWrapper_QStyleOptionButton::None),
     761, uint(PythonQtWrapper_QStyleOptionButton::Flat),
     766, uint(PythonQtWrapper_QStyleOptionButton::HasMenu),
     774, uint(PythonQtWrapper_QStyleOptionButton::DefaultButton),
     788, uint(PythonQtWrapper_QStyleOptionButton::AutoDefaultButton),
     806, uint(PythonQtWrapper_QStyleOptionButton::CommandLinkButton),
     824, uint(PythonQtWrapper_QStyleOptionButton::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionButton[] = {
    "PythonQtWrapper_QStyleOptionButton\0\0"
    "QStyleOptionButton*\0new_QStyleOptionButton()\0"
    "other\0new_QStyleOptionButton(QStyleOptionButton)\0"
    "obj\0delete_QStyleOptionButton(QStyleOptionButton*)\0"
    "theWrappedObject,iconSize\0"
    "py_set_iconSize(QStyleOptionButton*,QSize)\0"
    "QSize\0theWrappedObject\0"
    "py_get_iconSize(QStyleOptionButton*)\0"
    "theWrappedObject,features\0"
    "py_set_features(QStyleOptionButton*,QStyleOptionButton::ButtonFeatures"
    ")\0"
    "QStyleOptionButton::ButtonFeatures\0"
    "py_get_features(QStyleOptionButton*)\0"
    "theWrappedObject,icon\0"
    "py_set_icon(QStyleOptionButton*,QIcon)\0"
    "QIcon\0py_get_icon(QStyleOptionButton*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionButton*,QString)\0"
    "QString\0py_get_text(QStyleOptionButton*)\0"
    "StyleOptionVersion\0ButtonFeature\0"
    "ButtonFeatures\0StyleOptionType\0Version\0"
    "None\0Flat\0HasMenu\0DefaultButton\0"
    "AutoDefaultButton\0CommandLinkButton\0"
    "Type\0"
};

void PythonQtWrapper_QStyleOptionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionButton *_t = static_cast<PythonQtWrapper_QStyleOptionButton *>(_o);
        switch (_id) {
        case 0: { QStyleOptionButton* _r = _t->new_QStyleOptionButton();
            if (_a[0]) *reinterpret_cast< QStyleOptionButton**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionButton* _r = _t->new_QStyleOptionButton((*reinterpret_cast< const QStyleOptionButton(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionButton**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionButton((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1]))); break;
        case 3: _t->py_set_iconSize((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 4: { QSize _r = _t->py_get_iconSize((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_features((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionButton::ButtonFeatures(*)>(_a[2]))); break;
        case 6: { QStyleOptionButton::ButtonFeatures _r = _t->py_get_features((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionButton::ButtonFeatures*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_icon((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 8: { QIcon _r = _t->py_get_icon((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_text((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionButton,
      qt_meta_data_PythonQtWrapper_QStyleOptionButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionButton))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionButton*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       2,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      93,   87,   38,   37, 0x0a,
     144,  140,   37,   37, 0x0a,
     224,  195,   37,   37, 0x0a,
     299,  282,  274,   37, 0x0a,
     367,  341,   37,   37, 0x0a,
     418,  282,  412,   37, 0x0a,
     483,  457,   37,   37, 0x0a,
     532,  282,  527,   37, 0x0a,
     594,  571,   37,   37, 0x0a,
     635,  282,  527,   37, 0x0a,
     698,  671,   37,   37, 0x0a,
     750,  282,  744,   37, 0x0a,
     819,  790,   37,   37, 0x0a,
     873,  282,  867,   37, 0x0a,

 // enums: name, flags, count, data
     915, 0x0,    1,   97,
     934, 0x0,    1,   99,

 // enum data: key, value
     950, uint(PythonQtWrapper_QStyleOptionComboBox::Version),
     958, uint(PythonQtWrapper_QStyleOptionComboBox::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionComboBox[] = {
    "PythonQtWrapper_QStyleOptionComboBox\0"
    "\0QStyleOptionComboBox*\0"
    "new_QStyleOptionComboBox()\0other\0"
    "new_QStyleOptionComboBox(QStyleOptionComboBox)\0"
    "obj\0delete_QStyleOptionComboBox(QStyleOptionComboBox*)\0"
    "theWrappedObject,currentText\0"
    "py_set_currentText(QStyleOptionComboBox*,QString)\0"
    "QString\0theWrappedObject\0"
    "py_get_currentText(QStyleOptionComboBox*)\0"
    "theWrappedObject,iconSize\0"
    "py_set_iconSize(QStyleOptionComboBox*,QSize)\0"
    "QSize\0py_get_iconSize(QStyleOptionComboBox*)\0"
    "theWrappedObject,editable\0"
    "py_set_editable(QStyleOptionComboBox*,bool)\0"
    "bool\0py_get_editable(QStyleOptionComboBox*)\0"
    "theWrappedObject,frame\0"
    "py_set_frame(QStyleOptionComboBox*,bool)\0"
    "py_get_frame(QStyleOptionComboBox*)\0"
    "theWrappedObject,popupRect\0"
    "py_set_popupRect(QStyleOptionComboBox*,QRect)\0"
    "QRect\0py_get_popupRect(QStyleOptionComboBox*)\0"
    "theWrappedObject,currentIcon\0"
    "py_set_currentIcon(QStyleOptionComboBox*,QIcon)\0"
    "QIcon\0py_get_currentIcon(QStyleOptionComboBox*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionComboBox *_t = static_cast<PythonQtWrapper_QStyleOptionComboBox *>(_o);
        switch (_id) {
        case 0: { QStyleOptionComboBox* _r = _t->new_QStyleOptionComboBox();
            if (_a[0]) *reinterpret_cast< QStyleOptionComboBox**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionComboBox* _r = _t->new_QStyleOptionComboBox((*reinterpret_cast< const QStyleOptionComboBox(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionComboBox**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionComboBox((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1]))); break;
        case 3: _t->py_set_currentText((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: { QString _r = _t->py_get_currentText((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_iconSize((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 6: { QSize _r = _t->py_get_iconSize((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_editable((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: { bool _r = _t->py_get_editable((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_frame((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: { bool _r = _t->py_get_frame((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_popupRect((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 12: { QRect _r = _t->py_get_popupRect((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_currentIcon((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 14: { QIcon _r = _t->py_get_currentIcon((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionComboBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionComboBox,
      qt_meta_data_PythonQtWrapper_QStyleOptionComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionComboBox))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionComboBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionDockWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       2,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   39,   40,   39, 0x0a,
      99,   93,   40,   39, 0x0a,
     154,  150,   39,   39, 0x0a,
     232,  209,   39,   39, 0x0a,
     303,  286,  278,   39, 0x0a,
     368,  341,   39,   39, 0x0a,
     420,  286,  415,   39, 0x0a,
     488,  462,   39,   39, 0x0a,
     534,  286,  415,   39, 0x0a,
     600,  575,   39,   39, 0x0a,
     645,  286,  415,   39, 0x0a,

 // enums: name, flags, count, data
     685, 0x0,    1,   77,
     704, 0x0,    1,   79,

 // enum data: key, value
     720, uint(PythonQtWrapper_QStyleOptionDockWidget::Version),
     728, uint(PythonQtWrapper_QStyleOptionDockWidget::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionDockWidget[] = {
    "PythonQtWrapper_QStyleOptionDockWidget\0"
    "\0QStyleOptionDockWidget*\0"
    "new_QStyleOptionDockWidget()\0other\0"
    "new_QStyleOptionDockWidget(QStyleOptionDockWidget)\0"
    "obj\0delete_QStyleOptionDockWidget(QStyleOptionDockWidget*)\0"
    "theWrappedObject,title\0"
    "py_set_title(QStyleOptionDockWidget*,QString)\0"
    "QString\0theWrappedObject\0"
    "py_get_title(QStyleOptionDockWidget*)\0"
    "theWrappedObject,floatable\0"
    "py_set_floatable(QStyleOptionDockWidget*,bool)\0"
    "bool\0py_get_floatable(QStyleOptionDockWidget*)\0"
    "theWrappedObject,closable\0"
    "py_set_closable(QStyleOptionDockWidget*,bool)\0"
    "py_get_closable(QStyleOptionDockWidget*)\0"
    "theWrappedObject,movable\0"
    "py_set_movable(QStyleOptionDockWidget*,bool)\0"
    "py_get_movable(QStyleOptionDockWidget*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionDockWidget *_t = static_cast<PythonQtWrapper_QStyleOptionDockWidget *>(_o);
        switch (_id) {
        case 0: { QStyleOptionDockWidget* _r = _t->new_QStyleOptionDockWidget();
            if (_a[0]) *reinterpret_cast< QStyleOptionDockWidget**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionDockWidget* _r = _t->new_QStyleOptionDockWidget((*reinterpret_cast< const QStyleOptionDockWidget(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionDockWidget**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionDockWidget((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1]))); break;
        case 3: _t->py_set_title((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: { QString _r = _t->py_get_title((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_floatable((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: { bool _r = _t->py_get_floatable((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_closable((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: { bool _r = _t->py_get_closable((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_movable((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: { bool _r = _t->py_get_movable((*reinterpret_cast< QStyleOptionDockWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionDockWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionDockWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionDockWidget,
      qt_meta_data_PythonQtWrapper_QStyleOptionDockWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionDockWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionDockWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionDockWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionDockWidgetV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      68,   41,   42,   41, 0x0a,
     105,   99,   42,   41, 0x0a,
     158,   99,   42,   41, 0x0a,
     217,  213,   41,   41, 0x0a,
     310,  276,   41,   41, 0x0a,
     388,  371,  366,   41, 0x0a,

 // enums: name, flags, count, data
     439, 0x0,    1,   48,

 // enum data: key, value
     458, uint(PythonQtWrapper_QStyleOptionDockWidgetV2::Version),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionDockWidgetV2[] = {
    "PythonQtWrapper_QStyleOptionDockWidgetV2\0"
    "\0QStyleOptionDockWidgetV2*\0"
    "new_QStyleOptionDockWidgetV2()\0other\0"
    "new_QStyleOptionDockWidgetV2(QStyleOptionDockWidget)\0"
    "new_QStyleOptionDockWidgetV2(QStyleOptionDockWidgetV2)\0"
    "obj\0delete_QStyleOptionDockWidgetV2(QStyleOptionDockWidgetV2*)\0"
    "theWrappedObject,verticalTitleBar\0"
    "py_set_verticalTitleBar(QStyleOptionDockWidgetV2*,bool)\0"
    "bool\0theWrappedObject\0"
    "py_get_verticalTitleBar(QStyleOptionDockWidgetV2*)\0"
    "StyleOptionVersion\0Version\0"
};

void PythonQtWrapper_QStyleOptionDockWidgetV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionDockWidgetV2 *_t = static_cast<PythonQtWrapper_QStyleOptionDockWidgetV2 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionDockWidgetV2* _r = _t->new_QStyleOptionDockWidgetV2();
            if (_a[0]) *reinterpret_cast< QStyleOptionDockWidgetV2**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionDockWidgetV2* _r = _t->new_QStyleOptionDockWidgetV2((*reinterpret_cast< const QStyleOptionDockWidget(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionDockWidgetV2**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionDockWidgetV2* _r = _t->new_QStyleOptionDockWidgetV2((*reinterpret_cast< const QStyleOptionDockWidgetV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionDockWidgetV2**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionDockWidgetV2((*reinterpret_cast< QStyleOptionDockWidgetV2*(*)>(_a[1]))); break;
        case 4: _t->py_set_verticalTitleBar((*reinterpret_cast< QStyleOptionDockWidgetV2*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: { bool _r = _t->py_get_verticalTitleBar((*reinterpret_cast< QStyleOptionDockWidgetV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionDockWidgetV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionDockWidgetV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionDockWidgetV2,
      qt_meta_data_PythonQtWrapper_QStyleOptionDockWidgetV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionDockWidgetV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionDockWidgetV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionDockWidgetV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionDockWidgetV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionDockWidgetV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionDockWidgetV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionFocusRect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       2,   39, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      62,   38,   39,   38, 0x0a,
      96,   90,   39,   38, 0x0a,
     149,  145,   38,   38, 0x0a,
     235,  202,   38,   38, 0x0a,
     313,  296,  289,   38, 0x0a,

 // enums: name, flags, count, data
     360, 0x0,    1,   47,
     379, 0x0,    1,   49,

 // enum data: key, value
     395, uint(PythonQtWrapper_QStyleOptionFocusRect::Version),
     403, uint(PythonQtWrapper_QStyleOptionFocusRect::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionFocusRect[] = {
    "PythonQtWrapper_QStyleOptionFocusRect\0"
    "\0QStyleOptionFocusRect*\0"
    "new_QStyleOptionFocusRect()\0other\0"
    "new_QStyleOptionFocusRect(QStyleOptionFocusRect)\0"
    "obj\0delete_QStyleOptionFocusRect(QStyleOptionFocusRect*)\0"
    "theWrappedObject,backgroundColor\0"
    "py_set_backgroundColor(QStyleOptionFocusRect*,QColor)\0"
    "QColor\0theWrappedObject\0"
    "py_get_backgroundColor(QStyleOptionFocusRect*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionFocusRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionFocusRect *_t = static_cast<PythonQtWrapper_QStyleOptionFocusRect *>(_o);
        switch (_id) {
        case 0: { QStyleOptionFocusRect* _r = _t->new_QStyleOptionFocusRect();
            if (_a[0]) *reinterpret_cast< QStyleOptionFocusRect**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionFocusRect* _r = _t->new_QStyleOptionFocusRect((*reinterpret_cast< const QStyleOptionFocusRect(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionFocusRect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionFocusRect((*reinterpret_cast< QStyleOptionFocusRect*(*)>(_a[1]))); break;
        case 3: _t->py_set_backgroundColor((*reinterpret_cast< QStyleOptionFocusRect*(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 4: { QColor _r = _t->py_get_backgroundColor((*reinterpret_cast< QStyleOptionFocusRect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionFocusRect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionFocusRect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionFocusRect,
      qt_meta_data_PythonQtWrapper_QStyleOptionFocusRect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionFocusRect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionFocusRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionFocusRect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionFocusRect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionFocusRect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionFocusRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
