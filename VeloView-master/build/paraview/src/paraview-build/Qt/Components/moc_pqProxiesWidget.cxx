/****************************************************************************
** Meta object code from reading C++ file 'pqProxiesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqProxiesWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxiesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxiesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x05,
      52,   17,   16,   16, 0x05,
      80,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     109,   16,   16,   16, 0x0a,
     167,  117,   16,   16, 0x0a,
     240,  214,   16,   16, 0x2a,
     297,  282,   16,   16, 0x2a,
     327,   16,   16,   16, 0x2a,
     349,   16,   16,   16, 0x0a,
     394,  369,  364,   16, 0x0a,
     436,  422,  364,   16, 0x2a,
     456,   16,  364,   16, 0x2a,
     472,   16,   16,   16, 0x0a,
     480,   16,   16,   16, 0x0a,
     488,   16,   16,   16, 0x0a,
     505,   16,   16,   16, 0x0a,
     519,   16,   16,   16, 0x08,
     543,   16,   16,   16, 0x08,
     568,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqProxiesWidget[] = {
    "pqProxiesWidget\0\0proxy\0"
    "changeAvailable(vtkSMProxy*)\0"
    "changeFinished(vtkSMProxy*)\0"
    "restartRequired(vtkSMProxy*)\0clear()\0"
    ",componentName,properties,applyChangesImmediately\0"
    "addProxy(vtkSMProxy*,QString,QStringList,bool)\0"
    ",componentName,properties\0"
    "addProxy(vtkSMProxy*,QString,QStringList)\0"
    ",componentName\0addProxy(vtkSMProxy*,QString)\0"
    "addProxy(vtkSMProxy*)\0updateLayout()\0"
    "bool\0show_advanced,filterText\0"
    "filterWidgets(bool,QString)\0show_advanced\0"
    "filterWidgets(bool)\0filterWidgets()\0"
    "apply()\0reset()\0setView(pqView*)\0"
    "updatePanel()\0triggerChangeFinished()\0"
    "triggerChangeAvailable()\0"
    "triggerRestartRequired()\0"
};

void pqProxiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxiesWidget *_t = static_cast<pqProxiesWidget *>(_o);
        switch (_id) {
        case 0: _t->changeAvailable((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 1: _t->changeFinished((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 2: _t->restartRequired((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->addProxy((*reinterpret_cast< vtkSMProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->addProxy((*reinterpret_cast< vtkSMProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 6: _t->addProxy((*reinterpret_cast< vtkSMProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->addProxy((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 8: _t->updateLayout(); break;
        case 9: { bool _r = _t->filterWidgets((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->filterWidgets((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->filterWidgets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->apply(); break;
        case 13: _t->reset(); break;
        case 14: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 15: _t->updatePanel(); break;
        case 16: _t->triggerChangeFinished(); break;
        case 17: _t->triggerChangeAvailable(); break;
        case 18: _t->triggerRestartRequired(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProxiesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxiesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProxiesWidget,
      qt_meta_data_pqProxiesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxiesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxiesWidget))
        return static_cast<void*>(const_cast< pqProxiesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqProxiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void pqProxiesWidget::changeAvailable(vtkSMProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqProxiesWidget::changeFinished(vtkSMProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqProxiesWidget::restartRequired(vtkSMProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
