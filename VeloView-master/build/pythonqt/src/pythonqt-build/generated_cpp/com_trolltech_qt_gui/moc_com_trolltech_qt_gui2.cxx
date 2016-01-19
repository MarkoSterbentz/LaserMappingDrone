/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_gui/com_trolltech_qt_gui2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QDragResponseEvent[] = {

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
      65,   56,   36,   35, 0x0a,
      98,   94,   35,   35, 0x0a,
     167,  150,  145,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDragResponseEvent[] = {
    "PythonQtWrapper_QDragResponseEvent\0\0"
    "QDragResponseEvent*\0accepted\0"
    "new_QDragResponseEvent(bool)\0obj\0"
    "delete_QDragResponseEvent(QDragResponseEvent*)\0"
    "bool\0theWrappedObject\0"
    "dragAccepted(QDragResponseEvent*)\0"
};

void PythonQtWrapper_QDragResponseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDragResponseEvent *_t = static_cast<PythonQtWrapper_QDragResponseEvent *>(_o);
        switch (_id) {
        case 0: { QDragResponseEvent* _r = _t->new_QDragResponseEvent((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDragResponseEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QDragResponseEvent((*reinterpret_cast< QDragResponseEvent*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->dragAccepted((*reinterpret_cast< QDragResponseEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDragResponseEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDragResponseEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDragResponseEvent,
      qt_meta_data_PythonQtWrapper_QDragResponseEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDragResponseEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDragResponseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDragResponseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDragResponseEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDragResponseEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDragResponseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDropEvent[] = {

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
      80,   40,   28,   27, 0x0a,
     223,  188,   28,   27, 0x2a,
     322,  318,   27,   27, 0x0a,
     370,  353,   27,   27, 0x0a,
     419,  353,  404,   27, 0x0a,
     465,  353,  443,   27, 0x0a,
     513,  353,  496,   27, 0x0a,
     552,  353,  535,   27, 0x0a,
     592,  353,  578,   27, 0x0a,
     625,  353,  609,   27, 0x0a,
     654,  353,  404,   27, 0x0a,
     706,  682,   27,   27, 0x0a,
     757,  353,  748,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDropEvent[] = {
    "PythonQtWrapper_QDropEvent\0\0QDropEvent*\0"
    "pos,actions,data,buttons,modifiers,type\0"
    "new_QDropEvent(QPoint,Qt::DropActions,const QMimeData*,Qt::MouseButton"
    "s,Qt::KeyboardModifiers,QEvent::Type)\0"
    "pos,actions,data,buttons,modifiers\0"
    "new_QDropEvent(QPoint,Qt::DropActions,const QMimeData*,Qt::MouseButton"
    "s,Qt::KeyboardModifiers)\0"
    "obj\0delete_QDropEvent(QDropEvent*)\0"
    "theWrappedObject\0acceptProposedAction(QDropEvent*)\0"
    "Qt::DropAction\0dropAction(QDropEvent*)\0"
    "Qt::KeyboardModifiers\0"
    "keyboardModifiers(QDropEvent*)\0"
    "const QMimeData*\0mimeData(QDropEvent*)\0"
    "Qt::MouseButtons\0mouseButtons(QDropEvent*)\0"
    "const QPoint*\0pos(QDropEvent*)\0"
    "Qt::DropActions\0possibleActions(QDropEvent*)\0"
    "proposedAction(QDropEvent*)\0"
    "theWrappedObject,action\0"
    "setDropAction(QDropEvent*,Qt::DropAction)\0"
    "QWidget*\0source(QDropEvent*)\0"
};

void PythonQtWrapper_QDropEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDropEvent *_t = static_cast<PythonQtWrapper_QDropEvent *>(_o);
        switch (_id) {
        case 0: { QDropEvent* _r = _t->new_QDropEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< Qt::DropActions(*)>(_a[2])),(*reinterpret_cast< const QMimeData*(*)>(_a[3])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[4])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[5])),(*reinterpret_cast< QEvent::Type(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QDropEvent**>(_a[0]) = _r; }  break;
        case 1: { QDropEvent* _r = _t->new_QDropEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< Qt::DropActions(*)>(_a[2])),(*reinterpret_cast< const QMimeData*(*)>(_a[3])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[4])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QDropEvent**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 3: _t->acceptProposedAction((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 4: { Qt::DropAction _r = _t->dropAction((*reinterpret_cast< QDropEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropAction*>(_a[0]) = _r; }  break;
        case 5: { Qt::KeyboardModifiers _r = _t->keyboardModifiers((*reinterpret_cast< QDropEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::KeyboardModifiers*>(_a[0]) = _r; }  break;
        case 6: { const QMimeData* _r = _t->mimeData((*reinterpret_cast< QDropEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMimeData**>(_a[0]) = _r; }  break;
        case 7: { Qt::MouseButtons _r = _t->mouseButtons((*reinterpret_cast< QDropEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::MouseButtons*>(_a[0]) = _r; }  break;
        case 8: { const QPoint* _r = _t->pos((*reinterpret_cast< QDropEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPoint**>(_a[0]) = _r; }  break;
        case 9: { Qt::DropActions _r = _t->possibleActions((*reinterpret_cast< QDropEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        case 10: { Qt::DropAction _r = _t->proposedAction((*reinterpret_cast< QDropEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropAction*>(_a[0]) = _r; }  break;
        case 11: _t->setDropAction((*reinterpret_cast< QDropEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::DropAction(*)>(_a[2]))); break;
        case 12: { QWidget* _r = _t->source((*reinterpret_cast< QDropEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDropEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDropEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDropEvent,
      qt_meta_data_PythonQtWrapper_QDropEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDropEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDropEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDropEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDropEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDropEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDropEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QErrorMessage[] = {

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
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     161,  142,   30,   30, 0x0a,
     221,  197,   30,   30, 0x0a,
     246,   30,   31,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QErrorMessage[] = {
    "PythonQtWrapper_QErrorMessage\0\0"
    "QErrorMessage*\0parent\0new_QErrorMessage(QWidget*)\0"
    "new_QErrorMessage()\0obj\0"
    "delete_QErrorMessage(QErrorMessage*)\0"
    "theWrappedObject,e\0"
    "changeEvent(QErrorMessage*,QEvent*)\0"
    "theWrappedObject,arg__1\0"
    "done(QErrorMessage*,int)\0"
    "static_QErrorMessage_qtHandler()\0"
};

void PythonQtWrapper_QErrorMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QErrorMessage *_t = static_cast<PythonQtWrapper_QErrorMessage *>(_o);
        switch (_id) {
        case 0: { QErrorMessage* _r = _t->new_QErrorMessage((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QErrorMessage**>(_a[0]) = _r; }  break;
        case 1: { QErrorMessage* _r = _t->new_QErrorMessage();
            if (_a[0]) *reinterpret_cast< QErrorMessage**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QErrorMessage((*reinterpret_cast< QErrorMessage*(*)>(_a[1]))); break;
        case 3: _t->changeEvent((*reinterpret_cast< QErrorMessage*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 4: _t->done((*reinterpret_cast< QErrorMessage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: { QErrorMessage* _r = _t->static_QErrorMessage_qtHandler();
            if (_a[0]) *reinterpret_cast< QErrorMessage**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QErrorMessage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QErrorMessage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QErrorMessage,
      qt_meta_data_PythonQtWrapper_QErrorMessage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QErrorMessage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QErrorMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QErrorMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QErrorMessage))
        return static_cast<void*>(const_cast< PythonQtWrapper_QErrorMessage*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QErrorMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFileDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      91,   14, // methods
       0,    0, // properties
       1,  469, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   42,   29,   28, 0x0a,
     125,   93,   29,   28, 0x0a,
     200,  175,   29,   28, 0x2a,
     257,  242,   29,   28, 0x2a,
     298,  291,   29,   28, 0x2a,
     324,   28,   29,   28, 0x2a,
     346,  342,   28,   28, 0x0a,
     396,  379,   28,   28, 0x0a,
     441,  379,  417,   28, 0x0a,
     485,  466,   28,   28, 0x0a,
     524,  379,  519,   28, 0x0a,
     563,  379,  555,   28, 0x0a,
     596,  379,  591,   28, 0x0a,
     644,  620,   28,   28, 0x0a,
     689,  379,  667,   28, 0x0a,
     726,  379,  712,   28, 0x0a,
     759,  379,  747,   28, 0x0a,
     808,  781,  555,   28, 0x0a,
     914,  895,  555,   28, 0x2a,
     980,  242,  555,   28, 0x2a,
    1038,  291,  555,   28, 0x2a,
    1088,   28,  555,   28, 0x2a,
    1179, 1130,  555,   28, 0x0a,
    1319, 1278,  555,   28, 0x2a,
    1423, 1397,  555,   28, 0x2a,
    1492,  895,  555,   28, 0x2a,
    1553,  242,  555,   28, 0x2a,
    1606,  291,  555,   28, 0x2a,
    1651,   28,  555,   28, 0x2a,
    1688, 1130,  747,   28, 0x0a,
    1788, 1278,  747,   28, 0x2a,
    1867, 1397,  747,   28, 0x2a,
    1937,  895,  747,   28, 0x2a,
    1999,  242,  747,   28, 0x2a,
    2053,  291,  747,   28, 0x2a,
    2099,   28,  747,   28, 0x2a,
    2137, 1130,  555,   28, 0x0a,
    2236, 1278,  555,   28, 0x2a,
    2314, 1397,  555,   28, 0x2a,
    2383,  895,  555,   28, 0x2a,
    2444,  242,  555,   28, 0x2a,
    2497,  291,  555,   28, 0x2a,
    2542,   28,  555,   28, 0x2a,
    2579,  379,  747,   28, 0x0a,
    2620,  379, 2601,   28, 0x0a,
    2647,  379,  519,   28, 0x0a,
    2688,  379,  519,   28, 0x0a,
    2736,  379, 2713,   28, 0x0a,
    2786, 2763,  555,   28, 0x0a,
    2835,  379,  747,   28, 0x0a,
    2861,  379,   28,   28, 0x0a,
    2913, 2880,   28,   28, 0x0a,
    2974,  379, 2953,   28, 0x0a,
    3017,  379, 2996,   28, 0x0a,
    3042,  379,  519,   28, 0x0a,
    3095, 3072,  519,   28, 0x0a,
    3144,  379, 3133,   28, 0x0a,
    3194, 3168,   28,   28, 0x0a,
    3251, 3227,   28,   28, 0x0a,
    3286, 3227,   28,   28, 0x0a,
    3325,  379,  747,   28, 0x0a,
    3353,  379,  555,   28, 0x0a,
    3382,  379,  555,   28, 0x0a,
    3437, 3415,   28,   28, 0x0a,
    3514, 3489,   28,   28, 0x0a,
    3577, 3553,   28,   28, 0x0a,
    3643, 3616,   28,   28, 0x0a,
    3675, 3616,   28,   28, 0x0a,
    3710, 3415,   28,   28, 0x0a,
    3783, 3758,   28,   28, 0x0a,
    3821, 3227,   28,   28, 0x0a,
    3853, 3758,   28,   28, 0x0a,
    3913, 3890,   28,   28, 0x0a,
    3976, 3950,   28,   28, 0x0a,
    4051, 4025,   28,   28, 0x0a,
    4132, 4104,   28,   28, 0x0a,
    4192, 3227,   28,   28, 0x0a,
    4228, 3489,   28,   28, 0x0a,
    4275, 3758,   28,   28, 0x0a,
    4343, 4316,   28,   28, 0x0a,
    4416, 4392,   28,   28, 0x2a,
    4485, 4460,   28,   28, 0x0a,
    4554, 4531,   28,   28, 0x0a,
    4603, 3489,   28,   28, 0x0a,
    4634, 3489,   28,   28, 0x0a,
    4694, 4672,   28,   28, 0x0a,
    4735, 3415,   28,   28, 0x0a,
    4808, 4783,   28,   28, 0x0a,
    4850,  379, 4838,   28, 0x0a,
    4876, 4392,  519,   28, 0x0a,
    4943,  379, 4921,   28, 0x0a,

 // enums: name, flags, count, data
    4966, 0x0,    5,  473,

 // enum data: key, value
    4978, uint(PythonQtWrapper_QFileDialog::LookIn),
    4985, uint(PythonQtWrapper_QFileDialog::FileName),
    4994, uint(PythonQtWrapper_QFileDialog::FileType),
    5003, uint(PythonQtWrapper_QFileDialog::Accept),
    5010, uint(PythonQtWrapper_QFileDialog::Reject),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFileDialog[] = {
    "PythonQtWrapper_QFileDialog\0\0QFileDialog*\0"
    "parent,f\0new_QFileDialog(QWidget*,Qt::WindowFlags)\0"
    "parent,caption,directory,filter\0"
    "new_QFileDialog(QWidget*,QString,QString,QString)\0"
    "parent,caption,directory\0"
    "new_QFileDialog(QWidget*,QString,QString)\0"
    "parent,caption\0new_QFileDialog(QWidget*,QString)\0"
    "parent\0new_QFileDialog(QWidget*)\0"
    "new_QFileDialog()\0obj\0"
    "delete_QFileDialog(QFileDialog*)\0"
    "theWrappedObject\0accept(QFileDialog*)\0"
    "QFileDialog::AcceptMode\0"
    "acceptMode(QFileDialog*)\0theWrappedObject,e\0"
    "changeEvent(QFileDialog*,QEvent*)\0"
    "bool\0confirmOverwrite(QFileDialog*)\0"
    "QString\0defaultSuffix(QFileDialog*)\0"
    "QDir\0directory(QFileDialog*)\0"
    "theWrappedObject,result\0done(QFileDialog*,int)\0"
    "QFileDialog::FileMode\0fileMode(QFileDialog*)\0"
    "QDir::Filters\0filter(QFileDialog*)\0"
    "QStringList\0filters(QFileDialog*)\0"
    "parent,caption,dir,options\0"
    "static_QFileDialog_getExistingDirectory(QWidget*,QString,QString,QFile"
    "Dialog::Options)\0"
    "parent,caption,dir\0"
    "static_QFileDialog_getExistingDirectory(QWidget*,QString,QString)\0"
    "static_QFileDialog_getExistingDirectory(QWidget*,QString)\0"
    "static_QFileDialog_getExistingDirectory(QWidget*)\0"
    "static_QFileDialog_getExistingDirectory()\0"
    "parent,caption,dir,filter,selectedFilter,options\0"
    "static_QFileDialog_getOpenFileName(QWidget*,QString,QString,QString,QS"
    "tring*,QFileDialog::Options)\0"
    "parent,caption,dir,filter,selectedFilter\0"
    "static_QFileDialog_getOpenFileName(QWidget*,QString,QString,QString,QS"
    "tring*)\0"
    "parent,caption,dir,filter\0"
    "static_QFileDialog_getOpenFileName(QWidget*,QString,QString,QString)\0"
    "static_QFileDialog_getOpenFileName(QWidget*,QString,QString)\0"
    "static_QFileDialog_getOpenFileName(QWidget*,QString)\0"
    "static_QFileDialog_getOpenFileName(QWidget*)\0"
    "static_QFileDialog_getOpenFileName()\0"
    "static_QFileDialog_getOpenFileNames(QWidget*,QString,QString,QString,Q"
    "String*,QFileDialog::Options)\0"
    "static_QFileDialog_getOpenFileNames(QWidget*,QString,QString,QString,Q"
    "String*)\0"
    "static_QFileDialog_getOpenFileNames(QWidget*,QString,QString,QString)\0"
    "static_QFileDialog_getOpenFileNames(QWidget*,QString,QString)\0"
    "static_QFileDialog_getOpenFileNames(QWidget*,QString)\0"
    "static_QFileDialog_getOpenFileNames(QWidget*)\0"
    "static_QFileDialog_getOpenFileNames()\0"
    "static_QFileDialog_getSaveFileName(QWidget*,QString,QString,QString,QS"
    "tring*,QFileDialog::Options)\0"
    "static_QFileDialog_getSaveFileName(QWidget*,QString,QString,QString,QS"
    "tring*)\0"
    "static_QFileDialog_getSaveFileName(QWidget*,QString,QString,QString)\0"
    "static_QFileDialog_getSaveFileName(QWidget*,QString,QString)\0"
    "static_QFileDialog_getSaveFileName(QWidget*,QString)\0"
    "static_QFileDialog_getSaveFileName(QWidget*)\0"
    "static_QFileDialog_getSaveFileName()\0"
    "history(QFileDialog*)\0QFileIconProvider*\0"
    "iconProvider(QFileDialog*)\0"
    "isNameFilterDetailsVisible(QFileDialog*)\0"
    "isReadOnly(QFileDialog*)\0"
    "QAbstractItemDelegate*\0"
    "itemDelegate(QFileDialog*)\0"
    "theWrappedObject,label\0"
    "labelText(QFileDialog*,QFileDialog::DialogLabel)\0"
    "nameFilters(QFileDialog*)\0open(QFileDialog*)\0"
    "theWrappedObject,receiver,member\0"
    "open(QFileDialog*,QObject*,const char*)\0"
    "QFileDialog::Options\0options(QFileDialog*)\0"
    "QAbstractProxyModel*\0proxyModel(QFileDialog*)\0"
    "resolveSymlinks(QFileDialog*)\0"
    "theWrappedObject,state\0"
    "restoreState(QFileDialog*,QByteArray)\0"
    "QByteArray\0saveState(QFileDialog*)\0"
    "theWrappedObject,filename\0"
    "selectFile(QFileDialog*,QString)\0"
    "theWrappedObject,filter\0"
    "selectFilter(QFileDialog*,QString)\0"
    "selectNameFilter(QFileDialog*,QString)\0"
    "selectedFiles(QFileDialog*)\0"
    "selectedFilter(QFileDialog*)\0"
    "selectedNameFilter(QFileDialog*)\0"
    "theWrappedObject,mode\0"
    "setAcceptMode(QFileDialog*,QFileDialog::AcceptMode)\0"
    "theWrappedObject,enabled\0"
    "setConfirmOverwrite(QFileDialog*,bool)\0"
    "theWrappedObject,suffix\0"
    "setDefaultSuffix(QFileDialog*,QString)\0"
    "theWrappedObject,directory\0"
    "setDirectory(QFileDialog*,QDir)\0"
    "setDirectory(QFileDialog*,QString)\0"
    "setFileMode(QFileDialog*,QFileDialog::FileMode)\0"
    "theWrappedObject,filters\0"
    "setFilter(QFileDialog*,QDir::Filters)\0"
    "setFilter(QFileDialog*,QString)\0"
    "setFilters(QFileDialog*,QStringList)\0"
    "theWrappedObject,paths\0"
    "setHistory(QFileDialog*,QStringList)\0"
    "theWrappedObject,provider\0"
    "setIconProvider(QFileDialog*,QFileIconProvider*)\0"
    "theWrappedObject,delegate\0"
    "setItemDelegate(QFileDialog*,QAbstractItemDelegate*)\0"
    "theWrappedObject,label,text\0"
    "setLabelText(QFileDialog*,QFileDialog::DialogLabel,QString)\0"
    "setNameFilter(QFileDialog*,QString)\0"
    "setNameFilterDetailsVisible(QFileDialog*,bool)\0"
    "setNameFilters(QFileDialog*,QStringList)\0"
    "theWrappedObject,option,on\0"
    "setOption(QFileDialog*,QFileDialog::Option,bool)\0"
    "theWrappedObject,option\0"
    "setOption(QFileDialog*,QFileDialog::Option)\0"
    "theWrappedObject,options\0"
    "setOptions(QFileDialog*,QFileDialog::Options)\0"
    "theWrappedObject,model\0"
    "setProxyModel(QFileDialog*,QAbstractProxyModel*)\0"
    "setReadOnly(QFileDialog*,bool)\0"
    "setResolveSymlinks(QFileDialog*,bool)\0"
    "theWrappedObject,urls\0"
    "setSidebarUrls(QFileDialog*,QList<QUrl>)\0"
    "setViewMode(QFileDialog*,QFileDialog::ViewMode)\0"
    "theWrappedObject,visible\0"
    "setVisible(QFileDialog*,bool)\0QList<QUrl>\0"
    "sidebarUrls(QFileDialog*)\0"
    "testOption(QFileDialog*,QFileDialog::Option)\0"
    "QFileDialog::ViewMode\0viewMode(QFileDialog*)\0"
    "DialogLabel\0LookIn\0FileName\0FileType\0"
    "Accept\0Reject\0"
};

void PythonQtWrapper_QFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFileDialog *_t = static_cast<PythonQtWrapper_QFileDialog *>(_o);
        switch (_id) {
        case 0: { QFileDialog* _r = _t->new_QFileDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFileDialog**>(_a[0]) = _r; }  break;
        case 1: { QFileDialog* _r = _t->new_QFileDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QFileDialog**>(_a[0]) = _r; }  break;
        case 2: { QFileDialog* _r = _t->new_QFileDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QFileDialog**>(_a[0]) = _r; }  break;
        case 3: { QFileDialog* _r = _t->new_QFileDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFileDialog**>(_a[0]) = _r; }  break;
        case 4: { QFileDialog* _r = _t->new_QFileDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileDialog**>(_a[0]) = _r; }  break;
        case 5: { QFileDialog* _r = _t->new_QFileDialog();
            if (_a[0]) *reinterpret_cast< QFileDialog**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QFileDialog((*reinterpret_cast< QFileDialog*(*)>(_a[1]))); break;
        case 7: _t->accept((*reinterpret_cast< QFileDialog*(*)>(_a[1]))); break;
        case 8: { QFileDialog::AcceptMode _r = _t->acceptMode((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileDialog::AcceptMode*>(_a[0]) = _r; }  break;
        case 9: _t->changeEvent((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 10: { bool _r = _t->confirmOverwrite((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->defaultSuffix((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QDir _r = _t->directory((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = _r; }  break;
        case 13: _t->done((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { QFileDialog::FileMode _r = _t->fileMode((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileDialog::FileMode*>(_a[0]) = _r; }  break;
        case 15: { QDir::Filters _r = _t->filter((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir::Filters*>(_a[0]) = _r; }  break;
        case 16: { QStringList _r = _t->filters((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->static_QFileDialog_getExistingDirectory((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->static_QFileDialog_getExistingDirectory((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->static_QFileDialog_getExistingDirectory((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->static_QFileDialog_getExistingDirectory((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->static_QFileDialog_getExistingDirectory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->static_QFileDialog_getOpenFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->static_QFileDialog_getOpenFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->static_QFileDialog_getOpenFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->static_QFileDialog_getOpenFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->static_QFileDialog_getOpenFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { QString _r = _t->static_QFileDialog_getOpenFileName((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->static_QFileDialog_getOpenFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: { QStringList _r = _t->static_QFileDialog_getOpenFileNames((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 30: { QStringList _r = _t->static_QFileDialog_getOpenFileNames((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 31: { QStringList _r = _t->static_QFileDialog_getOpenFileNames((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 32: { QStringList _r = _t->static_QFileDialog_getOpenFileNames((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 33: { QStringList _r = _t->static_QFileDialog_getOpenFileNames((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 34: { QStringList _r = _t->static_QFileDialog_getOpenFileNames((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 35: { QStringList _r = _t->static_QFileDialog_getOpenFileNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 36: { QString _r = _t->static_QFileDialog_getSaveFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->static_QFileDialog_getSaveFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QString*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->static_QFileDialog_getSaveFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->static_QFileDialog_getSaveFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { QString _r = _t->static_QFileDialog_getSaveFileName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->static_QFileDialog_getSaveFileName((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 42: { QString _r = _t->static_QFileDialog_getSaveFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 43: { QStringList _r = _t->history((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 44: { QFileIconProvider* _r = _t->iconProvider((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileIconProvider**>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->isNameFilterDetailsVisible((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->isReadOnly((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { QAbstractItemDelegate* _r = _t->itemDelegate((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractItemDelegate**>(_a[0]) = _r; }  break;
        case 48: { QString _r = _t->labelText((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::DialogLabel(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 49: { QStringList _r = _t->nameFilters((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 50: _t->open((*reinterpret_cast< QFileDialog*(*)>(_a[1]))); break;
        case 51: _t->open((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 52: { QFileDialog::Options _r = _t->options((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileDialog::Options*>(_a[0]) = _r; }  break;
        case 53: { QAbstractProxyModel* _r = _t->proxyModel((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractProxyModel**>(_a[0]) = _r; }  break;
        case 54: { bool _r = _t->resolveSymlinks((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: { bool _r = _t->restoreState((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { QByteArray _r = _t->saveState((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 57: _t->selectFile((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 58: _t->selectFilter((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 59: _t->selectNameFilter((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 60: { QStringList _r = _t->selectedFiles((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 61: { QString _r = _t->selectedFilter((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 62: { QString _r = _t->selectedNameFilter((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 63: _t->setAcceptMode((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::AcceptMode(*)>(_a[2]))); break;
        case 64: _t->setConfirmOverwrite((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 65: _t->setDefaultSuffix((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 66: _t->setDirectory((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QDir(*)>(_a[2]))); break;
        case 67: _t->setDirectory((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 68: _t->setFileMode((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::FileMode(*)>(_a[2]))); break;
        case 69: _t->setFilter((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2]))); break;
        case 70: _t->setFilter((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 71: _t->setFilters((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 72: _t->setHistory((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 73: _t->setIconProvider((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileIconProvider*(*)>(_a[2]))); break;
        case 74: _t->setItemDelegate((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate*(*)>(_a[2]))); break;
        case 75: _t->setLabelText((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::DialogLabel(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 76: _t->setNameFilter((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 77: _t->setNameFilterDetailsVisible((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 78: _t->setNameFilters((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 79: _t->setOption((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::Option(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 80: _t->setOption((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::Option(*)>(_a[2]))); break;
        case 81: _t->setOptions((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::Options(*)>(_a[2]))); break;
        case 82: _t->setProxyModel((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QAbstractProxyModel*(*)>(_a[2]))); break;
        case 83: _t->setReadOnly((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 84: _t->setResolveSymlinks((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 85: _t->setSidebarUrls((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 86: _t->setViewMode((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::ViewMode(*)>(_a[2]))); break;
        case 87: _t->setVisible((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 88: { QList<QUrl> _r = _t->sidebarUrls((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = _r; }  break;
        case 89: { bool _r = _t->testOption((*reinterpret_cast< QFileDialog*(*)>(_a[1])),(*reinterpret_cast< QFileDialog::Option(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 90: { QFileDialog::ViewMode _r = _t->viewMode((*reinterpret_cast< QFileDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileDialog::ViewMode*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFileDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFileDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFileDialog,
      qt_meta_data_PythonQtWrapper_QFileDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFileDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFileDialog))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFileDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 91)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 91;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFileIconProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   39, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   34,   35,   34, 0x0a,
      82,   78,   34,   34, 0x0a,
     155,  133,  127,   34, 0x0a,
     230,  208,  127,   34, 0x0a,
     273,  208,  265,   34, 0x0a,

 // enums: name, flags, count, data
     308, 0x0,    7,   43,

 // enum data: key, value
     317, uint(PythonQtWrapper_QFileIconProvider::Computer),
     326, uint(PythonQtWrapper_QFileIconProvider::Desktop),
     334, uint(PythonQtWrapper_QFileIconProvider::Trashcan),
     343, uint(PythonQtWrapper_QFileIconProvider::Network),
     351, uint(PythonQtWrapper_QFileIconProvider::Drive),
     357, uint(PythonQtWrapper_QFileIconProvider::Folder),
     364, uint(PythonQtWrapper_QFileIconProvider::File),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFileIconProvider[] = {
    "PythonQtWrapper_QFileIconProvider\0\0"
    "QFileIconProvider*\0new_QFileIconProvider()\0"
    "obj\0delete_QFileIconProvider(QFileIconProvider*)\0"
    "QIcon\0theWrappedObject,type\0"
    "icon(QFileIconProvider*,QFileIconProvider::IconType)\0"
    "theWrappedObject,info\0"
    "icon(QFileIconProvider*,QFileInfo)\0"
    "QString\0type(QFileIconProvider*,QFileInfo)\0"
    "IconType\0Computer\0Desktop\0Trashcan\0"
    "Network\0Drive\0Folder\0File\0"
};

void PythonQtWrapper_QFileIconProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFileIconProvider *_t = static_cast<PythonQtWrapper_QFileIconProvider *>(_o);
        switch (_id) {
        case 0: { QFileIconProvider* _r = _t->new_QFileIconProvider();
            if (_a[0]) *reinterpret_cast< QFileIconProvider**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QFileIconProvider((*reinterpret_cast< QFileIconProvider*(*)>(_a[1]))); break;
        case 2: { QIcon _r = _t->icon((*reinterpret_cast< QFileIconProvider*(*)>(_a[1])),(*reinterpret_cast< QFileIconProvider::IconType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 3: { QIcon _r = _t->icon((*reinterpret_cast< QFileIconProvider*(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->type((*reinterpret_cast< QFileIconProvider*(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFileIconProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFileIconProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFileIconProvider,
      qt_meta_data_PythonQtWrapper_QFileIconProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFileIconProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFileIconProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFileIconProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFileIconProvider))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFileIconProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFileIconProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFileOpenEvent[] = {

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
      53,   48,   32,   31, 0x0a,
      85,   81,   32,   31, 0x0a,
     114,  110,   31,   31, 0x0a,
     178,  161,  153,   31, 0x0a,
     233,  205,  200,   31, 0x0a,
     291,  161,  286,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFileOpenEvent[] = {
    "PythonQtWrapper_QFileOpenEvent\0\0"
    "QFileOpenEvent*\0file\0new_QFileOpenEvent(QString)\0"
    "url\0new_QFileOpenEvent(QUrl)\0obj\0"
    "delete_QFileOpenEvent(QFileOpenEvent*)\0"
    "QString\0theWrappedObject\0file(QFileOpenEvent*)\0"
    "bool\0theWrappedObject,file,flags\0"
    "openFile(QFileOpenEvent*,QFile&,QIODevice::OpenMode)\0"
    "QUrl\0url(QFileOpenEvent*)\0"
};

void PythonQtWrapper_QFileOpenEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFileOpenEvent *_t = static_cast<PythonQtWrapper_QFileOpenEvent *>(_o);
        switch (_id) {
        case 0: { QFileOpenEvent* _r = _t->new_QFileOpenEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileOpenEvent**>(_a[0]) = _r; }  break;
        case 1: { QFileOpenEvent* _r = _t->new_QFileOpenEvent((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileOpenEvent**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFileOpenEvent((*reinterpret_cast< QFileOpenEvent*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->file((*reinterpret_cast< QFileOpenEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->openFile((*reinterpret_cast< QFileOpenEvent*(*)>(_a[1])),(*reinterpret_cast< QFile(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QUrl _r = _t->url((*reinterpret_cast< QFileOpenEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFileOpenEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFileOpenEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFileOpenEvent,
      qt_meta_data_PythonQtWrapper_QFileOpenEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFileOpenEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFileOpenEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFileOpenEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFileOpenEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFileOpenEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFileOpenEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFileSystemModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       1,  314, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      59,   52,   34,   33, 0x0a,
      90,   33,   34,   33, 0x2a,
     117,  113,   33,   33, 0x0a,
     189,  165,  160,   33, 0x0a,
     237,  165,  233,   33, 0x0a,
     297,  280,  233,   33, 0x2a,
     365,  337,  328,   33, 0x0a,
     428,  405,  328,   33, 0x2a,
     511,  464,  160,   33, 0x0a,
     618,  595,  160,   33, 0x0a,
     651,  165,   33,   33, 0x0a,
     698,  405,  692,   33, 0x0a,
     748,  405,  738,   33, 0x0a,
     796,  405,  788,   33, 0x0a,
     836,  405,  788,   33, 0x0a,
     890,  280,  876,   33, 0x0a,
     930,  405,  916,   33, 0x0a,
     967,  165,  160,   33, 0x0a,
    1010,  280,  160,   33, 0x2a,
    1083, 1041,  328,   33, 0x0a,
    1174, 1137,  328,   33, 0x2a,
    1243,  280, 1224,   33, 0x0a,
    1316, 1287, 1275,   33, 0x0a,
    1375, 1353, 1275,   33, 0x2a,
    1443, 1408, 1275,   33, 0x0a,
    1516, 1488, 1275,   33, 0x2a,
    1549,  405,  160,   33, 0x0a,
    1586,  280,  160,   33, 0x0a,
    1626,  405, 1616,   33, 0x0a,
    1706, 1681, 1670,   33, 0x0a,
    1765,  280, 1753,   33, 0x0a,
    1823, 1794, 1275,   33, 0x0a,
    1890, 1868,  328,   33, 0x0a,
    1924,  280,  328,   33, 0x2a,
    1954,  280,  160,   33, 0x0a,
    1992,  280, 1753,   33, 0x0a,
    2046, 2023, 1275,   33, 0x0a,
    2103,  405, 2084,   33, 0x0a,
    2146,  405,  160,   33, 0x0a,
    2184,  280,  160,   33, 0x0a,
    2219,  405,  160,   33, 0x0a,
    2261,  280, 2256,   33, 0x0a,
    2294,  280,  788,   33, 0x0a,
    2322,  165,  233,   33, 0x0a,
    2362,  280,  233,   33, 0x2a,
    2424, 2390,  160,   33, 0x0a,
    2505, 2476,  160,   33, 0x2a,
    2578, 2553,   33,   33, 0x0a,
    2647, 2621,   33,   33, 0x0a,
    2725, 2701,   33,   33, 0x0a,
    2771, 2553,   33,   33, 0x0a,
    2817, 2701,   33,   33, 0x0a,
    2853, 2701,   33,   33, 0x0a,
    2896, 1353, 1275,   33, 0x0a,
    2942,  405, 2935,   33, 0x0a,
    3008, 2978,   33,   33, 0x0a,
    3074, 3050,   33,   33, 0x2a,
    3118,  280, 3102,   33, 0x0a,
    3158,  595,   33,   33, 0x0a,
    3201,  405,  788,   33, 0x0a,

 // enums: name, flags, count, data
    3237, 0x0,    4,  318,

 // enum data: key, value
    3243, uint(PythonQtWrapper_QFileSystemModel::FileIconRole),
    3256, uint(PythonQtWrapper_QFileSystemModel::FilePathRole),
    3269, uint(PythonQtWrapper_QFileSystemModel::FileNameRole),
    3282, uint(PythonQtWrapper_QFileSystemModel::FilePermissions),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFileSystemModel[] = {
    "PythonQtWrapper_QFileSystemModel\0\0"
    "QFileSystemModel*\0parent\0"
    "new_QFileSystemModel(QObject*)\0"
    "new_QFileSystemModel()\0obj\0"
    "delete_QFileSystemModel(QFileSystemModel*)\0"
    "bool\0theWrappedObject,parent\0"
    "canFetchMore(QFileSystemModel*,QModelIndex)\0"
    "int\0columnCount(QFileSystemModel*,QModelIndex)\0"
    "theWrappedObject\0columnCount(QFileSystemModel*)\0"
    "QVariant\0theWrappedObject,index,role\0"
    "data(QFileSystemModel*,QModelIndex,int)\0"
    "theWrappedObject,index\0"
    "data(QFileSystemModel*,QModelIndex)\0"
    "theWrappedObject,data,action,row,column,parent\0"
    "dropMimeData(QFileSystemModel*,const QMimeData*,Qt::DropAction,int,int"
    ",QModelIndex)\0"
    "theWrappedObject,event\0"
    "event(QFileSystemModel*,QEvent*)\0"
    "fetchMore(QFileSystemModel*,QModelIndex)\0"
    "QIcon\0fileIcon(QFileSystemModel*,QModelIndex)\0"
    "QFileInfo\0fileInfo(QFileSystemModel*,QModelIndex)\0"
    "QString\0fileName(QFileSystemModel*,QModelIndex)\0"
    "filePath(QFileSystemModel*,QModelIndex)\0"
    "QDir::Filters\0filter(QFileSystemModel*)\0"
    "Qt::ItemFlags\0flags(QFileSystemModel*,QModelIndex)\0"
    "hasChildren(QFileSystemModel*,QModelIndex)\0"
    "hasChildren(QFileSystemModel*)\0"
    "theWrappedObject,section,orientation,role\0"
    "headerData(QFileSystemModel*,int,Qt::Orientation,int)\0"
    "theWrappedObject,section,orientation\0"
    "headerData(QFileSystemModel*,int,Qt::Orientation)\0"
    "QFileIconProvider*\0iconProvider(QFileSystemModel*)\0"
    "QModelIndex\0theWrappedObject,path,column\0"
    "index(QFileSystemModel*,QString,int)\0"
    "theWrappedObject,path\0"
    "index(QFileSystemModel*,QString)\0"
    "theWrappedObject,row,column,parent\0"
    "index(QFileSystemModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,column\0"
    "index(QFileSystemModel*,int,int)\0"
    "isDir(QFileSystemModel*,QModelIndex)\0"
    "isReadOnly(QFileSystemModel*)\0QDateTime\0"
    "lastModified(QFileSystemModel*,QModelIndex)\0"
    "QMimeData*\0theWrappedObject,indexes\0"
    "mimeData(QFileSystemModel*,QList<QModelIndex>)\0"
    "QStringList\0mimeTypes(QFileSystemModel*)\0"
    "theWrappedObject,parent,name\0"
    "mkdir(QFileSystemModel*,QModelIndex,QString)\0"
    "theWrappedObject,role\0"
    "myComputer(QFileSystemModel*,int)\0"
    "myComputer(QFileSystemModel*)\0"
    "nameFilterDisables(QFileSystemModel*)\0"
    "nameFilters(QFileSystemModel*)\0"
    "theWrappedObject,child\0"
    "parent(QFileSystemModel*,QModelIndex)\0"
    "QFile::Permissions\0"
    "permissions(QFileSystemModel*,QModelIndex)\0"
    "remove(QFileSystemModel*,QModelIndex)\0"
    "resolveSymlinks(QFileSystemModel*)\0"
    "rmdir(QFileSystemModel*,QModelIndex)\0"
    "QDir\0rootDirectory(QFileSystemModel*)\0"
    "rootPath(QFileSystemModel*)\0"
    "rowCount(QFileSystemModel*,QModelIndex)\0"
    "rowCount(QFileSystemModel*)\0"
    "theWrappedObject,index,value,role\0"
    "setData(QFileSystemModel*,QModelIndex,QVariant,int)\0"
    "theWrappedObject,index,value\0"
    "setData(QFileSystemModel*,QModelIndex,QVariant)\0"
    "theWrappedObject,filters\0"
    "setFilter(QFileSystemModel*,QDir::Filters)\0"
    "theWrappedObject,provider\0"
    "setIconProvider(QFileSystemModel*,QFileIconProvider*)\0"
    "theWrappedObject,enable\0"
    "setNameFilterDisables(QFileSystemModel*,bool)\0"
    "setNameFilters(QFileSystemModel*,QStringList)\0"
    "setReadOnly(QFileSystemModel*,bool)\0"
    "setResolveSymlinks(QFileSystemModel*,bool)\0"
    "setRootPath(QFileSystemModel*,QString)\0"
    "qint64\0size(QFileSystemModel*,QModelIndex)\0"
    "theWrappedObject,column,order\0"
    "sort(QFileSystemModel*,int,Qt::SortOrder)\0"
    "theWrappedObject,column\0"
    "sort(QFileSystemModel*,int)\0Qt::DropActions\0"
    "supportedDropActions(QFileSystemModel*)\0"
    "timerEvent(QFileSystemModel*,QTimerEvent*)\0"
    "type(QFileSystemModel*,QModelIndex)\0"
    "Roles\0FileIconRole\0FilePathRole\0"
    "FileNameRole\0FilePermissions\0"
};

void PythonQtWrapper_QFileSystemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFileSystemModel *_t = static_cast<PythonQtWrapper_QFileSystemModel *>(_o);
        switch (_id) {
        case 0: { QFileSystemModel* _r = _t->new_QFileSystemModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileSystemModel**>(_a[0]) = _r; }  break;
        case 1: { QFileSystemModel* _r = _t->new_QFileSystemModel();
            if (_a[0]) *reinterpret_cast< QFileSystemModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFileSystemModel((*reinterpret_cast< QFileSystemModel*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->canFetchMore((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->columnCount((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->columnCount((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->data((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->data((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->dropMimeData((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->event((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->fetchMore((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: { QIcon _r = _t->fileIcon((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 12: { QFileInfo _r = _t->fileInfo((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFileInfo*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->fileName((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->filePath((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QDir::Filters _r = _t->filter((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir::Filters*>(_a[0]) = _r; }  break;
        case 16: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->hasChildren((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->hasChildren((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QVariant _r = _t->headerData((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 20: { QVariant _r = _t->headerData((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 21: { QFileIconProvider* _r = _t->iconProvider((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileIconProvider**>(_a[0]) = _r; }  break;
        case 22: { QModelIndex _r = _t->index((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 23: { QModelIndex _r = _t->index((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 24: { QModelIndex _r = _t->index((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 25: { QModelIndex _r = _t->index((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isDir((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isReadOnly((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { QDateTime _r = _t->lastModified((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 29: { QMimeData* _r = _t->mimeData((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QModelIndex>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 30: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 31: { QModelIndex _r = _t->mkdir((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 32: { QVariant _r = _t->myComputer((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 33: { QVariant _r = _t->myComputer((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->nameFilterDisables((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { QStringList _r = _t->nameFilters((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 36: { QModelIndex _r = _t->parent((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 37: { QFile::Permissions _r = _t->permissions((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFile::Permissions*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->remove((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->resolveSymlinks((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->rmdir((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { QDir _r = _t->rootDirectory((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = _r; }  break;
        case 42: { QString _r = _t->rootPath((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 43: { int _r = _t->rowCount((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 44: { int _r = _t->rowCount((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->setData((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->setData((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: _t->setFilter((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2]))); break;
        case 48: _t->setIconProvider((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< QFileIconProvider*(*)>(_a[2]))); break;
        case 49: _t->setNameFilterDisables((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 50: _t->setNameFilters((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 51: _t->setReadOnly((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 52: _t->setResolveSymlinks((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: { QModelIndex _r = _t->setRootPath((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 54: { qint64 _r = _t->size((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 55: _t->sort((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 56: _t->sort((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        case 58: _t->timerEvent((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 59: { QString _r = _t->type((*reinterpret_cast< QFileSystemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFileSystemModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFileSystemModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFileSystemModel,
      qt_meta_data_PythonQtWrapper_QFileSystemModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFileSystemModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFileSystemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFileSystemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFileSystemModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFileSystemModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFileSystemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFocusEvent[] = {

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
      54,   42,   29,   28, 0x0a,
     105,  100,   29,   28, 0x2a,
     139,  135,   28,   28, 0x0a,
     194,  177,  172,   28, 0x0a,
     217,  177,  172,   28, 0x0a,
     257,  177,  241,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFocusEvent[] = {
    "PythonQtWrapper_QFocusEvent\0\0QFocusEvent*\0"
    "type,reason\0new_QFocusEvent(QEvent::Type,Qt::FocusReason)\0"
    "type\0new_QFocusEvent(QEvent::Type)\0"
    "obj\0delete_QFocusEvent(QFocusEvent*)\0"
    "bool\0theWrappedObject\0gotFocus(QFocusEvent*)\0"
    "lostFocus(QFocusEvent*)\0Qt::FocusReason\0"
    "reason(QFocusEvent*)\0"
};

void PythonQtWrapper_QFocusEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFocusEvent *_t = static_cast<PythonQtWrapper_QFocusEvent *>(_o);
        switch (_id) {
        case 0: { QFocusEvent* _r = _t->new_QFocusEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< Qt::FocusReason(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFocusEvent**>(_a[0]) = _r; }  break;
        case 1: { QFocusEvent* _r = _t->new_QFocusEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFocusEvent**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFocusEvent((*reinterpret_cast< QFocusEvent*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->gotFocus((*reinterpret_cast< QFocusEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->lostFocus((*reinterpret_cast< QFocusEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { Qt::FocusReason _r = _t->reason((*reinterpret_cast< QFocusEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::FocusReason*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFocusEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFocusEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFocusEvent,
      qt_meta_data_PythonQtWrapper_QFocusEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFocusEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFocusEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFocusEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFocusEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFocusEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFocusEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFocusFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     154,  135,  130,   28, 0x0a,
     213,  182,  130,   28, 0x0a,
     280,  256,   28,   28, 0x0a,
     342,  318,   28,   28, 0x0a,
     401,  384,  375,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFocusFrame[] = {
    "PythonQtWrapper_QFocusFrame\0\0QFocusFrame*\0"
    "parent\0new_QFocusFrame(QWidget*)\0"
    "new_QFocusFrame()\0obj\0"
    "delete_QFocusFrame(QFocusFrame*)\0bool\0"
    "theWrappedObject,e\0event(QFocusFrame*,QEvent*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "eventFilter(QFocusFrame*,QObject*,QEvent*)\0"
    "theWrappedObject,arg__1\0"
    "paintEvent(QFocusFrame*,QPaintEvent*)\0"
    "theWrappedObject,widget\0"
    "setWidget(QFocusFrame*,QWidget*)\0"
    "QWidget*\0theWrappedObject\0"
    "widget(QFocusFrame*)\0"
};

void PythonQtWrapper_QFocusFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFocusFrame *_t = static_cast<PythonQtWrapper_QFocusFrame *>(_o);
        switch (_id) {
        case 0: { QFocusFrame* _r = _t->new_QFocusFrame((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFocusFrame**>(_a[0]) = _r; }  break;
        case 1: { QFocusFrame* _r = _t->new_QFocusFrame();
            if (_a[0]) *reinterpret_cast< QFocusFrame**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFocusFrame((*reinterpret_cast< QFocusFrame*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->event((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->eventFilter((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->paintEvent((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 6: _t->setWidget((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 7: { QWidget* _r = _t->widget((*reinterpret_cast< QFocusFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFocusFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFocusFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFocusFrame,
      qt_meta_data_PythonQtWrapper_QFocusFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFocusFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFocusFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFocusFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFocusFrame))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFocusFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFocusFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFontComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       2,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     165,  148,  142,   30, 0x0a,
     217,  198,  193,   30, 0x0a,
     274,  148,  247,   30, 0x0a,
     327,  302,   30,   30, 0x0a,
     409,  385,   30,   30, 0x0a,
     477,  148,  471,   30, 0x0a,
     531,  148,  502,   30, 0x0a,

 // enums: name, flags, count, data
     561, 0x0,    5,   72,
     572, 0x1,    5,   82,

 // enum data: key, value
     584, uint(PythonQtWrapper_QFontComboBox::AllFonts),
     593, uint(PythonQtWrapper_QFontComboBox::ScalableFonts),
     607, uint(PythonQtWrapper_QFontComboBox::NonScalableFonts),
     624, uint(PythonQtWrapper_QFontComboBox::MonospacedFonts),
     640, uint(PythonQtWrapper_QFontComboBox::ProportionalFonts),
     584, uint(PythonQtWrapper_QFontComboBox::AllFonts),
     593, uint(PythonQtWrapper_QFontComboBox::ScalableFonts),
     607, uint(PythonQtWrapper_QFontComboBox::NonScalableFonts),
     624, uint(PythonQtWrapper_QFontComboBox::MonospacedFonts),
     640, uint(PythonQtWrapper_QFontComboBox::ProportionalFonts),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontComboBox[] = {
    "PythonQtWrapper_QFontComboBox\0\0"
    "QFontComboBox*\0parent\0new_QFontComboBox(QWidget*)\0"
    "new_QFontComboBox()\0obj\0"
    "delete_QFontComboBox(QFontComboBox*)\0"
    "QFont\0theWrappedObject\0"
    "currentFont(QFontComboBox*)\0bool\0"
    "theWrappedObject,e\0event(QFontComboBox*,QEvent*)\0"
    "QFontComboBox::FontFilters\0"
    "fontFilters(QFontComboBox*)\0"
    "theWrappedObject,filters\0"
    "setFontFilters(QFontComboBox*,QFontComboBox::FontFilters)\0"
    "theWrappedObject,arg__1\0"
    "setWritingSystem(QFontComboBox*,QFontDatabase::WritingSystem)\0"
    "QSize\0sizeHint(QFontComboBox*)\0"
    "QFontDatabase::WritingSystem\0"
    "writingSystem(QFontComboBox*)\0FontFilter\0"
    "FontFilters\0AllFonts\0ScalableFonts\0"
    "NonScalableFonts\0MonospacedFonts\0"
    "ProportionalFonts\0"
};

void PythonQtWrapper_QFontComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontComboBox *_t = static_cast<PythonQtWrapper_QFontComboBox *>(_o);
        switch (_id) {
        case 0: { QFontComboBox* _r = _t->new_QFontComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontComboBox**>(_a[0]) = _r; }  break;
        case 1: { QFontComboBox* _r = _t->new_QFontComboBox();
            if (_a[0]) *reinterpret_cast< QFontComboBox**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontComboBox((*reinterpret_cast< QFontComboBox*(*)>(_a[1]))); break;
        case 3: { QFont _r = _t->currentFont((*reinterpret_cast< QFontComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QFontComboBox*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QFontComboBox::FontFilters _r = _t->fontFilters((*reinterpret_cast< QFontComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontComboBox::FontFilters*>(_a[0]) = _r; }  break;
        case 6: _t->setFontFilters((*reinterpret_cast< QFontComboBox*(*)>(_a[1])),(*reinterpret_cast< QFontComboBox::FontFilters(*)>(_a[2]))); break;
        case 7: _t->setWritingSystem((*reinterpret_cast< QFontComboBox*(*)>(_a[1])),(*reinterpret_cast< QFontDatabase::WritingSystem(*)>(_a[2]))); break;
        case 8: { QSize _r = _t->sizeHint((*reinterpret_cast< QFontComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 9: { QFontDatabase::WritingSystem _r = _t->writingSystem((*reinterpret_cast< QFontComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDatabase::WritingSystem*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontComboBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontComboBox,
      qt_meta_data_PythonQtWrapper_QFontComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontComboBox))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontComboBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFontDatabase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       1,  184, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   31,   30, 0x0a,
      70,   66,   30,   30, 0x0a,
     120,  111,  107,   30, 0x0a,
     178,  169,  107,   30, 0x0a,
     253,  250,  238,   30, 0x0a,
     338,  308,  303,   30, 0x0a,
     406,  375,  238,   30, 0x0a,
     477,  460,  238,   30, 0x2a,
     548,  508,  502,   30, 0x0a,
     613,  589,  303,   30, 0x0a,
     647,  308,  303,   30, 0x0a,
     696,  589,  303,   30, 0x2a,
     737,  308,  303,   30, 0x0a,
     782,  589,  303,   30, 0x2a,
     819,  308,  303,   30, 0x0a,
     862,  589,  303,   30, 0x2a,
     897,  308,  303,   30, 0x0a,
     948,  589,  303,   30, 0x2a,
     991,  308,  303,   30, 0x0a,
    1041,  308, 1030,   30, 0x0a,
    1084,  589, 1030,   30, 0x2a,
    1119,   30,  303,   30, 0x0a,
    1168,  250,  303,   30, 0x0a,
    1216,  308, 1030,   30, 0x0a,
    1260,   30, 1030,   30, 0x0a,
    1327, 1305, 1297,   30, 0x0a,
    1387, 1361, 1297,   30, 0x0a,
    1425,  589,  238,   30, 0x0a,
    1456,   30,  303,   30, 0x0a,
    1509,  308,  107,   30, 0x0a,
    1562, 1548, 1297,   30, 0x0a,
    1631, 1548, 1297,   30, 0x0a,
    1738,  460, 1702,   30, 0x0a,
    1769,  589, 1702,   30, 0x0a,

 // enums: name, flags, count, data
    1808, 0x0,   36,  188,

 // enum data: key, value
    1822, uint(PythonQtWrapper_QFontDatabase::Any),
    1826, uint(PythonQtWrapper_QFontDatabase::Latin),
    1832, uint(PythonQtWrapper_QFontDatabase::Greek),
    1838, uint(PythonQtWrapper_QFontDatabase::Cyrillic),
    1847, uint(PythonQtWrapper_QFontDatabase::Armenian),
    1856, uint(PythonQtWrapper_QFontDatabase::Hebrew),
    1863, uint(PythonQtWrapper_QFontDatabase::Arabic),
    1870, uint(PythonQtWrapper_QFontDatabase::Syriac),
    1877, uint(PythonQtWrapper_QFontDatabase::Thaana),
    1884, uint(PythonQtWrapper_QFontDatabase::Devanagari),
    1895, uint(PythonQtWrapper_QFontDatabase::Bengali),
    1903, uint(PythonQtWrapper_QFontDatabase::Gurmukhi),
    1912, uint(PythonQtWrapper_QFontDatabase::Gujarati),
    1921, uint(PythonQtWrapper_QFontDatabase::Oriya),
    1927, uint(PythonQtWrapper_QFontDatabase::Tamil),
    1933, uint(PythonQtWrapper_QFontDatabase::Telugu),
    1940, uint(PythonQtWrapper_QFontDatabase::Kannada),
    1948, uint(PythonQtWrapper_QFontDatabase::Malayalam),
    1958, uint(PythonQtWrapper_QFontDatabase::Sinhala),
    1966, uint(PythonQtWrapper_QFontDatabase::Thai),
    1971, uint(PythonQtWrapper_QFontDatabase::Lao),
    1975, uint(PythonQtWrapper_QFontDatabase::Tibetan),
    1983, uint(PythonQtWrapper_QFontDatabase::Myanmar),
    1991, uint(PythonQtWrapper_QFontDatabase::Georgian),
    2000, uint(PythonQtWrapper_QFontDatabase::Khmer),
    2006, uint(PythonQtWrapper_QFontDatabase::SimplifiedChinese),
    2024, uint(PythonQtWrapper_QFontDatabase::TraditionalChinese),
    2043, uint(PythonQtWrapper_QFontDatabase::Japanese),
    2052, uint(PythonQtWrapper_QFontDatabase::Korean),
    2059, uint(PythonQtWrapper_QFontDatabase::Vietnamese),
    2070, uint(PythonQtWrapper_QFontDatabase::Symbol),
    2077, uint(PythonQtWrapper_QFontDatabase::Other),
    2083, uint(PythonQtWrapper_QFontDatabase::Ogham),
    2089, uint(PythonQtWrapper_QFontDatabase::Runic),
    2095, uint(PythonQtWrapper_QFontDatabase::Nko),
    2099, uint(PythonQtWrapper_QFontDatabase::WritingSystemsCount),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontDatabase[] = {
    "PythonQtWrapper_QFontDatabase\0\0"
    "QFontDatabase*\0new_QFontDatabase()\0"
    "obj\0delete_QFontDatabase(QFontDatabase*)\0"
    "int\0fileName\0"
    "static_QFontDatabase_addApplicationFont(QString)\0"
    "fontData\0"
    "static_QFontDatabase_addApplicationFontFromData(QByteArray)\0"
    "QStringList\0id\0"
    "static_QFontDatabase_applicationFontFamilies(int)\0"
    "bool\0theWrappedObject,family,style\0"
    "bold(QFontDatabase*,QString,QString)\0"
    "theWrappedObject,writingSystem\0"
    "families(QFontDatabase*,QFontDatabase::WritingSystem)\0"
    "theWrappedObject\0families(QFontDatabase*)\0"
    "QFont\0theWrappedObject,family,style,pointSize\0"
    "font(QFontDatabase*,QString,QString,int)\0"
    "theWrappedObject,family\0"
    "hasFamily(QFontDatabase*,QString)\0"
    "isBitmapScalable(QFontDatabase*,QString,QString)\0"
    "isBitmapScalable(QFontDatabase*,QString)\0"
    "isFixedPitch(QFontDatabase*,QString,QString)\0"
    "isFixedPitch(QFontDatabase*,QString)\0"
    "isScalable(QFontDatabase*,QString,QString)\0"
    "isScalable(QFontDatabase*,QString)\0"
    "isSmoothlyScalable(QFontDatabase*,QString,QString)\0"
    "isSmoothlyScalable(QFontDatabase*,QString)\0"
    "italic(QFontDatabase*,QString,QString)\0"
    "QList<int>\0pointSizes(QFontDatabase*,QString,QString)\0"
    "pointSizes(QFontDatabase*,QString)\0"
    "static_QFontDatabase_removeAllApplicationFonts()\0"
    "static_QFontDatabase_removeApplicationFont(int)\0"
    "smoothSizes(QFontDatabase*,QString,QString)\0"
    "static_QFontDatabase_standardSizes()\0"
    "QString\0theWrappedObject,font\0"
    "styleString(QFontDatabase*,QFont)\0"
    "theWrappedObject,fontInfo\0"
    "styleString(QFontDatabase*,QFontInfo)\0"
    "styles(QFontDatabase*,QString)\0"
    "static_QFontDatabase_supportsThreadedFontRendering()\0"
    "weight(QFontDatabase*,QString,QString)\0"
    "writingSystem\0"
    "static_QFontDatabase_writingSystemName(QFontDatabase::WritingSystem)\0"
    "static_QFontDatabase_writingSystemSample(QFontDatabase::WritingSystem)\0"
    "QList<QFontDatabase::WritingSystem>\0"
    "writingSystems(QFontDatabase*)\0"
    "writingSystems(QFontDatabase*,QString)\0"
    "WritingSystem\0Any\0Latin\0Greek\0Cyrillic\0"
    "Armenian\0Hebrew\0Arabic\0Syriac\0Thaana\0"
    "Devanagari\0Bengali\0Gurmukhi\0Gujarati\0"
    "Oriya\0Tamil\0Telugu\0Kannada\0Malayalam\0"
    "Sinhala\0Thai\0Lao\0Tibetan\0Myanmar\0"
    "Georgian\0Khmer\0SimplifiedChinese\0"
    "TraditionalChinese\0Japanese\0Korean\0"
    "Vietnamese\0Symbol\0Other\0Ogham\0Runic\0"
    "Nko\0WritingSystemsCount\0"
};

void PythonQtWrapper_QFontDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontDatabase *_t = static_cast<PythonQtWrapper_QFontDatabase *>(_o);
        switch (_id) {
        case 0: { QFontDatabase* _r = _t->new_QFontDatabase();
            if (_a[0]) *reinterpret_cast< QFontDatabase**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QFontDatabase((*reinterpret_cast< QFontDatabase*(*)>(_a[1]))); break;
        case 2: { int _r = _t->static_QFontDatabase_addApplicationFont((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->static_QFontDatabase_addApplicationFontFromData((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QStringList _r = _t->static_QFontDatabase_applicationFontFamilies((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->bold((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QStringList _r = _t->families((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< QFontDatabase::WritingSystem(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 7: { QStringList _r = _t->families((*reinterpret_cast< QFontDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { QFont _r = _t->font((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasFamily((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isBitmapScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isBitmapScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isFixedPitch((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isFixedPitch((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isSmoothlyScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isSmoothlyScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->italic((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QList<int> _r = _t->pointSizes((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 20: { QList<int> _r = _t->pointSizes((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->static_QFontDatabase_removeAllApplicationFonts();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->static_QFontDatabase_removeApplicationFont((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QList<int> _r = _t->smoothSizes((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 24: { QList<int> _r = _t->static_QFontDatabase_standardSizes();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->styleString((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->styleString((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QFontInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { QStringList _r = _t->styles((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->static_QFontDatabase_supportsThreadedFontRendering();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->weight((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->static_QFontDatabase_writingSystemName((*reinterpret_cast< QFontDatabase::WritingSystem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->static_QFontDatabase_writingSystemSample((*reinterpret_cast< QFontDatabase::WritingSystem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { QList<QFontDatabase::WritingSystem> _r = _t->writingSystems((*reinterpret_cast< QFontDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QFontDatabase::WritingSystem>*>(_a[0]) = _r; }  break;
        case 33: { QList<QFontDatabase::WritingSystem> _r = _t->writingSystems((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QFontDatabase::WritingSystem>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontDatabase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontDatabase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontDatabase,
      qt_meta_data_PythonQtWrapper_QFontDatabase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontDatabase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontDatabase))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontDatabase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFontDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
     108,   93,   29,   28, 0x0a,
     148,  140,   29,   28, 0x2a,
     175,  171,   28,   28, 0x0a,
     231,  208,   28,   28, 0x0a,
     288,  271,  265,   28, 0x0a,
     338,  314,   28,   28, 0x0a,
     371,  361,  265,   28, 0x0a,
     417,  414,  265,   28, 0x2a,
     469,  451,  265,   28, 0x0a,
     529,  518,  265,   28, 0x2a,
     593,  569,  265,   28, 0x0a,
     682,  650,  265,   28, 0x0a,
     770,  271,   28,   28, 0x0a,
     822,  789,   28,   28, 0x0a,
     893,  271,  862,   28, 0x0a,
     915,  271,  265,   28, 0x0a,
     964,  942,   28,   28, 0x0a,
    1026,  999,   28,   28, 0x0a,
    1109, 1085,   28,   28, 0x2a,
    1188, 1163,   28,   28, 0x0a,
    1269, 1244,   28,   28, 0x0a,
    1304, 1085, 1299,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontDialog[] = {
    "PythonQtWrapper_QFontDialog\0\0QFontDialog*\0"
    "parent\0new_QFontDialog(QWidget*)\0"
    "new_QFontDialog()\0initial,parent\0"
    "new_QFontDialog(QFont,QWidget*)\0initial\0"
    "new_QFontDialog(QFont)\0obj\0"
    "delete_QFontDialog(QFontDialog*)\0"
    "theWrappedObject,event\0"
    "changeEvent(QFontDialog*,QEvent*)\0"
    "QFont\0theWrappedObject\0currentFont(QFontDialog*)\0"
    "theWrappedObject,result\0done(QFontDialog*,int)\0"
    "ok,parent\0static_QFontDialog_getFont(bool*,QWidget*)\0"
    "ok\0static_QFontDialog_getFont(bool*)\0"
    "ok,initial,parent\0"
    "static_QFontDialog_getFont(bool*,QFont,QWidget*)\0"
    "ok,initial\0static_QFontDialog_getFont(bool*,QFont)\0"
    "ok,initial,parent,title\0"
    "static_QFontDialog_getFont(bool*,QFont,QWidget*,QString)\0"
    "ok,initial,parent,title,options\0"
    "static_QFontDialog_getFont(bool*,QFont,QWidget*,QString,QFontDialog::F"
    "ontDialogOptions)\0"
    "open(QFontDialog*)\0theWrappedObject,receiver,member\0"
    "open(QFontDialog*,QObject*,const char*)\0"
    "QFontDialog::FontDialogOptions\0"
    "options(QFontDialog*)\0selectedFont(QFontDialog*)\0"
    "theWrappedObject,font\0"
    "setCurrentFont(QFontDialog*,QFont)\0"
    "theWrappedObject,option,on\0"
    "setOption(QFontDialog*,QFontDialog::FontDialogOption,bool)\0"
    "theWrappedObject,option\0"
    "setOption(QFontDialog*,QFontDialog::FontDialogOption)\0"
    "theWrappedObject,options\0"
    "setOptions(QFontDialog*,QFontDialog::FontDialogOptions)\0"
    "theWrappedObject,visible\0"
    "setVisible(QFontDialog*,bool)\0bool\0"
    "testOption(QFontDialog*,QFontDialog::FontDialogOption)\0"
};

void PythonQtWrapper_QFontDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontDialog *_t = static_cast<PythonQtWrapper_QFontDialog *>(_o);
        switch (_id) {
        case 0: { QFontDialog* _r = _t->new_QFontDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDialog**>(_a[0]) = _r; }  break;
        case 1: { QFontDialog* _r = _t->new_QFontDialog();
            if (_a[0]) *reinterpret_cast< QFontDialog**>(_a[0]) = _r; }  break;
        case 2: { QFontDialog* _r = _t->new_QFontDialog((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFontDialog**>(_a[0]) = _r; }  break;
        case 3: { QFontDialog* _r = _t->new_QFontDialog((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDialog**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QFontDialog((*reinterpret_cast< QFontDialog*(*)>(_a[1]))); break;
        case 5: _t->changeEvent((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 6: { QFont _r = _t->currentFont((*reinterpret_cast< QFontDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 7: _t->done((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 9: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 10: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 11: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 12: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 13: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QFontDialog::FontDialogOptions(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 14: _t->open((*reinterpret_cast< QFontDialog*(*)>(_a[1]))); break;
        case 15: _t->open((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 16: { QFontDialog::FontDialogOptions _r = _t->options((*reinterpret_cast< QFontDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDialog::FontDialogOptions*>(_a[0]) = _r; }  break;
        case 17: { QFont _r = _t->selectedFont((*reinterpret_cast< QFontDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 18: _t->setCurrentFont((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 19: _t->setOption((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QFontDialog::FontDialogOption(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->setOption((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QFontDialog::FontDialogOption(*)>(_a[2]))); break;
        case 21: _t->setOptions((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QFontDialog::FontDialogOptions(*)>(_a[2]))); break;
        case 22: _t->setVisible((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: { bool _r = _t->testOption((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QFontDialog::FontDialogOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontDialog,
      qt_meta_data_PythonQtWrapper_QFontDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontDialog))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFontInfo[] = {

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
      45,   38,   27,   26, 0x0a,
      66,   38,   27,   26, 0x0a,
      95,   91,   26,   26, 0x0a,
     146,  129,  124,   26, 0x0a,
     163,  129,  124,   26, 0x0a,
     194,  129,  186,   26, 0x0a,
     213,  129,  124,   26, 0x0a,
     236,  129,  124,   26, 0x0a,
     255,  129,  124,   26, 0x0a,
     280,  129,  276,   26, 0x0a,
     302,  129,  276,   26, 0x0a,
     330,  129,  324,   26, 0x0a,
     353,  129,  124,   26, 0x0a,
     373,  129,  124,   26, 0x0a,
     408,  129,  395,   26, 0x0a,
     443,  129,  426,   26, 0x0a,
     465,  129,  186,   26, 0x0a,
     487,  129,  124,   26, 0x0a,
     509,  129,  276,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontInfo[] = {
    "PythonQtWrapper_QFontInfo\0\0QFontInfo*\0"
    "arg__1\0new_QFontInfo(QFont)\0"
    "new_QFontInfo(QFontInfo)\0obj\0"
    "delete_QFontInfo(QFontInfo*)\0bool\0"
    "theWrappedObject\0bold(QFontInfo*)\0"
    "exactMatch(QFontInfo*)\0QString\0"
    "family(QFontInfo*)\0fixedPitch(QFontInfo*)\0"
    "italic(QFontInfo*)\0overline(QFontInfo*)\0"
    "int\0pixelSize(QFontInfo*)\0"
    "pointSize(QFontInfo*)\0qreal\0"
    "pointSizeF(QFontInfo*)\0rawMode(QFontInfo*)\0"
    "strikeOut(QFontInfo*)\0QFont::Style\0"
    "style(QFontInfo*)\0QFont::StyleHint\0"
    "styleHint(QFontInfo*)\0styleName(QFontInfo*)\0"
    "underline(QFontInfo*)\0weight(QFontInfo*)\0"
};

void PythonQtWrapper_QFontInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontInfo *_t = static_cast<PythonQtWrapper_QFontInfo *>(_o);
        switch (_id) {
        case 0: { QFontInfo* _r = _t->new_QFontInfo((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontInfo**>(_a[0]) = _r; }  break;
        case 1: { QFontInfo* _r = _t->new_QFontInfo((*reinterpret_cast< const QFontInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontInfo**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontInfo((*reinterpret_cast< QFontInfo*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->bold((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->exactMatch((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->family((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->fixedPitch((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->italic((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->overline((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->pixelSize((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->pointSize((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->pointSizeF((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->rawMode((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->strikeOut((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QFont::Style _r = _t->style((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::Style*>(_a[0]) = _r; }  break;
        case 15: { QFont::StyleHint _r = _t->styleHint((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::StyleHint*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->styleName((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->underline((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->weight((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontInfo,
      qt_meta_data_PythonQtWrapper_QFontInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFontMetrics[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      85,   75,   30,   29, 0x0a,
     127,  123,   29,   29, 0x0a,
     183,  166,  162,   29, 0x0a,
     205,  166,  162,   29, 0x0a,
     267,  243,  237,   29, 0x0a,
     349,  301,  237,   29, 0x0a,
     443,  404,  237,   29, 0x2a,
     523,  493,  237,   29, 0x2a,
     591,  569,  237,   29, 0x0a,
     681,  627,  237,   29, 0x0a,
     791,  746,  237,   29, 0x2a,
     887,  851,  237,   29, 0x2a,
     968,  943,  162,   29, 0x0a,
    1005,  166,  162,   29, 0x0a,
    1075, 1036, 1028,   29, 0x0a,
    1168, 1135, 1028,   29, 0x2a,
    1224,  166,  162,   29, 0x0a,
    1251,  243, 1246,   29, 0x0a,
    1301, 1279, 1246,   29, 0x0a,
    1332,  166,  162,   29, 0x0a,
    1355,  243,  162,   29, 0x0a,
    1388,  166,  162,   29, 0x0a,
    1415,  166,  162,   29, 0x0a,
    1440,  166,  162,   29, 0x0a,
    1464,  166,  162,   29, 0x0a,
    1494,  166,  162,   29, 0x0a,
    1525,  166,  162,   29, 0x0a,
    1552,  243,  162,   29, 0x0a,
    1637, 1592, 1586,   29, 0x0a,
    1714, 1678, 1586,   29, 0x2a,
    1777, 1750, 1586,   29, 0x2a,
    1809,  166,  162,   29, 0x0a,
    1837,  569,  237,   29, 0x0a,
    1878,  166,  162,   29, 0x0a,
    1906,  243,  162,   29, 0x0a,
    1961, 1933,  162,   29, 0x0a,
    1994,  243,  162,   29, 0x2a,
    2057, 2023,  162,   29, 0x0a,
    2094,  166,  162,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontMetrics[] = {
    "PythonQtWrapper_QFontMetrics\0\0"
    "QFontMetrics*\0arg__1\0new_QFontMetrics(QFont)\0"
    "arg__1,pd\0new_QFontMetrics(QFont,QPaintDevice*)\0"
    "obj\0delete_QFontMetrics(QFontMetrics*)\0"
    "int\0theWrappedObject\0ascent(QFontMetrics*)\0"
    "averageCharWidth(QFontMetrics*)\0QRect\0"
    "theWrappedObject,arg__1\0"
    "boundingRect(QFontMetrics*,QChar)\0"
    "theWrappedObject,r,flags,text,tabstops,tabarray\0"
    "boundingRect(QFontMetrics*,QRect,int,QString,int,int*)\0"
    "theWrappedObject,r,flags,text,tabstops\0"
    "boundingRect(QFontMetrics*,QRect,int,QString,int)\0"
    "theWrappedObject,r,flags,text\0"
    "boundingRect(QFontMetrics*,QRect,int,QString)\0"
    "theWrappedObject,text\0"
    "boundingRect(QFontMetrics*,QString)\0"
    "theWrappedObject,x,y,w,h,flags,text,tabstops,tabarray\0"
    "boundingRect(QFontMetrics*,int,int,int,int,int,QString,int,int*)\0"
    "theWrappedObject,x,y,w,h,flags,text,tabstops\0"
    "boundingRect(QFontMetrics*,int,int,int,int,int,QString,int)\0"
    "theWrappedObject,x,y,w,h,flags,text\0"
    "boundingRect(QFontMetrics*,int,int,int,int,int,QString)\0"
    "theWrappedObject,str,pos\0"
    "charWidth(QFontMetrics*,QString,int)\0"
    "descent(QFontMetrics*)\0QString\0"
    "theWrappedObject,text,mode,width,flags\0"
    "elidedText(QFontMetrics*,QString,Qt::TextElideMode,int,int)\0"
    "theWrappedObject,text,mode,width\0"
    "elidedText(QFontMetrics*,QString,Qt::TextElideMode,int)\0"
    "height(QFontMetrics*)\0bool\0"
    "inFont(QFontMetrics*,QChar)\0"
    "theWrappedObject,ucs4\0"
    "inFontUcs4(QFontMetrics*,uint)\0"
    "leading(QFontMetrics*)\0"
    "leftBearing(QFontMetrics*,QChar)\0"
    "lineSpacing(QFontMetrics*)\0"
    "lineWidth(QFontMetrics*)\0"
    "maxWidth(QFontMetrics*)\0"
    "minLeftBearing(QFontMetrics*)\0"
    "minRightBearing(QFontMetrics*)\0"
    "overlinePos(QFontMetrics*)\0"
    "rightBearing(QFontMetrics*,QChar)\0"
    "QSize\0theWrappedObject,flags,str,tabstops,tabarray\0"
    "size(QFontMetrics*,int,QString,int,int*)\0"
    "theWrappedObject,flags,str,tabstops\0"
    "size(QFontMetrics*,int,QString,int)\0"
    "theWrappedObject,flags,str\0"
    "size(QFontMetrics*,int,QString)\0"
    "strikeOutPos(QFontMetrics*)\0"
    "tightBoundingRect(QFontMetrics*,QString)\0"
    "underlinePos(QFontMetrics*)\0"
    "width(QFontMetrics*,QChar)\0"
    "theWrappedObject,arg__1,len\0"
    "width(QFontMetrics*,QString,int)\0"
    "width(QFontMetrics*,QString)\0"
    "theWrappedObject,arg__1,len,flags\0"
    "width(QFontMetrics*,QString,int,int)\0"
    "xHeight(QFontMetrics*)\0"
};

void PythonQtWrapper_QFontMetrics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontMetrics *_t = static_cast<PythonQtWrapper_QFontMetrics *>(_o);
        switch (_id) {
        case 0: { QFontMetrics* _r = _t->new_QFontMetrics((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontMetrics**>(_a[0]) = _r; }  break;
        case 1: { QFontMetrics* _r = _t->new_QFontMetrics((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFontMetrics**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontMetrics((*reinterpret_cast< QFontMetrics*(*)>(_a[1]))); break;
        case 3: { int _r = _t->ascent((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->averageCharWidth((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 6: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 7: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 8: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 9: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 10: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int*(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 11: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 12: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->charWidth((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->descent((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->elidedText((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->elidedText((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->height((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->inFont((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->inFontUcs4((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->leading((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->leftBearing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->lineSpacing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->lineWidth((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->maxWidth((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->minLeftBearing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->minRightBearing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->overlinePos((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->rightBearing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { QSize _r = _t->size((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 30: { QSize _r = _t->size((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 31: { QSize _r = _t->size((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->strikeOutPos((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { QRect _r = _t->tightBoundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->underlinePos((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { int _r = _t->width((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->width((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->width((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->width((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { int _r = _t->xHeight((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontMetrics::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontMetrics::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontMetrics,
      qt_meta_data_PythonQtWrapper_QFontMetrics, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontMetrics::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontMetrics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontMetrics::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontMetrics))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontMetrics*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontMetrics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFontMetricsF[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      88,   78,   31,   30, 0x0a,
     131,  127,   30,   30, 0x0a,
     191,  174,  168,   30, 0x0a,
     214,  174,  168,   30, 0x0a,
     278,  254,  247,   30, 0x0a,
     363,  313,  247,   30, 0x0a,
     461,  420,  247,   30, 0x2a,
     545,  513,  247,   30, 0x2a,
     617,  593,  247,   30, 0x0a,
     654,  174,  168,   30, 0x0a,
     725,  686,  678,   30, 0x0a,
     821,  788,  678,   30, 0x2a,
     880,  174,  168,   30, 0x0a,
     908,  254,  903,   30, 0x0a,
     959,  937,  903,   30, 0x0a,
     991,  174,  168,   30, 0x0a,
    1015,  254,  168,   30, 0x0a,
    1049,  174,  168,   30, 0x0a,
    1077,  174,  168,   30, 0x0a,
    1103,  174,  168,   30, 0x0a,
    1128,  174,  168,   30, 0x0a,
    1159,  174,  168,   30, 0x0a,
    1191,  174,  168,   30, 0x0a,
    1219,  254,  168,   30, 0x0a,
    1306, 1261, 1254,   30, 0x0a,
    1384, 1348, 1254,   30, 0x2a,
    1448, 1421, 1254,   30, 0x2a,
    1481,  174,  168,   30, 0x0a,
    1532, 1510,  247,   30, 0x0a,
    1574,  174,  168,   30, 0x0a,
    1603,  254,  168,   30, 0x0a,
    1631,  593,  168,   30, 0x0a,
    1661,  174,  168,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontMetricsF[] = {
    "PythonQtWrapper_QFontMetricsF\0\0"
    "QFontMetricsF*\0arg__1\0new_QFontMetricsF(QFont)\0"
    "arg__1,pd\0new_QFontMetricsF(QFont,QPaintDevice*)\0"
    "obj\0delete_QFontMetricsF(QFontMetricsF*)\0"
    "qreal\0theWrappedObject\0ascent(QFontMetricsF*)\0"
    "averageCharWidth(QFontMetricsF*)\0"
    "QRectF\0theWrappedObject,arg__1\0"
    "boundingRect(QFontMetricsF*,QChar)\0"
    "theWrappedObject,r,flags,string,tabstops,tabarray\0"
    "boundingRect(QFontMetricsF*,QRectF,int,QString,int,int*)\0"
    "theWrappedObject,r,flags,string,tabstops\0"
    "boundingRect(QFontMetricsF*,QRectF,int,QString,int)\0"
    "theWrappedObject,r,flags,string\0"
    "boundingRect(QFontMetricsF*,QRectF,int,QString)\0"
    "theWrappedObject,string\0"
    "boundingRect(QFontMetricsF*,QString)\0"
    "descent(QFontMetricsF*)\0QString\0"
    "theWrappedObject,text,mode,width,flags\0"
    "elidedText(QFontMetricsF*,QString,Qt::TextElideMode,qreal,int)\0"
    "theWrappedObject,text,mode,width\0"
    "elidedText(QFontMetricsF*,QString,Qt::TextElideMode,qreal)\0"
    "height(QFontMetricsF*)\0bool\0"
    "inFont(QFontMetricsF*,QChar)\0"
    "theWrappedObject,ucs4\0"
    "inFontUcs4(QFontMetricsF*,uint)\0"
    "leading(QFontMetricsF*)\0"
    "leftBearing(QFontMetricsF*,QChar)\0"
    "lineSpacing(QFontMetricsF*)\0"
    "lineWidth(QFontMetricsF*)\0"
    "maxWidth(QFontMetricsF*)\0"
    "minLeftBearing(QFontMetricsF*)\0"
    "minRightBearing(QFontMetricsF*)\0"
    "overlinePos(QFontMetricsF*)\0"
    "rightBearing(QFontMetricsF*,QChar)\0"
    "QSizeF\0theWrappedObject,flags,str,tabstops,tabarray\0"
    "size(QFontMetricsF*,int,QString,int,int*)\0"
    "theWrappedObject,flags,str,tabstops\0"
    "size(QFontMetricsF*,int,QString,int)\0"
    "theWrappedObject,flags,str\0"
    "size(QFontMetricsF*,int,QString)\0"
    "strikeOutPos(QFontMetricsF*)\0"
    "theWrappedObject,text\0"
    "tightBoundingRect(QFontMetricsF*,QString)\0"
    "underlinePos(QFontMetricsF*)\0"
    "width(QFontMetricsF*,QChar)\0"
    "width(QFontMetricsF*,QString)\0"
    "xHeight(QFontMetricsF*)\0"
};

void PythonQtWrapper_QFontMetricsF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontMetricsF *_t = static_cast<PythonQtWrapper_QFontMetricsF *>(_o);
        switch (_id) {
        case 0: { QFontMetricsF* _r = _t->new_QFontMetricsF((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontMetricsF**>(_a[0]) = _r; }  break;
        case 1: { QFontMetricsF* _r = _t->new_QFontMetricsF((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFontMetricsF**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontMetricsF((*reinterpret_cast< QFontMetricsF*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->ascent((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->averageCharWidth((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 6: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 7: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 8: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 9: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->descent((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->elidedText((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->elidedText((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->height((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->inFont((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->inFontUcs4((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->leading((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: { qreal _r = _t->leftBearing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 18: { qreal _r = _t->lineSpacing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 19: { qreal _r = _t->lineWidth((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 20: { qreal _r = _t->maxWidth((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 21: { qreal _r = _t->minLeftBearing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 22: { qreal _r = _t->minRightBearing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 23: { qreal _r = _t->overlinePos((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 24: { qreal _r = _t->rightBearing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 25: { QSizeF _r = _t->size((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 26: { QSizeF _r = _t->size((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 27: { QSizeF _r = _t->size((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 28: { qreal _r = _t->strikeOutPos((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 29: { QRectF _r = _t->tightBoundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 30: { qreal _r = _t->underlinePos((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 31: { qreal _r = _t->width((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 32: { qreal _r = _t->width((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 33: { qreal _r = _t->xHeight((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontMetricsF::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontMetricsF::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontMetricsF,
      qt_meta_data_PythonQtWrapper_QFontMetricsF, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontMetricsF::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontMetricsF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontMetricsF::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontMetricsF))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontMetricsF*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontMetricsF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFormLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     152,  130,   28,   28, 0x0a,
     211,  187,   28,   28, 0x0a,
     270,  241,   28,   28, 0x0a,
     309,  241,   28,   28, 0x0a,
     372,  348,   28,   28, 0x0a,
     435,  402,   28,   28, 0x0a,
     473,  402,   28,   28, 0x0a,
     532,  515,  511,   28, 0x0a,
     569,  515,  552,   28, 0x0a,
     634,  515,  603,   28, 0x0a,
     680,  515,  666,   28, 0x0a,
     746,  708,   28,   28, 0x0a,
     847,  808,   28,   28, 0x0a,
     955,  916,   28,   28, 0x0a,
    1029,  515, 1024,   28, 0x0a,
    1084, 1061,  511,   28, 0x0a,
    1117,  515,  511,   28, 0x0a,
    1177, 1149,   28,   28, 0x0a,
    1247, 1214,   28,   28, 0x0a,
    1293, 1214,   28,   28, 0x0a,
    1367, 1339,   28,   28, 0x0a,
    1441, 1404,   28,   28, 0x0a,
    1486, 1404,   28,   28, 0x0a,
    1531,  515,   28,   28, 0x0a,
    1592, 1569, 1556,   28, 0x0a,
    1643, 1617, 1556,   28, 0x0a,
    1690,  515,  666,   28, 0x0a,
    1751, 1728, 1719,   28, 0x0a,
    1788, 1728, 1719,   28, 0x0a,
    1831,  515, 1825,   28, 0x0a,
    1857,  515,  511,   28, 0x0a,
    1907,  515, 1880,   28, 0x0a,
    1959, 1935,   28,   28, 0x0a,
    2052, 2025,   28,   28, 0x0a,
    2119, 2097,   28,   28, 0x0a,
    2176, 2151,   28,   28, 0x0a,
    2246, 2215,   28,   28, 0x0a,
    2307, 2025,   28,   28, 0x0a,
    2386, 2353,   28,   28, 0x0a,
    2445, 1935,   28,   28, 0x0a,
    2527, 2503,   28,   28, 0x0a,
    2556, 2151,   28,   28, 0x0a,
    2626, 2593,   28,   28, 0x0a,
    2685,  515, 1825,   28, 0x0a,
    2708,  515,  511,   28, 0x0a,
    2730, 1569, 1556,   28, 0x0a,
    2755,  515,  511,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFormLayout[] = {
    "PythonQtWrapper_QFormLayout\0\0QFormLayout*\0"
    "parent\0new_QFormLayout(QWidget*)\0"
    "new_QFormLayout()\0obj\0"
    "delete_QFormLayout(QFormLayout*)\0"
    "theWrappedObject,item\0"
    "addItem(QFormLayout*,QLayoutItem*)\0"
    "theWrappedObject,layout\0"
    "addRow(QFormLayout*,QLayout*)\0"
    "theWrappedObject,label,field\0"
    "addRow(QFormLayout*,QWidget*,QLayout*)\0"
    "addRow(QFormLayout*,QWidget*,QWidget*)\0"
    "theWrappedObject,widget\0"
    "addRow(QFormLayout*,QWidget*)\0"
    "theWrappedObject,labelText,field\0"
    "addRow(QFormLayout*,QString,QLayout*)\0"
    "addRow(QFormLayout*,QString,QWidget*)\0"
    "int\0theWrappedObject\0count(QFormLayout*)\0"
    "Qt::Orientations\0expandingDirections(QFormLayout*)\0"
    "QFormLayout::FieldGrowthPolicy\0"
    "fieldGrowthPolicy(QFormLayout*)\0"
    "Qt::Alignment\0formAlignment(QFormLayout*)\0"
    "theWrappedObject,index,rowPtr,rolePtr\0"
    "getItemPosition(QFormLayout*,int,int*,QFormLayout::ItemRole*)\0"
    "theWrappedObject,layout,rowPtr,rolePtr\0"
    "getLayoutPosition(QFormLayout*,QLayout*,int*,QFormLayout::ItemRole*)\0"
    "theWrappedObject,widget,rowPtr,rolePtr\0"
    "getWidgetPosition(QFormLayout*,QWidget*,int*,QFormLayout::ItemRole*)\0"
    "bool\0hasHeightForWidth(QFormLayout*)\0"
    "theWrappedObject,width\0"
    "heightForWidth(QFormLayout*,int)\0"
    "horizontalSpacing(QFormLayout*)\0"
    "theWrappedObject,row,layout\0"
    "insertRow(QFormLayout*,int,QLayout*)\0"
    "theWrappedObject,row,label,field\0"
    "insertRow(QFormLayout*,int,QWidget*,QLayout*)\0"
    "insertRow(QFormLayout*,int,QWidget*,QWidget*)\0"
    "theWrappedObject,row,widget\0"
    "insertRow(QFormLayout*,int,QWidget*)\0"
    "theWrappedObject,row,labelText,field\0"
    "insertRow(QFormLayout*,int,QString,QLayout*)\0"
    "insertRow(QFormLayout*,int,QString,QWidget*)\0"
    "invalidate(QFormLayout*)\0QLayoutItem*\0"
    "theWrappedObject,index\0itemAt(QFormLayout*,int)\0"
    "theWrappedObject,row,role\0"
    "itemAt(QFormLayout*,int,QFormLayout::ItemRole)\0"
    "labelAlignment(QFormLayout*)\0QWidget*\0"
    "theWrappedObject,field\0"
    "labelForField(QFormLayout*,QLayout*)\0"
    "labelForField(QFormLayout*,QWidget*)\0"
    "QSize\0minimumSize(QFormLayout*)\0"
    "rowCount(QFormLayout*)\0"
    "QFormLayout::RowWrapPolicy\0"
    "rowWrapPolicy(QFormLayout*)\0"
    "theWrappedObject,policy\0"
    "setFieldGrowthPolicy(QFormLayout*,QFormLayout::FieldGrowthPolicy)\0"
    "theWrappedObject,alignment\0"
    "setFormAlignment(QFormLayout*,Qt::Alignment)\0"
    "theWrappedObject,rect\0"
    "setGeometry(QFormLayout*,QRect)\0"
    "theWrappedObject,spacing\0"
    "setHorizontalSpacing(QFormLayout*,int)\0"
    "theWrappedObject,row,role,item\0"
    "setItem(QFormLayout*,int,QFormLayout::ItemRole,QLayoutItem*)\0"
    "setLabelAlignment(QFormLayout*,Qt::Alignment)\0"
    "theWrappedObject,row,role,layout\0"
    "setLayout(QFormLayout*,int,QFormLayout::ItemRole,QLayout*)\0"
    "setRowWrapPolicy(QFormLayout*,QFormLayout::RowWrapPolicy)\0"
    "theWrappedObject,arg__1\0"
    "setSpacing(QFormLayout*,int)\0"
    "setVerticalSpacing(QFormLayout*,int)\0"
    "theWrappedObject,row,role,widget\0"
    "setWidget(QFormLayout*,int,QFormLayout::ItemRole,QWidget*)\0"
    "sizeHint(QFormLayout*)\0spacing(QFormLayout*)\0"
    "takeAt(QFormLayout*,int)\0"
    "verticalSpacing(QFormLayout*)\0"
};

void PythonQtWrapper_QFormLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFormLayout *_t = static_cast<PythonQtWrapper_QFormLayout *>(_o);
        switch (_id) {
        case 0: { QFormLayout* _r = _t->new_QFormLayout((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFormLayout**>(_a[0]) = _r; }  break;
        case 1: { QFormLayout* _r = _t->new_QFormLayout();
            if (_a[0]) *reinterpret_cast< QFormLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFormLayout((*reinterpret_cast< QFormLayout*(*)>(_a[1]))); break;
        case 3: _t->addItem((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QLayoutItem*(*)>(_a[2]))); break;
        case 4: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2]))); break;
        case 5: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< QLayout*(*)>(_a[3]))); break;
        case 6: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 7: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 8: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QLayout*(*)>(_a[3]))); break;
        case 9: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 10: { int _r = _t->count((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { Qt::Orientations _r = _t->expandingDirections((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientations*>(_a[0]) = _r; }  break;
        case 12: { QFormLayout::FieldGrowthPolicy _r = _t->fieldGrowthPolicy((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFormLayout::FieldGrowthPolicy*>(_a[0]) = _r; }  break;
        case 13: { Qt::Alignment _r = _t->formAlignment((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 14: _t->getItemPosition((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< QFormLayout::ItemRole*(*)>(_a[4]))); break;
        case 15: _t->getLayoutPosition((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< QFormLayout::ItemRole*(*)>(_a[4]))); break;
        case 16: _t->getWidgetPosition((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< QFormLayout::ItemRole*(*)>(_a[4]))); break;
        case 17: { bool _r = _t->hasHeightForWidth((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->heightForWidth((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->horizontalSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QLayout*(*)>(_a[3]))); break;
        case 21: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< QLayout*(*)>(_a[4]))); break;
        case 22: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 23: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 24: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QLayout*(*)>(_a[4]))); break;
        case 25: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 26: _t->invalidate((*reinterpret_cast< QFormLayout*(*)>(_a[1]))); break;
        case 27: { QLayoutItem* _r = _t->itemAt((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 28: { QLayoutItem* _r = _t->itemAt((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QFormLayout::ItemRole(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 29: { Qt::Alignment _r = _t->labelAlignment((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 30: { QWidget* _r = _t->labelForField((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 31: { QWidget* _r = _t->labelForField((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 32: { QSize _r = _t->minimumSize((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->rowCount((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { QFormLayout::RowWrapPolicy _r = _t->rowWrapPolicy((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFormLayout::RowWrapPolicy*>(_a[0]) = _r; }  break;
        case 35: _t->setFieldGrowthPolicy((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QFormLayout::FieldGrowthPolicy(*)>(_a[2]))); break;
        case 36: _t->setFormAlignment((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 37: _t->setGeometry((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 38: _t->setHorizontalSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->setItem((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QFormLayout::ItemRole(*)>(_a[3])),(*reinterpret_cast< QLayoutItem*(*)>(_a[4]))); break;
        case 40: _t->setLabelAlignment((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 41: _t->setLayout((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QFormLayout::ItemRole(*)>(_a[3])),(*reinterpret_cast< QLayout*(*)>(_a[4]))); break;
        case 42: _t->setRowWrapPolicy((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QFormLayout::RowWrapPolicy(*)>(_a[2]))); break;
        case 43: _t->setSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->setVerticalSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setWidget((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QFormLayout::ItemRole(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 46: { QSize _r = _t->sizeHint((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->spacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: { QLayoutItem* _r = _t->takeAt((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 49: { int _r = _t->verticalSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFormLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFormLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFormLayout,
      qt_meta_data_PythonQtWrapper_QFormLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFormLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFormLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFormLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFormLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFormLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFormLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFrame[] = {

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
      41,   32,   24,   23, 0x0a,
      85,   78,   24,   23, 0x2a,
     106,   23,   24,   23, 0x2a,
     123,  119,   23,   23, 0x0a,
     170,  146,   23,   23, 0x0a,
     223,  204,  199,   23, 0x0a,
     269,  252,  246,   23, 0x0a,
     303,  252,  288,   23, 0x0a,
     338,  252,  324,   23, 0x0a,
     362,  252,  358,   23, 0x0a,
     382,  252,  358,   23, 0x0a,
     402,  252,  358,   23, 0x0a,
     421,  252,  358,   23, 0x0a,
     443,  146,   23,   23, 0x0a,
     476,  146,   23,   23, 0x0a,
     504,  146,   23,   23, 0x0a,
     543,  146,   23,   23, 0x0a,
     580,  146,   23,   23, 0x0a,
     607,  146,   23,   23, 0x0a,
     633,  146,   23,   23, 0x0a,
     668,  252,  662,   23, 0x0a,

 // enums: name, flags, count, data
     686, 0x0,    2,  123,

 // enum data: key, value
     696, uint(PythonQtWrapper_QFrame::Shadow_Mask),
     708, uint(PythonQtWrapper_QFrame::Shape_Mask),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFrame[] = {
    "PythonQtWrapper_QFrame\0\0QFrame*\0"
    "parent,f\0new_QFrame(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QFrame(QWidget*)\0new_QFrame()\0"
    "obj\0delete_QFrame(QFrame*)\0"
    "theWrappedObject,arg__1\0"
    "changeEvent(QFrame*,QEvent*)\0bool\0"
    "theWrappedObject,e\0event(QFrame*,QEvent*)\0"
    "QRect\0theWrappedObject\0frameRect(QFrame*)\0"
    "QFrame::Shadow\0frameShadow(QFrame*)\0"
    "QFrame::Shape\0frameShape(QFrame*)\0int\0"
    "frameStyle(QFrame*)\0frameWidth(QFrame*)\0"
    "lineWidth(QFrame*)\0midLineWidth(QFrame*)\0"
    "paintEvent(QFrame*,QPaintEvent*)\0"
    "setFrameRect(QFrame*,QRect)\0"
    "setFrameShadow(QFrame*,QFrame::Shadow)\0"
    "setFrameShape(QFrame*,QFrame::Shape)\0"
    "setFrameStyle(QFrame*,int)\0"
    "setLineWidth(QFrame*,int)\0"
    "setMidLineWidth(QFrame*,int)\0QSize\0"
    "sizeHint(QFrame*)\0StyleMask\0Shadow_Mask\0"
    "Shape_Mask\0"
};

void PythonQtWrapper_QFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFrame *_t = static_cast<PythonQtWrapper_QFrame *>(_o);
        switch (_id) {
        case 0: { QFrame* _r = _t->new_QFrame((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = _r; }  break;
        case 1: { QFrame* _r = _t->new_QFrame((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = _r; }  break;
        case 2: { QFrame* _r = _t->new_QFrame();
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QFrame((*reinterpret_cast< QFrame*(*)>(_a[1]))); break;
        case 4: _t->changeEvent((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QRect _r = _t->frameRect((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 7: { QFrame::Shadow _r = _t->frameShadow((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFrame::Shadow*>(_a[0]) = _r; }  break;
        case 8: { QFrame::Shape _r = _t->frameShape((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFrame::Shape*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->frameStyle((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->frameWidth((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->lineWidth((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->midLineWidth((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: _t->paintEvent((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 14: _t->setFrameRect((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 15: _t->setFrameShadow((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QFrame::Shadow(*)>(_a[2]))); break;
        case 16: _t->setFrameShape((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QFrame::Shape(*)>(_a[2]))); break;
        case 17: _t->setFrameStyle((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->setLineWidth((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setMidLineWidth((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: { QSize _r = _t->sizeHint((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFrame,
      qt_meta_data_PythonQtWrapper_QFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFrame))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   36,   26,   25, 0x0a,
      66,   25,   26,   25, 0x2a,
      85,   81,   25,   25, 0x0a,
     159,  142,  112,   25, 0x0a,
     206,  142,  190,   25, 0x0a,
     234,  142,  229,   25, 0x0a,
     264,  142,  256,   25, 0x0a,
     307,  283,   25,   25, 0x0a,
     394,  371,   25,   25, 0x0a,
     441,  142,  424,   25, 0x0a,
     458,  142,   25,   25, 0x0a,

 // enums: name, flags, count, data
     482, 0x0,    2,   73,

 // enum data: key, value
     502, uint(PythonQtWrapper_QGesture::CancelNone),
     513, uint(PythonQtWrapper_QGesture::CancelAllInContext),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGesture[] = {
    "PythonQtWrapper_QGesture\0\0QGesture*\0"
    "parent\0new_QGesture(QObject*)\0"
    "new_QGesture()\0obj\0delete_QGesture(QGesture*)\0"
    "QGesture::GestureCancelPolicy\0"
    "theWrappedObject\0gestureCancelPolicy(QGesture*)\0"
    "Qt::GestureType\0gestureType(QGesture*)\0"
    "bool\0hasHotSpot(QGesture*)\0QPointF\0"
    "hotSpot(QGesture*)\0theWrappedObject,policy\0"
    "setGestureCancelPolicy(QGesture*,QGesture::GestureCancelPolicy)\0"
    "theWrappedObject,value\0"
    "setHotSpot(QGesture*,QPointF)\0"
    "Qt::GestureState\0state(QGesture*)\0"
    "unsetHotSpot(QGesture*)\0GestureCancelPolicy\0"
    "CancelNone\0CancelAllInContext\0"
};

void PythonQtWrapper_QGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGesture *_t = static_cast<PythonQtWrapper_QGesture *>(_o);
        switch (_id) {
        case 0: { QGesture* _r = _t->new_QGesture((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGesture**>(_a[0]) = _r; }  break;
        case 1: { QGesture* _r = _t->new_QGesture();
            if (_a[0]) *reinterpret_cast< QGesture**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGesture((*reinterpret_cast< QGesture*(*)>(_a[1]))); break;
        case 3: { QGesture::GestureCancelPolicy _r = _t->gestureCancelPolicy((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGesture::GestureCancelPolicy*>(_a[0]) = _r; }  break;
        case 4: { Qt::GestureType _r = _t->gestureType((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::GestureType*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->hasHotSpot((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QPointF _r = _t->hotSpot((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 7: _t->setGestureCancelPolicy((*reinterpret_cast< QGesture*(*)>(_a[1])),(*reinterpret_cast< QGesture::GestureCancelPolicy(*)>(_a[2]))); break;
        case 8: _t->setHotSpot((*reinterpret_cast< QGesture*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 9: { Qt::GestureState _r = _t->state((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::GestureState*>(_a[0]) = _r; }  break;
        case 10: _t->unsetHotSpot((*reinterpret_cast< QGesture*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGesture,
      qt_meta_data_PythonQtWrapper_QGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGesture))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGestureEvent[] = {

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
      55,   46,   31,   30, 0x0a,
      95,   91,   30,   30, 0x0a,
     149,  132,   30,   30, 0x0a,
     196,  172,   30,   30, 0x0a,
     229,  172,   30,   30, 0x0a,
     285,  132,  268,   30, 0x0a,
     316,  132,  268,   30, 0x0a,
     381,  359,  349,   30, 0x0a,
     421,  132,  268,   30, 0x0a,
     446,  132,   30,   30, 0x0a,
     469,  172,   30,   30, 0x0a,
     502,  172,   30,   30, 0x0a,
     546,  132,  541,   30, 0x0a,
     573,  172,  541,   30, 0x0a,
     610,  172,  541,   30, 0x0a,
     691,  661,  653,   30, 0x0a,
     765,  734,   30,   30, 0x0a,
     808,  734,   30,   30, 0x0a,
     883,  857,   30,   30, 0x0a,
     940,  916,   30,   30, 0x0a,
     984,  132,  975,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGestureEvent[] = {
    "PythonQtWrapper_QGestureEvent\0\0"
    "QGestureEvent*\0gestures\0"
    "new_QGestureEvent(QList<QGesture*>)\0"
    "obj\0delete_QGestureEvent(QGestureEvent*)\0"
    "theWrappedObject\0accept(QGestureEvent*)\0"
    "theWrappedObject,arg__1\0"
    "accept(QGestureEvent*,QGesture*)\0"
    "accept(QGestureEvent*,Qt::GestureType)\0"
    "QList<QGesture*>\0activeGestures(QGestureEvent*)\0"
    "canceledGestures(QGestureEvent*)\0"
    "QGesture*\0theWrappedObject,type\0"
    "gesture(QGestureEvent*,Qt::GestureType)\0"
    "gestures(QGestureEvent*)\0"
    "ignore(QGestureEvent*)\0"
    "ignore(QGestureEvent*,QGesture*)\0"
    "ignore(QGestureEvent*,Qt::GestureType)\0"
    "bool\0isAccepted(QGestureEvent*)\0"
    "isAccepted(QGestureEvent*,QGesture*)\0"
    "isAccepted(QGestureEvent*,Qt::GestureType)\0"
    "QPointF\0theWrappedObject,gesturePoint\0"
    "mapToGraphicsScene(QGestureEvent*,QPointF)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "setAccepted(QGestureEvent*,QGesture*,bool)\0"
    "setAccepted(QGestureEvent*,Qt::GestureType,bool)\0"
    "theWrappedObject,accepted\0"
    "setAccepted(QGestureEvent*,bool)\0"
    "theWrappedObject,widget\0"
    "setWidget(QGestureEvent*,QWidget*)\0"
    "QWidget*\0widget(QGestureEvent*)\0"
};

void PythonQtWrapper_QGestureEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGestureEvent *_t = static_cast<PythonQtWrapper_QGestureEvent *>(_o);
        switch (_id) {
        case 0: { QGestureEvent* _r = _t->new_QGestureEvent((*reinterpret_cast< const QList<QGesture*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGestureEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QGestureEvent((*reinterpret_cast< QGestureEvent*(*)>(_a[1]))); break;
        case 2: _t->accept((*reinterpret_cast< QGestureEvent*(*)>(_a[1]))); break;
        case 3: _t->accept((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 4: _t->accept((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2]))); break;
        case 5: { QList<QGesture*> _r = _t->activeGestures((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGesture*>*>(_a[0]) = _r; }  break;
        case 6: { QList<QGesture*> _r = _t->canceledGestures((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGesture*>*>(_a[0]) = _r; }  break;
        case 7: { QGesture* _r = _t->gesture((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGesture**>(_a[0]) = _r; }  break;
        case 8: { QList<QGesture*> _r = _t->gestures((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGesture*>*>(_a[0]) = _r; }  break;
        case 9: _t->ignore((*reinterpret_cast< QGestureEvent*(*)>(_a[1]))); break;
        case 10: _t->ignore((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 11: _t->ignore((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2]))); break;
        case 12: { bool _r = _t->isAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QPointF _r = _t->mapToGraphicsScene((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 16: _t->setAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->setAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->setAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->setWidget((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 20: { QWidget* _r = _t->widget((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGestureEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGestureEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGestureEvent,
      qt_meta_data_PythonQtWrapper_QGestureEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGestureEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGestureEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGestureEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGestureEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGestureEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGestureEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGestureRecognizer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       2,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      85,   81,   35,   35, 0x0a,
     166,  142,  132,   35, 0x0a,
     230,  219,  203,   35, 0x0a,
     319,  296,   35,   35, 0x0a,
     361,  356,   35,   35, 0x0a,

 // enums: name, flags, count, data
     425, 0x0,    8,   52,
     436, 0x1,    8,   68,

 // enum data: key, value
     443, uint(PythonQtWrapper_QGestureRecognizer::Ignore),
     450, uint(PythonQtWrapper_QGestureRecognizer::MayBeGesture),
     463, uint(PythonQtWrapper_QGestureRecognizer::TriggerGesture),
     478, uint(PythonQtWrapper_QGestureRecognizer::FinishGesture),
     492, uint(PythonQtWrapper_QGestureRecognizer::CancelGesture),
     506, uint(PythonQtWrapper_QGestureRecognizer::ResultState_Mask),
     523, uint(PythonQtWrapper_QGestureRecognizer::ConsumeEventHint),
     540, uint(PythonQtWrapper_QGestureRecognizer::ResultHint_Mask),
     443, uint(PythonQtWrapper_QGestureRecognizer::Ignore),
     450, uint(PythonQtWrapper_QGestureRecognizer::MayBeGesture),
     463, uint(PythonQtWrapper_QGestureRecognizer::TriggerGesture),
     478, uint(PythonQtWrapper_QGestureRecognizer::FinishGesture),
     492, uint(PythonQtWrapper_QGestureRecognizer::CancelGesture),
     506, uint(PythonQtWrapper_QGestureRecognizer::ResultState_Mask),
     523, uint(PythonQtWrapper_QGestureRecognizer::ConsumeEventHint),
     540, uint(PythonQtWrapper_QGestureRecognizer::ResultHint_Mask),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGestureRecognizer[] = {
    "PythonQtWrapper_QGestureRecognizer\0\0"
    "QGestureRecognizer*\0new_QGestureRecognizer()\0"
    "obj\0delete_QGestureRecognizer(QGestureRecognizer*)\0"
    "QGesture*\0theWrappedObject,target\0"
    "create(QGestureRecognizer*,QObject*)\0"
    "Qt::GestureType\0recognizer\0"
    "static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*)\0"
    "theWrappedObject,state\0"
    "reset(QGestureRecognizer*,QGesture*)\0"
    "type\0"
    "static_QGestureRecognizer_unregisterRecognizer(Qt::GestureType)\0"
    "ResultFlag\0Result\0Ignore\0MayBeGesture\0"
    "TriggerGesture\0FinishGesture\0CancelGesture\0"
    "ResultState_Mask\0ConsumeEventHint\0"
    "ResultHint_Mask\0"
};

void PythonQtWrapper_QGestureRecognizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGestureRecognizer *_t = static_cast<PythonQtWrapper_QGestureRecognizer *>(_o);
        switch (_id) {
        case 0: { QGestureRecognizer* _r = _t->new_QGestureRecognizer();
            if (_a[0]) *reinterpret_cast< QGestureRecognizer**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QGestureRecognizer((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1]))); break;
        case 2: { QGesture* _r = _t->create((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGesture**>(_a[0]) = _r; }  break;
        case 3: { Qt::GestureType _r = _t->static_QGestureRecognizer_registerRecognizer((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::GestureType*>(_a[0]) = _r; }  break;
        case 4: _t->reset((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 5: _t->static_QGestureRecognizer_unregisterRecognizer((*reinterpret_cast< Qt::GestureType(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGestureRecognizer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGestureRecognizer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGestureRecognizer,
      qt_meta_data_PythonQtWrapper_QGestureRecognizer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGestureRecognizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGestureRecognizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGestureRecognizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGestureRecognizer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGestureRecognizer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGestureRecognizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGradient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       3,   79, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      60,   54,   27,   26, 0x0a,
      89,   85,   26,   26, 0x0a,
     161,  144,  118,   26, 0x0a,
     216,  193,  188,   26, 0x0a,
     271,  245,  188,   26, 0x0a,
     327,  300,   26,   26, 0x0a,
     385,  363,   26,   26, 0x0a,
     465,  441,   26,   26, 0x0a,
     528,  505,   26,   26, 0x0a,
     597,  144,  579,   26, 0x0a,
     646,  144,  616,   26, 0x0a,
     680,  144,  664,   26, 0x0a,

 // enums: name, flags, count, data
     697, 0x0,    3,   91,
     712, 0x0,    3,   97,
     719, 0x0,    4,  103,

 // enum data: key, value
     724, uint(PythonQtWrapper_QGradient::LogicalMode),
     736, uint(PythonQtWrapper_QGradient::StretchToDeviceMode),
     756, uint(PythonQtWrapper_QGradient::ObjectBoundingMode),
     775, uint(PythonQtWrapper_QGradient::PadSpread),
     785, uint(PythonQtWrapper_QGradient::ReflectSpread),
     799, uint(PythonQtWrapper_QGradient::RepeatSpread),
     812, uint(PythonQtWrapper_QGradient::LinearGradient),
     827, uint(PythonQtWrapper_QGradient::RadialGradient),
     842, uint(PythonQtWrapper_QGradient::ConicalGradient),
     858, uint(PythonQtWrapper_QGradient::NoGradient),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGradient[] = {
    "PythonQtWrapper_QGradient\0\0QGradient*\0"
    "new_QGradient()\0other\0new_QGradient(QGradient)\0"
    "obj\0delete_QGradient(QGradient*)\0"
    "QGradient::CoordinateMode\0theWrappedObject\0"
    "coordinateMode(QGradient*)\0bool\0"
    "theWrappedObject,other\0"
    "__ne__(QGradient*,QGradient)\0"
    "theWrappedObject,gradient\0"
    "__eq__(QGradient*,QGradient)\0"
    "theWrappedObject,pos,color\0"
    "setColorAt(QGradient*,qreal,QColor)\0"
    "theWrappedObject,mode\0"
    "setCoordinateMode(QGradient*,QGradient::CoordinateMode)\0"
    "theWrappedObject,spread\0"
    "setSpread(QGradient*,QGradient::Spread)\0"
    "theWrappedObject,stops\0"
    "setStops(QGradient*,QVector<QPair<qreal,QColor> >)\0"
    "QGradient::Spread\0spread(QGradient*)\0"
    "QVector<QPair<qreal,QColor> >\0"
    "stops(QGradient*)\0QGradient::Type\0"
    "type(QGradient*)\0CoordinateMode\0Spread\0"
    "Type\0LogicalMode\0StretchToDeviceMode\0"
    "ObjectBoundingMode\0PadSpread\0ReflectSpread\0"
    "RepeatSpread\0LinearGradient\0RadialGradient\0"
    "ConicalGradient\0NoGradient\0"
};

void PythonQtWrapper_QGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGradient *_t = static_cast<PythonQtWrapper_QGradient *>(_o);
        switch (_id) {
        case 0: { QGradient* _r = _t->new_QGradient();
            if (_a[0]) *reinterpret_cast< QGradient**>(_a[0]) = _r; }  break;
        case 1: { QGradient* _r = _t->new_QGradient((*reinterpret_cast< const QGradient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGradient**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGradient((*reinterpret_cast< QGradient*(*)>(_a[1]))); break;
        case 3: { QGradient::CoordinateMode _r = _t->coordinateMode((*reinterpret_cast< QGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGradient::CoordinateMode*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->__ne__((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__eq__((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setColorAt((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 7: _t->setCoordinateMode((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< QGradient::CoordinateMode(*)>(_a[2]))); break;
        case 8: _t->setSpread((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< QGradient::Spread(*)>(_a[2]))); break;
        case 9: _t->setStops((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPair<qreal,QColor> >(*)>(_a[2]))); break;
        case 10: { QGradient::Spread _r = _t->spread((*reinterpret_cast< QGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGradient::Spread*>(_a[0]) = _r; }  break;
        case 11: { QVector<QPair<qreal,QColor> > _r = _t->stops((*reinterpret_cast< QGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPair<qreal,QColor> >*>(_a[0]) = _r; }  break;
        case 12: { QGradient::Type _r = _t->type((*reinterpret_cast< QGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGradient::Type*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGradient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGradient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGradient,
      qt_meta_data_PythonQtWrapper_QGradient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGradient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGradient))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGradient*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsAnchor[] = {

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
      37,   33,   32,   32, 0x0a,
     102,   78,   32,   32, 0x0a,
     179,  154,   32,   32, 0x0a,
     251,  234,  214,   32, 0x0a,
     286,  234,  280,   32, 0x0a,
     312,  234,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchor[] = {
    "PythonQtWrapper_QGraphicsAnchor\0\0obj\0"
    "delete_QGraphicsAnchor(QGraphicsAnchor*)\0"
    "theWrappedObject,policy\0"
    "setSizePolicy(QGraphicsAnchor*,QSizePolicy::Policy)\0"
    "theWrappedObject,spacing\0"
    "setSpacing(QGraphicsAnchor*,qreal)\0"
    "QSizePolicy::Policy\0theWrappedObject\0"
    "sizePolicy(QGraphicsAnchor*)\0qreal\0"
    "spacing(QGraphicsAnchor*)\0"
    "unsetSpacing(QGraphicsAnchor*)\0"
};

void PythonQtWrapper_QGraphicsAnchor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsAnchor *_t = static_cast<PythonQtWrapper_QGraphicsAnchor *>(_o);
        switch (_id) {
        case 0: _t->delete_QGraphicsAnchor((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1]))); break;
        case 1: _t->setSizePolicy((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2]))); break;
        case 2: _t->setSpacing((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: { QSizePolicy::Policy _r = _t->sizePolicy((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy::Policy*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->spacing((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: _t->unsetSpacing((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsAnchor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsAnchor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchor,
      qt_meta_data_PythonQtWrapper_QGraphicsAnchor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsAnchor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsAnchor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsAnchor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchor))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsAnchor*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsAnchor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsAnchorLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      69,   62,   39,   38, 0x0a,
     117,   38,   39,   38, 0x2a,
     149,  145,   38,   38, 0x0a,
     278,  219,  202,   38, 0x0a,
     437,  386,   38,   38, 0x0a,
     569,  531,   38,   38, 0x2a,
     709,  646,   38,   38, 0x0a,
     814,  219,  202,   38, 0x0a,
     940,  923,  919,   38, 0x0a,
     976,  923,  970,   38, 0x0a,
    1018,  923,   38,   38, 0x0a,
    1097, 1074, 1053,   38, 0x0a,
    1132, 1074,   38,   38, 0x0a,
    1191, 1169,   38,   38, 0x0a,
    1259, 1234,   38,   38, 0x0a,
    1310, 1234,   38,   38, 0x0a,
    1351, 1234,   38,   38, 0x0a,
    1400,  923,  970,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchorLayout[] = {
    "PythonQtWrapper_QGraphicsAnchorLayout\0"
    "\0QGraphicsAnchorLayout*\0parent\0"
    "new_QGraphicsAnchorLayout(QGraphicsLayoutItem*)\0"
    "new_QGraphicsAnchorLayout()\0obj\0"
    "delete_QGraphicsAnchorLayout(QGraphicsAnchorLayout*)\0"
    "QGraphicsAnchor*\0"
    "theWrappedObject,firstItem,firstEdge,secondItem,secondEdge\0"
    "addAnchor(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,Qt::AnchorPoint,"
    "QGraphicsLayoutItem*,Qt::AnchorPoint)\0"
    "theWrappedObject,firstItem,secondItem,orientations\0"
    "addAnchors(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,QGraphicsLayout"
    "Item*,Qt::Orientations)\0"
    "theWrappedObject,firstItem,secondItem\0"
    "addAnchors(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,QGraphicsLayout"
    "Item*)\0"
    "theWrappedObject,firstItem,firstCorner,secondItem,secondCorner\0"
    "addCornerAnchors(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,Qt::Corne"
    "r,QGraphicsLayoutItem*,Qt::Corner)\0"
    "anchor(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,Qt::AnchorPoint,QGr"
    "aphicsLayoutItem*,Qt::AnchorPoint)\0"
    "int\0theWrappedObject\0count(QGraphicsAnchorLayout*)\0"
    "qreal\0horizontalSpacing(QGraphicsAnchorLayout*)\0"
    "invalidate(QGraphicsAnchorLayout*)\0"
    "QGraphicsLayoutItem*\0theWrappedObject,index\0"
    "itemAt(QGraphicsAnchorLayout*,int)\0"
    "removeAt(QGraphicsAnchorLayout*,int)\0"
    "theWrappedObject,rect\0"
    "setGeometry(QGraphicsAnchorLayout*,QRectF)\0"
    "theWrappedObject,spacing\0"
    "setHorizontalSpacing(QGraphicsAnchorLayout*,qreal)\0"
    "setSpacing(QGraphicsAnchorLayout*,qreal)\0"
    "setVerticalSpacing(QGraphicsAnchorLayout*,qreal)\0"
    "verticalSpacing(QGraphicsAnchorLayout*)\0"
};

void PythonQtWrapper_QGraphicsAnchorLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsAnchorLayout *_t = static_cast<PythonQtWrapper_QGraphicsAnchorLayout *>(_o);
        switch (_id) {
        case 0: { QGraphicsAnchorLayout* _r = _t->new_QGraphicsAnchorLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsAnchorLayout**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsAnchorLayout* _r = _t->new_QGraphicsAnchorLayout();
            if (_a[0]) *reinterpret_cast< QGraphicsAnchorLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsAnchorLayout((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1]))); break;
        case 3: { QGraphicsAnchor* _r = _t->addAnchor((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::AnchorPoint(*)>(_a[3])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[4])),(*reinterpret_cast< Qt::AnchorPoint(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QGraphicsAnchor**>(_a[0]) = _r; }  break;
        case 4: _t->addAnchors((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[3])),(*reinterpret_cast< Qt::Orientations(*)>(_a[4]))); break;
        case 5: _t->addAnchors((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[3]))); break;
        case 6: _t->addCornerAnchors((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::Corner(*)>(_a[3])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[4])),(*reinterpret_cast< Qt::Corner(*)>(_a[5]))); break;
        case 7: { QGraphicsAnchor* _r = _t->anchor((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::AnchorPoint(*)>(_a[3])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[4])),(*reinterpret_cast< Qt::AnchorPoint(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QGraphicsAnchor**>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->count((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->horizontalSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 10: _t->invalidate((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1]))); break;
        case 11: { QGraphicsLayoutItem* _r = _t->itemAt((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 12: _t->removeAt((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->setGeometry((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 14: _t->setHorizontalSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 15: _t->setSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 16: _t->setVerticalSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 17: { qreal _r = _t->verticalSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsAnchorLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsAnchorLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchorLayout,
      qt_meta_data_PythonQtWrapper_QGraphicsAnchorLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsAnchorLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsAnchorLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsAnchorLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchorLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsAnchorLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsAnchorLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsBlurEffect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   58,   37,   36, 0x0a,
      99,   36,   37,   36, 0x2a,
     129,  125,   36,   36, 0x0a,
     226,  209,  178,   36, 0x0a,
     264,  209,  258,   36, 0x0a,
     326,  304,  297,   36, 0x0a,
     396,  371,   36,   36, 0x0a,

 // enums: name, flags, count, data
     433, 0x0,    3,   57,
     442, 0x1,    3,   63,

 // enum data: key, value
     452, uint(PythonQtWrapper_QGraphicsBlurEffect::PerformanceHint),
     468, uint(PythonQtWrapper_QGraphicsBlurEffect::QualityHint),
     480, uint(PythonQtWrapper_QGraphicsBlurEffect::AnimationHint),
     452, uint(PythonQtWrapper_QGraphicsBlurEffect::PerformanceHint),
     468, uint(PythonQtWrapper_QGraphicsBlurEffect::QualityHint),
     480, uint(PythonQtWrapper_QGraphicsBlurEffect::AnimationHint),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsBlurEffect[] = {
    "PythonQtWrapper_QGraphicsBlurEffect\0"
    "\0QGraphicsBlurEffect*\0parent\0"
    "new_QGraphicsBlurEffect(QObject*)\0"
    "new_QGraphicsBlurEffect()\0obj\0"
    "delete_QGraphicsBlurEffect(QGraphicsBlurEffect*)\0"
    "QGraphicsBlurEffect::BlurHints\0"
    "theWrappedObject\0blurHints(QGraphicsBlurEffect*)\0"
    "qreal\0blurRadius(QGraphicsBlurEffect*)\0"
    "QRectF\0theWrappedObject,rect\0"
    "boundingRectFor(QGraphicsBlurEffect*,QRectF)\0"
    "theWrappedObject,painter\0"
    "draw(QGraphicsBlurEffect*,QPainter*)\0"
    "BlurHint\0BlurHints\0PerformanceHint\0"
    "QualityHint\0AnimationHint\0"
};

void PythonQtWrapper_QGraphicsBlurEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsBlurEffect *_t = static_cast<PythonQtWrapper_QGraphicsBlurEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsBlurEffect* _r = _t->new_QGraphicsBlurEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsBlurEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsBlurEffect* _r = _t->new_QGraphicsBlurEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsBlurEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsBlurEffect((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1]))); break;
        case 3: { QGraphicsBlurEffect::BlurHints _r = _t->blurHints((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsBlurEffect::BlurHints*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->blurRadius((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { QRectF _r = _t->boundingRectFor((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 6: _t->draw((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsBlurEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsBlurEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsBlurEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsBlurEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsBlurEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsBlurEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsBlurEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsBlurEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsBlurEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsBlurEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsColorizeEffect[] = {

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
      73,   66,   41,   40, 0x0a,
     111,   40,   41,   40, 0x2a,
     145,  141,   40,   40, 0x0a,
     226,  209,  202,   40, 0x0a,
     283,  258,   40,   40, 0x0a,
     330,  209,  324,   40, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsColorizeEffect[] = {
    "PythonQtWrapper_QGraphicsColorizeEffect\0"
    "\0QGraphicsColorizeEffect*\0parent\0"
    "new_QGraphicsColorizeEffect(QObject*)\0"
    "new_QGraphicsColorizeEffect()\0obj\0"
    "delete_QGraphicsColorizeEffect(QGraphicsColorizeEffect*)\0"
    "QColor\0theWrappedObject\0"
    "color(QGraphicsColorizeEffect*)\0"
    "theWrappedObject,painter\0"
    "draw(QGraphicsColorizeEffect*,QPainter*)\0"
    "qreal\0strength(QGraphicsColorizeEffect*)\0"
};

void PythonQtWrapper_QGraphicsColorizeEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsColorizeEffect *_t = static_cast<PythonQtWrapper_QGraphicsColorizeEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsColorizeEffect* _r = _t->new_QGraphicsColorizeEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsColorizeEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsColorizeEffect* _r = _t->new_QGraphicsColorizeEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsColorizeEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsColorizeEffect((*reinterpret_cast< QGraphicsColorizeEffect*(*)>(_a[1]))); break;
        case 3: { QColor _r = _t->color((*reinterpret_cast< QGraphicsColorizeEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 4: _t->draw((*reinterpret_cast< QGraphicsColorizeEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 5: { qreal _r = _t->strength((*reinterpret_cast< QGraphicsColorizeEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsColorizeEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsColorizeEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsColorizeEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsColorizeEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsColorizeEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsColorizeEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsColorizeEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsColorizeEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsColorizeEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsColorizeEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsDropShadowEffect[] = {

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
      77,   70,   43,   42, 0x0a,
     117,   42,   43,   42, 0x2a,
     153,  149,   42,   42, 0x0a,
     237,  220,  214,   42, 0x0a,
     305,  283,  276,   42, 0x0a,
     363,  220,  356,   42, 0x0a,
     422,  397,   42,   42, 0x0a,
     473,  220,  465,   42, 0x0a,
     508,  220,  214,   42, 0x0a,
     544,  220,  214,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsDropShadowEffect[] = {
    "PythonQtWrapper_QGraphicsDropShadowEffect\0"
    "\0QGraphicsDropShadowEffect*\0parent\0"
    "new_QGraphicsDropShadowEffect(QObject*)\0"
    "new_QGraphicsDropShadowEffect()\0obj\0"
    "delete_QGraphicsDropShadowEffect(QGraphicsDropShadowEffect*)\0"
    "qreal\0theWrappedObject\0"
    "blurRadius(QGraphicsDropShadowEffect*)\0"
    "QRectF\0theWrappedObject,rect\0"
    "boundingRectFor(QGraphicsDropShadowEffect*,QRectF)\0"
    "QColor\0color(QGraphicsDropShadowEffect*)\0"
    "theWrappedObject,painter\0"
    "draw(QGraphicsDropShadowEffect*,QPainter*)\0"
    "QPointF\0offset(QGraphicsDropShadowEffect*)\0"
    "xOffset(QGraphicsDropShadowEffect*)\0"
    "yOffset(QGraphicsDropShadowEffect*)\0"
};

void PythonQtWrapper_QGraphicsDropShadowEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsDropShadowEffect *_t = static_cast<PythonQtWrapper_QGraphicsDropShadowEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsDropShadowEffect* _r = _t->new_QGraphicsDropShadowEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsDropShadowEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsDropShadowEffect* _r = _t->new_QGraphicsDropShadowEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsDropShadowEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsDropShadowEffect((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->blurRadius((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { QRectF _r = _t->boundingRectFor((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 5: { QColor _r = _t->color((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 6: _t->draw((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 7: { QPointF _r = _t->offset((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 8: { qreal _r = _t->xOffset((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->yOffset((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsDropShadowEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsDropShadowEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsDropShadowEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsDropShadowEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsDropShadowEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsDropShadowEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsDropShadowEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsDropShadowEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsDropShadowEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsDropShadowEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsEffect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       3,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      57,   50,   33,   32, 0x0a,
      87,   32,   33,   32, 0x2a,
     113,  109,   32,   32, 0x0a,
     178,  161,  154,   32, 0x0a,
     237,  209,  154,   32, 0x0a,
     283,  161,  278,   32, 0x0a,
     334,  311,   32,   32, 0x0a,

 // enums: name, flags, count, data
     395, 0x0,    3,   61,
     409, 0x0,    4,   67,
     420, 0x1,    4,   75,

 // enum data: key, value
     432, uint(PythonQtWrapper_QGraphicsEffect::NoPad),
     438, uint(PythonQtWrapper_QGraphicsEffect::PadToTransparentBorder),
     461, uint(PythonQtWrapper_QGraphicsEffect::PadToEffectiveBoundingRect),
     488, uint(PythonQtWrapper_QGraphicsEffect::SourceAttached),
     503, uint(PythonQtWrapper_QGraphicsEffect::SourceDetached),
     518, uint(PythonQtWrapper_QGraphicsEffect::SourceBoundingRectChanged),
     544, uint(PythonQtWrapper_QGraphicsEffect::SourceInvalidated),
     488, uint(PythonQtWrapper_QGraphicsEffect::SourceAttached),
     503, uint(PythonQtWrapper_QGraphicsEffect::SourceDetached),
     518, uint(PythonQtWrapper_QGraphicsEffect::SourceBoundingRectChanged),
     544, uint(PythonQtWrapper_QGraphicsEffect::SourceInvalidated),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsEffect[] = {
    "PythonQtWrapper_QGraphicsEffect\0\0"
    "QGraphicsEffect*\0parent\0"
    "new_QGraphicsEffect(QObject*)\0"
    "new_QGraphicsEffect()\0obj\0"
    "delete_QGraphicsEffect(QGraphicsEffect*)\0"
    "QRectF\0theWrappedObject\0"
    "boundingRect(QGraphicsEffect*)\0"
    "theWrappedObject,sourceRect\0"
    "boundingRectFor(QGraphicsEffect*,QRectF)\0"
    "bool\0isEnabled(QGraphicsEffect*)\0"
    "theWrappedObject,flags\0"
    "sourceChanged(QGraphicsEffect*,QGraphicsEffect::ChangeFlags)\0"
    "PixmapPadMode\0ChangeFlag\0ChangeFlags\0"
    "NoPad\0PadToTransparentBorder\0"
    "PadToEffectiveBoundingRect\0SourceAttached\0"
    "SourceDetached\0SourceBoundingRectChanged\0"
    "SourceInvalidated\0"
};

void PythonQtWrapper_QGraphicsEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsEffect *_t = static_cast<PythonQtWrapper_QGraphicsEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsEffect* _r = _t->new_QGraphicsEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsEffect* _r = _t->new_QGraphicsEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsEffect((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1]))); break;
        case 3: { QRectF _r = _t->boundingRect((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 4: { QRectF _r = _t->boundingRectFor((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isEnabled((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->sourceChanged((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< QGraphicsEffect::ChangeFlags(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsEllipseItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       1,  139, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      73,   60,   38,   37, 0x0a,
     137,  130,   38,   37, 0x2a,
     178,   37,   38,   37, 0x2a,
     223,  205,   38,   37, 0x0a,
     299,  287,   38,   37, 0x2a,
     352,  347,   38,   37, 0x2a,
     406,  385,   38,   37, 0x0a,
     502,  487,   38,   37, 0x2a,
     575,  567,   38,   37, 0x2a,
     629,  625,   37,   37, 0x0a,
     704,  687,  680,   37, 0x0a,
     768,  745,  740,   37, 0x0a,
     830,  808,  740,   37, 0x0a,
     900,  687,  887,   37, 0x0a,
     973,  934,   37,   37, 0x0a,
    1085, 1053,   37,   37, 0x2a,
    1156,  687,  680,   37, 0x0a,
    1206, 1184,   37,   37, 0x0a,
    1269, 1244,   37,   37, 0x0a,
    1347, 1324,   37,   37, 0x0a,
    1387, 1324,   37,   37, 0x0a,
    1428,  687,  887,   37, 0x0a,
    1461,  687, 1457,   37, 0x0a,
    1494,  687, 1457,   37, 0x0a,
    1528,  687, 1457,   37, 0x0a,

 // enums: name, flags, count, data
    1556, 0x0,    1,  143,

 // enum data: key, value
    1563, uint(PythonQtWrapper_QGraphicsEllipseItem::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsEllipseItem[] = {
    "PythonQtWrapper_QGraphicsEllipseItem\0"
    "\0QGraphicsEllipseItem*\0parent,scene\0"
    "new_QGraphicsEllipseItem(QGraphicsItem*,QGraphicsScene*)\0"
    "parent\0new_QGraphicsEllipseItem(QGraphicsItem*)\0"
    "new_QGraphicsEllipseItem()\0rect,parent,scene\0"
    "new_QGraphicsEllipseItem(QRectF,QGraphicsItem*,QGraphicsScene*)\0"
    "rect,parent\0new_QGraphicsEllipseItem(QRectF,QGraphicsItem*)\0"
    "rect\0new_QGraphicsEllipseItem(QRectF)\0"
    "x,y,w,h,parent,scene\0"
    "new_QGraphicsEllipseItem(qreal,qreal,qreal,qreal,QGraphicsItem*,QGraph"
    "icsScene*)\0"
    "x,y,w,h,parent\0"
    "new_QGraphicsEllipseItem(qreal,qreal,qreal,qreal,QGraphicsItem*)\0"
    "x,y,w,h\0new_QGraphicsEllipseItem(qreal,qreal,qreal,qreal)\0"
    "obj\0delete_QGraphicsEllipseItem(QGraphicsEllipseItem*)\0"
    "QRectF\0theWrappedObject\0"
    "boundingRect(QGraphicsEllipseItem*)\0"
    "bool\0theWrappedObject,point\0"
    "contains(QGraphicsEllipseItem*,QPointF)\0"
    "theWrappedObject,item\0"
    "isObscuredBy(QGraphicsEllipseItem*,const QGraphicsItem*)\0"
    "QPainterPath\0opaqueArea(QGraphicsEllipseItem*)\0"
    "theWrappedObject,painter,option,widget\0"
    "paint(QGraphicsEllipseItem*,QPainter*,const QStyleOptionGraphicsItem*,"
    "QWidget*)\0"
    "theWrappedObject,painter,option\0"
    "paint(QGraphicsEllipseItem*,QPainter*,const QStyleOptionGraphicsItem*)\0"
    "rect(QGraphicsEllipseItem*)\0"
    "theWrappedObject,rect\0"
    "setRect(QGraphicsEllipseItem*,QRectF)\0"
    "theWrappedObject,x,y,w,h\0"
    "setRect(QGraphicsEllipseItem*,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,angle\0"
    "setSpanAngle(QGraphicsEllipseItem*,int)\0"
    "setStartAngle(QGraphicsEllipseItem*,int)\0"
    "shape(QGraphicsEllipseItem*)\0int\0"
    "spanAngle(QGraphicsEllipseItem*)\0"
    "startAngle(QGraphicsEllipseItem*)\0"
    "type(QGraphicsEllipseItem*)\0enum_1\0"
    "Type\0"
};

void PythonQtWrapper_QGraphicsEllipseItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsEllipseItem *_t = static_cast<PythonQtWrapper_QGraphicsEllipseItem *>(_o);
        switch (_id) {
        case 0: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem();
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 3: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 4: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 5: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< const QRectF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 6: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[5])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 7: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 8: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 9: _t->delete_QGraphicsEllipseItem((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1]))); break;
        case 10: { QRectF _r = _t->boundingRect((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->contains((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isObscuredBy((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QPainterPath _r = _t->opaqueArea((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 14: _t->paint((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 15: _t->paint((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3]))); break;
        case 16: { QRectF _r = _t->rect((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 17: _t->setRect((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 18: _t->setRect((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 19: _t->setSpanAngle((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->setStartAngle((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: { QPainterPath _r = _t->shape((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->spanAngle((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->startAngle((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->type((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsEllipseItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsEllipseItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsEllipseItem,
      qt_meta_data_PythonQtWrapper_QGraphicsEllipseItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsEllipseItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsEllipseItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsEllipseItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsEllipseItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsEllipseItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsEllipseItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsGridLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   58,   37,   36, 0x0a,
     111,   36,   37,   36, 0x2a,
     141,  137,   36,   36, 0x0a,
     233,  190,   36,   36, 0x0a,
     339,  306,   36,   36, 0x2a,
     460,  398,   36,   36, 0x0a,
     593,  541,   36,   36, 0x2a,
     696,  674,  660,   36, 0x0a,
     773,  749,  660,   36, 0x0a,
     836,  819,  815,   36, 0x0a,
     876,  749,  870,   36, 0x0a,
     921,  749,  870,   36, 0x0a,
     966,  749,  870,   36, 0x0a,
    1013,  749,  870,   36, 0x0a,
    1053,  749,  815,   36, 0x0a,
    1099,  819,  815,   36, 0x0a,
    1127,  819,  870,   36, 0x0a,
    1167,  819,   36,   36, 0x0a,
    1244, 1221, 1200,   36, 0x0a,
    1305, 1277, 1200,   36, 0x0a,
    1342, 1221,   36,   36, 0x0a,
    1377,  674,   36,   36, 0x0a,
    1452, 1431,  660,   36, 0x0a,
    1491,  819,  815,   36, 0x0a,
    1522, 1431,  870,   36, 0x0a,
    1565, 1431,  870,   36, 0x0a,
    1608, 1431,  870,   36, 0x0a,
    1653, 1431,  870,   36, 0x0a,
    1690, 1431,  815,   36, 0x0a,
    1765, 1733,   36,   36, 0x0a,
    1869, 1835,   36,   36, 0x0a,
    1958, 1928,   36,   36, 0x0a,
    2010, 1928,   36,   36, 0x0a,
    2064, 1928,   36,   36, 0x0a,
    2118, 1928,   36,   36, 0x0a,
    2206, 2174,   36,   36, 0x0a,
    2287, 2255,   36,   36, 0x0a,
    2362, 2340,   36,   36, 0x0a,
    2428, 2403,   36,   36, 0x0a,
    2508, 2477,   36,   36, 0x0a,
    2592, 2564,   36,   36, 0x0a,
    2642, 2564,   36,   36, 0x0a,
    2694, 2564,   36,   36, 0x0a,
    2746, 2564,   36,   36, 0x0a,
    2829, 2800,   36,   36, 0x0a,
    2904, 2875,   36,   36, 0x0a,
    2954, 2403,   36,   36, 0x0a,
    2993, 2403,   36,   36, 0x0a,
    3081, 3047, 3040,   36, 0x0a,
    3155, 3132, 3040,   36, 0x2a,
    3199,  819,  870,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsGridLayout[] = {
    "PythonQtWrapper_QGraphicsGridLayout\0"
    "\0QGraphicsGridLayout*\0parent\0"
    "new_QGraphicsGridLayout(QGraphicsLayoutItem*)\0"
    "new_QGraphicsGridLayout()\0obj\0"
    "delete_QGraphicsGridLayout(QGraphicsGridLayout*)\0"
    "theWrappedObject,item,row,column,alignment\0"
    "addItem(QGraphicsGridLayout*,QGraphicsLayoutItem*,int,int,Qt::Alignmen"
    "t)\0"
    "theWrappedObject,item,row,column\0"
    "addItem(QGraphicsGridLayout*,QGraphicsLayoutItem*,int,int)\0"
    "theWrappedObject,item,row,column,rowSpan,columnSpan,alignment\0"
    "addItem(QGraphicsGridLayout*,QGraphicsLayoutItem*,int,int,int,int,Qt::"
    "Alignment)\0"
    "theWrappedObject,item,row,column,rowSpan,columnSpan\0"
    "addItem(QGraphicsGridLayout*,QGraphicsLayoutItem*,int,int,int,int)\0"
    "Qt::Alignment\0theWrappedObject,item\0"
    "alignment(QGraphicsGridLayout*,QGraphicsLayoutItem*)\0"
    "theWrappedObject,column\0"
    "columnAlignment(QGraphicsGridLayout*,int)\0"
    "int\0theWrappedObject\0"
    "columnCount(QGraphicsGridLayout*)\0"
    "qreal\0columnMaximumWidth(QGraphicsGridLayout*,int)\0"
    "columnMinimumWidth(QGraphicsGridLayout*,int)\0"
    "columnPreferredWidth(QGraphicsGridLayout*,int)\0"
    "columnSpacing(QGraphicsGridLayout*,int)\0"
    "columnStretchFactor(QGraphicsGridLayout*,int)\0"
    "count(QGraphicsGridLayout*)\0"
    "horizontalSpacing(QGraphicsGridLayout*)\0"
    "invalidate(QGraphicsGridLayout*)\0"
    "QGraphicsLayoutItem*\0theWrappedObject,index\0"
    "itemAt(QGraphicsGridLayout*,int)\0"
    "theWrappedObject,row,column\0"
    "itemAt(QGraphicsGridLayout*,int,int)\0"
    "removeAt(QGraphicsGridLayout*,int)\0"
    "removeItem(QGraphicsGridLayout*,QGraphicsLayoutItem*)\0"
    "theWrappedObject,row\0"
    "rowAlignment(QGraphicsGridLayout*,int)\0"
    "rowCount(QGraphicsGridLayout*)\0"
    "rowMaximumHeight(QGraphicsGridLayout*,int)\0"
    "rowMinimumHeight(QGraphicsGridLayout*,int)\0"
    "rowPreferredHeight(QGraphicsGridLayout*,int)\0"
    "rowSpacing(QGraphicsGridLayout*,int)\0"
    "rowStretchFactor(QGraphicsGridLayout*,int)\0"
    "theWrappedObject,item,alignment\0"
    "setAlignment(QGraphicsGridLayout*,QGraphicsLayoutItem*,Qt::Alignment)\0"
    "theWrappedObject,column,alignment\0"
    "setColumnAlignment(QGraphicsGridLayout*,int,Qt::Alignment)\0"
    "theWrappedObject,column,width\0"
    "setColumnFixedWidth(QGraphicsGridLayout*,int,qreal)\0"
    "setColumnMaximumWidth(QGraphicsGridLayout*,int,qreal)\0"
    "setColumnMinimumWidth(QGraphicsGridLayout*,int,qreal)\0"
    "setColumnPreferredWidth(QGraphicsGridLayout*,int,qreal)\0"
    "theWrappedObject,column,spacing\0"
    "setColumnSpacing(QGraphicsGridLayout*,int,qreal)\0"
    "theWrappedObject,column,stretch\0"
    "setColumnStretchFactor(QGraphicsGridLayout*,int,int)\0"
    "theWrappedObject,rect\0"
    "setGeometry(QGraphicsGridLayout*,QRectF)\0"
    "theWrappedObject,spacing\0"
    "setHorizontalSpacing(QGraphicsGridLayout*,qreal)\0"
    "theWrappedObject,row,alignment\0"
    "setRowAlignment(QGraphicsGridLayout*,int,Qt::Alignment)\0"
    "theWrappedObject,row,height\0"
    "setRowFixedHeight(QGraphicsGridLayout*,int,qreal)\0"
    "setRowMaximumHeight(QGraphicsGridLayout*,int,qreal)\0"
    "setRowMinimumHeight(QGraphicsGridLayout*,int,qreal)\0"
    "setRowPreferredHeight(QGraphicsGridLayout*,int,qreal)\0"
    "theWrappedObject,row,spacing\0"
    "setRowSpacing(QGraphicsGridLayout*,int,qreal)\0"
    "theWrappedObject,row,stretch\0"
    "setRowStretchFactor(QGraphicsGridLayout*,int,int)\0"
    "setSpacing(QGraphicsGridLayout*,qreal)\0"
    "setVerticalSpacing(QGraphicsGridLayout*,qreal)\0"
    "QSizeF\0theWrappedObject,which,constraint\0"
    "sizeHint(QGraphicsGridLayout*,Qt::SizeHint,QSizeF)\0"
    "theWrappedObject,which\0"
    "sizeHint(QGraphicsGridLayout*,Qt::SizeHint)\0"
    "verticalSpacing(QGraphicsGridLayout*)\0"
};

void PythonQtWrapper_QGraphicsGridLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsGridLayout *_t = static_cast<PythonQtWrapper_QGraphicsGridLayout *>(_o);
        switch (_id) {
        case 0: { QGraphicsGridLayout* _r = _t->new_QGraphicsGridLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsGridLayout**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsGridLayout* _r = _t->new_QGraphicsGridLayout();
            if (_a[0]) *reinterpret_cast< QGraphicsGridLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsGridLayout((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1]))); break;
        case 3: _t->addItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< Qt::Alignment(*)>(_a[5]))); break;
        case 4: _t->addItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->addItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< Qt::Alignment(*)>(_a[7]))); break;
        case 6: _t->addItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 7: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 8: { Qt::Alignment _r = _t->columnAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->columnCount((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->columnMaximumWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->columnMinimumWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->columnPreferredWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->columnSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->columnStretchFactor((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->count((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->horizontalSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: _t->invalidate((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1]))); break;
        case 18: { QGraphicsLayoutItem* _r = _t->itemAt((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 19: { QGraphicsLayoutItem* _r = _t->itemAt((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 20: _t->removeAt((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->removeItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2]))); break;
        case 22: { Qt::Alignment _r = _t->rowAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->rowCount((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { qreal _r = _t->rowMaximumHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 25: { qreal _r = _t->rowMinimumHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 26: { qreal _r = _t->rowPreferredHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 27: { qreal _r = _t->rowSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->rowStretchFactor((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: _t->setAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3]))); break;
        case 30: _t->setColumnAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3]))); break;
        case 31: _t->setColumnFixedWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 32: _t->setColumnMaximumWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 33: _t->setColumnMinimumWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 34: _t->setColumnPreferredWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 35: _t->setColumnSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 36: _t->setColumnStretchFactor((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->setGeometry((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 38: _t->setHorizontalSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 39: _t->setRowAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3]))); break;
        case 40: _t->setRowFixedHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 41: _t->setRowMaximumHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 42: _t->setRowMinimumHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 43: _t->setRowPreferredHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 44: _t->setRowSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 45: _t->setRowStretchFactor((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 46: _t->setSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 47: _t->setVerticalSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 48: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])),(*reinterpret_cast< const QSizeF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 49: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 50: { qreal _r = _t->verticalSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsGridLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsGridLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsGridLayout,
      qt_meta_data_PythonQtWrapper_QGraphicsGridLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsGridLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsGridLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsGridLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsGridLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsGridLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsGridLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     228,   14, // methods
       0,    0, // properties
       6, 1154, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      59,   46,   31,   30, 0x0a,
     116,  109,   31,   30, 0x2a,
     150,   30,   31,   30, 0x2a,
     174,  170,   30,   30, 0x0a,
     233,  216,  211,   30, 0x0a,
     261,  216,  211,   30, 0x0a,
     289,  216,  211,   30, 0x0a,
     323,  216,  211,   30, 0x0a,
     374,  216,  357,   30, 0x0a,
     411,  216,  211,   30, 0x0a,
     469,  446,   30,   30, 0x0a,
     544,  505,  497,   30, 0x0a,
     592,  216,  586,   30, 0x0a,
     659,  216,  634,   30, 0x0a,
     707,  216,  685,   30, 0x0a,
     741,  216,  734,   30, 0x0a,
     778,  216,   30,   30, 0x0a,
     818,  216,  805,   30, 0x0a,
     871,  843,  211,   30, 0x0a,
     970,  947,  211,   30, 0x2a,
    1051, 1024,  211,   30, 0x0a,
    1141, 1119,  211,   30, 0x2a,
    1209, 1187,  685,   30, 0x0a,
    1262,  216,  685,   30, 0x2a,
    1293,  947,   31,   30, 0x0a,
    1372, 1349,  211,   30, 0x0a,
    1428, 1405,   30,   30, 0x0a,
    1501,  216, 1493,   30, 0x0a,
    1554, 1533, 1524,   30, 0x0a,
    1625, 1590, 1579,   30, 0x0a,
    1668, 1405,   30,   30, 0x0a,
    1728, 1405,   30,   30, 0x0a,
    1788, 1405,   30,   30, 0x0a,
    1847, 1405,   30,   30, 0x0a,
    1902,  216,  586,   30, 0x0a,
    1973, 1935,   30,   30, 0x0a,
    2048, 2018,   30,   30, 0x2a,
    2111, 2089,   30,   30, 0x2a,
    2148,  216,   30,   30, 0x2a,
    2219, 2178,   30,   30, 0x0a,
    2314, 2281,   30,   30, 0x2a,
    2397, 2372,   30,   30, 0x2a,
    2476, 2451, 1524,   30, 0x0a,
    2511,  216,  211,   30, 0x0a,
    2579,  216, 2546,   30, 0x0a,
    2601, 1405,   30,   30, 0x0a,
    2643,  216,   31,   30, 0x0a,
    2669, 1405,   30,   30, 0x0a,
    2712,  216,   31,   30, 0x0a,
    2739,  216,   31,   30, 0x0a,
    2770,  216,   30,   30, 0x0a,
    2799,  216,   30,   30, 0x0a,
    2842,  216, 2825,   30, 0x0a,
    2893,  216, 2873,   30, 0x0a,
    2915,  216,  211,   30, 0x0a,
    2950,  216,  211,   30, 0x0a,
    2976,  216,  211,   30, 0x0a,
    3001,  216,   30,   30, 0x0a,
    3022, 1405,   30,   30, 0x0a,
    3080, 1405,   30,   30, 0x0a,
    3138, 1405,   30,   30, 0x0a,
    3195, 1405,   30,   30, 0x0a,
    3268,  216, 3247,   30, 0x0a,
    3324, 3301, 1524,   30, 0x0a,
    3406, 3378,   30,   30, 0x0a,
    3461,  216,  211,   30, 0x0a,
    3509, 3486,  211,   30, 0x0a,
    3590, 3559,  211,   30, 0x0a,
    3644,  216,  211,   30, 0x2a,
    3682,  216,  211,   30, 0x0a,
    3708,  216,  211,   30, 0x0a,
    3734,  216,  211,   30, 0x0a,
    3761, 2089,  211,   30, 0x0a,
    3795, 2372,  211,   30, 0x0a,
    3868, 3846,  211,   30, 0x0a,
    3918,  216,  211,   30, 0x0a,
    3942,  216,  211,   30, 0x0a,
    3969,  216,  211,   30, 0x0a,
    3998,  216,  211,   30, 0x0a,
    4048, 4024,  211,   30, 0x0a,
    4097,  216,  211,   30, 0x0a,
    4122,  216,  211,   30, 0x0a,
    4177, 4147, 1524,   30, 0x0a,
    4273, 4247, 1579,   30, 0x0a,
    4330,  947, 1579,   30, 0x2a,
    4381, 1405,   30,   30, 0x0a,
    4422, 1405,   30,   30, 0x0a,
    4492, 4465,  805,   30, 0x0a,
    4590, 4562, 4554,   30, 0x0a,
    4687, 4657, 4647,   30, 0x0a,
    4773, 4746, 4647,   30, 0x0a,
    4855, 4829, 4554,   30, 0x0a,
    4946, 4916, 4647,   30, 0x0a,
    5019, 1119,  805,   30, 0x0a,
    5062, 1349, 4554,   30, 0x0a,
    5125, 5100, 4647,   30, 0x0a,
    5165, 2089, 4647,   30, 0x0a,
    5223, 5202, 4554,   30, 0x0a,
    5265, 2372, 4647,   30, 0x0a,
    5319, 1119,  805,   30, 0x0a,
    5361, 1349, 4554,   30, 0x0a,
    5398, 5100, 4647,   30, 0x0a,
    5437, 2089, 4647,   30, 0x0a,
    5473, 5202, 4554,   30, 0x0a,
    5514, 2372, 4647,   30, 0x0a,
    5567, 4746,  734,   30, 0x0a,
    5627, 4916,  734,   30, 0x0a,
    5704, 2089,  734,   30, 0x0a,
    5745, 2372,  734,   30, 0x0a,
    5803, 2089,  734,   30, 0x0a,
    5843, 2372,  734,   30, 0x0a,
    5900, 4746,  734,   30, 0x0a,
    5958, 4916,  734,   30, 0x0a,
    6033, 2089,  734,   30, 0x0a,
    6072, 2372,  734,   30, 0x0a,
    6128, 2089,  734,   30, 0x0a,
    6166, 2372,  734,   30, 0x0a,
    6221, 4465,  805,   30, 0x0a,
    6281, 4562, 4554,   30, 0x0a,
    6336, 4657, 4647,   30, 0x0a,
    6393, 4746, 4647,   30, 0x0a,
    6447, 4829, 4554,   30, 0x0a,
    6506, 4916, 4647,   30, 0x0a,
    6577, 1119,  805,   30, 0x0a,
    6618, 1349, 4554,   30, 0x0a,
    6654, 5100, 4647,   30, 0x0a,
    6692, 2089, 4647,   30, 0x0a,
    6727, 5202, 4554,   30, 0x0a,
    6767, 2372, 4647,   30, 0x0a,
    6819, 1119,  805,   30, 0x0a,
    6859, 1349, 4554,   30, 0x0a,
    6894, 5100, 4647,   30, 0x0a,
    6931, 2089, 4647,   30, 0x0a,
    6965, 5202, 4554,   30, 0x0a,
    7004, 2372, 4647,   30, 0x0a,
    7055, 1405,   30,   30, 0x0a,
    7119, 1405,   30,   30, 0x0a,
    7176, 1405,   30,   30, 0x0a,
    7234, 1405,   30,   30, 0x0a,
    7317, 7294,   30,   30, 0x0a,
    7352,  216,  586,   30, 0x0a,
    7376,  216,  805,   30, 0x0a,
    7403,  216,   31,   30, 0x0a,
    7454,  216, 7425,   30, 0x0a,
    7484,  216,   31,   30, 0x0a,
    7528,  216, 7511,   30, 0x0a,
    7574,  216, 7557,   30, 0x0a,
    7603,  216, 4554,   30, 0x0a,
    7623, 3378,   30,   30, 0x0a,
    7677,  216,   30,   30, 0x0a,
    7731, 7708,   30,   30, 0x0a,
    7760,  216,  586,   30, 0x0a,
    7785,  216,  586,   30, 0x0a,
    7830, 7807,   30,   30, 0x0a,
    7880,  216, 7864,   30, 0x0a,
    7902,  216,  734,   30, 0x0a,
    7936, 1405,  211,   30, 0x0a,
    8002, 7971,  211,   30, 0x0a,
    8058,  216, 4554,   30, 0x0a,
    8083,  216, 1579,   30, 0x0a,
    8142, 8114,   30,   30, 0x0a,
    8184, 7294,   30,   30, 0x2a,
    8239, 8219,   30,   30, 0x0a,
    8300, 8275,   30,   30, 0x0a,
    8342, 8275,   30,   30, 0x0a,
    8409, 8384,   30,   30, 0x0a,
    8466, 8275,   30,   30, 0x0a,
    8533, 8509,   30,   30, 0x0a,
    8593, 8564,   30,   30, 0x0a,
    8676, 8644,   30,   30, 0x0a,
    8736, 1187,   30,   30, 0x2a,
    8814, 8790,   30,   30, 0x0a,
    8875, 8848,   30,   30, 0x0a,
    8912, 8275,   30,   30, 0x0a,
    8944, 8275,   30,   30, 0x0a,
    9017, 8987,   30,   30, 0x0a,
    9100, 9078,   30,   30, 0x2a,
    9179, 9156,   30,   30, 0x0a,
    9266, 9237,   30,   30, 0x0a,
    9307,  216,   30,   30, 0x2a,
    9332, 3846,   30,   30, 0x0a,
    9401, 9377,   30,   30, 0x0a,
    9475, 9452,   30,   30, 0x0a,
    9520, 8275,   30,   30, 0x0a,
    9586, 9563,   30,   30, 0x0a,
    9668, 9643,   30,   30, 0x0a,
    9732, 9701,   30,   30, 0x0a,
    9794, 4024,   30,   30, 0x0a,
    9860, 9839,   30,   30, 0x0a,
    9891, 5202,   30,   30, 0x0a,
    9926, 7708,   30,   30, 0x0a,
    9983, 9960,   30,   30, 0x0a,
    10040, 10014,   30,   30, 0x0a,
    10098, 10073,   30,   30, 0x0a,
    10165, 10133,   30,   30, 0x0a,
    10234, 10210,   30,   30, 0x2a,
    10298, 10274,   30,   30, 0x0a,
    10369, 10346,   30,   30, 0x0a,
    10454, 10421,   30,   30, 0x0a,
    10541, 10516,   30,   30, 0x0a,
    10592, 10573,   30,   30, 0x0a,
    10638, 10619,   30,   30, 0x0a,
    10684, 10665,   30,   30, 0x0a,
    10716,  216,  805,   30, 0x0a,
    10761, 10738,   30,   30, 0x0a,
    10795,  216,   30,   30, 0x0a,
    10841, 10816,   30,   30, 0x0a,
    10890,  216, 7511,   30, 0x0a,
    10931,  216, 10923,   30, 0x0a,
    10955,  216,   31,   30, 0x0a,
    10984,  216, 7557,   30, 0x0a,
    11015,  216, 1579,   30, 0x0a,
    11041,  216, 4554,   30, 0x0a,
    11105,  216, 11078,   30, 0x0a,
    11137, 7294,   30,   30, 0x0a,
    11179,  216, 11175,   30, 0x0a,
    11200,  216,   30,   30, 0x0a,
    11231,  216,   30,   30, 0x0a,
    11259,  216,   30,   30, 0x0a,
    11287, 2089,   30,   30, 0x0a,
    11317,  216,   30,   30, 0x2a,
    11374, 11340,   30,   30, 0x0a,
    11421, 1405,   30,   30, 0x0a,
    11474,  216, 7557,   30, 0x0a,
    11497,  216,  586,   30, 0x0a,
    11515,  216,  586,   30, 0x0a,
    11533,  216,  586,   30, 0x0a,
    11556,   30, 10923,   30, 0x0a,

 // enums: name, flags, count, data
    11584, 0x0,    3, 1178,
    11594, 0x0,    3, 1184,
    11608, 0x0,    2, 1190,
    11615, 0x0,   19, 1194,
    11632, 0x1,   19, 1232,
    11650, 0x0,   34, 1270,

 // enum data: key, value
    11669, uint(PythonQtWrapper_QGraphicsItem::NoCache),
    11677, uint(PythonQtWrapper_QGraphicsItem::ItemCoordinateCache),
    11697, uint(PythonQtWrapper_QGraphicsItem::DeviceCoordinateCache),
    11719, uint(PythonQtWrapper_QGraphicsItem::NonModal),
    11728, uint(PythonQtWrapper_QGraphicsItem::PanelModal),
    11739, uint(PythonQtWrapper_QGraphicsItem::SceneModal),
    11750, uint(PythonQtWrapper_QGraphicsItem::Type),
    11755, uint(PythonQtWrapper_QGraphicsItem::UserType),
    11764, uint(PythonQtWrapper_QGraphicsItem::ItemIsMovable),
    11778, uint(PythonQtWrapper_QGraphicsItem::ItemIsSelectable),
    11795, uint(PythonQtWrapper_QGraphicsItem::ItemIsFocusable),
    11811, uint(PythonQtWrapper_QGraphicsItem::ItemClipsToShape),
    11828, uint(PythonQtWrapper_QGraphicsItem::ItemClipsChildrenToShape),
    11853, uint(PythonQtWrapper_QGraphicsItem::ItemIgnoresTransformations),
    11880, uint(PythonQtWrapper_QGraphicsItem::ItemIgnoresParentOpacity),
    11905, uint(PythonQtWrapper_QGraphicsItem::ItemDoesntPropagateOpacityToChildren),
    11942, uint(PythonQtWrapper_QGraphicsItem::ItemStacksBehindParent),
    11965, uint(PythonQtWrapper_QGraphicsItem::ItemUsesExtendedStyleOption),
    11993, uint(PythonQtWrapper_QGraphicsItem::ItemHasNoContents),
    12011, uint(PythonQtWrapper_QGraphicsItem::ItemSendsGeometryChanges),
    12036, uint(PythonQtWrapper_QGraphicsItem::ItemAcceptsInputMethod),
    12059, uint(PythonQtWrapper_QGraphicsItem::ItemNegativeZStacksBehindParent),
    12091, uint(PythonQtWrapper_QGraphicsItem::ItemIsPanel),
    12103, uint(PythonQtWrapper_QGraphicsItem::ItemIsFocusScope),
    12120, uint(PythonQtWrapper_QGraphicsItem::ItemSendsScenePositionChanges),
    12150, uint(PythonQtWrapper_QGraphicsItem::ItemStopsClickFocusPropagation),
    12181, uint(PythonQtWrapper_QGraphicsItem::ItemStopsFocusHandling),
    11764, uint(PythonQtWrapper_QGraphicsItem::ItemIsMovable),
    11778, uint(PythonQtWrapper_QGraphicsItem::ItemIsSelectable),
    11795, uint(PythonQtWrapper_QGraphicsItem::ItemIsFocusable),
    11811, uint(PythonQtWrapper_QGraphicsItem::ItemClipsToShape),
    11828, uint(PythonQtWrapper_QGraphicsItem::ItemClipsChildrenToShape),
    11853, uint(PythonQtWrapper_QGraphicsItem::ItemIgnoresTransformations),
    11880, uint(PythonQtWrapper_QGraphicsItem::ItemIgnoresParentOpacity),
    11905, uint(PythonQtWrapper_QGraphicsItem::ItemDoesntPropagateOpacityToChildren),
    11942, uint(PythonQtWrapper_QGraphicsItem::ItemStacksBehindParent),
    11965, uint(PythonQtWrapper_QGraphicsItem::ItemUsesExtendedStyleOption),
    11993, uint(PythonQtWrapper_QGraphicsItem::ItemHasNoContents),
    12011, uint(PythonQtWrapper_QGraphicsItem::ItemSendsGeometryChanges),
    12036, uint(PythonQtWrapper_QGraphicsItem::ItemAcceptsInputMethod),
    12059, uint(PythonQtWrapper_QGraphicsItem::ItemNegativeZStacksBehindParent),
    12091, uint(PythonQtWrapper_QGraphicsItem::ItemIsPanel),
    12103, uint(PythonQtWrapper_QGraphicsItem::ItemIsFocusScope),
    12120, uint(PythonQtWrapper_QGraphicsItem::ItemSendsScenePositionChanges),
    12150, uint(PythonQtWrapper_QGraphicsItem::ItemStopsClickFocusPropagation),
    12181, uint(PythonQtWrapper_QGraphicsItem::ItemStopsFocusHandling),
    12204, uint(PythonQtWrapper_QGraphicsItem::ItemPositionChange),
    12223, uint(PythonQtWrapper_QGraphicsItem::ItemMatrixChange),
    12240, uint(PythonQtWrapper_QGraphicsItem::ItemVisibleChange),
    12258, uint(PythonQtWrapper_QGraphicsItem::ItemEnabledChange),
    12276, uint(PythonQtWrapper_QGraphicsItem::ItemSelectedChange),
    12295, uint(PythonQtWrapper_QGraphicsItem::ItemParentChange),
    12312, uint(PythonQtWrapper_QGraphicsItem::ItemChildAddedChange),
    12333, uint(PythonQtWrapper_QGraphicsItem::ItemChildRemovedChange),
    12356, uint(PythonQtWrapper_QGraphicsItem::ItemTransformChange),
    12376, uint(PythonQtWrapper_QGraphicsItem::ItemPositionHasChanged),
    12399, uint(PythonQtWrapper_QGraphicsItem::ItemTransformHasChanged),
    12423, uint(PythonQtWrapper_QGraphicsItem::ItemSceneChange),
    12439, uint(PythonQtWrapper_QGraphicsItem::ItemVisibleHasChanged),
    12461, uint(PythonQtWrapper_QGraphicsItem::ItemEnabledHasChanged),
    12483, uint(PythonQtWrapper_QGraphicsItem::ItemSelectedHasChanged),
    12506, uint(PythonQtWrapper_QGraphicsItem::ItemParentHasChanged),
    12527, uint(PythonQtWrapper_QGraphicsItem::ItemSceneHasChanged),
    12547, uint(PythonQtWrapper_QGraphicsItem::ItemCursorChange),
    12564, uint(PythonQtWrapper_QGraphicsItem::ItemCursorHasChanged),
    12585, uint(PythonQtWrapper_QGraphicsItem::ItemToolTipChange),
    12603, uint(PythonQtWrapper_QGraphicsItem::ItemToolTipHasChanged),
    12625, uint(PythonQtWrapper_QGraphicsItem::ItemFlagsChange),
    12641, uint(PythonQtWrapper_QGraphicsItem::ItemFlagsHaveChanged),
    12662, uint(PythonQtWrapper_QGraphicsItem::ItemZValueChange),
    12679, uint(PythonQtWrapper_QGraphicsItem::ItemZValueHasChanged),
    12700, uint(PythonQtWrapper_QGraphicsItem::ItemOpacityChange),
    12718, uint(PythonQtWrapper_QGraphicsItem::ItemOpacityHasChanged),
    12740, uint(PythonQtWrapper_QGraphicsItem::ItemScenePositionHasChanged),
    12768, uint(PythonQtWrapper_QGraphicsItem::ItemRotationChange),
    12787, uint(PythonQtWrapper_QGraphicsItem::ItemRotationHasChanged),
    12810, uint(PythonQtWrapper_QGraphicsItem::ItemScaleChange),
    12826, uint(PythonQtWrapper_QGraphicsItem::ItemScaleHasChanged),
    12846, uint(PythonQtWrapper_QGraphicsItem::ItemTransformOriginPointChange),
    12877, uint(PythonQtWrapper_QGraphicsItem::ItemTransformOriginPointHasChanged),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsItem[] = {
    "PythonQtWrapper_QGraphicsItem\0\0"
    "QGraphicsItem*\0parent,scene\0"
    "new_QGraphicsItem(QGraphicsItem*,QGraphicsScene*)\0"
    "parent\0new_QGraphicsItem(QGraphicsItem*)\0"
    "new_QGraphicsItem()\0obj\0"
    "delete_QGraphicsItem(QGraphicsItem*)\0"
    "bool\0theWrappedObject\0py_hasOwner(QGraphicsItem*)\0"
    "acceptDrops(QGraphicsItem*)\0"
    "acceptHoverEvents(QGraphicsItem*)\0"
    "acceptTouchEvents(QGraphicsItem*)\0"
    "Qt::MouseButtons\0acceptedMouseButtons(QGraphicsItem*)\0"
    "acceptsHoverEvents(QGraphicsItem*)\0"
    "theWrappedObject,phase\0"
    "advance(QGraphicsItem*,int)\0QRegion\0"
    "theWrappedObject,itemToDeviceTransform\0"
    "boundingRegion(QGraphicsItem*,QTransform)\0"
    "qreal\0boundingRegionGranularity(QGraphicsItem*)\0"
    "QGraphicsItem::CacheMode\0"
    "cacheMode(QGraphicsItem*)\0"
    "QList<QGraphicsItem*>\0childItems(QGraphicsItem*)\0"
    "QRectF\0childrenBoundingRect(QGraphicsItem*)\0"
    "clearFocus(QGraphicsItem*)\0QPainterPath\0"
    "clipPath(QGraphicsItem*)\0"
    "theWrappedObject,other,mode\0"
    "collidesWithItem(QGraphicsItem*,const QGraphicsItem*,Qt::ItemSelection"
    "Mode)\0"
    "theWrappedObject,other\0"
    "collidesWithItem(QGraphicsItem*,const QGraphicsItem*)\0"
    "theWrappedObject,path,mode\0"
    "collidesWithPath(QGraphicsItem*,QPainterPath,Qt::ItemSelectionMode)\0"
    "theWrappedObject,path\0"
    "collidesWithPath(QGraphicsItem*,QPainterPath)\0"
    "theWrappedObject,mode\0"
    "collidingItems(QGraphicsItem*,Qt::ItemSelectionMode)\0"
    "collidingItems(QGraphicsItem*)\0"
    "commonAncestorItem(QGraphicsItem*,const QGraphicsItem*)\0"
    "theWrappedObject,point\0"
    "contains(QGraphicsItem*,QPointF)\0"
    "theWrappedObject,event\0"
    "contextMenuEvent(QGraphicsItem*,QGraphicsSceneContextMenuEvent*)\0"
    "QCursor\0cursor(QGraphicsItem*)\0QVariant\0"
    "theWrappedObject,key\0data(QGraphicsItem*,int)\0"
    "QTransform\0theWrappedObject,viewportTransform\0"
    "deviceTransform(QGraphicsItem*,QTransform)\0"
    "dragEnterEvent(QGraphicsItem*,QGraphicsSceneDragDropEvent*)\0"
    "dragLeaveEvent(QGraphicsItem*,QGraphicsSceneDragDropEvent*)\0"
    "dragMoveEvent(QGraphicsItem*,QGraphicsSceneDragDropEvent*)\0"
    "dropEvent(QGraphicsItem*,QGraphicsSceneDragDropEvent*)\0"
    "effectiveOpacity(QGraphicsItem*)\0"
    "theWrappedObject,rect,xmargin,ymargin\0"
    "ensureVisible(QGraphicsItem*,QRectF,int,int)\0"
    "theWrappedObject,rect,xmargin\0"
    "ensureVisible(QGraphicsItem*,QRectF,int)\0"
    "theWrappedObject,rect\0"
    "ensureVisible(QGraphicsItem*,QRectF)\0"
    "ensureVisible(QGraphicsItem*)\0"
    "theWrappedObject,x,y,w,h,xmargin,ymargin\0"
    "ensureVisible(QGraphicsItem*,qreal,qreal,qreal,qreal,int,int)\0"
    "theWrappedObject,x,y,w,h,xmargin\0"
    "ensureVisible(QGraphicsItem*,qreal,qreal,qreal,qreal,int)\0"
    "theWrappedObject,x,y,w,h\0"
    "ensureVisible(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,variant\0"
    "extension(QGraphicsItem*,QVariant)\0"
    "filtersChildEvents(QGraphicsItem*)\0"
    "QGraphicsItem::GraphicsItemFlags\0"
    "flags(QGraphicsItem*)\0"
    "focusInEvent(QGraphicsItem*,QFocusEvent*)\0"
    "focusItem(QGraphicsItem*)\0"
    "focusOutEvent(QGraphicsItem*,QFocusEvent*)\0"
    "focusProxy(QGraphicsItem*)\0"
    "focusScopeItem(QGraphicsItem*)\0"
    "grabKeyboard(QGraphicsItem*)\0"
    "grabMouse(QGraphicsItem*)\0QGraphicsEffect*\0"
    "graphicsEffect(QGraphicsItem*)\0"
    "QGraphicsItemGroup*\0group(QGraphicsItem*)\0"
    "handlesChildEvents(QGraphicsItem*)\0"
    "hasCursor(QGraphicsItem*)\0"
    "hasFocus(QGraphicsItem*)\0hide(QGraphicsItem*)\0"
    "hoverEnterEvent(QGraphicsItem*,QGraphicsSceneHoverEvent*)\0"
    "hoverLeaveEvent(QGraphicsItem*,QGraphicsSceneHoverEvent*)\0"
    "hoverMoveEvent(QGraphicsItem*,QGraphicsSceneHoverEvent*)\0"
    "inputMethodEvent(QGraphicsItem*,QInputMethodEvent*)\0"
    "Qt::InputMethodHints\0"
    "inputMethodHints(QGraphicsItem*)\0"
    "theWrappedObject,query\0"
    "inputMethodQuery(QGraphicsItem*,Qt::InputMethodQuery)\0"
    "theWrappedObject,filterItem\0"
    "installSceneEventFilter(QGraphicsItem*,QGraphicsItem*)\0"
    "isActive(QGraphicsItem*)\0"
    "theWrappedObject,child\0"
    "isAncestorOf(QGraphicsItem*,const QGraphicsItem*)\0"
    "theWrappedObject,blockingPanel\0"
    "isBlockedByModalPanel(QGraphicsItem*,QGraphicsItem**)\0"
    "isBlockedByModalPanel(QGraphicsItem*)\0"
    "isClipped(QGraphicsItem*)\0"
    "isEnabled(QGraphicsItem*)\0"
    "isObscured(QGraphicsItem*)\0"
    "isObscured(QGraphicsItem*,QRectF)\0"
    "isObscured(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,item\0"
    "isObscuredBy(QGraphicsItem*,const QGraphicsItem*)\0"
    "isPanel(QGraphicsItem*)\0"
    "isSelected(QGraphicsItem*)\0"
    "isUnderMouse(QGraphicsItem*)\0"
    "isVisible(QGraphicsItem*)\0"
    "theWrappedObject,parent\0"
    "isVisibleTo(QGraphicsItem*,const QGraphicsItem*)\0"
    "isWidget(QGraphicsItem*)\0"
    "isWindow(QGraphicsItem*)\0"
    "theWrappedObject,change,value\0"
    "itemChange(QGraphicsItem*,QGraphicsItem::GraphicsItemChange,QVariant)\0"
    "theWrappedObject,other,ok\0"
    "itemTransform(QGraphicsItem*,const QGraphicsItem*,bool*)\0"
    "itemTransform(QGraphicsItem*,const QGraphicsItem*)\0"
    "keyPressEvent(QGraphicsItem*,QKeyEvent*)\0"
    "keyReleaseEvent(QGraphicsItem*,QKeyEvent*)\0"
    "theWrappedObject,item,path\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,QPainterPath)\0"
    "QPointF\0theWrappedObject,item,point\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,QPointF)\0"
    "QPolygonF\0theWrappedObject,item,polygon\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,QPolygonF)\0"
    "theWrappedObject,item,rect\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,QRectF)\0"
    "theWrappedObject,item,x,y\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal)\0"
    "theWrappedObject,item,x,y,w,h\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal,qreal,qrea"
    "l)\0"
    "mapFromParent(QGraphicsItem*,QPainterPath)\0"
    "mapFromParent(QGraphicsItem*,QPointF)\0"
    "theWrappedObject,polygon\0"
    "mapFromParent(QGraphicsItem*,QPolygonF)\0"
    "mapFromParent(QGraphicsItem*,QRectF)\0"
    "theWrappedObject,x,y\0"
    "mapFromParent(QGraphicsItem*,qreal,qreal)\0"
    "mapFromParent(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapFromScene(QGraphicsItem*,QPainterPath)\0"
    "mapFromScene(QGraphicsItem*,QPointF)\0"
    "mapFromScene(QGraphicsItem*,QPolygonF)\0"
    "mapFromScene(QGraphicsItem*,QRectF)\0"
    "mapFromScene(QGraphicsItem*,qreal,qreal)\0"
    "mapFromScene(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapRectFromItem(QGraphicsItem*,const QGraphicsItem*,QRectF)\0"
    "mapRectFromItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal,qreal,"
    "qreal)\0"
    "mapRectFromParent(QGraphicsItem*,QRectF)\0"
    "mapRectFromParent(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapRectFromScene(QGraphicsItem*,QRectF)\0"
    "mapRectFromScene(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapRectToItem(QGraphicsItem*,const QGraphicsItem*,QRectF)\0"
    "mapRectToItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal,qreal,qr"
    "eal)\0"
    "mapRectToParent(QGraphicsItem*,QRectF)\0"
    "mapRectToParent(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapRectToScene(QGraphicsItem*,QRectF)\0"
    "mapRectToScene(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,QPainterPath)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,QPointF)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,QPolygonF)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,QRectF)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapToParent(QGraphicsItem*,QPainterPath)\0"
    "mapToParent(QGraphicsItem*,QPointF)\0"
    "mapToParent(QGraphicsItem*,QPolygonF)\0"
    "mapToParent(QGraphicsItem*,QRectF)\0"
    "mapToParent(QGraphicsItem*,qreal,qreal)\0"
    "mapToParent(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapToScene(QGraphicsItem*,QPainterPath)\0"
    "mapToScene(QGraphicsItem*,QPointF)\0"
    "mapToScene(QGraphicsItem*,QPolygonF)\0"
    "mapToScene(QGraphicsItem*,QRectF)\0"
    "mapToScene(QGraphicsItem*,qreal,qreal)\0"
    "mapToScene(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mouseDoubleClickEvent(QGraphicsItem*,QGraphicsSceneMouseEvent*)\0"
    "mouseMoveEvent(QGraphicsItem*,QGraphicsSceneMouseEvent*)\0"
    "mousePressEvent(QGraphicsItem*,QGraphicsSceneMouseEvent*)\0"
    "mouseReleaseEvent(QGraphicsItem*,QGraphicsSceneMouseEvent*)\0"
    "theWrappedObject,dx,dy\0"
    "moveBy(QGraphicsItem*,qreal,qreal)\0"
    "opacity(QGraphicsItem*)\0"
    "opaqueArea(QGraphicsItem*)\0"
    "panel(QGraphicsItem*)\0"
    "QGraphicsItem::PanelModality\0"
    "panelModality(QGraphicsItem*)\0"
    "parentItem(QGraphicsItem*)\0QGraphicsObject*\0"
    "parentObject(QGraphicsItem*)\0"
    "QGraphicsWidget*\0parentWidget(QGraphicsItem*)\0"
    "pos(QGraphicsItem*)\0"
    "removeSceneEventFilter(QGraphicsItem*,QGraphicsItem*)\0"
    "resetTransform(QGraphicsItem*)\0"
    "theWrappedObject,angle\0"
    "rotate(QGraphicsItem*,qreal)\0"
    "rotation(QGraphicsItem*)\0scale(QGraphicsItem*)\0"
    "theWrappedObject,sx,sy\0"
    "scale(QGraphicsItem*,qreal,qreal)\0"
    "QGraphicsScene*\0scene(QGraphicsItem*)\0"
    "sceneBoundingRect(QGraphicsItem*)\0"
    "sceneEvent(QGraphicsItem*,QEvent*)\0"
    "theWrappedObject,watched,event\0"
    "sceneEventFilter(QGraphicsItem*,QGraphicsItem*,QEvent*)\0"
    "scenePos(QGraphicsItem*)\0"
    "sceneTransform(QGraphicsItem*)\0"
    "theWrappedObject,dx,dy,rect\0"
    "scroll(QGraphicsItem*,qreal,qreal,QRectF)\0"
    "scroll(QGraphicsItem*,qreal,qreal)\0"
    "theWrappedObject,on\0"
    "setAcceptDrops(QGraphicsItem*,bool)\0"
    "theWrappedObject,enabled\0"
    "setAcceptHoverEvents(QGraphicsItem*,bool)\0"
    "setAcceptTouchEvents(QGraphicsItem*,bool)\0"
    "theWrappedObject,buttons\0"
    "setAcceptedMouseButtons(QGraphicsItem*,Qt::MouseButtons)\0"
    "setAcceptsHoverEvents(QGraphicsItem*,bool)\0"
    "theWrappedObject,active\0"
    "setActive(QGraphicsItem*,bool)\0"
    "theWrappedObject,granularity\0"
    "setBoundingRegionGranularity(QGraphicsItem*,qreal)\0"
    "theWrappedObject,mode,cacheSize\0"
    "setCacheMode(QGraphicsItem*,QGraphicsItem::CacheMode,QSize)\0"
    "setCacheMode(QGraphicsItem*,QGraphicsItem::CacheMode)\0"
    "theWrappedObject,cursor\0"
    "setCursor(QGraphicsItem*,QCursor)\0"
    "theWrappedObject,key,value\0"
    "setData(QGraphicsItem*,int,QVariant)\0"
    "setEnabled(QGraphicsItem*,bool)\0"
    "setFiltersChildEvents(QGraphicsItem*,bool)\0"
    "theWrappedObject,flag,enabled\0"
    "setFlag(QGraphicsItem*,QGraphicsItem::GraphicsItemFlag,bool)\0"
    "theWrappedObject,flag\0"
    "setFlag(QGraphicsItem*,QGraphicsItem::GraphicsItemFlag)\0"
    "theWrappedObject,flags\0"
    "setFlags(QGraphicsItem*,QGraphicsItem::GraphicsItemFlags)\0"
    "theWrappedObject,focusReason\0"
    "setFocus(QGraphicsItem*,Qt::FocusReason)\0"
    "setFocus(QGraphicsItem*)\0"
    "setFocusProxy(QGraphicsItem*,QGraphicsItem*)\0"
    "theWrappedObject,effect\0"
    "setGraphicsEffect(QGraphicsItem*,QGraphicsEffect*)\0"
    "theWrappedObject,group\0"
    "setGroup(QGraphicsItem*,QGraphicsItemGroup*)\0"
    "setHandlesChildEvents(QGraphicsItem*,bool)\0"
    "theWrappedObject,hints\0"
    "setInputMethodHints(QGraphicsItem*,Qt::InputMethodHints)\0"
    "theWrappedObject,opacity\0"
    "setOpacity(QGraphicsItem*,qreal)\0"
    "theWrappedObject,panelModality\0"
    "setPanelModality(QGraphicsItem*,QGraphicsItem::PanelModality)\0"
    "setParentItem(QGraphicsItem*,QGraphicsItem*)\0"
    "theWrappedObject,pos\0"
    "setPos(QGraphicsItem*,QPointF)\0"
    "setPos(QGraphicsItem*,qreal,qreal)\0"
    "setRotation(QGraphicsItem*,qreal)\0"
    "theWrappedObject,scale\0"
    "setScale(QGraphicsItem*,qreal)\0"
    "theWrappedObject,selected\0"
    "setSelected(QGraphicsItem*,bool)\0"
    "theWrappedObject,toolTip\0"
    "setToolTip(QGraphicsItem*,QString)\0"
    "theWrappedObject,matrix,combine\0"
    "setTransform(QGraphicsItem*,QTransform,bool)\0"
    "theWrappedObject,matrix\0"
    "setTransform(QGraphicsItem*,QTransform)\0"
    "theWrappedObject,origin\0"
    "setTransformOriginPoint(QGraphicsItem*,QPointF)\0"
    "theWrappedObject,ax,ay\0"
    "setTransformOriginPoint(QGraphicsItem*,qreal,qreal)\0"
    "theWrappedObject,transformations\0"
    "setTransformations(QGraphicsItem*,QList<QGraphicsTransform*>)\0"
    "theWrappedObject,visible\0"
    "setVisible(QGraphicsItem*,bool)\0"
    "theWrappedObject,x\0setX(QGraphicsItem*,qreal)\0"
    "theWrappedObject,y\0setY(QGraphicsItem*,qreal)\0"
    "theWrappedObject,z\0setZValue(QGraphicsItem*,qreal)\0"
    "shape(QGraphicsItem*)\0theWrappedObject,sh,sv\0"
    "shear(QGraphicsItem*,qreal,qreal)\0"
    "show(QGraphicsItem*)\0theWrappedObject,sibling\0"
    "stackBefore(QGraphicsItem*,const QGraphicsItem*)\0"
    "toGraphicsObject(QGraphicsItem*)\0"
    "QString\0toolTip(QGraphicsItem*)\0"
    "topLevelItem(QGraphicsItem*)\0"
    "topLevelWidget(QGraphicsItem*)\0"
    "transform(QGraphicsItem*)\0"
    "transformOriginPoint(QGraphicsItem*)\0"
    "QList<QGraphicsTransform*>\0"
    "transformations(QGraphicsItem*)\0"
    "translate(QGraphicsItem*,qreal,qreal)\0"
    "int\0type(QGraphicsItem*)\0"
    "ungrabKeyboard(QGraphicsItem*)\0"
    "ungrabMouse(QGraphicsItem*)\0"
    "unsetCursor(QGraphicsItem*)\0"
    "update(QGraphicsItem*,QRectF)\0"
    "update(QGraphicsItem*)\0"
    "theWrappedObject,x,y,width,height\0"
    "update(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "wheelEvent(QGraphicsItem*,QGraphicsSceneWheelEvent*)\0"
    "window(QGraphicsItem*)\0x(QGraphicsItem*)\0"
    "y(QGraphicsItem*)\0zValue(QGraphicsItem*)\0"
    "py_toString(QGraphicsItem*)\0CacheMode\0"
    "PanelModality\0enum_1\0GraphicsItemFlag\0"
    "GraphicsItemFlags\0GraphicsItemChange\0"
    "NoCache\0ItemCoordinateCache\0"
    "DeviceCoordinateCache\0NonModal\0"
    "PanelModal\0SceneModal\0Type\0UserType\0"
    "ItemIsMovable\0ItemIsSelectable\0"
    "ItemIsFocusable\0ItemClipsToShape\0"
    "ItemClipsChildrenToShape\0"
    "ItemIgnoresTransformations\0"
    "ItemIgnoresParentOpacity\0"
    "ItemDoesntPropagateOpacityToChildren\0"
    "ItemStacksBehindParent\0"
    "ItemUsesExtendedStyleOption\0"
    "ItemHasNoContents\0ItemSendsGeometryChanges\0"
    "ItemAcceptsInputMethod\0"
    "ItemNegativeZStacksBehindParent\0"
    "ItemIsPanel\0ItemIsFocusScope\0"
    "ItemSendsScenePositionChanges\0"
    "ItemStopsClickFocusPropagation\0"
    "ItemStopsFocusHandling\0ItemPositionChange\0"
    "ItemMatrixChange\0ItemVisibleChange\0"
    "ItemEnabledChange\0ItemSelectedChange\0"
    "ItemParentChange\0ItemChildAddedChange\0"
    "ItemChildRemovedChange\0ItemTransformChange\0"
    "ItemPositionHasChanged\0ItemTransformHasChanged\0"
    "ItemSceneChange\0ItemVisibleHasChanged\0"
    "ItemEnabledHasChanged\0ItemSelectedHasChanged\0"
    "ItemParentHasChanged\0ItemSceneHasChanged\0"
    "ItemCursorChange\0ItemCursorHasChanged\0"
    "ItemToolTipChange\0ItemToolTipHasChanged\0"
    "ItemFlagsChange\0ItemFlagsHaveChanged\0"
    "ItemZValueChange\0ItemZValueHasChanged\0"
    "ItemOpacityChange\0ItemOpacityHasChanged\0"
    "ItemScenePositionHasChanged\0"
    "ItemRotationChange\0ItemRotationHasChanged\0"
    "ItemScaleChange\0ItemScaleHasChanged\0"
    "ItemTransformOriginPointChange\0"
    "ItemTransformOriginPointHasChanged\0"
};

void PythonQtWrapper_QGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsItem *_t = static_cast<PythonQtWrapper_QGraphicsItem *>(_o);
        switch (_id) {
        case 0: { QGraphicsItem* _r = _t->new_QGraphicsItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsItem* _r = _t->new_QGraphicsItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsItem* _r = _t->new_QGraphicsItem();
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QGraphicsItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->py_hasOwner((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->acceptDrops((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->acceptHoverEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->acceptTouchEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { Qt::MouseButtons _r = _t->acceptedMouseButtons((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::MouseButtons*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->acceptsHoverEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->advance((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: { QRegion _r = _t->boundingRegion((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->boundingRegionGranularity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { QGraphicsItem::CacheMode _r = _t->cacheMode((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem::CacheMode*>(_a[0]) = _r; }  break;
        case 14: { QList<QGraphicsItem*> _r = _t->childItems((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGraphicsItem*>*>(_a[0]) = _r; }  break;
        case 15: { QRectF _r = _t->childrenBoundingRect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 16: _t->clearFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 17: { QPainterPath _r = _t->clipPath((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->collidesWithItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< Qt::ItemSelectionMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->collidesWithItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->collidesWithPath((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])),(*reinterpret_cast< Qt::ItemSelectionMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->collidesWithPath((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { QList<QGraphicsItem*> _r = _t->collidingItems((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::ItemSelectionMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QGraphicsItem*>*>(_a[0]) = _r; }  break;
        case 23: { QList<QGraphicsItem*> _r = _t->collidingItems((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGraphicsItem*>*>(_a[0]) = _r; }  break;
        case 24: { QGraphicsItem* _r = _t->commonAncestorItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->contains((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: _t->contextMenuEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneContextMenuEvent*(*)>(_a[2]))); break;
        case 27: { QCursor _r = _t->cursor((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCursor*>(_a[0]) = _r; }  break;
        case 28: { QVariant _r = _t->data((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 29: { QTransform _r = _t->deviceTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 30: _t->dragEnterEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 31: _t->dragLeaveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 32: _t->dragMoveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 33: _t->dropEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 34: { qreal _r = _t->effectiveOpacity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 35: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 36: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 38: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 39: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 40: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 41: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 42: { QVariant _r = _t->extension((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->filtersChildEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { QGraphicsItem::GraphicsItemFlags _r = _t->flags((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem::GraphicsItemFlags*>(_a[0]) = _r; }  break;
        case 45: _t->focusInEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 46: { QGraphicsItem* _r = _t->focusItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 47: _t->focusOutEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 48: { QGraphicsItem* _r = _t->focusProxy((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 49: { QGraphicsItem* _r = _t->focusScopeItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 50: _t->grabKeyboard((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 51: _t->grabMouse((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 52: { QGraphicsEffect* _r = _t->graphicsEffect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEffect**>(_a[0]) = _r; }  break;
        case 53: { QGraphicsItemGroup* _r = _t->group((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItemGroup**>(_a[0]) = _r; }  break;
        case 54: { bool _r = _t->handlesChildEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: { bool _r = _t->hasCursor((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->hasFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: _t->hide((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 58: _t->hoverEnterEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneHoverEvent*(*)>(_a[2]))); break;
        case 59: _t->hoverLeaveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneHoverEvent*(*)>(_a[2]))); break;
        case 60: _t->hoverMoveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneHoverEvent*(*)>(_a[2]))); break;
        case 61: _t->inputMethodEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QInputMethodEvent*(*)>(_a[2]))); break;
        case 62: { Qt::InputMethodHints _r = _t->inputMethodHints((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::InputMethodHints*>(_a[0]) = _r; }  break;
        case 63: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 64: _t->installSceneEventFilter((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 65: { bool _r = _t->isActive((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 66: { bool _r = _t->isAncestorOf((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 67: { bool _r = _t->isBlockedByModalPanel((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem**(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 68: { bool _r = _t->isBlockedByModalPanel((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 69: { bool _r = _t->isClipped((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 70: { bool _r = _t->isEnabled((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 71: { bool _r = _t->isObscured((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 72: { bool _r = _t->isObscured((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 73: { bool _r = _t->isObscured((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 74: { bool _r = _t->isObscuredBy((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 75: { bool _r = _t->isPanel((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 76: { bool _r = _t->isSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 77: { bool _r = _t->isUnderMouse((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 78: { bool _r = _t->isVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 79: { bool _r = _t->isVisibleTo((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 80: { bool _r = _t->isWidget((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 81: { bool _r = _t->isWindow((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 82: { QVariant _r = _t->itemChange((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::GraphicsItemChange(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 83: { QTransform _r = _t->itemTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 84: { QTransform _r = _t->itemTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 85: _t->keyPressEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 86: _t->keyReleaseEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 87: { QPainterPath _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPainterPath(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 88: { QPointF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 89: { QPolygonF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPolygonF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 90: { QPolygonF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 91: { QPointF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 92: { QPolygonF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 93: { QPainterPath _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 94: { QPointF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 95: { QPolygonF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 96: { QPolygonF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 97: { QPointF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 98: { QPolygonF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 99: { QPainterPath _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 100: { QPointF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 101: { QPolygonF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 102: { QPolygonF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 103: { QPointF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 104: { QPolygonF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 105: { QRectF _r = _t->mapRectFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 106: { QRectF _r = _t->mapRectFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 107: { QRectF _r = _t->mapRectFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 108: { QRectF _r = _t->mapRectFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 109: { QRectF _r = _t->mapRectFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 110: { QRectF _r = _t->mapRectFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 111: { QRectF _r = _t->mapRectToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 112: { QRectF _r = _t->mapRectToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 113: { QRectF _r = _t->mapRectToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 114: { QRectF _r = _t->mapRectToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 115: { QRectF _r = _t->mapRectToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 116: { QRectF _r = _t->mapRectToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 117: { QPainterPath _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPainterPath(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 118: { QPointF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 119: { QPolygonF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPolygonF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 120: { QPolygonF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 121: { QPointF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 122: { QPolygonF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 123: { QPainterPath _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 124: { QPointF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 125: { QPolygonF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 126: { QPolygonF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 127: { QPointF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 128: { QPolygonF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 129: { QPainterPath _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 130: { QPointF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 131: { QPolygonF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 132: { QPolygonF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 133: { QPointF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 134: { QPolygonF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 135: _t->mouseDoubleClickEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        case 136: _t->mouseMoveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        case 137: _t->mousePressEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        case 138: _t->mouseReleaseEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        case 139: _t->moveBy((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 140: { qreal _r = _t->opacity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 141: { QPainterPath _r = _t->opaqueArea((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 142: { QGraphicsItem* _r = _t->panel((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 143: { QGraphicsItem::PanelModality _r = _t->panelModality((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem::PanelModality*>(_a[0]) = _r; }  break;
        case 144: { QGraphicsItem* _r = _t->parentItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 145: { QGraphicsObject* _r = _t->parentObject((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsObject**>(_a[0]) = _r; }  break;
        case 146: { QGraphicsWidget* _r = _t->parentWidget((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsWidget**>(_a[0]) = _r; }  break;
        case 147: { QPointF _r = _t->pos((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 148: _t->removeSceneEventFilter((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 149: _t->resetTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 150: _t->rotate((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 151: { qreal _r = _t->rotation((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 152: { qreal _r = _t->scale((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 153: _t->scale((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 154: { QGraphicsScene* _r = _t->scene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsScene**>(_a[0]) = _r; }  break;
        case 155: { QRectF _r = _t->sceneBoundingRect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 156: { bool _r = _t->sceneEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 157: { bool _r = _t->sceneEventFilter((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 158: { QPointF _r = _t->scenePos((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 159: { QTransform _r = _t->sceneTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 160: _t->scroll((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< const QRectF(*)>(_a[4]))); break;
        case 161: _t->scroll((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 162: _t->setAcceptDrops((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 163: _t->setAcceptHoverEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 164: _t->setAcceptTouchEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 165: _t->setAcceptedMouseButtons((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[2]))); break;
        case 166: _t->setAcceptsHoverEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 167: _t->setActive((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 168: _t->setBoundingRegionGranularity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 169: _t->setCacheMode((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::CacheMode(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3]))); break;
        case 170: _t->setCacheMode((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::CacheMode(*)>(_a[2]))); break;
        case 171: _t->setCursor((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QCursor(*)>(_a[2]))); break;
        case 172: _t->setData((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 173: _t->setEnabled((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 174: _t->setFiltersChildEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 175: _t->setFlag((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::GraphicsItemFlag(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 176: _t->setFlag((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::GraphicsItemFlag(*)>(_a[2]))); break;
        case 177: _t->setFlags((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::GraphicsItemFlags(*)>(_a[2]))); break;
        case 178: _t->setFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::FocusReason(*)>(_a[2]))); break;
        case 179: _t->setFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 180: _t->setFocusProxy((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 181: _t->setGraphicsEffect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsEffect*(*)>(_a[2]))); break;
        case 182: _t->setGroup((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[2]))); break;
        case 183: _t->setHandlesChildEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 184: _t->setInputMethodHints((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodHints(*)>(_a[2]))); break;
        case 185: _t->setOpacity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 186: _t->setPanelModality((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::PanelModality(*)>(_a[2]))); break;
        case 187: _t->setParentItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 188: _t->setPos((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 189: _t->setPos((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 190: _t->setRotation((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 191: _t->setScale((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 192: _t->setSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 193: _t->setToolTip((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 194: _t->setTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 195: _t->setTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2]))); break;
        case 196: _t->setTransformOriginPoint((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 197: _t->setTransformOriginPoint((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 198: _t->setTransformations((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QList<QGraphicsTransform*>(*)>(_a[2]))); break;
        case 199: _t->setVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 200: _t->setX((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 201: _t->setY((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 202: _t->setZValue((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 203: { QPainterPath _r = _t->shape((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 204: _t->shear((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 205: _t->show((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 206: _t->stackBefore((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2]))); break;
        case 207: { QGraphicsObject* _r = _t->toGraphicsObject((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsObject**>(_a[0]) = _r; }  break;
        case 208: { QString _r = _t->toolTip((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 209: { QGraphicsItem* _r = _t->topLevelItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 210: { QGraphicsWidget* _r = _t->topLevelWidget((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsWidget**>(_a[0]) = _r; }  break;
        case 211: { QTransform _r = _t->transform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 212: { QPointF _r = _t->transformOriginPoint((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 213: { QList<QGraphicsTransform*> _r = _t->transformations((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGraphicsTransform*>*>(_a[0]) = _r; }  break;
        case 214: _t->translate((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 215: { int _r = _t->type((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 216: _t->ungrabKeyboard((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 217: _t->ungrabMouse((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 218: _t->unsetCursor((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 219: _t->update((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 220: _t->update((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 221: _t->update((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 222: _t->wheelEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneWheelEvent*(*)>(_a[2]))); break;
        case 223: { QGraphicsWidget* _r = _t->window((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsWidget**>(_a[0]) = _r; }  break;
        case 224: { qreal _r = _t->x((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 225: { qreal _r = _t->y((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 226: { qreal _r = _t->zValue((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 227: { QString _r = _t->py_toString((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsItem,
      qt_meta_data_PythonQtWrapper_QGraphicsItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 228)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 228;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
