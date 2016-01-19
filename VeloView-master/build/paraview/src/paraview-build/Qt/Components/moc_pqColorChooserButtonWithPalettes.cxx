/****************************************************************************
** Meta object code from reading C++ file 'pqColorChooserButtonWithPalettes.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqColorChooserButtonWithPalettes.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorChooserButtonWithPalettes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqColorChooserButtonWithPalettes[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x08,
      47,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqColorChooserButtonWithPalettes[] = {
    "pqColorChooserButtonWithPalettes\0\0"
    "updateMenu()\0actionTriggered(QAction*)\0"
};

void pqColorChooserButtonWithPalettes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqColorChooserButtonWithPalettes *_t = static_cast<pqColorChooserButtonWithPalettes *>(_o);
        switch (_id) {
        case 0: _t->updateMenu(); break;
        case 1: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqColorChooserButtonWithPalettes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorChooserButtonWithPalettes::staticMetaObject = {
    { &pqColorChooserButton::staticMetaObject, qt_meta_stringdata_pqColorChooserButtonWithPalettes,
      qt_meta_data_pqColorChooserButtonWithPalettes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorChooserButtonWithPalettes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorChooserButtonWithPalettes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorChooserButtonWithPalettes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorChooserButtonWithPalettes))
        return static_cast<void*>(const_cast< pqColorChooserButtonWithPalettes*>(this));
    return pqColorChooserButton::qt_metacast(_clname);
}

int pqColorChooserButtonWithPalettes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqColorChooserButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_pqColorPaletteLinkHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_pqColorPaletteLinkHelper[] = {
    "pqColorPaletteLinkHelper\0"
};

void pqColorPaletteLinkHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqColorPaletteLinkHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorPaletteLinkHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqColorPaletteLinkHelper,
      qt_meta_data_pqColorPaletteLinkHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorPaletteLinkHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorPaletteLinkHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorPaletteLinkHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorPaletteLinkHelper))
        return static_cast<void*>(const_cast< pqColorPaletteLinkHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int pqColorPaletteLinkHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
