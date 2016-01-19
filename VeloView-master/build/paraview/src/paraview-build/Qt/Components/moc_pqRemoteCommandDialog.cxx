/****************************************************************************
** Meta object code from reading C++ file 'pqRemoteCommandDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqRemoteCommandDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRemoteCommandDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqRemoteCommandDialog[] = {

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
      23,   22,   22,   22, 0x08,
      44,   22,   22,   22, 0x08,
      66,   22,   22,   22, 0x08,
      90,   22,   22,   22, 0x08,
     113,   22,   22,   22, 0x08,
     133,   22,   22,   22, 0x08,
     146,   22,   22,   22, 0x08,
     168,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqRemoteCommandDialog[] = {
    "pqRemoteCommandDialog\0\0AddCommandTemplate()\0"
    "EditCommandTemplate()\0DeleteCommandTemplate()\0"
    "UpdateCommandPreview()\0UpdateTokenValues()\0"
    "UpdateForm()\0FindXTermExecutable()\0"
    "FindSshExecutable()\0"
};

void pqRemoteCommandDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqRemoteCommandDialog *_t = static_cast<pqRemoteCommandDialog *>(_o);
        switch (_id) {
        case 0: _t->AddCommandTemplate(); break;
        case 1: _t->EditCommandTemplate(); break;
        case 2: _t->DeleteCommandTemplate(); break;
        case 3: _t->UpdateCommandPreview(); break;
        case 4: _t->UpdateTokenValues(); break;
        case 5: _t->UpdateForm(); break;
        case 6: _t->FindXTermExecutable(); break;
        case 7: _t->FindSshExecutable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqRemoteCommandDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqRemoteCommandDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqRemoteCommandDialog,
      qt_meta_data_pqRemoteCommandDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqRemoteCommandDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqRemoteCommandDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqRemoteCommandDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqRemoteCommandDialog))
        return static_cast<void*>(const_cast< pqRemoteCommandDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqRemoteCommandDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
