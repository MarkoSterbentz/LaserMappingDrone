/****************************************************************************
** Meta object code from reading C++ file 'pqTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqTreeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   13,   13,   13, 0x0a,
      41,   13,   13,   13, 0x0a,
      54,   50,   13,   13, 0x09,
      68,   13,   13,   13, 0x09,
      87,   13,   13,   13, 0x09,
     106,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqTreeWidget[] = {
    "pqTreeWidget\0\0navigatedPastEnd()\0"
    "allOn()\0allOff()\0col\0doToggle(int)\0"
    "updateCheckState()\0invalidateLayout()\0"
    "updateCheckStateInternal()\0"
};

void pqTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTreeWidget *_t = static_cast<pqTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->navigatedPastEnd(); break;
        case 1: _t->allOn(); break;
        case 2: _t->allOff(); break;
        case 3: _t->doToggle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateCheckState(); break;
        case 5: _t->invalidateLayout(); break;
        case 6: _t->updateCheckStateInternal(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_pqTreeWidget,
      qt_meta_data_pqTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTreeWidget))
        return static_cast<void*>(const_cast< pqTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int pqTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqTreeWidget::navigatedPastEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
