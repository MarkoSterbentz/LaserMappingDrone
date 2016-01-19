/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqPipelineBrowserWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPipelineBrowserWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   24,   24,   24, 0x0a,
      66,   60,   24,   24, 0x09,
      98,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPipelineBrowserWidget[] = {
    "pqPipelineBrowserWidget\0\0deleteKey()\0"
    "setActiveView(pqView*)\0index\0"
    "handleIndexClicked(QModelIndex)\0"
    "expandWithModelIndexTranslation(QModelIndex)\0"
};

void pqPipelineBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPipelineBrowserWidget *_t = static_cast<pqPipelineBrowserWidget *>(_o);
        switch (_id) {
        case 0: _t->deleteKey(); break;
        case 1: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 2: _t->handleIndexClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->expandWithModelIndexTranslation((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPipelineBrowserWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPipelineBrowserWidget::staticMetaObject = {
    { &pqFlatTreeView::staticMetaObject, qt_meta_stringdata_pqPipelineBrowserWidget,
      qt_meta_data_pqPipelineBrowserWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPipelineBrowserWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPipelineBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPipelineBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineBrowserWidget))
        return static_cast<void*>(const_cast< pqPipelineBrowserWidget*>(this));
    return pqFlatTreeView::qt_metacast(_clname);
}

int pqPipelineBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqFlatTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqPipelineBrowserWidget::deleteKey()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
