/****************************************************************************
** Meta object code from reading C++ file 'pqPluginTreeWidgetEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqPluginTreeWidgetEventTranslator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPluginTreeWidgetEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPluginTreeWidgetEventTranslator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x08,
      62,   34,   34,   34, 0x08,
      86,   34,   34,   34, 0x08,
     111,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqPluginTreeWidgetEventTranslator[] = {
    "pqPluginTreeWidgetEventTranslator\0\0"
    "onItemChanged(QModelIndex)\0"
    "onExpanded(QModelIndex)\0"
    "onCollapsed(QModelIndex)\0"
    "onCurrentChanged(QModelIndex)\0"
};

void pqPluginTreeWidgetEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPluginTreeWidgetEventTranslator *_t = static_cast<pqPluginTreeWidgetEventTranslator *>(_o);
        switch (_id) {
        case 0: _t->onItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->onCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onCurrentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPluginTreeWidgetEventTranslator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPluginTreeWidgetEventTranslator::staticMetaObject = {
    { &pqWidgetEventTranslator::staticMetaObject, qt_meta_stringdata_pqPluginTreeWidgetEventTranslator,
      qt_meta_data_pqPluginTreeWidgetEventTranslator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPluginTreeWidgetEventTranslator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPluginTreeWidgetEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPluginTreeWidgetEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPluginTreeWidgetEventTranslator))
        return static_cast<void*>(const_cast< pqPluginTreeWidgetEventTranslator*>(this));
    return pqWidgetEventTranslator::qt_metacast(_clname);
}

int pqPluginTreeWidgetEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqWidgetEventTranslator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
