/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui11.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_gui/com_trolltech_qt_gui11.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui11.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QValidator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     148,  124,   27,   27, 0x0a,
     201,  184,  176,   27, 0x0a,
     245,  221,   27,   27, 0x0a,

 // enums: name, flags, count, data
     276, 0x0,    3,   48,

 // enum data: key, value
     282, uint(PythonQtWrapper_QValidator::Invalid),
     290, uint(PythonQtWrapper_QValidator::Intermediate),
     303, uint(PythonQtWrapper_QValidator::Acceptable),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QValidator[] = {
    "PythonQtWrapper_QValidator\0\0QValidator*\0"
    "parent\0new_QValidator(QObject*)\0"
    "new_QValidator()\0obj\0"
    "delete_QValidator(QValidator*)\0"
    "theWrappedObject,arg__1\0"
    "fixup(QValidator*,QString&)\0QLocale\0"
    "theWrappedObject\0locale(QValidator*)\0"
    "theWrappedObject,locale\0"
    "setLocale(QValidator*,QLocale)\0State\0"
    "Invalid\0Intermediate\0Acceptable\0"
};

void PythonQtWrapper_QValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QValidator *_t = static_cast<PythonQtWrapper_QValidator *>(_o);
        switch (_id) {
        case 0: { QValidator* _r = _t->new_QValidator((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QValidator**>(_a[0]) = _r; }  break;
        case 1: { QValidator* _r = _t->new_QValidator();
            if (_a[0]) *reinterpret_cast< QValidator**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QValidator((*reinterpret_cast< QValidator*(*)>(_a[1]))); break;
        case 3: _t->fixup((*reinterpret_cast< QValidator*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: { QLocale _r = _t->locale((*reinterpret_cast< QValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocale*>(_a[0]) = _r; }  break;
        case 5: _t->setLocale((*reinterpret_cast< QValidator*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QValidator,
      qt_meta_data_PythonQtWrapper_QValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QValidator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QVector2D[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      60,   54,   27,   26, 0x0a,
      82,   54,   27,   26, 0x0a,
     112,  105,   27,   26, 0x0a,
     137,  105,   27,   26, 0x0a,
     172,  162,   27,   26, 0x0a,
     205,  199,   27,   26, 0x0a,
     234,  230,   26,   26, 0x0a,
     275,  269,  263,   26, 0x0a,
     346,  329,  324,   26, 0x0a,
     365,  329,  263,   26, 0x0a,
     384,  329,  263,   26, 0x0a,
     410,  329,   26,   26, 0x0a,
     442,  329,  432,   26, 0x0a,
     485,  465,  432,   26, 0x0a,
     539,  515,  432,   26, 0x0a,
     589,  565,   27,   26, 0x0a,
     620,  515,   27,   26, 0x0a,
     647,  465,  432,   26, 0x0a,
     677,  565,   27,   26, 0x0a,
     708,  465,  432,   26, 0x0a,
     738,  565,   27,   26, 0x0a,
     794,  769,  432,   26, 0x0a,
     820,  769,   27,   26, 0x0a,
     871,  847,   26,   26, 0x0a,
     904,  465,  324,   26, 0x0a,
     933,  847,   26,   26, 0x0a,
     986,  967,   26,   26, 0x0a,
    1028, 1009,   26,   26, 0x0a,
    1058,  329, 1051,   26, 0x0a,
    1086,  329, 1078,   26, 0x0a,
    1117,  329, 1107,   26, 0x0a,
    1150,  329, 1140,   26, 0x0a,
    1173,  329,  263,   26, 0x0a,
    1187,  329,  263,   26, 0x0a,
    1209,   26, 1201,   26, 0x0a,
    1233,  230,  324,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QVector2D[] = {
    "PythonQtWrapper_QVector2D\0\0QVector2D*\0"
    "new_QVector2D()\0point\0new_QVector2D(QPoint)\0"
    "new_QVector2D(QPointF)\0vector\0"
    "new_QVector2D(QVector3D)\0"
    "new_QVector2D(QVector4D)\0xpos,ypos\0"
    "new_QVector2D(qreal,qreal)\0other\0"
    "new_QVector2D(QVector2D)\0obj\0"
    "delete_QVector2D(QVector2D*)\0qreal\0"
    "v1,v2\0static_QVector2D_dotProduct(QVector2D,QVector2D)\0"
    "bool\0theWrappedObject\0isNull(QVector2D*)\0"
    "length(QVector2D*)\0lengthSquared(QVector2D*)\0"
    "normalize(QVector2D*)\0QVector2D\0"
    "normalized(QVector2D*)\0theWrappedObject,v2\0"
    "__mul__(QVector2D*,QVector2D)\0"
    "theWrappedObject,factor\0"
    "__mul__(QVector2D*,qreal)\0"
    "theWrappedObject,vector\0"
    "__imul__(QVector2D*,QVector2D)\0"
    "__imul__(QVector2D*,qreal)\0"
    "__add__(QVector2D*,QVector2D)\0"
    "__iadd__(QVector2D*,QVector2D)\0"
    "__sub__(QVector2D*,QVector2D)\0"
    "__isub__(QVector2D*,QVector2D)\0"
    "theWrappedObject,divisor\0"
    "__div__(QVector2D*,qreal)\0"
    "__idiv__(QVector2D*,qreal)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QVector2D*,QDataStream&)\0"
    "__eq__(QVector2D*,QVector2D)\0"
    "readFrom(QVector2D*,QDataStream&)\0"
    "theWrappedObject,x\0setX(QVector2D*,qreal)\0"
    "theWrappedObject,y\0setY(QVector2D*,qreal)\0"
    "QPoint\0toPoint(QVector2D*)\0QPointF\0"
    "toPointF(QVector2D*)\0QVector3D\0"
    "toVector3D(QVector2D*)\0QVector4D\0"
    "toVector4D(QVector2D*)\0x(QVector2D*)\0"
    "y(QVector2D*)\0QString\0py_toString(QVector2D*)\0"
    "__nonzero__(QVector2D*)\0"
};

void PythonQtWrapper_QVector2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QVector2D *_t = static_cast<PythonQtWrapper_QVector2D *>(_o);
        switch (_id) {
        case 0: { QVector2D* _r = _t->new_QVector2D();
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 1: { QVector2D* _r = _t->new_QVector2D((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 2: { QVector2D* _r = _t->new_QVector2D((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 3: { QVector2D* _r = _t->new_QVector2D((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 4: { QVector2D* _r = _t->new_QVector2D((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 5: { QVector2D* _r = _t->new_QVector2D((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 6: { QVector2D* _r = _t->new_QVector2D((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QVector2D((*reinterpret_cast< QVector2D*(*)>(_a[1]))); break;
        case 8: { qreal _r = _t->static_QVector2D_dotProduct((*reinterpret_cast< const QVector2D(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isNull((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->length((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->lengthSquared((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: _t->normalize((*reinterpret_cast< QVector2D*(*)>(_a[1]))); break;
        case 13: { QVector2D _r = _t->normalized((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 14: { QVector2D _r = _t->__mul__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 15: { QVector2D _r = _t->__mul__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 16: { QVector2D* _r = _t->__imul__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 17: { QVector2D* _r = _t->__imul__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 18: { QVector2D _r = _t->__add__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 19: { QVector2D* _r = _t->__iadd__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 20: { QVector2D _r = _t->__sub__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 21: { QVector2D* _r = _t->__isub__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 22: { QVector2D _r = _t->__div__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 23: { QVector2D* _r = _t->__idiv__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D**>(_a[0]) = _r; }  break;
        case 24: _t->writeTo((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 25: { bool _r = _t->__eq__((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: _t->readFrom((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 27: _t->setX((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 28: _t->setY((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 29: { QPoint _r = _t->toPoint((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 30: { QPointF _r = _t->toPointF((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 31: { QVector3D _r = _t->toVector3D((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 32: { QVector4D _r = _t->toVector4D((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 33: { qreal _r = _t->x((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 34: { qreal _r = _t->y((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->py_toString((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->__nonzero__((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QVector2D::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QVector2D::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVector2D,
      qt_meta_data_PythonQtWrapper_QVector2D, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QVector2D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QVector2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QVector2D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVector2D))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVector2D*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVector2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QVector3D[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      60,   54,   27,   26, 0x0a,
      82,   54,   27,   26, 0x0a,
     112,  105,   27,   26, 0x0a,
     149,  137,   27,   26, 0x0a,
     180,  105,   27,   26, 0x0a,
     220,  205,   27,   26, 0x0a,
     259,  253,   27,   26, 0x0a,
     288,  284,   26,   26, 0x0a,
     333,  327,  317,   26, 0x0a,
     423,  390,  384,   26, 0x0a,
     500,  470,  384,   26, 0x0a,
     586,  548,  384,   26, 0x0a,
     644,  327,  384,   26, 0x0a,
     715,  698,  693,   26, 0x0a,
     734,  698,  384,   26, 0x0a,
     753,  698,  384,   26, 0x0a,
     779,  327,  317,   26, 0x0a,
     833,  824,  317,   26, 0x0a,
     888,  698,   26,   26, 0x0a,
     910,  698,  317,   26, 0x0a,
     957,  933,  317,   26, 0x0a,
    1008,  988,  317,   26, 0x0a,
    1062, 1038,  317,   26, 0x0a,
    1112, 1088,   27,   26, 0x0a,
    1143, 1038,   27,   26, 0x0a,
    1170,  988,  317,   26, 0x0a,
    1200, 1088,   27,   26, 0x0a,
    1231,  988,  317,   26, 0x0a,
    1261, 1088,   27,   26, 0x0a,
    1317, 1292,  317,   26, 0x0a,
    1343, 1292,   27,   26, 0x0a,
    1394, 1370,   26,   26, 0x0a,
    1427,  988,  693,   26, 0x0a,
    1456, 1370,   26,   26, 0x0a,
    1509, 1490,   26,   26, 0x0a,
    1551, 1532,   26,   26, 0x0a,
    1593, 1574,   26,   26, 0x0a,
    1623,  698, 1616,   26, 0x0a,
    1651,  698, 1643,   26, 0x0a,
    1682,  698, 1672,   26, 0x0a,
    1715,  698, 1705,   26, 0x0a,
    1738,  698,  384,   26, 0x0a,
    1752,  698,  384,   26, 0x0a,
    1766,  698,  384,   26, 0x0a,
    1788,   26, 1780,   26, 0x0a,
    1812,  284,  693,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QVector3D[] = {
    "PythonQtWrapper_QVector3D\0\0QVector3D*\0"
    "new_QVector3D()\0point\0new_QVector3D(QPoint)\0"
    "new_QVector3D(QPointF)\0vector\0"
    "new_QVector3D(QVector2D)\0vector,zpos\0"
    "new_QVector3D(QVector2D,qreal)\0"
    "new_QVector3D(QVector4D)\0xpos,ypos,zpos\0"
    "new_QVector3D(qreal,qreal,qreal)\0other\0"
    "new_QVector3D(QVector3D)\0obj\0"
    "delete_QVector3D(QVector3D*)\0QVector3D\0"
    "v1,v2\0static_QVector3D_crossProduct(QVector3D,QVector3D)\0"
    "qreal\0theWrappedObject,point,direction\0"
    "distanceToLine(QVector3D*,QVector3D,QVector3D)\0"
    "theWrappedObject,plane,normal\0"
    "distanceToPlane(QVector3D*,QVector3D,QVector3D)\0"
    "theWrappedObject,plane1,plane2,plane3\0"
    "distanceToPlane(QVector3D*,QVector3D,QVector3D,QVector3D)\0"
    "static_QVector3D_dotProduct(QVector3D,QVector3D)\0"
    "bool\0theWrappedObject\0isNull(QVector3D*)\0"
    "length(QVector3D*)\0lengthSquared(QVector3D*)\0"
    "static_QVector3D_normal(QVector3D,QVector3D)\0"
    "v1,v2,v3\0"
    "static_QVector3D_normal(QVector3D,QVector3D,QVector3D)\0"
    "normalize(QVector3D*)\0normalized(QVector3D*)\0"
    "theWrappedObject,matrix\0"
    "__mul__(QVector3D*,QMatrix4x4)\0"
    "theWrappedObject,v2\0__mul__(QVector3D*,QVector3D)\0"
    "theWrappedObject,factor\0"
    "__mul__(QVector3D*,qreal)\0"
    "theWrappedObject,vector\0"
    "__imul__(QVector3D*,QVector3D)\0"
    "__imul__(QVector3D*,qreal)\0"
    "__add__(QVector3D*,QVector3D)\0"
    "__iadd__(QVector3D*,QVector3D)\0"
    "__sub__(QVector3D*,QVector3D)\0"
    "__isub__(QVector3D*,QVector3D)\0"
    "theWrappedObject,divisor\0"
    "__div__(QVector3D*,qreal)\0"
    "__idiv__(QVector3D*,qreal)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QVector3D*,QDataStream&)\0"
    "__eq__(QVector3D*,QVector3D)\0"
    "readFrom(QVector3D*,QDataStream&)\0"
    "theWrappedObject,x\0setX(QVector3D*,qreal)\0"
    "theWrappedObject,y\0setY(QVector3D*,qreal)\0"
    "theWrappedObject,z\0setZ(QVector3D*,qreal)\0"
    "QPoint\0toPoint(QVector3D*)\0QPointF\0"
    "toPointF(QVector3D*)\0QVector2D\0"
    "toVector2D(QVector3D*)\0QVector4D\0"
    "toVector4D(QVector3D*)\0x(QVector3D*)\0"
    "y(QVector3D*)\0z(QVector3D*)\0QString\0"
    "py_toString(QVector3D*)\0__nonzero__(QVector3D*)\0"
};

void PythonQtWrapper_QVector3D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QVector3D *_t = static_cast<PythonQtWrapper_QVector3D *>(_o);
        switch (_id) {
        case 0: { QVector3D* _r = _t->new_QVector3D();
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 1: { QVector3D* _r = _t->new_QVector3D((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 2: { QVector3D* _r = _t->new_QVector3D((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 3: { QVector3D* _r = _t->new_QVector3D((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 4: { QVector3D* _r = _t->new_QVector3D((*reinterpret_cast< const QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 5: { QVector3D* _r = _t->new_QVector3D((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 6: { QVector3D* _r = _t->new_QVector3D((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 7: { QVector3D* _r = _t->new_QVector3D((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 8: _t->delete_QVector3D((*reinterpret_cast< QVector3D*(*)>(_a[1]))); break;
        case 9: { QVector3D _r = _t->static_QVector3D_crossProduct((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->distanceToLine((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->distanceToPlane((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->distanceToPlane((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3])),(*reinterpret_cast< const QVector3D(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->static_QVector3D_dotProduct((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isNull((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { qreal _r = _t->length((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->lengthSquared((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: { QVector3D _r = _t->static_QVector3D_normal((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 18: { QVector3D _r = _t->static_QVector3D_normal((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 19: _t->normalize((*reinterpret_cast< QVector3D*(*)>(_a[1]))); break;
        case 20: { QVector3D _r = _t->normalized((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 21: { QVector3D _r = _t->__mul__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QMatrix4x4(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 22: { QVector3D _r = _t->__mul__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 23: { QVector3D _r = _t->__mul__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 24: { QVector3D* _r = _t->__imul__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 25: { QVector3D* _r = _t->__imul__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 26: { QVector3D _r = _t->__add__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 27: { QVector3D* _r = _t->__iadd__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 28: { QVector3D _r = _t->__sub__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 29: { QVector3D* _r = _t->__isub__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 30: { QVector3D _r = _t->__div__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 31: { QVector3D* _r = _t->__idiv__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D**>(_a[0]) = _r; }  break;
        case 32: _t->writeTo((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 33: { bool _r = _t->__eq__((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: _t->readFrom((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 35: _t->setX((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 36: _t->setY((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 37: _t->setZ((*reinterpret_cast< QVector3D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 38: { QPoint _r = _t->toPoint((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 39: { QPointF _r = _t->toPointF((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 40: { QVector2D _r = _t->toVector2D((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 41: { QVector4D _r = _t->toVector4D((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 42: { qreal _r = _t->x((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 43: { qreal _r = _t->y((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 44: { qreal _r = _t->z((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 45: { QString _r = _t->py_toString((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->__nonzero__((*reinterpret_cast< QVector3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QVector3D::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QVector3D::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVector3D,
      qt_meta_data_PythonQtWrapper_QVector3D, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QVector3D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QVector3D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QVector3D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVector3D))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVector3D*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVector3D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QVector4D[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      60,   54,   27,   26, 0x0a,
      82,   54,   27,   26, 0x0a,
     112,  105,   27,   26, 0x0a,
     154,  137,   27,   26, 0x0a,
     191,  105,   27,   26, 0x0a,
     228,  216,   27,   26, 0x0a,
     279,  259,   27,   26, 0x0a,
     324,  318,   27,   26, 0x0a,
     353,  349,   26,   26, 0x0a,
     394,  388,  382,   26, 0x0a,
     465,  448,  443,   26, 0x0a,
     484,  448,  382,   26, 0x0a,
     503,  448,  382,   26, 0x0a,
     529,  448,   26,   26, 0x0a,
     561,  448,  551,   26, 0x0a,
     608,  584,  551,   26, 0x0a,
     659,  639,  551,   26, 0x0a,
     713,  689,  551,   26, 0x0a,
     763,  739,   27,   26, 0x0a,
     794,  689,   27,   26, 0x0a,
     821,  639,  551,   26, 0x0a,
     851,  739,   27,   26, 0x0a,
     882,  639,  551,   26, 0x0a,
     912,  739,   27,   26, 0x0a,
     968,  943,  551,   26, 0x0a,
     994,  943,   27,   26, 0x0a,
    1045, 1021,   26,   26, 0x0a,
    1078,  639,  443,   26, 0x0a,
    1107, 1021,   26,   26, 0x0a,
    1160, 1141,   26,   26, 0x0a,
    1202, 1183,   26,   26, 0x0a,
    1244, 1225,   26,   26, 0x0a,
    1286, 1267,   26,   26, 0x0a,
    1316,  448, 1309,   26, 0x0a,
    1344,  448, 1336,   26, 0x0a,
    1375,  448, 1365,   26, 0x0a,
    1398,  448, 1365,   26, 0x0a,
    1437,  448, 1427,   26, 0x0a,
    1460,  448, 1427,   26, 0x0a,
    1489,  448,  382,   26, 0x0a,
    1503,  448,  382,   26, 0x0a,
    1517,  448,  382,   26, 0x0a,
    1531,  448,  382,   26, 0x0a,
    1553,   26, 1545,   26, 0x0a,
    1577,  349,  443,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QVector4D[] = {
    "PythonQtWrapper_QVector4D\0\0QVector4D*\0"
    "new_QVector4D()\0point\0new_QVector4D(QPoint)\0"
    "new_QVector4D(QPointF)\0vector\0"
    "new_QVector4D(QVector2D)\0vector,zpos,wpos\0"
    "new_QVector4D(QVector2D,qreal,qreal)\0"
    "new_QVector4D(QVector3D)\0vector,wpos\0"
    "new_QVector4D(QVector3D,qreal)\0"
    "xpos,ypos,zpos,wpos\0"
    "new_QVector4D(qreal,qreal,qreal,qreal)\0"
    "other\0new_QVector4D(QVector4D)\0obj\0"
    "delete_QVector4D(QVector4D*)\0qreal\0"
    "v1,v2\0static_QVector4D_dotProduct(QVector4D,QVector4D)\0"
    "bool\0theWrappedObject\0isNull(QVector4D*)\0"
    "length(QVector4D*)\0lengthSquared(QVector4D*)\0"
    "normalize(QVector4D*)\0QVector4D\0"
    "normalized(QVector4D*)\0theWrappedObject,matrix\0"
    "__mul__(QVector4D*,QMatrix4x4)\0"
    "theWrappedObject,v2\0__mul__(QVector4D*,QVector4D)\0"
    "theWrappedObject,factor\0"
    "__mul__(QVector4D*,qreal)\0"
    "theWrappedObject,vector\0"
    "__imul__(QVector4D*,QVector4D)\0"
    "__imul__(QVector4D*,qreal)\0"
    "__add__(QVector4D*,QVector4D)\0"
    "__iadd__(QVector4D*,QVector4D)\0"
    "__sub__(QVector4D*,QVector4D)\0"
    "__isub__(QVector4D*,QVector4D)\0"
    "theWrappedObject,divisor\0"
    "__div__(QVector4D*,qreal)\0"
    "__idiv__(QVector4D*,qreal)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QVector4D*,QDataStream&)\0"
    "__eq__(QVector4D*,QVector4D)\0"
    "readFrom(QVector4D*,QDataStream&)\0"
    "theWrappedObject,w\0setW(QVector4D*,qreal)\0"
    "theWrappedObject,x\0setX(QVector4D*,qreal)\0"
    "theWrappedObject,y\0setY(QVector4D*,qreal)\0"
    "theWrappedObject,z\0setZ(QVector4D*,qreal)\0"
    "QPoint\0toPoint(QVector4D*)\0QPointF\0"
    "toPointF(QVector4D*)\0QVector2D\0"
    "toVector2D(QVector4D*)\0"
    "toVector2DAffine(QVector4D*)\0QVector3D\0"
    "toVector3D(QVector4D*)\0"
    "toVector3DAffine(QVector4D*)\0w(QVector4D*)\0"
    "x(QVector4D*)\0y(QVector4D*)\0z(QVector4D*)\0"
    "QString\0py_toString(QVector4D*)\0"
    "__nonzero__(QVector4D*)\0"
};

void PythonQtWrapper_QVector4D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QVector4D *_t = static_cast<PythonQtWrapper_QVector4D *>(_o);
        switch (_id) {
        case 0: { QVector4D* _r = _t->new_QVector4D();
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 1: { QVector4D* _r = _t->new_QVector4D((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 2: { QVector4D* _r = _t->new_QVector4D((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 3: { QVector4D* _r = _t->new_QVector4D((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 4: { QVector4D* _r = _t->new_QVector4D((*reinterpret_cast< const QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 5: { QVector4D* _r = _t->new_QVector4D((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 6: { QVector4D* _r = _t->new_QVector4D((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 7: { QVector4D* _r = _t->new_QVector4D((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 8: { QVector4D* _r = _t->new_QVector4D((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 9: _t->delete_QVector4D((*reinterpret_cast< QVector4D*(*)>(_a[1]))); break;
        case 10: { qreal _r = _t->static_QVector4D_dotProduct((*reinterpret_cast< const QVector4D(*)>(_a[1])),(*reinterpret_cast< const QVector4D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isNull((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->length((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->lengthSquared((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: _t->normalize((*reinterpret_cast< QVector4D*(*)>(_a[1]))); break;
        case 15: { QVector4D _r = _t->normalized((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 16: { QVector4D _r = _t->__mul__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< const QMatrix4x4(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 17: { QVector4D _r = _t->__mul__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< const QVector4D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 18: { QVector4D _r = _t->__mul__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 19: { QVector4D* _r = _t->__imul__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< const QVector4D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 20: { QVector4D* _r = _t->__imul__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 21: { QVector4D _r = _t->__add__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< const QVector4D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 22: { QVector4D* _r = _t->__iadd__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< const QVector4D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 23: { QVector4D _r = _t->__sub__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< const QVector4D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 24: { QVector4D* _r = _t->__isub__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< const QVector4D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 25: { QVector4D _r = _t->__div__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 26: { QVector4D* _r = _t->__idiv__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector4D**>(_a[0]) = _r; }  break;
        case 27: _t->writeTo((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 28: { bool _r = _t->__eq__((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< const QVector4D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->readFrom((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 30: _t->setW((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 31: _t->setX((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 32: _t->setY((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 33: _t->setZ((*reinterpret_cast< QVector4D*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 34: { QPoint _r = _t->toPoint((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 35: { QPointF _r = _t->toPointF((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 36: { QVector2D _r = _t->toVector2D((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 37: { QVector2D _r = _t->toVector2DAffine((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = _r; }  break;
        case 38: { QVector3D _r = _t->toVector3D((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 39: { QVector3D _r = _t->toVector3DAffine((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 40: { qreal _r = _t->w((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 41: { qreal _r = _t->x((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 42: { qreal _r = _t->y((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 43: { qreal _r = _t->z((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 44: { QString _r = _t->py_toString((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->__nonzero__((*reinterpret_cast< QVector4D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QVector4D::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QVector4D::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVector4D,
      qt_meta_data_PythonQtWrapper_QVector4D, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QVector4D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QVector4D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QVector4D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVector4D))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVector4D*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVector4D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWhatsThis[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   28,   27,   27, 0x0a,
      79,   72,   63,   27, 0x0a,
     120,   27,   63,   27, 0x2a,
     153,   27,   27,   27, 0x0a,
     192,   27,   27,   27, 0x0a,
     226,   27,  221,   27, 0x0a,
     262,   27,   27,   27, 0x0a,
     312,  301,   27,   27, 0x0a,
     373,  364,   27,   27, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWhatsThis[] = {
    "PythonQtWrapper_QWhatsThis\0\0obj\0"
    "delete_QWhatsThis(QWhatsThis*)\0QAction*\0"
    "parent\0static_QWhatsThis_createAction(QObject*)\0"
    "static_QWhatsThis_createAction()\0"
    "static_QWhatsThis_enterWhatsThisMode()\0"
    "static_QWhatsThis_hideText()\0bool\0"
    "static_QWhatsThis_inWhatsThisMode()\0"
    "static_QWhatsThis_leaveWhatsThisMode()\0"
    "pos,text,w\0"
    "static_QWhatsThis_showText(QPoint,QString,QWidget*)\0"
    "pos,text\0static_QWhatsThis_showText(QPoint,QString)\0"
};

void PythonQtWrapper_QWhatsThis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWhatsThis *_t = static_cast<PythonQtWrapper_QWhatsThis *>(_o);
        switch (_id) {
        case 0: _t->delete_QWhatsThis((*reinterpret_cast< QWhatsThis*(*)>(_a[1]))); break;
        case 1: { QAction* _r = _t->static_QWhatsThis_createAction((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 2: { QAction* _r = _t->static_QWhatsThis_createAction();
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 3: _t->static_QWhatsThis_enterWhatsThisMode(); break;
        case 4: _t->static_QWhatsThis_hideText(); break;
        case 5: { bool _r = _t->static_QWhatsThis_inWhatsThisMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->static_QWhatsThis_leaveWhatsThisMode(); break;
        case 7: _t->static_QWhatsThis_showText((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 8: _t->static_QWhatsThis_showText((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWhatsThis::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWhatsThis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWhatsThis,
      qt_meta_data_PythonQtWrapper_QWhatsThis, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWhatsThis::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWhatsThis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWhatsThis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWhatsThis))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWhatsThis*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWhatsThis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWhatsThisClickedEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      69,   64,   40,   39, 0x0a,
     109,  105,   39,   39, 0x0a,
     189,  172,  164,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWhatsThisClickedEvent[] = {
    "PythonQtWrapper_QWhatsThisClickedEvent\0"
    "\0QWhatsThisClickedEvent*\0href\0"
    "new_QWhatsThisClickedEvent(QString)\0"
    "obj\0delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent*)\0"
    "QString\0theWrappedObject\0"
    "href(QWhatsThisClickedEvent*)\0"
};

void PythonQtWrapper_QWhatsThisClickedEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWhatsThisClickedEvent *_t = static_cast<PythonQtWrapper_QWhatsThisClickedEvent *>(_o);
        switch (_id) {
        case 0: { QWhatsThisClickedEvent* _r = _t->new_QWhatsThisClickedEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWhatsThisClickedEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QWhatsThisClickedEvent((*reinterpret_cast< QWhatsThisClickedEvent*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->href((*reinterpret_cast< QWhatsThisClickedEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWhatsThisClickedEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWhatsThisClickedEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWhatsThisClickedEvent,
      qt_meta_data_PythonQtWrapper_QWhatsThisClickedEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWhatsThisClickedEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWhatsThisClickedEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWhatsThisClickedEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWhatsThisClickedEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWhatsThisClickedEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWhatsThisClickedEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWheelEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      87,   42,   29,   28, 0x0a,
     215,  177,   29,   28, 0x2a,
     324,  289,   29,   28, 0x0a,
     435,  407,   29,   28, 0x2a,
     506,  502,   28,   28, 0x0a,
     573,  556,  539,   28, 0x0a,
     599,  556,  595,   28, 0x0a,
     633,  556,  619,   28, 0x0a,
     657,  556,  595,   28, 0x0a,
     679,  556,  595,   28, 0x0a,
     717,  556,  701,   28, 0x0a,
     743,  556,  619,   28, 0x0a,
     761,  556,  595,   28, 0x0a,
     777,  556,  595,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWheelEvent[] = {
    "PythonQtWrapper_QWheelEvent\0\0QWheelEvent*\0"
    "pos,globalPos,delta,buttons,modifiers,orient\0"
    "new_QWheelEvent(QPoint,QPoint,int,Qt::MouseButtons,Qt::KeyboardModifie"
    "rs,Qt::Orientation)\0"
    "pos,globalPos,delta,buttons,modifiers\0"
    "new_QWheelEvent(QPoint,QPoint,int,Qt::MouseButtons,Qt::KeyboardModifie"
    "rs)\0"
    "pos,delta,buttons,modifiers,orient\0"
    "new_QWheelEvent(QPoint,int,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::"
    "Orientation)\0"
    "pos,delta,buttons,modifiers\0"
    "new_QWheelEvent(QPoint,int,Qt::MouseButtons,Qt::KeyboardModifiers)\0"
    "obj\0delete_QWheelEvent(QWheelEvent*)\0"
    "Qt::MouseButtons\0theWrappedObject\0"
    "buttons(QWheelEvent*)\0int\0delta(QWheelEvent*)\0"
    "const QPoint*\0globalPos(QWheelEvent*)\0"
    "globalX(QWheelEvent*)\0globalY(QWheelEvent*)\0"
    "Qt::Orientation\0orientation(QWheelEvent*)\0"
    "pos(QWheelEvent*)\0x(QWheelEvent*)\0"
    "y(QWheelEvent*)\0"
};

void PythonQtWrapper_QWheelEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWheelEvent *_t = static_cast<PythonQtWrapper_QWheelEvent *>(_o);
        switch (_id) {
        case 0: { QWheelEvent* _r = _t->new_QWheelEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[4])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[5])),(*reinterpret_cast< Qt::Orientation(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QWheelEvent**>(_a[0]) = _r; }  break;
        case 1: { QWheelEvent* _r = _t->new_QWheelEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[4])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QWheelEvent**>(_a[0]) = _r; }  break;
        case 2: { QWheelEvent* _r = _t->new_QWheelEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[4])),(*reinterpret_cast< Qt::Orientation(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QWheelEvent**>(_a[0]) = _r; }  break;
        case 3: { QWheelEvent* _r = _t->new_QWheelEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QWheelEvent**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QWheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 5: { Qt::MouseButtons _r = _t->buttons((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::MouseButtons*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->delta((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { const QPoint* _r = _t->globalPos((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPoint**>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->globalX((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->globalY((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { Qt::Orientation _r = _t->orientation((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 11: { const QPoint* _r = _t->pos((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPoint**>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->x((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->y((*reinterpret_cast< QWheelEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWheelEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWheelEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWheelEvent,
      qt_meta_data_PythonQtWrapper_QWheelEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWheelEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWheelEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWheelEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWheelEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWheelEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWheelEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     257,   14, // methods
       0,    0, // properties
       2, 1299, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   34,   25,   24, 0x0a,
      88,   81,   25,   24, 0x2a,
     110,   24,   25,   24, 0x2a,
     128,  124,   24,   24, 0x0a,
     175,  158,  153,   24, 0x0a,
     205,  158,  197,   24, 0x0a,
     237,  158,  197,   24, 0x0a,
     286,  262,   24,   24, 0x0a,
     338,  158,  322,   24, 0x0a,
     356,  158,   24,   24, 0x0a,
     405,  381,   24,   24, 0x0a,
     459,  434,   24,   24, 0x0a,
     496,  158,   24,   24, 0x0a,
     517,  158,  153,   24, 0x0a,
     566,  158,  546,   24, 0x0a,
     597,  158,  591,   24, 0x0a,
     616,  262,   24,   24, 0x0a,
     665,  646,   25,   24, 0x0a,
     711,  690,   25,   24, 0x0a,
     743,  158,  737,   24, 0x0a,
     774,  158,  766,   24, 0x0a,
     799,  158,   24,   24, 0x0a,
     820,  158,   24,   24, 0x0a,
     840,  262,   24,   24, 0x0a,
     883,  158,  874,   24, 0x0a,
     909,  158,  737,   24, 0x0a,
     932,  262,   24,   24, 0x0a,
    1000,  158,  978,   24, 0x0a,
    1028,  158,   24,   24, 0x0a,
    1058,  158, 1050,   24, 0x0a,
    1079,  158, 1075,   24, 0x0a,
    1097,  262,   24,   24, 0x0a,
    1139,  262,   24,   24, 0x0a,
    1181,  262,   24,   24, 0x0a,
    1221,  262,   24,   24, 0x0a,
    1257,  158, 1253,   24, 0x0a,
    1282,  158,   24,   24, 0x0a,
    1307,  262,   24,   24, 0x0a,
    1336,  262,  153,   24, 0x0a,
    1360,  262,   24,   24, 0x0a,
    1418, 1396,  153,   24, 0x0a,
    1452,  262,   24,   24, 0x0a,
    1505,  158, 1489,   24, 0x0a,
    1527,  158,   25,   24, 0x0a,
    1548,  158,   25,   24, 0x0a,
    1583,  158, 1570,   24, 0x0a,
    1598,  158,  546,   24, 0x0a,
    1623,  158,  737,   24, 0x0a,
    1647,  158,  591,   24, 0x0a,
    1680,  158, 1667,   24, 0x0a,
    1738, 1699,   24,   24, 0x0a,
    1815, 1787,   24,   24, 0x0a,
    1892, 1870,   24,   24, 0x2a,
    1930,  158,   24,   24, 0x0a,
    1953,  158,   24,   24, 0x0a,
    1973,  262,   24,   24, 0x0a,
    2030, 2001, 1075,   24, 0x0a,
    2107, 2086, 1075,   24, 0x2a,
    2160,  158, 2143,   24, 0x0a,
    2207,  158, 2185,   24, 0x0a,
    2237,  158,  153,   24, 0x0a,
    2256,  158,  153,   24, 0x0a,
    2283,  158, 1075,   24, 0x0a,
    2300,  262, 1075,   24, 0x0a,
    2329,  262,   24,   24, 0x0a,
    2376,  158, 2361,   24, 0x0a,
    2399,  262,   24,   24, 0x0a,
    2466,  158, 2445,   24, 0x0a,
    2502,  262, 2493,   24, 0x0a,
    2581, 2550,   24,   24, 0x0a,
    2654, 2622,   24,   24, 0x0a,
    2703,  158,  153,   24, 0x0a,
    2751, 2728,  153,   24, 0x0a,
    2789,  158,  153,   24, 0x0a,
    2809,  262,  153,   24, 0x0a,
    2840,  158,  153,   24, 0x0a,
    2863,  158,  153,   24, 0x0a,
    2882,  158,  153,   24, 0x0a,
    2906,  158,  153,   24, 0x0a,
    2928,  158,  153,   24, 0x0a,
    2950,  158,  153,   24, 0x0a,
    2968,  158,  153,   24, 0x0a,
    2992,  158,  153,   24, 0x0a,
    3012,  262,  153,   24, 0x0a,
    3043,  158,  153,   24, 0x0a,
    3062,  158,  153,   24, 0x0a,
    3089,  262,   24,   24, 0x0a,
    3124,  262,   24,   24, 0x0a,
    3161,   24,   25,   24, 0x0a,
    3194,  158,   24,   24, 0x0a,
    3228,  158, 3219,   24, 0x0a,
    3265,  158, 3245,   24, 0x0a,
    3291,  262,   24,   24, 0x0a,
    3328,  158, 3320,   24, 0x0a,
    3383, 3352, 3345,   24, 0x0a,
    3417,  262, 3345,   24, 0x0a,
    3448,  262, 3345,   24, 0x0a,
    3479, 3352, 3345,   24, 0x0a,
    3511,  262, 3345,   24, 0x0a,
    3540,  262, 3345,   24, 0x0a,
    3569,  158,  766,   24, 0x0a,
    3584,  158, 1075,   24, 0x0a,
    3608,  158,  591,   24, 0x0a,
    3630,  158, 1075,   24, 0x0a,
    3653,  262, 1075,   24, 0x0a,
    3702,  158, 1075,   24, 0x0a,
    3726,  158,  591,   24, 0x0a,
    3748,  158,  591,   24, 0x0a,
    3774,  158, 1075,   24, 0x0a,
    3797,  262,   24,   24, 0x0a,
    3842,   24,   25,   24, 0x0a,
    3872,  262,   24,   24, 0x0a,
    3910,  262,   24,   24, 0x0a,
    3949,  262,   24,   24, 0x0a,
    3990,  262,   24,   24, 0x0a,
    4012,  690,   24,   24, 0x0a,
    4035,  262,   24,   24, 0x0a,
    4067,  158,   25,   24, 0x0a,
    4096,  158,   25,   24, 0x0a,
    4123,  158,  737,   24, 0x0a,
    4148, 1870,   24,   24, 0x0a,
    4217, 4194,   24,   24, 0x0a,
    4278,  158, 4264,   24, 0x0a,
    4300,  262,   24,   24, 0x0a,
    4350,  158, 4334,   24, 0x0a,
    4368,  158,   25,   24, 0x0a,
    4391,  158, 3345,   24, 0x0a,
    4405,  158,   25,   24, 0x0a,
    4436,  158,  737,   24, 0x0a,
    4451,  158,   24,   24, 0x0a,
    4477,  158,   24,   24, 0x0a,
    4520, 4500,   24,   24, 0x0a,
    4550,  381,   24,   24, 0x0a,
    4644, 4582,   24,   24, 0x0a,
    4761, 4711,   24,   24, 0x2a,
    4844, 4807,   24,   24, 0x2a,
    4906, 4882,   24,   24, 0x2a,
    5000, 4937,   24,   24, 0x0a,
    5114, 5063,   24,   24, 0x2a,
    5194, 5156,   24,   24, 0x2a,
    5253, 5228,   24,   24, 0x2a,
    5280,  262,   24,   24, 0x0a,
    5304,  262,   24,   24, 0x0a,
    5355, 5330,   24,   24, 0x0a,
    5389,  262,   24,   24, 0x0a,
    5433, 5412,   24,   24, 0x0a,
    5458,  262,   24,   24, 0x0a,
    5520, 5494,  153,   24, 0x0a,
    5568,  158, 5557,   24, 0x0a,
    5614, 5591,   24,   24, 0x0a,
    5669, 5639,   24,   24, 0x0a,
    5720, 5700,   24,   24, 0x0a,
    5779, 5750,   24,   24, 0x0a,
    5844, 5822,   24,   24, 0x0a,
    5907, 5880,   24,   24, 0x0a,
    5955,  262,   24,   24, 0x2a,
    6023, 5998,   24,   24, 0x0a,
    6060,  262,   24,   24, 0x0a,
    6108,  262,   24,   24, 0x0a,
    6165, 6136,   24,   24, 0x0a,
    6220, 6195,   24,   24, 0x0a,
    6258, 1699,   24,   24, 0x0a,
    6327, 6303,   24,   24, 0x0a,
    6380,  262,   24,   24, 0x0a,
    6427, 6408,   24,   24, 0x0a,
    6456,  262,   24,   24, 0x0a,
    6485, 5412,   24,   24, 0x0a,
    6535, 6516,   24,   24, 0x0a,
    6587, 6563,   24,   24, 0x0a,
    6622, 6303,   24,   24, 0x0a,
    6663,  262,   24,   24, 0x0a,
    6696,  262,   24,   24, 0x0a,
    6720,  262,   24,   24, 0x0a,
    6768,  262,   24,   24, 0x0a,
    6796, 5330,   24,   24, 0x0a,
    6858, 6834,   24,   24, 0x0a,
    6903,  262,   24,   24, 0x0a,
    6967, 6944,   24,   24, 0x0a,
    7018,  262,   24,   24, 0x0a,
    7074, 7047,   24,   24, 0x0a,
    7147, 7123,   24,   24, 0x0a,
    7175,  262,   24,   24, 0x0a,
    7201,  262,   24,   24, 0x0a,
    7249, 7227,   24,   24, 0x0a,
    7280,  262,   24,   24, 0x0a,
    7338, 7311,   24,   24, 0x0a,
    7393, 7371,   24,   24, 0x0a,
    7445, 7423,   24,   24, 0x0a,
    7476,  262,   24,   24, 0x0a,
    7534, 7507,   24,   24, 0x0a,
    7589, 7567,   24,   24, 0x0a,
    7643, 7619,   24,   24, 0x0a,
    7675,  262,   24,   24, 0x0a,
    7729, 7705,   24,   24, 0x0a,
    7784, 7758,   24,   24, 0x0a,
    7856, 7829,   24,   24, 0x0a,
    7897, 4500,   24,   24, 0x2a,
    7933, 7829,   24,   24, 0x0a,
    7971, 4500,   24,   24, 0x2a,
    8004,  262,   24,   24, 0x0a,
    8037, 5412,   24,   24, 0x0a,
    8072,  262,   24,   24, 0x0a,
    8145, 8108,   24,   24, 0x0a,
    8209,  262,   24,   24, 0x0a,
    8240,  262,   24,   24, 0x0a,
    8281, 8267,   24,   24, 0x0a,
    8327,  262,   24,   24, 0x0a,
    8356, 7619,   24,   24, 0x0a,
    8389,  262,   24,   24, 0x0a,
    8446, 8420,   24,   24, 0x0a,
    8482, 1870,   24,   24, 0x0a,
    8545, 8523,   24,   24, 0x0a,
    8575,  262,   24,   24, 0x0a,
    8643, 8611,   24,   24, 0x0a,
    8713, 8690,   24,   24, 0x0a,
    8746,  262,   24,   24, 0x0a,
    8778, 4194,   24,   24, 0x0a,
    8820,  262,   24,   24, 0x0a,
    8852,  158,  591,   24, 0x0a,
    8867,  158,  591,   24, 0x0a,
    8886,  158,  591,   24, 0x0a,
    8922,  158, 8910,   24, 0x0a,
    8943,  262,   24,   24, 0x0a,
    8973,  158,  197,   24, 0x0a,
    9001,  158, 8993,   24, 0x0a,
    9017,  158,  197,   24, 0x0a,
    9038,  262,   24,   24, 0x0a,
    9074,  262,  153,   24, 0x0a,
    9118,  158,  197,   24, 0x0a,
    9136,  158,  153,   24, 0x0a,
    9157, 1870,   24,   24, 0x0a,
    9197,  158,   24,   24, 0x0a,
    9219,  158,   24,   24, 0x0a,
    9250,  158,   24,   24, 0x0a,
    9272,  262,   24,   24, 0x0a,
    9295,  262,   24,   24, 0x0a,
    9320, 5330,   24,   24, 0x0a,
    9353,  158,   24,   24, 0x0a,
    9378,  158,  153,   24, 0x0a,
    9403,  158,  766,   24, 0x0a,
    9427,  158,  197,   24, 0x0a,
    9447,  262,   24,   24, 0x0a,
    9481,  158, 1075,   24, 0x0a,
    9497,  158, 1253,   24, 0x0a,
    9513,  158,   25,   24, 0x0a,
    9530,  158,  197,   24, 0x0a,
    9571,  158, 9555,   24, 0x0a,
    9599,  158, 9593,   24, 0x0a,
    9620,  158,  197,   24, 0x0a,
    9664,  158, 9645,   24, 0x0a,
    9695,  158, 9689,   24, 0x0a,
    9719,  158,  197,   24, 0x0a,
    9757,  158, 9740,   24, 0x0a,
    9779,  158,  197,   24, 0x0a,
    9816,  158, 9801,   24, 0x0a,
    9837,  158, 1075,   24, 0x0a,
    9849,  158, 1075,   24, 0x0a,

 // enums: name, flags, count, data
    9861, 0x0,    3, 1307,
    9872, 0x1,    3, 1313,

 // enum data: key, value
    9884, uint(PythonQtWrapper_QWidget::DrawWindowBackground),
    9905, uint(PythonQtWrapper_QWidget::DrawChildren),
    9918, uint(PythonQtWrapper_QWidget::IgnoreMask),
    9884, uint(PythonQtWrapper_QWidget::DrawWindowBackground),
    9905, uint(PythonQtWrapper_QWidget::DrawChildren),
    9918, uint(PythonQtWrapper_QWidget::IgnoreMask),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWidget[] = {
    "PythonQtWrapper_QWidget\0\0QWidget*\0"
    "parent,f\0new_QWidget(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QWidget(QWidget*)\0new_QWidget()\0"
    "obj\0delete_QWidget(QWidget*)\0bool\0"
    "theWrappedObject\0acceptDrops(QWidget*)\0"
    "QString\0accessibleDescription(QWidget*)\0"
    "accessibleName(QWidget*)\0"
    "theWrappedObject,arg__1\0"
    "actionEvent(QWidget*,QActionEvent*)\0"
    "QList<QAction*>\0actions(QWidget*)\0"
    "activateWindow(QWidget*)\0"
    "theWrappedObject,action\0"
    "addAction(QWidget*,QAction*)\0"
    "theWrappedObject,actions\0"
    "addActions(QWidget*,QList<QAction*>)\0"
    "adjustSize(QWidget*)\0autoFillBackground(QWidget*)\0"
    "QPalette::ColorRole\0backgroundRole(QWidget*)\0"
    "QSize\0baseSize(QWidget*)\0"
    "changeEvent(QWidget*,QEvent*)\0"
    "theWrappedObject,p\0childAt(QWidget*,QPoint)\0"
    "theWrappedObject,x,y\0childAt(QWidget*,int,int)\0"
    "QRect\0childrenRect(QWidget*)\0QRegion\0"
    "childrenRegion(QWidget*)\0clearFocus(QWidget*)\0"
    "clearMask(QWidget*)\0"
    "closeEvent(QWidget*,QCloseEvent*)\0"
    "QMargins\0contentsMargins(QWidget*)\0"
    "contentsRect(QWidget*)\0"
    "contextMenuEvent(QWidget*,QContextMenuEvent*)\0"
    "Qt::ContextMenuPolicy\0contextMenuPolicy(QWidget*)\0"
    "createWinId(QWidget*)\0QCursor\0"
    "cursor(QWidget*)\0int\0devType(QWidget*)\0"
    "dragEnterEvent(QWidget*,QDragEnterEvent*)\0"
    "dragLeaveEvent(QWidget*,QDragLeaveEvent*)\0"
    "dragMoveEvent(QWidget*,QDragMoveEvent*)\0"
    "dropEvent(QWidget*,QDropEvent*)\0WId\0"
    "effectiveWinId(QWidget*)\0"
    "ensurePolished(QWidget*)\0"
    "enterEvent(QWidget*,QEvent*)\0"
    "event(QWidget*,QEvent*)\0"
    "focusInEvent(QWidget*,QFocusEvent*)\0"
    "theWrappedObject,next\0"
    "focusNextPrevChild(QWidget*,bool)\0"
    "focusOutEvent(QWidget*,QFocusEvent*)\0"
    "Qt::FocusPolicy\0focusPolicy(QWidget*)\0"
    "focusProxy(QWidget*)\0focusWidget(QWidget*)\0"
    "const QFont*\0font(QWidget*)\0"
    "foregroundRole(QWidget*)\0"
    "frameGeometry(QWidget*)\0frameSize(QWidget*)\0"
    "const QRect*\0geometry(QWidget*)\0"
    "theWrappedObject,left,top,right,bottom\0"
    "getContentsMargins(QWidget*,int*,int*,int*,int*)\0"
    "theWrappedObject,type,flags\0"
    "grabGesture(QWidget*,Qt::GestureType,Qt::GestureFlags)\0"
    "theWrappedObject,type\0"
    "grabGesture(QWidget*,Qt::GestureType)\0"
    "grabKeyboard(QWidget*)\0grabMouse(QWidget*)\0"
    "grabMouse(QWidget*,QCursor)\0"
    "theWrappedObject,key,context\0"
    "grabShortcut(QWidget*,QKeySequence,Qt::ShortcutContext)\0"
    "theWrappedObject,key\0"
    "grabShortcut(QWidget*,QKeySequence)\0"
    "QGraphicsEffect*\0graphicsEffect(QWidget*)\0"
    "QGraphicsProxyWidget*\0"
    "graphicsProxyWidget(QWidget*)\0"
    "hasFocus(QWidget*)\0hasMouseTracking(QWidget*)\0"
    "height(QWidget*)\0heightForWidth(QWidget*,int)\0"
    "hideEvent(QWidget*,QHideEvent*)\0"
    "QInputContext*\0inputContext(QWidget*)\0"
    "inputMethodEvent(QWidget*,QInputMethodEvent*)\0"
    "Qt::InputMethodHints\0inputMethodHints(QWidget*)\0"
    "QVariant\0inputMethodQuery(QWidget*,Qt::InputMethodQuery)\0"
    "theWrappedObject,before,action\0"
    "insertAction(QWidget*,QAction*,QAction*)\0"
    "theWrappedObject,before,actions\0"
    "insertActions(QWidget*,QAction*,QList<QAction*>)\0"
    "isActiveWindow(QWidget*)\0"
    "theWrappedObject,child\0"
    "isAncestorOf(QWidget*,const QWidget*)\0"
    "isEnabled(QWidget*)\0isEnabledTo(QWidget*,QWidget*)\0"
    "isFullScreen(QWidget*)\0isHidden(QWidget*)\0"
    "isLeftToRight(QWidget*)\0isMaximized(QWidget*)\0"
    "isMinimized(QWidget*)\0isModal(QWidget*)\0"
    "isRightToLeft(QWidget*)\0isVisible(QWidget*)\0"
    "isVisibleTo(QWidget*,QWidget*)\0"
    "isWindow(QWidget*)\0isWindowModified(QWidget*)\0"
    "keyPressEvent(QWidget*,QKeyEvent*)\0"
    "keyReleaseEvent(QWidget*,QKeyEvent*)\0"
    "static_QWidget_keyboardGrabber()\0"
    "languageChange(QWidget*)\0QLayout*\0"
    "layout(QWidget*)\0Qt::LayoutDirection\0"
    "layoutDirection(QWidget*)\0"
    "leaveEvent(QWidget*,QEvent*)\0QLocale\0"
    "locale(QWidget*)\0QPoint\0"
    "theWrappedObject,arg__1,arg__2\0"
    "mapFrom(QWidget*,QWidget*,QPoint)\0"
    "mapFromGlobal(QWidget*,QPoint)\0"
    "mapFromParent(QWidget*,QPoint)\0"
    "mapTo(QWidget*,QWidget*,QPoint)\0"
    "mapToGlobal(QWidget*,QPoint)\0"
    "mapToParent(QWidget*,QPoint)\0"
    "mask(QWidget*)\0maximumHeight(QWidget*)\0"
    "maximumSize(QWidget*)\0maximumWidth(QWidget*)\0"
    "metric(QWidget*,QPaintDevice::PaintDeviceMetric)\0"
    "minimumHeight(QWidget*)\0minimumSize(QWidget*)\0"
    "minimumSizeHint(QWidget*)\0"
    "minimumWidth(QWidget*)\0"
    "mouseDoubleClickEvent(QWidget*,QMouseEvent*)\0"
    "static_QWidget_mouseGrabber()\0"
    "mouseMoveEvent(QWidget*,QMouseEvent*)\0"
    "mousePressEvent(QWidget*,QMouseEvent*)\0"
    "mouseReleaseEvent(QWidget*,QMouseEvent*)\0"
    "move(QWidget*,QPoint)\0move(QWidget*,int,int)\0"
    "moveEvent(QWidget*,QMoveEvent*)\0"
    "nativeParentWidget(QWidget*)\0"
    "nextInFocusChain(QWidget*)\0"
    "normalGeometry(QWidget*)\0"
    "overrideWindowFlags(QWidget*,Qt::WindowFlags)\0"
    "theWrappedObject,state\0"
    "overrideWindowState(QWidget*,Qt::WindowStates)\0"
    "QPaintEngine*\0paintEngine(QWidget*)\0"
    "paintEvent(QWidget*,QPaintEvent*)\0"
    "const QPalette*\0palette(QWidget*)\0"
    "parentWidget(QWidget*)\0pos(QWidget*)\0"
    "previousInFocusChain(QWidget*)\0"
    "rect(QWidget*)\0releaseKeyboard(QWidget*)\0"
    "releaseMouse(QWidget*)\0theWrappedObject,id\0"
    "releaseShortcut(QWidget*,int)\0"
    "removeAction(QWidget*,QAction*)\0"
    "theWrappedObject,target,targetOffset,sourceRegion,renderFlags\0"
    "render(QWidget*,QPaintDevice*,QPoint,QRegion,QWidget::RenderFlags)\0"
    "theWrappedObject,target,targetOffset,sourceRegion\0"
    "render(QWidget*,QPaintDevice*,QPoint,QRegion)\0"
    "theWrappedObject,target,targetOffset\0"
    "render(QWidget*,QPaintDevice*,QPoint)\0"
    "theWrappedObject,target\0"
    "render(QWidget*,QPaintDevice*)\0"
    "theWrappedObject,painter,targetOffset,sourceRegion,renderFlags\0"
    "render(QWidget*,QPainter*,QPoint,QRegion,QWidget::RenderFlags)\0"
    "theWrappedObject,painter,targetOffset,sourceRegion\0"
    "render(QWidget*,QPainter*,QPoint,QRegion)\0"
    "theWrappedObject,painter,targetOffset\0"
    "render(QWidget*,QPainter*,QPoint)\0"
    "theWrappedObject,painter\0"
    "render(QWidget*,QPainter*)\0"
    "repaint(QWidget*,QRect)\0"
    "repaint(QWidget*,QRegion)\0"
    "theWrappedObject,x,y,w,h\0"
    "repaint(QWidget*,int,int,int,int)\0"
    "resize(QWidget*,QSize)\0theWrappedObject,w,h\0"
    "resize(QWidget*,int,int)\0"
    "resizeEvent(QWidget*,QResizeEvent*)\0"
    "theWrappedObject,geometry\0"
    "restoreGeometry(QWidget*,QByteArray)\0"
    "QByteArray\0saveGeometry(QWidget*)\0"
    "theWrappedObject,dx,dy\0scroll(QWidget*,int,int)\0"
    "theWrappedObject,dx,dy,arg__3\0"
    "scroll(QWidget*,int,int,QRect)\0"
    "theWrappedObject,on\0setAcceptDrops(QWidget*,bool)\0"
    "theWrappedObject,description\0"
    "setAccessibleDescription(QWidget*,QString)\0"
    "theWrappedObject,name\0"
    "setAccessibleName(QWidget*,QString)\0"
    "theWrappedObject,arg__1,on\0"
    "setAttribute(QWidget*,Qt::WidgetAttribute,bool)\0"
    "setAttribute(QWidget*,Qt::WidgetAttribute)\0"
    "theWrappedObject,enabled\0"
    "setAutoFillBackground(QWidget*,bool)\0"
    "setBackgroundRole(QWidget*,QPalette::ColorRole)\0"
    "setBaseSize(QWidget*,QSize)\0"
    "theWrappedObject,basew,baseh\0"
    "setBaseSize(QWidget*,int,int)\0"
    "theWrappedObject,margins\0"
    "setContentsMargins(QWidget*,QMargins)\0"
    "setContentsMargins(QWidget*,int,int,int,int)\0"
    "theWrappedObject,policy\0"
    "setContextMenuPolicy(QWidget*,Qt::ContextMenuPolicy)\0"
    "setCursor(QWidget*,QCursor)\0"
    "theWrappedObject,h\0setFixedHeight(QWidget*,int)\0"
    "setFixedSize(QWidget*,QSize)\0"
    "setFixedSize(QWidget*,int,int)\0"
    "theWrappedObject,w\0setFixedWidth(QWidget*,int)\0"
    "theWrappedObject,reason\0"
    "setFocus(QWidget*,Qt::FocusReason)\0"
    "setFocusPolicy(QWidget*,Qt::FocusPolicy)\0"
    "setFocusProxy(QWidget*,QWidget*)\0"
    "setFont(QWidget*,QFont)\0"
    "setForegroundRole(QWidget*,QPalette::ColorRole)\0"
    "setGeometry(QWidget*,QRect)\0"
    "setGeometry(QWidget*,int,int,int,int)\0"
    "theWrappedObject,effect\0"
    "setGraphicsEffect(QWidget*,QGraphicsEffect*)\0"
    "setInputContext(QWidget*,QInputContext*)\0"
    "theWrappedObject,hints\0"
    "setInputMethodHints(QWidget*,Qt::InputMethodHints)\0"
    "setLayout(QWidget*,QLayout*)\0"
    "theWrappedObject,direction\0"
    "setLayoutDirection(QWidget*,Qt::LayoutDirection)\0"
    "theWrappedObject,locale\0"
    "setLocale(QWidget*,QLocale)\0"
    "setMask(QWidget*,QBitmap)\0"
    "setMask(QWidget*,QRegion)\0"
    "theWrappedObject,maxh\0"
    "setMaximumHeight(QWidget*,int)\0"
    "setMaximumSize(QWidget*,QSize)\0"
    "theWrappedObject,maxw,maxh\0"
    "setMaximumSize(QWidget*,int,int)\0"
    "theWrappedObject,maxw\0"
    "setMaximumWidth(QWidget*,int)\0"
    "theWrappedObject,minh\0"
    "setMinimumHeight(QWidget*,int)\0"
    "setMinimumSize(QWidget*,QSize)\0"
    "theWrappedObject,minw,minh\0"
    "setMinimumSize(QWidget*,int,int)\0"
    "theWrappedObject,minw\0"
    "setMinimumWidth(QWidget*,int)\0"
    "theWrappedObject,enable\0"
    "setMouseTracking(QWidget*,bool)\0"
    "setPalette(QWidget*,QPalette)\0"
    "theWrappedObject,parent\0"
    "setParent(QWidget*,QWidget*)\0"
    "theWrappedObject,parent,f\0"
    "setParent(QWidget*,QWidget*,Qt::WindowFlags)\0"
    "theWrappedObject,id,enable\0"
    "setShortcutAutoRepeat(QWidget*,int,bool)\0"
    "setShortcutAutoRepeat(QWidget*,int)\0"
    "setShortcutEnabled(QWidget*,int,bool)\0"
    "setShortcutEnabled(QWidget*,int)\0"
    "setSizeIncrement(QWidget*,QSize)\0"
    "setSizeIncrement(QWidget*,int,int)\0"
    "setSizePolicy(QWidget*,QSizePolicy)\0"
    "theWrappedObject,horizontal,vertical\0"
    "setSizePolicy(QWidget*,QSizePolicy::Policy,QSizePolicy::Policy)\0"
    "setStatusTip(QWidget*,QString)\0"
    "setStyle(QWidget*,QStyle*)\0arg__1,arg__2\0"
    "static_QWidget_setTabOrder(QWidget*,QWidget*)\0"
    "setToolTip(QWidget*,QString)\0"
    "setUpdatesEnabled(QWidget*,bool)\0"
    "setWhatsThis(QWidget*,QString)\0"
    "theWrappedObject,filePath\0"
    "setWindowFilePath(QWidget*,QString)\0"
    "setWindowFlags(QWidget*,Qt::WindowFlags)\0"
    "theWrappedObject,icon\0"
    "setWindowIcon(QWidget*,QIcon)\0"
    "setWindowIconText(QWidget*,QString)\0"
    "theWrappedObject,windowModality\0"
    "setWindowModality(QWidget*,Qt::WindowModality)\0"
    "theWrappedObject,level\0"
    "setWindowOpacity(QWidget*,qreal)\0"
    "setWindowRole(QWidget*,QString)\0"
    "setWindowState(QWidget*,Qt::WindowStates)\0"
    "showEvent(QWidget*,QShowEvent*)\0"
    "size(QWidget*)\0sizeHint(QWidget*)\0"
    "sizeIncrement(QWidget*)\0QSizePolicy\0"
    "sizePolicy(QWidget*)\0stackUnder(QWidget*,QWidget*)\0"
    "statusTip(QWidget*)\0QStyle*\0style(QWidget*)\0"
    "styleSheet(QWidget*)\0"
    "tabletEvent(QWidget*,QTabletEvent*)\0"
    "testAttribute(QWidget*,Qt::WidgetAttribute)\0"
    "toolTip(QWidget*)\0underMouse(QWidget*)\0"
    "ungrabGesture(QWidget*,Qt::GestureType)\0"
    "unsetCursor(QWidget*)\0"
    "unsetLayoutDirection(QWidget*)\0"
    "unsetLocale(QWidget*)\0update(QWidget*,QRect)\0"
    "update(QWidget*,QRegion)\0"
    "update(QWidget*,int,int,int,int)\0"
    "updateGeometry(QWidget*)\0"
    "updatesEnabled(QWidget*)\0"
    "visibleRegion(QWidget*)\0whatsThis(QWidget*)\0"
    "wheelEvent(QWidget*,QWheelEvent*)\0"
    "width(QWidget*)\0winId(QWidget*)\0"
    "window(QWidget*)\0windowFilePath(QWidget*)\0"
    "Qt::WindowFlags\0windowFlags(QWidget*)\0"
    "QIcon\0windowIcon(QWidget*)\0"
    "windowIconText(QWidget*)\0Qt::WindowModality\0"
    "windowModality(QWidget*)\0qreal\0"
    "windowOpacity(QWidget*)\0windowRole(QWidget*)\0"
    "Qt::WindowStates\0windowState(QWidget*)\0"
    "windowTitle(QWidget*)\0Qt::WindowType\0"
    "windowType(QWidget*)\0x(QWidget*)\0"
    "y(QWidget*)\0RenderFlag\0RenderFlags\0"
    "DrawWindowBackground\0DrawChildren\0"
    "IgnoreMask\0"
};

void PythonQtWrapper_QWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWidget *_t = static_cast<PythonQtWrapper_QWidget *>(_o);
        switch (_id) {
        case 0: { QWidget* _r = _t->new_QWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 1: { QWidget* _r = _t->new_QWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 2: { QWidget* _r = _t->new_QWidget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->acceptDrops((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->accessibleDescription((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->accessibleName((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->actionEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QActionEvent*(*)>(_a[2]))); break;
        case 8: { QList<QAction*> _r = _t->actions((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QAction*>*>(_a[0]) = _r; }  break;
        case 9: _t->activateWindow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 10: _t->addAction((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 11: _t->addActions((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QList<QAction*>(*)>(_a[2]))); break;
        case 12: _t->adjustSize((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 13: { bool _r = _t->autoFillBackground((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QPalette::ColorRole _r = _t->backgroundRole((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette::ColorRole*>(_a[0]) = _r; }  break;
        case 15: { QSize _r = _t->baseSize((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 16: _t->changeEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 17: { QWidget* _r = _t->childAt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 18: { QWidget* _r = _t->childAt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 19: { QRect _r = _t->childrenRect((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 20: { QRegion _r = _t->childrenRegion((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 21: _t->clearFocus((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 22: _t->clearMask((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 23: _t->closeEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QCloseEvent*(*)>(_a[2]))); break;
        case 24: { QMargins _r = _t->contentsMargins((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMargins*>(_a[0]) = _r; }  break;
        case 25: { QRect _r = _t->contentsRect((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 26: _t->contextMenuEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 27: { Qt::ContextMenuPolicy _r = _t->contextMenuPolicy((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ContextMenuPolicy*>(_a[0]) = _r; }  break;
        case 28: _t->createWinId((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 29: { QCursor _r = _t->cursor((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCursor*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->devType((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: _t->dragEnterEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QDragEnterEvent*(*)>(_a[2]))); break;
        case 32: _t->dragLeaveEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QDragLeaveEvent*(*)>(_a[2]))); break;
        case 33: _t->dragMoveEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QDragMoveEvent*(*)>(_a[2]))); break;
        case 34: _t->dropEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 35: { WId _r = _t->effectiveWinId((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< WId*>(_a[0]) = _r; }  break;
        case 36: _t->ensurePolished((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 37: _t->enterEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 38: { bool _r = _t->event((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: _t->focusInEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 40: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: _t->focusOutEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 42: { Qt::FocusPolicy _r = _t->focusPolicy((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::FocusPolicy*>(_a[0]) = _r; }  break;
        case 43: { QWidget* _r = _t->focusProxy((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 44: { QWidget* _r = _t->focusWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 45: { const QFont* _r = _t->font((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QFont**>(_a[0]) = _r; }  break;
        case 46: { QPalette::ColorRole _r = _t->foregroundRole((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette::ColorRole*>(_a[0]) = _r; }  break;
        case 47: { QRect _r = _t->frameGeometry((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 48: { QSize _r = _t->frameSize((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 49: { const QRect* _r = _t->geometry((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QRect**>(_a[0]) = _r; }  break;
        case 50: _t->getContentsMargins((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 51: _t->grabGesture((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2])),(*reinterpret_cast< Qt::GestureFlags(*)>(_a[3]))); break;
        case 52: _t->grabGesture((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2]))); break;
        case 53: _t->grabKeyboard((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 54: _t->grabMouse((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 55: _t->grabMouse((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QCursor(*)>(_a[2]))); break;
        case 56: { int _r = _t->grabShortcut((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])),(*reinterpret_cast< Qt::ShortcutContext(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 57: { int _r = _t->grabShortcut((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 58: { QGraphicsEffect* _r = _t->graphicsEffect((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEffect**>(_a[0]) = _r; }  break;
        case 59: { QGraphicsProxyWidget* _r = _t->graphicsProxyWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsProxyWidget**>(_a[0]) = _r; }  break;
        case 60: { bool _r = _t->hasFocus((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 61: { bool _r = _t->hasMouseTracking((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: { int _r = _t->height((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 63: { int _r = _t->heightForWidth((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 64: _t->hideEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QHideEvent*(*)>(_a[2]))); break;
        case 65: { QInputContext* _r = _t->inputContext((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputContext**>(_a[0]) = _r; }  break;
        case 66: _t->inputMethodEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QInputMethodEvent*(*)>(_a[2]))); break;
        case 67: { Qt::InputMethodHints _r = _t->inputMethodHints((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::InputMethodHints*>(_a[0]) = _r; }  break;
        case 68: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 69: _t->insertAction((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])),(*reinterpret_cast< QAction*(*)>(_a[3]))); break;
        case 70: _t->insertActions((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])),(*reinterpret_cast< QList<QAction*>(*)>(_a[3]))); break;
        case 71: { bool _r = _t->isActiveWindow((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 72: { bool _r = _t->isAncestorOf((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 73: { bool _r = _t->isEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 74: { bool _r = _t->isEnabledTo((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 75: { bool _r = _t->isFullScreen((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 76: { bool _r = _t->isHidden((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 77: { bool _r = _t->isLeftToRight((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 78: { bool _r = _t->isMaximized((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 79: { bool _r = _t->isMinimized((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 80: { bool _r = _t->isModal((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 81: { bool _r = _t->isRightToLeft((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 82: { bool _r = _t->isVisible((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 83: { bool _r = _t->isVisibleTo((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 84: { bool _r = _t->isWindow((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 85: { bool _r = _t->isWindowModified((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 86: _t->keyPressEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 87: _t->keyReleaseEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 88: { QWidget* _r = _t->static_QWidget_keyboardGrabber();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 89: _t->languageChange((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 90: { QLayout* _r = _t->layout((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLayout**>(_a[0]) = _r; }  break;
        case 91: { Qt::LayoutDirection _r = _t->layoutDirection((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = _r; }  break;
        case 92: _t->leaveEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 93: { QLocale _r = _t->locale((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocale*>(_a[0]) = _r; }  break;
        case 94: { QPoint _r = _t->mapFrom((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 95: { QPoint _r = _t->mapFromGlobal((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 96: { QPoint _r = _t->mapFromParent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 97: { QPoint _r = _t->mapTo((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 98: { QPoint _r = _t->mapToGlobal((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 99: { QPoint _r = _t->mapToParent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 100: { QRegion _r = _t->mask((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 101: { int _r = _t->maximumHeight((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 102: { QSize _r = _t->maximumSize((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 103: { int _r = _t->maximumWidth((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 104: { int _r = _t->metric((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice::PaintDeviceMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 105: { int _r = _t->minimumHeight((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 106: { QSize _r = _t->minimumSize((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 107: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 108: { int _r = _t->minimumWidth((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 109: _t->mouseDoubleClickEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 110: { QWidget* _r = _t->static_QWidget_mouseGrabber();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 111: _t->mouseMoveEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 112: _t->mousePressEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 113: _t->mouseReleaseEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 114: _t->move((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 115: _t->move((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 116: _t->moveEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QMoveEvent*(*)>(_a[2]))); break;
        case 117: { QWidget* _r = _t->nativeParentWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 118: { QWidget* _r = _t->nextInFocusChain((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 119: { QRect _r = _t->normalGeometry((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 120: _t->overrideWindowFlags((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2]))); break;
        case 121: _t->overrideWindowState((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowStates(*)>(_a[2]))); break;
        case 122: { QPaintEngine* _r = _t->paintEngine((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintEngine**>(_a[0]) = _r; }  break;
        case 123: _t->paintEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 124: { const QPalette* _r = _t->palette((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPalette**>(_a[0]) = _r; }  break;
        case 125: { QWidget* _r = _t->parentWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 126: { QPoint _r = _t->pos((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 127: { QWidget* _r = _t->previousInFocusChain((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 128: { QRect _r = _t->rect((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 129: _t->releaseKeyboard((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 130: _t->releaseMouse((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 131: _t->releaseShortcut((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 132: _t->removeAction((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 133: _t->render((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])),(*reinterpret_cast< const QRegion(*)>(_a[4])),(*reinterpret_cast< QWidget::RenderFlags(*)>(_a[5]))); break;
        case 134: _t->render((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])),(*reinterpret_cast< const QRegion(*)>(_a[4]))); break;
        case 135: _t->render((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 136: _t->render((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2]))); break;
        case 137: _t->render((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])),(*reinterpret_cast< const QRegion(*)>(_a[4])),(*reinterpret_cast< QWidget::RenderFlags(*)>(_a[5]))); break;
        case 138: _t->render((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])),(*reinterpret_cast< const QRegion(*)>(_a[4]))); break;
        case 139: _t->render((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 140: _t->render((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 141: _t->repaint((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 142: _t->repaint((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2]))); break;
        case 143: _t->repaint((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 144: _t->resize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 145: _t->resize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 146: _t->resizeEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 147: { bool _r = _t->restoreGeometry((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 148: { QByteArray _r = _t->saveGeometry((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 149: _t->scroll((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 150: _t->scroll((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4]))); break;
        case 151: _t->setAcceptDrops((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 152: _t->setAccessibleDescription((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 153: _t->setAccessibleName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 154: _t->setAttribute((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WidgetAttribute(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 155: _t->setAttribute((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WidgetAttribute(*)>(_a[2]))); break;
        case 156: _t->setAutoFillBackground((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 157: _t->setBackgroundRole((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[2]))); break;
        case 158: _t->setBaseSize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 159: _t->setBaseSize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 160: _t->setContentsMargins((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QMargins(*)>(_a[2]))); break;
        case 161: _t->setContentsMargins((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 162: _t->setContextMenuPolicy((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::ContextMenuPolicy(*)>(_a[2]))); break;
        case 163: _t->setCursor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QCursor(*)>(_a[2]))); break;
        case 164: _t->setFixedHeight((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 165: _t->setFixedSize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 166: _t->setFixedSize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 167: _t->setFixedWidth((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 168: _t->setFocus((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::FocusReason(*)>(_a[2]))); break;
        case 169: _t->setFocusPolicy((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::FocusPolicy(*)>(_a[2]))); break;
        case 170: _t->setFocusProxy((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 171: _t->setFont((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 172: _t->setForegroundRole((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[2]))); break;
        case 173: _t->setGeometry((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 174: _t->setGeometry((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 175: _t->setGraphicsEffect((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QGraphicsEffect*(*)>(_a[2]))); break;
        case 176: _t->setInputContext((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QInputContext*(*)>(_a[2]))); break;
        case 177: _t->setInputMethodHints((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodHints(*)>(_a[2]))); break;
        case 178: _t->setLayout((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2]))); break;
        case 179: _t->setLayoutDirection((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::LayoutDirection(*)>(_a[2]))); break;
        case 180: _t->setLocale((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2]))); break;
        case 181: _t->setMask((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QBitmap(*)>(_a[2]))); break;
        case 182: _t->setMask((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2]))); break;
        case 183: _t->setMaximumHeight((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 184: _t->setMaximumSize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 185: _t->setMaximumSize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 186: _t->setMaximumWidth((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 187: _t->setMinimumHeight((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 188: _t->setMinimumSize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 189: _t->setMinimumSize((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 190: _t->setMinimumWidth((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 191: _t->setMouseTracking((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 192: _t->setPalette((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPalette(*)>(_a[2]))); break;
        case 193: _t->setParent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 194: _t->setParent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3]))); break;
        case 195: _t->setShortcutAutoRepeat((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 196: _t->setShortcutAutoRepeat((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 197: _t->setShortcutEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 198: _t->setShortcutEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 199: _t->setSizeIncrement((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 200: _t->setSizeIncrement((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 201: _t->setSizePolicy((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy(*)>(_a[2]))); break;
        case 202: _t->setSizePolicy((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[3]))); break;
        case 203: _t->setStatusTip((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 204: _t->setStyle((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QStyle*(*)>(_a[2]))); break;
        case 205: _t->static_QWidget_setTabOrder((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 206: _t->setToolTip((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 207: _t->setUpdatesEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 208: _t->setWhatsThis((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 209: _t->setWindowFilePath((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 210: _t->setWindowFlags((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2]))); break;
        case 211: _t->setWindowIcon((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2]))); break;
        case 212: _t->setWindowIconText((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 213: _t->setWindowModality((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowModality(*)>(_a[2]))); break;
        case 214: _t->setWindowOpacity((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 215: _t->setWindowRole((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 216: _t->setWindowState((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowStates(*)>(_a[2]))); break;
        case 217: _t->showEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 218: { QSize _r = _t->size((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 219: { QSize _r = _t->sizeHint((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 220: { QSize _r = _t->sizeIncrement((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 221: { QSizePolicy _r = _t->sizePolicy((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy*>(_a[0]) = _r; }  break;
        case 222: _t->stackUnder((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 223: { QString _r = _t->statusTip((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 224: { QStyle* _r = _t->style((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyle**>(_a[0]) = _r; }  break;
        case 225: { QString _r = _t->styleSheet((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 226: _t->tabletEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QTabletEvent*(*)>(_a[2]))); break;
        case 227: { bool _r = _t->testAttribute((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WidgetAttribute(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 228: { QString _r = _t->toolTip((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 229: { bool _r = _t->underMouse((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 230: _t->ungrabGesture((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2]))); break;
        case 231: _t->unsetCursor((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 232: _t->unsetLayoutDirection((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 233: _t->unsetLocale((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 234: _t->update((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 235: _t->update((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2]))); break;
        case 236: _t->update((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 237: _t->updateGeometry((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 238: { bool _r = _t->updatesEnabled((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 239: { QRegion _r = _t->visibleRegion((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 240: { QString _r = _t->whatsThis((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 241: _t->wheelEvent((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        case 242: { int _r = _t->width((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 243: { WId _r = _t->winId((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< WId*>(_a[0]) = _r; }  break;
        case 244: { QWidget* _r = _t->window((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 245: { QString _r = _t->windowFilePath((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 246: { Qt::WindowFlags _r = _t->windowFlags((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::WindowFlags*>(_a[0]) = _r; }  break;
        case 247: { QIcon _r = _t->windowIcon((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 248: { QString _r = _t->windowIconText((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 249: { Qt::WindowModality _r = _t->windowModality((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::WindowModality*>(_a[0]) = _r; }  break;
        case 250: { qreal _r = _t->windowOpacity((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 251: { QString _r = _t->windowRole((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 252: { Qt::WindowStates _r = _t->windowState((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::WindowStates*>(_a[0]) = _r; }  break;
        case 253: { QString _r = _t->windowTitle((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 254: { Qt::WindowType _r = _t->windowType((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::WindowType*>(_a[0]) = _r; }  break;
        case 255: { int _r = _t->x((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 256: { int _r = _t->y((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWidget,
      qt_meta_data_PythonQtWrapper_QWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 257)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 257;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWidgetAction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      85,   81,   30,   30, 0x0a,
     155,  131,  122,   30, 0x0a,
     210,  193,  122,   30, 0x0a,
     264,  240,   30,   30, 0x0a,
     331,  307,  302,   30, 0x0a,
     392,  361,  302,   30, 0x0a,
     437,  240,   30,   30, 0x0a,
     476,  131,  122,   30, 0x0a,
     534,  515,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWidgetAction[] = {
    "PythonQtWrapper_QWidgetAction\0\0"
    "QWidgetAction*\0parent\0new_QWidgetAction(QObject*)\0"
    "obj\0delete_QWidgetAction(QWidgetAction*)\0"
    "QWidget*\0theWrappedObject,parent\0"
    "createWidget(QWidgetAction*,QWidget*)\0"
    "theWrappedObject\0defaultWidget(QWidgetAction*)\0"
    "theWrappedObject,widget\0"
    "deleteWidget(QWidgetAction*,QWidget*)\0"
    "bool\0theWrappedObject,arg__1\0"
    "event(QWidgetAction*,QEvent*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "eventFilter(QWidgetAction*,QObject*,QEvent*)\0"
    "releaseWidget(QWidgetAction*,QWidget*)\0"
    "requestWidget(QWidgetAction*,QWidget*)\0"
    "theWrappedObject,w\0"
    "setDefaultWidget(QWidgetAction*,QWidget*)\0"
};

void PythonQtWrapper_QWidgetAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWidgetAction *_t = static_cast<PythonQtWrapper_QWidgetAction *>(_o);
        switch (_id) {
        case 0: { QWidgetAction* _r = _t->new_QWidgetAction((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidgetAction**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QWidgetAction((*reinterpret_cast< QWidgetAction*(*)>(_a[1]))); break;
        case 2: { QWidget* _r = _t->createWidget((*reinterpret_cast< QWidgetAction*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 3: { QWidget* _r = _t->defaultWidget((*reinterpret_cast< QWidgetAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 4: _t->deleteWidget((*reinterpret_cast< QWidgetAction*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QWidgetAction*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->eventFilter((*reinterpret_cast< QWidgetAction*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->releaseWidget((*reinterpret_cast< QWidgetAction*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 8: { QWidget* _r = _t->requestWidget((*reinterpret_cast< QWidgetAction*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 9: _t->setDefaultWidget((*reinterpret_cast< QWidgetAction*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWidgetAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWidgetAction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWidgetAction,
      qt_meta_data_PythonQtWrapper_QWidgetAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWidgetAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWidgetAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWidgetAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWidgetAction))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWidgetAction*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWidgetAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWidgetItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   42,   29,   28, 0x0a,
      74,   70,   28,   28, 0x0a,
     141,  124,  107,   28, 0x0a,
     181,  124,  175,   28, 0x0a,
     209,  124,  204,   28, 0x0a,
     269,  245,  241,   28, 0x0a,
     302,  124,  204,   28, 0x0a,
     330,  124,  324,   28, 0x0a,
     356,  124,  324,   28, 0x0a,
     382,  245,   28,   28, 0x0a,
     414,  124,  324,   28, 0x0a,
     446,  124,  437,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWidgetItem[] = {
    "PythonQtWrapper_QWidgetItem\0\0QWidgetItem*\0"
    "w\0new_QWidgetItem(QWidget*)\0obj\0"
    "delete_QWidgetItem(QWidgetItem*)\0"
    "Qt::Orientations\0theWrappedObject\0"
    "expandingDirections(QWidgetItem*)\0"
    "QRect\0geometry(QWidgetItem*)\0bool\0"
    "hasHeightForWidth(QWidgetItem*)\0int\0"
    "theWrappedObject,arg__1\0"
    "heightForWidth(QWidgetItem*,int)\0"
    "isEmpty(QWidgetItem*)\0QSize\0"
    "maximumSize(QWidgetItem*)\0"
    "minimumSize(QWidgetItem*)\0"
    "setGeometry(QWidgetItem*,QRect)\0"
    "sizeHint(QWidgetItem*)\0QWidget*\0"
    "widget(QWidgetItem*)\0"
};

void PythonQtWrapper_QWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWidgetItem *_t = static_cast<PythonQtWrapper_QWidgetItem *>(_o);
        switch (_id) {
        case 0: { QWidgetItem* _r = _t->new_QWidgetItem((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidgetItem**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QWidgetItem((*reinterpret_cast< QWidgetItem*(*)>(_a[1]))); break;
        case 2: { Qt::Orientations _r = _t->expandingDirections((*reinterpret_cast< QWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientations*>(_a[0]) = _r; }  break;
        case 3: { QRect _r = _t->geometry((*reinterpret_cast< QWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->hasHeightForWidth((*reinterpret_cast< QWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->heightForWidth((*reinterpret_cast< QWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isEmpty((*reinterpret_cast< QWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QSize _r = _t->maximumSize((*reinterpret_cast< QWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 8: { QSize _r = _t->minimumSize((*reinterpret_cast< QWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 9: _t->setGeometry((*reinterpret_cast< QWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 10: { QSize _r = _t->sizeHint((*reinterpret_cast< QWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 11: { QWidget* _r = _t->widget((*reinterpret_cast< QWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWidgetItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWidgetItem,
      qt_meta_data_PythonQtWrapper_QWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWidgetItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWidgetItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWindowStateChangeEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      76,   66,   41,   40, 0x0a,
     143,  122,   41,   40, 0x0a,
     198,  194,   40,   40, 0x0a,
     277,  260,  255,   40, 0x0a,
     331,  260,  314,   40, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWindowStateChangeEvent[] = {
    "PythonQtWrapper_QWindowStateChangeEvent\0"
    "\0QWindowStateChangeEvent*\0aOldState\0"
    "new_QWindowStateChangeEvent(Qt::WindowStates)\0"
    "aOldState,isOverride\0"
    "new_QWindowStateChangeEvent(Qt::WindowStates,bool)\0"
    "obj\0delete_QWindowStateChangeEvent(QWindowStateChangeEvent*)\0"
    "bool\0theWrappedObject\0"
    "isOverride(QWindowStateChangeEvent*)\0"
    "Qt::WindowStates\0oldState(QWindowStateChangeEvent*)\0"
};

void PythonQtWrapper_QWindowStateChangeEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWindowStateChangeEvent *_t = static_cast<PythonQtWrapper_QWindowStateChangeEvent *>(_o);
        switch (_id) {
        case 0: { QWindowStateChangeEvent* _r = _t->new_QWindowStateChangeEvent((*reinterpret_cast< Qt::WindowStates(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWindowStateChangeEvent**>(_a[0]) = _r; }  break;
        case 1: { QWindowStateChangeEvent* _r = _t->new_QWindowStateChangeEvent((*reinterpret_cast< Qt::WindowStates(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWindowStateChangeEvent**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QWindowStateChangeEvent((*reinterpret_cast< QWindowStateChangeEvent*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isOverride((*reinterpret_cast< QWindowStateChangeEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { Qt::WindowStates _r = _t->oldState((*reinterpret_cast< QWindowStateChangeEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::WindowStates*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWindowStateChangeEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWindowStateChangeEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWindowStateChangeEvent,
      qt_meta_data_PythonQtWrapper_QWindowStateChangeEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWindowStateChangeEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWindowStateChangeEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWindowStateChangeEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWindowStateChangeEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWindowStateChangeEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWindowStateChangeEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWindowsStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   31,   30, 0x0a,
      70,   66,   30,   30, 0x0a,
     135,  107,   30,   30, 0x0a,
     271,  245,   30,   30, 0x2a,
     399,  366,   30,   30, 0x0a,
     526,  495,   30,   30, 0x2a,
     635,  607,   30,   30, 0x0a,
     761,  735,   30,   30, 0x2a,
     872,  851,  846,   30, 0x0a,
     955,  921,  917,   30, 0x0a,
    1065, 1038,  917,   30, 0x2a,
    1153, 1133,  917,   30, 0x2a,
    1225, 1201,   30,   30, 0x0a,
    1262, 1201,   30,   30, 0x0a,
    1295, 1201,   30,   30, 0x0a,
    1377, 1333, 1327,   30, 0x0a,
    1509, 1472, 1327,   30, 0x2a,
    1633, 1589,  917,   30, 0x0a,
    1763, 1730,  917,   30, 0x2a,
    1868, 1842,  917,   30, 0x2a,
    1954, 1932,  917,   30, 0x2a,
    2034, 2004, 1998,   30, 0x0a,
    2142, 2119, 1998,   30, 0x2a,
    2235, 2212,   30,   30, 0x0a,
    2275, 1201,   30,   30, 0x0a,
    2314, 1201,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWindowsStyle[] = {
    "PythonQtWrapper_QWindowsStyle\0\0"
    "QWindowsStyle*\0new_QWindowsStyle()\0"
    "obj\0delete_QWindowsStyle(QWindowsStyle*)\0"
    "theWrappedObject,cc,opt,p,w\0"
    "drawComplexControl(QWindowsStyle*,QStyle::ComplexControl,const QStyleO"
    "ptionComplex*,QPainter*,const QWidget*)\0"
    "theWrappedObject,cc,opt,p\0"
    "drawComplexControl(QWindowsStyle*,QStyle::ComplexControl,const QStyleO"
    "ptionComplex*,QPainter*)\0"
    "theWrappedObject,element,opt,p,w\0"
    "drawControl(QWindowsStyle*,QStyle::ControlElement,const QStyleOption*,"
    "QPainter*,const QWidget*)\0"
    "theWrappedObject,element,opt,p\0"
    "drawControl(QWindowsStyle*,QStyle::ControlElement,const QStyleOption*,"
    "QPainter*)\0"
    "theWrappedObject,pe,opt,p,w\0"
    "drawPrimitive(QWindowsStyle*,QStyle::PrimitiveElement,const QStyleOpti"
    "on*,QPainter*,const QWidget*)\0"
    "theWrappedObject,pe,opt,p\0"
    "drawPrimitive(QWindowsStyle*,QStyle::PrimitiveElement,const QStyleOpti"
    "on*,QPainter*)\0"
    "bool\0theWrappedObject,o,e\0"
    "eventFilter(QWindowsStyle*,QObject*,QEvent*)\0"
    "int\0theWrappedObject,pm,option,widget\0"
    "pixelMetric(QWindowsStyle*,QStyle::PixelMetric,const QStyleOption*,con"
    "st QWidget*)\0"
    "theWrappedObject,pm,option\0"
    "pixelMetric(QWindowsStyle*,QStyle::PixelMetric,const QStyleOption*)\0"
    "theWrappedObject,pm\0"
    "pixelMetric(QWindowsStyle*,QStyle::PixelMetric)\0"
    "theWrappedObject,arg__1\0"
    "polish(QWindowsStyle*,QApplication*)\0"
    "polish(QWindowsStyle*,QPalette&)\0"
    "polish(QWindowsStyle*,QWidget*)\0QSize\0"
    "theWrappedObject,ct,opt,contentsSize,widget\0"
    "sizeFromContents(QWindowsStyle*,QStyle::ContentsType,const QStyleOptio"
    "n*,QSize,const QWidget*)\0"
    "theWrappedObject,ct,opt,contentsSize\0"
    "sizeFromContents(QWindowsStyle*,QStyle::ContentsType,const QStyleOptio"
    "n*,QSize)\0"
    "theWrappedObject,hint,opt,widget,returnData\0"
    "styleHint(QWindowsStyle*,QStyle::StyleHint,const QStyleOption*,const Q"
    "Widget*,QStyleHintReturn*)\0"
    "theWrappedObject,hint,opt,widget\0"
    "styleHint(QWindowsStyle*,QStyle::StyleHint,const QStyleOption*,const Q"
    "Widget*)\0"
    "theWrappedObject,hint,opt\0"
    "styleHint(QWindowsStyle*,QStyle::StyleHint,const QStyleOption*)\0"
    "theWrappedObject,hint\0"
    "styleHint(QWindowsStyle*,QStyle::StyleHint)\0"
    "QRect\0theWrappedObject,r,opt,widget\0"
    "subElementRect(QWindowsStyle*,QStyle::SubElement,const QStyleOption*,c"
    "onst QWidget*)\0"
    "theWrappedObject,r,opt\0"
    "subElementRect(QWindowsStyle*,QStyle::SubElement,const QStyleOption*)\0"
    "theWrappedObject,event\0"
    "timerEvent(QWindowsStyle*,QTimerEvent*)\0"
    "unpolish(QWindowsStyle*,QApplication*)\0"
    "unpolish(QWindowsStyle*,QWidget*)\0"
};

void PythonQtWrapper_QWindowsStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWindowsStyle *_t = static_cast<PythonQtWrapper_QWindowsStyle *>(_o);
        switch (_id) {
        case 0: { QWindowsStyle* _r = _t->new_QWindowsStyle();
            if (_a[0]) *reinterpret_cast< QWindowsStyle**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QWindowsStyle((*reinterpret_cast< QWindowsStyle*(*)>(_a[1]))); break;
        case 2: _t->drawComplexControl((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 3: _t->drawComplexControl((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 4: _t->drawControl((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ControlElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 5: _t->drawControl((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ControlElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 6: _t->drawPrimitive((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PrimitiveElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 7: _t->drawPrimitive((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PrimitiveElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 8: { bool _r = _t->eventFilter((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->pixelMetric((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->pixelMetric((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->pixelMetric((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->polish((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QApplication*(*)>(_a[2]))); break;
        case 13: _t->polish((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QPalette(*)>(_a[2]))); break;
        case 14: _t->polish((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 15: { QSize _r = _t->sizeFromContents((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ContentsType(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 16: { QSize _r = _t->sizeFromContents((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ContentsType(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->styleHint((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])),(*reinterpret_cast< QStyleHintReturn*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->styleHint((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->styleHint((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->styleHint((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { QRect _r = _t->subElementRect((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::SubElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 22: { QRect _r = _t->subElementRect((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::SubElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 23: _t->timerEvent((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 24: _t->unpolish((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QApplication*(*)>(_a[2]))); break;
        case 25: _t->unpolish((*reinterpret_cast< QWindowsStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWindowsStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWindowsStyle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWindowsStyle,
      qt_meta_data_PythonQtWrapper_QWindowsStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWindowsStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWindowsStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWindowsStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWindowsStyle))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWindowsStyle*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWindowsStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       2,  249, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   34,   25,   24, 0x0a,
      92,   85,   25,   24, 0x2a,
     114,   24,   25,   24, 0x2a,
     132,  128,   24,   24, 0x0a,
     183,  161,  157,   24, 0x0a,
     254,  231,  214,   24, 0x0a,
     301,  231,  293,   24, 0x0a,
     364,  344,   24,   24, 0x0a,
     407,  390,  157,   24, 0x0a,
     440,  390,  427,   24, 0x0a,
     486,  462,   24,   24, 0x0a,
     533,  510,  505,   24, 0x0a,
     588,  566,  557,   24, 0x0a,
     612,  344,  505,   24, 0x0a,
     641,  344,   24,   24, 0x0a,
     670,  390,  157,   24, 0x0a,
     710,  390,  687,   24, 0x0a,
     728,  344,  427,   24, 0x0a,
     758,  390,  747,   24, 0x0a,
     776,  510,   24,   24, 0x0a,
     818,  231,  810,   24, 0x0a,
     857,  344,   24,   24, 0x0a,
     882,  510,   24,   24, 0x0a,
     948,  918,   24,   24, 0x0a,
    1031, 1007,   24,   24, 0x0a,
    1114, 1086,   24,   24, 0x0a,
    1196, 1168,   24,   24, 0x0a,
    1259, 1232,   24,   24, 0x0a,
    1330, 1306,   24,   24, 0x2a,
    1397, 1372,   24,   24, 0x0a,
    1466, 1441,   24,   24, 0x0a,
    1531, 1501,   24,   24, 0x0a,
    1605, 1581,   24,   24, 0x0a,
    1638,  344,   24,   24, 0x0a,
    1687, 1663,   24,   24, 0x0a,
    1730, 1663,   24,   24, 0x0a,
    1795, 1770,   24,   24, 0x0a,
    1844, 1821,   24,   24, 0x0a,
    1899,  390, 1890,   24, 0x0a,
    1926,  390, 1920,   24, 0x0a,
    1945,  390,  157,   24, 0x0a,
    1978,  390, 1963,   24, 0x0a,
    2003, 1306,  505,   24, 0x0a,
    2046,  390, 1963,   24, 0x0a,
    2068,  390,  505,   24, 0x0a,
    2098,  390,  747,   24, 0x0a,
    2142,  390, 2121,   24, 0x0a,

 // enums: name, flags, count, data
    2164, 0x0,   13,  257,
    2177, 0x0,    5,  283,

 // enum data: key, value
    2190, uint(PythonQtWrapper_QWizard::BackButton),
    2201, uint(PythonQtWrapper_QWizard::NextButton),
    2212, uint(PythonQtWrapper_QWizard::CommitButton),
    2225, uint(PythonQtWrapper_QWizard::FinishButton),
    2238, uint(PythonQtWrapper_QWizard::CancelButton),
    2251, uint(PythonQtWrapper_QWizard::HelpButton),
    2262, uint(PythonQtWrapper_QWizard::CustomButton1),
    2276, uint(PythonQtWrapper_QWizard::CustomButton2),
    2290, uint(PythonQtWrapper_QWizard::CustomButton3),
    2304, uint(PythonQtWrapper_QWizard::Stretch),
    2312, uint(PythonQtWrapper_QWizard::NoButton),
    2321, uint(PythonQtWrapper_QWizard::NStandardButtons),
    2338, uint(PythonQtWrapper_QWizard::NButtons),
    2347, uint(PythonQtWrapper_QWizard::WatermarkPixmap),
    2363, uint(PythonQtWrapper_QWizard::LogoPixmap),
    2374, uint(PythonQtWrapper_QWizard::BannerPixmap),
    2387, uint(PythonQtWrapper_QWizard::BackgroundPixmap),
    2404, uint(PythonQtWrapper_QWizard::NPixmaps),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWizard[] = {
    "PythonQtWrapper_QWizard\0\0QWizard*\0"
    "parent,flags\0new_QWizard(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QWizard(QWidget*)\0new_QWizard()\0"
    "obj\0delete_QWizard(QWizard*)\0int\0"
    "theWrappedObject,page\0"
    "addPage(QWizard*,QWizardPage*)\0"
    "QAbstractButton*\0theWrappedObject,which\0"
    "button(QWizard*,QWizard::WizardButton)\0"
    "QString\0buttonText(QWizard*,QWizard::WizardButton)\0"
    "theWrappedObject,id\0cleanupPage(QWizard*,int)\0"
    "theWrappedObject\0currentId(QWizard*)\0"
    "QWizardPage*\0currentPage(QWizard*)\0"
    "theWrappedObject,result\0done(QWizard*,int)\0"
    "bool\0theWrappedObject,event\0"
    "event(QWizard*,QEvent*)\0QVariant\0"
    "theWrappedObject,name\0field(QWizard*,QString)\0"
    "hasVisitedPage(QWizard*,int)\0"
    "initializePage(QWizard*,int)\0"
    "nextId(QWizard*)\0QWizard::WizardOptions\0"
    "options(QWizard*)\0page(QWizard*,int)\0"
    "QList<int>\0pageIds(QWizard*)\0"
    "paintEvent(QWizard*,QPaintEvent*)\0"
    "QPixmap\0pixmap(QWizard*,QWizard::WizardPixmap)\0"
    "removePage(QWizard*,int)\0"
    "resizeEvent(QWizard*,QResizeEvent*)\0"
    "theWrappedObject,which,button\0"
    "setButton(QWizard*,QWizard::WizardButton,QAbstractButton*)\0"
    "theWrappedObject,layout\0"
    "setButtonLayout(QWizard*,QList<QWizard::WizardButton>)\0"
    "theWrappedObject,which,text\0"
    "setButtonText(QWizard*,QWizard::WizardButton,QString)\0"
    "theWrappedObject,name,value\0"
    "setField(QWizard*,QString,QVariant)\0"
    "theWrappedObject,option,on\0"
    "setOption(QWizard*,QWizard::WizardOption,bool)\0"
    "theWrappedObject,option\0"
    "setOption(QWizard*,QWizard::WizardOption)\0"
    "theWrappedObject,options\0"
    "setOptions(QWizard*,QWizard::WizardOptions)\0"
    "theWrappedObject,id,page\0"
    "setPage(QWizard*,int,QWizardPage*)\0"
    "theWrappedObject,which,pixmap\0"
    "setPixmap(QWizard*,QWizard::WizardPixmap,QPixmap)\0"
    "theWrappedObject,widget\0"
    "setSideWidget(QWizard*,QWidget*)\0"
    "setStartId(QWizard*,int)\0"
    "theWrappedObject,format\0"
    "setSubTitleFormat(QWizard*,Qt::TextFormat)\0"
    "setTitleFormat(QWizard*,Qt::TextFormat)\0"
    "theWrappedObject,visible\0"
    "setVisible(QWizard*,bool)\0"
    "theWrappedObject,style\0"
    "setWizardStyle(QWizard*,QWizard::WizardStyle)\0"
    "QWidget*\0sideWidget(QWizard*)\0QSize\0"
    "sizeHint(QWizard*)\0startId(QWizard*)\0"
    "Qt::TextFormat\0subTitleFormat(QWizard*)\0"
    "testOption(QWizard*,QWizard::WizardOption)\0"
    "titleFormat(QWizard*)\0"
    "validateCurrentPage(QWizard*)\0"
    "visitedPages(QWizard*)\0QWizard::WizardStyle\0"
    "wizardStyle(QWizard*)\0WizardButton\0"
    "WizardPixmap\0BackButton\0NextButton\0"
    "CommitButton\0FinishButton\0CancelButton\0"
    "HelpButton\0CustomButton1\0CustomButton2\0"
    "CustomButton3\0Stretch\0NoButton\0"
    "NStandardButtons\0NButtons\0WatermarkPixmap\0"
    "LogoPixmap\0BannerPixmap\0BackgroundPixmap\0"
    "NPixmaps\0"
};

void PythonQtWrapper_QWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWizard *_t = static_cast<PythonQtWrapper_QWizard *>(_o);
        switch (_id) {
        case 0: { QWizard* _r = _t->new_QWizard((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWizard**>(_a[0]) = _r; }  break;
        case 1: { QWizard* _r = _t->new_QWizard((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWizard**>(_a[0]) = _r; }  break;
        case 2: { QWizard* _r = _t->new_QWizard();
            if (_a[0]) *reinterpret_cast< QWizard**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QWizard((*reinterpret_cast< QWizard*(*)>(_a[1]))); break;
        case 4: { int _r = _t->addPage((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizardPage*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QAbstractButton* _r = _t->button((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardButton(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAbstractButton**>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->buttonText((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardButton(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->cleanupPage((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { int _r = _t->currentId((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QWizardPage* _r = _t->currentPage((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWizardPage**>(_a[0]) = _r; }  break;
        case 10: _t->done((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: { bool _r = _t->event((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QVariant _r = _t->field((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasVisitedPage((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->initializePage((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: { int _r = _t->nextId((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QWizard::WizardOptions _r = _t->options((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWizard::WizardOptions*>(_a[0]) = _r; }  break;
        case 17: { QWizardPage* _r = _t->page((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWizardPage**>(_a[0]) = _r; }  break;
        case 18: { QList<int> _r = _t->pageIds((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 19: _t->paintEvent((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 20: { QPixmap _r = _t->pixmap((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 21: _t->removePage((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->resizeEvent((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 23: _t->setButton((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardButton(*)>(_a[2])),(*reinterpret_cast< QAbstractButton*(*)>(_a[3]))); break;
        case 24: _t->setButtonLayout((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< const QList<QWizard::WizardButton>(*)>(_a[2]))); break;
        case 25: _t->setButtonText((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardButton(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 26: _t->setField((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 27: _t->setOption((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardOption(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 28: _t->setOption((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardOption(*)>(_a[2]))); break;
        case 29: _t->setOptions((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardOptions(*)>(_a[2]))); break;
        case 30: _t->setPage((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWizardPage*(*)>(_a[3]))); break;
        case 31: _t->setPixmap((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardPixmap(*)>(_a[2])),(*reinterpret_cast< const QPixmap(*)>(_a[3]))); break;
        case 32: _t->setSideWidget((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 33: _t->setStartId((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->setSubTitleFormat((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< Qt::TextFormat(*)>(_a[2]))); break;
        case 35: _t->setTitleFormat((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< Qt::TextFormat(*)>(_a[2]))); break;
        case 36: _t->setVisible((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->setWizardStyle((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardStyle(*)>(_a[2]))); break;
        case 38: { QWidget* _r = _t->sideWidget((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 39: { QSize _r = _t->sizeHint((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 40: { int _r = _t->startId((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 41: { Qt::TextFormat _r = _t->subTitleFormat((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextFormat*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->testOption((*reinterpret_cast< QWizard*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { Qt::TextFormat _r = _t->titleFormat((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextFormat*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->validateCurrentPage((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { QList<int> _r = _t->visitedPages((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 46: { QWizard::WizardStyle _r = _t->wizardStyle((*reinterpret_cast< QWizard*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWizard::WizardStyle*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWizard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWizard,
      qt_meta_data_PythonQtWrapper_QWizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWizard))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWizard*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWizardPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     161,  138,  130,   28, 0x0a,
     225,  208,   28,   28, 0x0a,
     251,  208,   28,   28, 0x0a,
     285,  208,  280,   28, 0x0a,
     312,  208,  280,   28, 0x0a,
     337,  208,  280,   28, 0x0a,
     367,  208,  363,   28, 0x0a,
     396,  138,  388,   28, 0x0a,
     467,  439,   28,   28, 0x0a,
     553,  525,   28,   28, 0x0a,
     613,  586,   28,   28, 0x0a,
     675,  645,   28,   28, 0x0a,
     755,  729,   28,   28, 0x0a,
     812,  789,   28,   28, 0x0a,
     843,  208,  130,   28, 0x0a,
     866,  208,  130,   28, 0x0a,
     886,  208,  280,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWizardPage[] = {
    "PythonQtWrapper_QWizardPage\0\0QWizardPage*\0"
    "parent\0new_QWizardPage(QWidget*)\0"
    "new_QWizardPage()\0obj\0"
    "delete_QWizardPage(QWizardPage*)\0"
    "QString\0theWrappedObject,which\0"
    "buttonText(QWizardPage*,QWizard::WizardButton)\0"
    "theWrappedObject\0cleanupPage(QWizardPage*)\0"
    "initializePage(QWizardPage*)\0bool\0"
    "isCommitPage(QWizardPage*)\0"
    "isComplete(QWizardPage*)\0"
    "isFinalPage(QWizardPage*)\0int\0"
    "nextId(QWizardPage*)\0QPixmap\0"
    "pixmap(QWizardPage*,QWizard::WizardPixmap)\0"
    "theWrappedObject,which,text\0"
    "setButtonText(QWizardPage*,QWizard::WizardButton,QString)\0"
    "theWrappedObject,commitPage\0"
    "setCommitPage(QWizardPage*,bool)\0"
    "theWrappedObject,finalPage\0"
    "setFinalPage(QWizardPage*,bool)\0"
    "theWrappedObject,which,pixmap\0"
    "setPixmap(QWizardPage*,QWizard::WizardPixmap,QPixmap)\0"
    "theWrappedObject,subTitle\0"
    "setSubTitle(QWizardPage*,QString)\0"
    "theWrappedObject,title\0"
    "setTitle(QWizardPage*,QString)\0"
    "subTitle(QWizardPage*)\0title(QWizardPage*)\0"
    "validatePage(QWizardPage*)\0"
};

void PythonQtWrapper_QWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWizardPage *_t = static_cast<PythonQtWrapper_QWizardPage *>(_o);
        switch (_id) {
        case 0: { QWizardPage* _r = _t->new_QWizardPage((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWizardPage**>(_a[0]) = _r; }  break;
        case 1: { QWizardPage* _r = _t->new_QWizardPage();
            if (_a[0]) *reinterpret_cast< QWizardPage**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QWizardPage((*reinterpret_cast< QWizardPage*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->buttonText((*reinterpret_cast< QWizardPage*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardButton(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->cleanupPage((*reinterpret_cast< QWizardPage*(*)>(_a[1]))); break;
        case 5: _t->initializePage((*reinterpret_cast< QWizardPage*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->isCommitPage((*reinterpret_cast< QWizardPage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isComplete((*reinterpret_cast< QWizardPage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isFinalPage((*reinterpret_cast< QWizardPage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->nextId((*reinterpret_cast< QWizardPage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QPixmap _r = _t->pixmap((*reinterpret_cast< QWizardPage*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 11: _t->setButtonText((*reinterpret_cast< QWizardPage*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardButton(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->setCommitPage((*reinterpret_cast< QWizardPage*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setFinalPage((*reinterpret_cast< QWizardPage*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->setPixmap((*reinterpret_cast< QWizardPage*(*)>(_a[1])),(*reinterpret_cast< QWizard::WizardPixmap(*)>(_a[2])),(*reinterpret_cast< const QPixmap(*)>(_a[3]))); break;
        case 15: _t->setSubTitle((*reinterpret_cast< QWizardPage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->setTitle((*reinterpret_cast< QWizardPage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: { QString _r = _t->subTitle((*reinterpret_cast< QWizardPage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->title((*reinterpret_cast< QWizardPage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->validatePage((*reinterpret_cast< QWizardPage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWizardPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWizardPage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWizardPage,
      qt_meta_data_PythonQtWrapper_QWizardPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWizardPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWizardPage))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWizardPage*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QWorkspace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       1,  124, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     150,  133,  124,   27, 0x0a,
     201,  176,  124,   27, 0x0a,
     268,  249,  124,   27, 0x2a,
     307,  133,  300,   27, 0x0a,
     355,  331,   27,   27, 0x0a,
     388,  331,   27,   27, 0x0a,
     449,  430,  425,   27, 0x0a,
     507,  476,  425,   27, 0x0a,
     549,  430,   27,   27, 0x0a,
     584,  430,   27,   27, 0x0a,
     621,  331,   27,   27, 0x0a,
     660,  133,  425,   27, 0x0a,
     719,  691,   27,   27, 0x0a,
     777,  753,   27,   27, 0x0a,
     816,  430,   27,   27, 0x0a,
     857,  133,  851,   27, 0x0a,
     879,  430,   27,   27, 0x0a,
     955,  932,  916,   27, 0x0a,
    1003,  133,  916,   27, 0x2a,

 // enums: name, flags, count, data
    1027, 0x0,    2,  128,

 // enum data: key, value
    1039, uint(PythonQtWrapper_QWorkspace::CreationOrder),
    1053, uint(PythonQtWrapper_QWorkspace::StackingOrder),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWorkspace[] = {
    "PythonQtWrapper_QWorkspace\0\0QWorkspace*\0"
    "parent\0new_QWorkspace(QWidget*)\0"
    "new_QWorkspace()\0obj\0"
    "delete_QWorkspace(QWorkspace*)\0QWidget*\0"
    "theWrappedObject\0activeWindow(QWorkspace*)\0"
    "theWrappedObject,w,flags\0"
    "addWindow(QWorkspace*,QWidget*,Qt::WindowFlags)\0"
    "theWrappedObject,w\0addWindow(QWorkspace*,QWidget*)\0"
    "QBrush\0background(QWorkspace*)\0"
    "theWrappedObject,arg__1\0"
    "changeEvent(QWorkspace*,QEvent*)\0"
    "childEvent(QWorkspace*,QChildEvent*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QWorkspace*,QEvent*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "eventFilter(QWorkspace*,QObject*,QEvent*)\0"
    "hideEvent(QWorkspace*,QHideEvent*)\0"
    "paintEvent(QWorkspace*,QPaintEvent*)\0"
    "resizeEvent(QWorkspace*,QResizeEvent*)\0"
    "scrollBarsEnabled(QWorkspace*)\0"
    "theWrappedObject,background\0"
    "setBackground(QWorkspace*,QBrush)\0"
    "theWrappedObject,enable\0"
    "setScrollBarsEnabled(QWorkspace*,bool)\0"
    "showEvent(QWorkspace*,QShowEvent*)\0"
    "QSize\0sizeHint(QWorkspace*)\0"
    "wheelEvent(QWorkspace*,QWheelEvent*)\0"
    "QList<QWidget*>\0theWrappedObject,order\0"
    "windowList(QWorkspace*,QWorkspace::WindowOrder)\0"
    "windowList(QWorkspace*)\0WindowOrder\0"
    "CreationOrder\0StackingOrder\0"
};

void PythonQtWrapper_QWorkspace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWorkspace *_t = static_cast<PythonQtWrapper_QWorkspace *>(_o);
        switch (_id) {
        case 0: { QWorkspace* _r = _t->new_QWorkspace((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWorkspace**>(_a[0]) = _r; }  break;
        case 1: { QWorkspace* _r = _t->new_QWorkspace();
            if (_a[0]) *reinterpret_cast< QWorkspace**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QWorkspace((*reinterpret_cast< QWorkspace*(*)>(_a[1]))); break;
        case 3: { QWidget* _r = _t->activeWindow((*reinterpret_cast< QWorkspace*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 4: { QWidget* _r = _t->addWindow((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 5: { QWidget* _r = _t->addWindow((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 6: { QBrush _r = _t->background((*reinterpret_cast< QWorkspace*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 7: _t->changeEvent((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 8: _t->childEvent((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QChildEvent*(*)>(_a[2]))); break;
        case 9: { bool _r = _t->event((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->eventFilter((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->hideEvent((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QHideEvent*(*)>(_a[2]))); break;
        case 12: _t->paintEvent((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 13: _t->resizeEvent((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 14: { bool _r = _t->scrollBarsEnabled((*reinterpret_cast< QWorkspace*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->setBackground((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 16: _t->setScrollBarsEnabled((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->showEvent((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 18: { QSize _r = _t->sizeHint((*reinterpret_cast< QWorkspace*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 19: _t->wheelEvent((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        case 20: { QList<QWidget*> _r = _t->windowList((*reinterpret_cast< QWorkspace*(*)>(_a[1])),(*reinterpret_cast< QWorkspace::WindowOrder(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QWidget*>*>(_a[0]) = _r; }  break;
        case 21: { QList<QWidget*> _r = _t->windowList((*reinterpret_cast< QWorkspace*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QWidget*>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWorkspace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWorkspace::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWorkspace,
      qt_meta_data_PythonQtWrapper_QWorkspace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWorkspace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWorkspace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWorkspace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWorkspace))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWorkspace*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWorkspace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
