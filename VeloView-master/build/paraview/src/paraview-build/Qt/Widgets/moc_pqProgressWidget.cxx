/****************************************************************************
** Meta object code from reading C++ file 'pqProgressWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqProgressWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProgressWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProgressWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   33,   17,   17, 0x0a,
      80,   72,   17,   17, 0x0a,
     101,   72,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqProgressWidget[] = {
    "pqProgressWidget\0\0abortPressed()\0"
    "message,value\0setProgress(QString,int)\0"
    "enabled\0enableProgress(bool)\0"
    "enableAbort(bool)\0"
};

void pqProgressWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProgressWidget *_t = static_cast<pqProgressWidget *>(_o);
        switch (_id) {
        case 0: _t->abortPressed(); break;
        case 1: _t->setProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->enableProgress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableAbort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProgressWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProgressWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProgressWidget,
      qt_meta_data_pqProgressWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProgressWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProgressWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProgressWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProgressWidget))
        return static_cast<void*>(const_cast< pqProgressWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqProgressWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqProgressWidget::abortPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
