/****************************************************************************
** Meta object code from reading C++ file 'pqProxyPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqProxyPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxyPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxyPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      25,   13,   13,   13, 0x05,
      36,   13,   13,   13, 0x05,
      46,   13,   13,   13, 0x05,
      57,   13,   13,   13, 0x05,
      70,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   13,   13,   13, 0x0a,
     100,   13,   13,   13, 0x0a,
     108,   13,   13,   13, 0x0a,
     117,   13,   13,   13, 0x0a,
     128,   13,   13,   13, 0x0a,
     145,   13,   13,   13, 0x0a,
     159,   13,   13,   13, 0x08,
     180,   13,   13,   13, 0x09,
     210,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqProxyPanel[] = {
    "pqProxyPanel\0\0modified()\0onaccept()\0"
    "onreset()\0onselect()\0ondeselect()\0"
    "viewChanged(pqView*)\0accept()\0reset()\0"
    "select()\0deselect()\0setView(pqView*)\0"
    "setModified()\0proxyModifiedEvent()\0"
    "updateInformationAndDomains()\0"
    "dataUpdated()\0"
};

void pqProxyPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxyPanel *_t = static_cast<pqProxyPanel *>(_o);
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->onaccept(); break;
        case 2: _t->onreset(); break;
        case 3: _t->onselect(); break;
        case 4: _t->ondeselect(); break;
        case 5: _t->viewChanged((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 6: _t->accept(); break;
        case 7: _t->reset(); break;
        case 8: _t->select(); break;
        case 9: _t->deselect(); break;
        case 10: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 11: _t->setModified(); break;
        case 12: _t->proxyModifiedEvent(); break;
        case 13: _t->updateInformationAndDomains(); break;
        case 14: _t->dataUpdated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProxyPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxyPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProxyPanel,
      qt_meta_data_pqProxyPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxyPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxyPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxyPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxyPanel))
        return static_cast<void*>(const_cast< pqProxyPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqProxyPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void pqProxyPanel::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqProxyPanel::onaccept()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqProxyPanel::onreset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pqProxyPanel::onselect()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void pqProxyPanel::ondeselect()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void pqProxyPanel::viewChanged(pqView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
