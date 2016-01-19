/****************************************************************************
** Meta object code from reading C++ file 'pqQueryClauseWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqQueryClauseWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqQueryClauseWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqQueryClauseWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   20,   20,   20, 0x0a,
      76,   50,   20,   20, 0x0a,
     118,  107,   20,   20, 0x2a,
     144,   20,   20,   20, 0x09,
     173,   20,   20,   20, 0x09,
     193,   20,   20,   20, 0x09,
     224,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqQueryClauseWidget[] = {
    "pqQueryClauseWidget\0\0helpRequested()\0"
    "initialize()\0type_flags,qualifier_mode\0"
    "initialize(CriteriaTypes,bool)\0"
    "type_flags\0initialize(CriteriaTypes)\0"
    "populateSelectionCondition()\0"
    "updateValueWidget()\0updateDependentClauseWidgets()\0"
    "showCompositeTree()\0"
};

void pqQueryClauseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqQueryClauseWidget *_t = static_cast<pqQueryClauseWidget *>(_o);
        switch (_id) {
        case 0: _t->helpRequested(); break;
        case 1: _t->initialize(); break;
        case 2: _t->initialize((*reinterpret_cast< CriteriaTypes(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->initialize((*reinterpret_cast< CriteriaTypes(*)>(_a[1]))); break;
        case 4: _t->populateSelectionCondition(); break;
        case 5: _t->updateValueWidget(); break;
        case 6: _t->updateDependentClauseWidgets(); break;
        case 7: _t->showCompositeTree(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqQueryClauseWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqQueryClauseWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqQueryClauseWidget,
      qt_meta_data_pqQueryClauseWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqQueryClauseWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqQueryClauseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqQueryClauseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqQueryClauseWidget))
        return static_cast<void*>(const_cast< pqQueryClauseWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqQueryClauseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void pqQueryClauseWidget::helpRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
