/****************************************************************************
** Meta object code from reading C++ file 'pqProxyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqProxyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      33,   14,   14,   14, 0x05,
      50,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   73,   68,   14, 0x0a,
     140,  126,   68,   14, 0x2a,
     160,   14,   68,   14, 0x2a,
     176,   14,   14,   14, 0x0a,
     184,   14,   14,   14, 0x0a,
     192,   14,   14,   14, 0x0a,
     209,   14,   14,   14, 0x0a,
     223,   14,   14,   14, 0x0a,
     243,   14,   14,   14, 0x0a,
     262,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqProxyWidget[] = {
    "pqProxyWidget\0\0changeAvailable()\0"
    "changeFinished()\0restartRequired()\0"
    "bool\0show_advanced,filterText\0"
    "filterWidgets(bool,QString)\0show_advanced\0"
    "filterWidgets(bool)\0filterWidgets()\0"
    "apply()\0reset()\0setView(pqView*)\0"
    "updatePanel()\0onRestoreDefaults()\0"
    "onSaveAsDefaults()\0onChangeFinished()\0"
};

void pqProxyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxyWidget *_t = static_cast<pqProxyWidget *>(_o);
        switch (_id) {
        case 0: _t->changeAvailable(); break;
        case 1: _t->changeFinished(); break;
        case 2: _t->restartRequired(); break;
        case 3: { bool _r = _t->filterWidgets((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->filterWidgets((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->filterWidgets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->apply(); break;
        case 7: _t->reset(); break;
        case 8: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 9: _t->updatePanel(); break;
        case 10: _t->onRestoreDefaults(); break;
        case 11: _t->onSaveAsDefaults(); break;
        case 12: _t->onChangeFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProxyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProxyWidget,
      qt_meta_data_pqProxyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxyWidget))
        return static_cast<void*>(const_cast< pqProxyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqProxyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void pqProxyWidget::changeAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqProxyWidget::changeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqProxyWidget::restartRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
