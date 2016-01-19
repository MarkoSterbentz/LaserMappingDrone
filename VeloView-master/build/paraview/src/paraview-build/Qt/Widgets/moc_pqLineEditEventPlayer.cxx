/****************************************************************************
** Meta object code from reading C++ file 'pqLineEditEventPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqLineEditEventPlayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLineEditEventPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqLineEditEventPlayer[] = {

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

static const char qt_meta_stringdata_pqLineEditEventPlayer[] = {
    "pqLineEditEventPlayer\0"
};

void pqLineEditEventPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqLineEditEventPlayer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqLineEditEventPlayer::staticMetaObject = {
    { &pqAbstractStringEventPlayer::staticMetaObject, qt_meta_stringdata_pqLineEditEventPlayer,
      qt_meta_data_pqLineEditEventPlayer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqLineEditEventPlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqLineEditEventPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqLineEditEventPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqLineEditEventPlayer))
        return static_cast<void*>(const_cast< pqLineEditEventPlayer*>(this));
    return pqAbstractStringEventPlayer::qt_metacast(_clname);
}

int pqLineEditEventPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqAbstractStringEventPlayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
