/****************************************************************************
** Meta object code from reading C++ file 'pqPropertiesPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqPropertiesPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPropertiesPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPropertiesPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       1,  149, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      29,   18,   18,   18, 0x05,
      47,   18,   18,   18, 0x05,
      88,   68,   18,   18, 0x05,
     126,  119,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     161,   18,   18,   18, 0x0a,
     169,   18,   18,   18, 0x0a,
     177,   18,   18,   18, 0x0a,
     188,   18,   18,   18, 0x0a,
     216,   18,   18,   18, 0x0a,
     243,   18,   18,   18, 0x0a,
     268,   18,   18,   18, 0x0a,
     292,   18,   18,   18, 0x0a,
     314,   18,   18,   18, 0x0a,
     335,   18,   18,   18, 0x08,
     352,   18,   18,   18, 0x08,
     381,   18,   18,   18, 0x08,
     422,   18,   18,   18, 0x08,
     436,   18,   18,   18, 0x08,
     468,   18,   18,   18, 0x08,
     482,   18,   18,   18, 0x08,
     503,   18,   18,   18, 0x08,
     538,  522,   18,   18, 0x08,
     566,   18,   18,   18, 0x28,
     590,   18,   18,   18, 0x08,
     622,   18,   18,   18, 0x08,
     642,   18,   18,   18, 0x08,

 // properties: name, type, flags
     671,  667, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_pqPropertiesPanel[] = {
    "pqPropertiesPanel\0\0applied()\0"
    "applied(pqProxy*)\0viewChanged(pqView*)\0"
    "groupname,proxyType\0helpRequested(QString,QString)\0"
    "source\0deleteRequested(pqPipelineSource*)\0"
    "apply()\0reset()\0showHelp()\0"
    "propertiesRestoreDefaults()\0"
    "propertiesSaveAsDefaults()\0"
    "displayRestoreDefaults()\0"
    "displaySaveAsDefaults()\0viewRestoreDefaults()\0"
    "viewSaveAsDefaults()\0setView(pqView*)\0"
    "setOutputPort(pqOutputPort*)\0"
    "setRepresentation(pqDataRepresentation*)\0"
    "deleteProxy()\0proxyDeleted(pqPipelineSource*)\0"
    "updatePanel()\0updateDisplayPanel()\0"
    "renderActiveView()\0change_finished\0"
    "sourcePropertyChanged(bool)\0"
    "sourcePropertyChanged()\0"
    "sourcePropertyChangeAvailable()\0"
    "updateButtonState()\0generalSettingsChanged()\0"
    "int\0panelMode\0"
};

void pqPropertiesPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPropertiesPanel *_t = static_cast<pqPropertiesPanel *>(_o);
        switch (_id) {
        case 0: _t->applied(); break;
        case 1: _t->applied((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 2: _t->viewChanged((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 3: _t->helpRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->deleteRequested((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 5: _t->apply(); break;
        case 6: _t->reset(); break;
        case 7: _t->showHelp(); break;
        case 8: _t->propertiesRestoreDefaults(); break;
        case 9: _t->propertiesSaveAsDefaults(); break;
        case 10: _t->displayRestoreDefaults(); break;
        case 11: _t->displaySaveAsDefaults(); break;
        case 12: _t->viewRestoreDefaults(); break;
        case 13: _t->viewSaveAsDefaults(); break;
        case 14: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 15: _t->setOutputPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 16: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 17: _t->deleteProxy(); break;
        case 18: _t->proxyDeleted((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 19: _t->updatePanel(); break;
        case 20: _t->updateDisplayPanel(); break;
        case 21: _t->renderActiveView(); break;
        case 22: _t->sourcePropertyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->sourcePropertyChanged(); break;
        case 24: _t->sourcePropertyChangeAvailable(); break;
        case 25: _t->updateButtonState(); break;
        case 26: _t->generalSettingsChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPropertiesPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPropertiesPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqPropertiesPanel,
      qt_meta_data_pqPropertiesPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPropertiesPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPropertiesPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPropertiesPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPropertiesPanel))
        return static_cast<void*>(const_cast< pqPropertiesPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqPropertiesPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = panelMode(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPanelMode(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqPropertiesPanel::applied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqPropertiesPanel::applied(pqProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqPropertiesPanel::viewChanged(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqPropertiesPanel::helpRequested(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqPropertiesPanel::deleteRequested(pqPipelineSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
