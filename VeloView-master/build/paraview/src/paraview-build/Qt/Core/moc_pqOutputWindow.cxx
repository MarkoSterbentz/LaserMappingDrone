/****************************************************************************
** Meta object code from reading C++ file 'pqOutputWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqOutputWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqOutputWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqOutputWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      39,   15,   15,   15, 0x0a,
      67,   15,   15,   15, 0x0a,
      97,   15,   15,   15, 0x0a,
     134,   15,   15,   15, 0x0a,
     165,   15,   15,   15, 0x0a,
     201,   15,   15,   15, 0x08,
     210,   15,   15,   15, 0x08,
     219,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqOutputWindow[] = {
    "pqOutputWindow\0\0onDisplayText(QString)\0"
    "onDisplayErrorText(QString)\0"
    "onDisplayWarningText(QString)\0"
    "onDisplayGenericWarningText(QString)\0"
    "onDisplayTextInWindow(QString)\0"
    "onDisplayErrorTextInWindow(QString)\0"
    "accept()\0reject()\0clear()\0"
};

void pqOutputWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqOutputWindow *_t = static_cast<pqOutputWindow *>(_o);
        switch (_id) {
        case 0: _t->onDisplayText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onDisplayErrorText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onDisplayWarningText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onDisplayGenericWarningText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onDisplayTextInWindow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onDisplayErrorTextInWindow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->accept(); break;
        case 7: _t->reject(); break;
        case 8: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqOutputWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqOutputWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqOutputWindow,
      qt_meta_data_pqOutputWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqOutputWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqOutputWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqOutputWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqOutputWindow))
        return static_cast<void*>(const_cast< pqOutputWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqOutputWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
