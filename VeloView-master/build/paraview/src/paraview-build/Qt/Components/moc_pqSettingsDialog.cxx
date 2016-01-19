/****************************************************************************
** Meta object code from reading C++ file 'pqSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSettingsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   17,   17,   17, 0x08,
      90,   17,   17,   17, 0x08,
     103,   17,   17,   17, 0x08,
     116,   17,   17,   17, 0x08,
     142,  136,   17,   17, 0x08,
     165,   17,   17,   17, 0x08,
     185,   17,   17,   17, 0x08,
     214,   17,   17,   17, 0x08,
     235,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqSettingsDialog[] = {
    "pqSettingsDialog\0\0showAdvanced,text\0"
    "filterWidgets(bool,QString)\0"
    "clicked(QAbstractButton*)\0onAccepted()\0"
    "onRejected()\0onRestoreDefaults()\0index\0"
    "onTabIndexChanged(int)\0onChangeAvailable()\0"
    "showRestartRequiredMessage()\0"
    "filterPanelWidgets()\0serverRemoved(pqServer*)\0"
};

void pqSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSettingsDialog *_t = static_cast<pqSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->filterWidgets((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->onAccepted(); break;
        case 3: _t->onRejected(); break;
        case 4: _t->onRestoreDefaults(); break;
        case 5: _t->onTabIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onChangeAvailable(); break;
        case 7: _t->showRestartRequiredMessage(); break;
        case 8: _t->filterPanelWidgets(); break;
        case 9: _t->serverRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqSettingsDialog,
      qt_meta_data_pqSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSettingsDialog))
        return static_cast<void*>(const_cast< pqSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void pqSettingsDialog::filterWidgets(bool _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
