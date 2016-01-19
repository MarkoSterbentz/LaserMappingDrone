/****************************************************************************
** Meta object code from reading C++ file 'pqViewFrame.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqViewFrame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqViewFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqViewFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x05,
      46,   39,   12,   12, 0x05,
      78,   72,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,  101,   12,   12, 0x0a,
     131,  101,   12,   12, 0x0a,
     159,  101,   12,   12, 0x0a,
     197,  195,  190,   12, 0x0a,
     227,   12,   12,   12, 0x09,
     243,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqViewFrame[] = {
    "pqViewFrame\0\0button\0buttonPressed(int)\0"
    "action\0actionTriggered(QAction*)\0other\0"
    "swapPositions(QString)\0val\0"
    "setBorderVisibility(bool)\0"
    "setTitleBarVisibility(bool)\0"
    "setDecorationsVisibility(bool)\0bool\0"
    ",\0eventFilter(QObject*,QEvent*)\0"
    "buttonClicked()\0contextMenuRequested(QPoint)\0"
};

void pqViewFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqViewFrame *_t = static_cast<pqViewFrame *>(_o);
        switch (_id) {
        case 0: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->swapPositions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setBorderVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setTitleBarVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setDecorationsVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->buttonClicked(); break;
        case 8: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqViewFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqViewFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqViewFrame,
      qt_meta_data_pqViewFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqViewFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqViewFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqViewFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqViewFrame))
        return static_cast<void*>(const_cast< pqViewFrame*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqViewFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void pqViewFrame::buttonPressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqViewFrame::actionTriggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqViewFrame::swapPositions(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
