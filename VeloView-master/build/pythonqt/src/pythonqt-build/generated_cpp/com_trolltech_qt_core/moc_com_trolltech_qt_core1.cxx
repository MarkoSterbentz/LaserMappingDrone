/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_core1.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_core/com_trolltech_qt_core1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_core1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QMetaClassInfo[] = {

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
      48,   31,   32,   31, 0x0a,
      73,   69,   31,   31, 0x0a,
     148,  131,  112,   31, 0x0a,
     197,  131,  185,   31, 0x0a,
     219,  131,  185,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo[] = {
    "PythonQtWrapper_QMetaClassInfo\0\0"
    "QMetaClassInfo*\0new_QMetaClassInfo()\0"
    "obj\0delete_QMetaClassInfo(QMetaClassInfo*)\0"
    "const QMetaObject*\0theWrappedObject\0"
    "enclosingMetaObject(QMetaClassInfo*)\0"
    "const char*\0name(QMetaClassInfo*)\0"
    "value(QMetaClassInfo*)\0"
};

void PythonQtWrapper_QMetaClassInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QMetaClassInfo *_t = static_cast<PythonQtWrapper_QMetaClassInfo *>(_o);
        switch (_id) {
        case 0: { QMetaClassInfo* _r = _t->new_QMetaClassInfo();
            if (_a[0]) *reinterpret_cast< QMetaClassInfo**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaClassInfo((*reinterpret_cast< QMetaClassInfo*(*)>(_a[1]))); break;
        case 2: { const QMetaObject* _r = _t->enclosingMetaObject((*reinterpret_cast< QMetaClassInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 3: { const char* _r = _t->name((*reinterpret_cast< QMetaClassInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: { const char* _r = _t->value((*reinterpret_cast< QMetaClassInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QMetaClassInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QMetaClassInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo,
      qt_meta_data_PythonQtWrapper_QMetaClassInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QMetaClassInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QMetaClassInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QMetaClassInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaClassInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaClassInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QMetaEnum[] = {

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
      38,   26,   27,   26, 0x0a,
      58,   54,   26,   26, 0x0a,
     123,  106,   87,   26, 0x0a,
     160,  106,  155,   26, 0x0a,
     179,  106,  155,   26, 0x0a,
     234,  211,  199,   26, 0x0a,
     258,  106,  254,   26, 0x0a,
     300,  279,  254,   26, 0x0a,
     357,  335,  254,   26, 0x0a,
     393,  106,  199,   26, 0x0a,
     410,  106,  199,   26, 0x0a,
     428,  211,  254,   26, 0x0a,
     473,  450,  199,   26, 0x0a,
     511,  450,  500,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QMetaEnum[] = {
    "PythonQtWrapper_QMetaEnum\0\0QMetaEnum*\0"
    "new_QMetaEnum()\0obj\0delete_QMetaEnum(QMetaEnum*)\0"
    "const QMetaObject*\0theWrappedObject\0"
    "enclosingMetaObject(QMetaEnum*)\0bool\0"
    "isFlag(QMetaEnum*)\0isValid(QMetaEnum*)\0"
    "const char*\0theWrappedObject,index\0"
    "key(QMetaEnum*,int)\0int\0keyCount(QMetaEnum*)\0"
    "theWrappedObject,key\0"
    "keyToValue(QMetaEnum*,const char*)\0"
    "theWrappedObject,keys\0"
    "keysToValue(QMetaEnum*,const char*)\0"
    "name(QMetaEnum*)\0scope(QMetaEnum*)\0"
    "value(QMetaEnum*,int)\0theWrappedObject,value\0"
    "valueToKey(QMetaEnum*,int)\0QByteArray\0"
    "valueToKeys(QMetaEnum*,int)\0"
};

void PythonQtWrapper_QMetaEnum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QMetaEnum *_t = static_cast<PythonQtWrapper_QMetaEnum *>(_o);
        switch (_id) {
        case 0: { QMetaEnum* _r = _t->new_QMetaEnum();
            if (_a[0]) *reinterpret_cast< QMetaEnum**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaEnum((*reinterpret_cast< QMetaEnum*(*)>(_a[1]))); break;
        case 2: { const QMetaObject* _r = _t->enclosingMetaObject((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->isFlag((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isValid((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { const char* _r = _t->key((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->keyCount((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->keyToValue((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->keysToValue((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { const char* _r = _t->name((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 10: { const char* _r = _t->scope((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->value((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { const char* _r = _t->valueToKey((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 13: { QByteArray _r = _t->valueToKeys((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QMetaEnum::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QMetaEnum::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaEnum,
      qt_meta_data_PythonQtWrapper_QMetaEnum, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QMetaEnum::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QMetaEnum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QMetaEnum::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaEnum))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaEnum*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaEnum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QMetaMethod[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       3,   79, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      64,   60,   28,   28, 0x0a,
     134,  117,   97,   28, 0x0a,
     159,  117,  155,   28, 0x0a,
     203,  117,  184,   28, 0x0a,
     237,  117,  155,   28, 0x0a,
     287,  117,  263,   28, 0x0a,
     330,  117,  312,   28, 0x0a,
     359,  117,  312,   28, 0x0a,
     388,  117,  155,   28, 0x0a,
     423,  117,  411,   28, 0x0a,
     447,  117,  411,   28, 0x0a,
     465,  117,  411,   28, 0x0a,

 // enums: name, flags, count, data
     488, 0x0,    3,   91,
     495, 0x0,    3,   97,
     506, 0x0,    4,  103,

 // enum data: key, value
     517, uint(PythonQtWrapper_QMetaMethod::Private),
     525, uint(PythonQtWrapper_QMetaMethod::Protected),
     535, uint(PythonQtWrapper_QMetaMethod::Public),
     542, uint(PythonQtWrapper_QMetaMethod::Compatibility),
     556, uint(PythonQtWrapper_QMetaMethod::Cloned),
     563, uint(PythonQtWrapper_QMetaMethod::Scriptable),
     574, uint(PythonQtWrapper_QMetaMethod::Method),
     581, uint(PythonQtWrapper_QMetaMethod::Signal),
     588, uint(PythonQtWrapper_QMetaMethod::Slot),
     593, uint(PythonQtWrapper_QMetaMethod::Constructor),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QMetaMethod[] = {
    "PythonQtWrapper_QMetaMethod\0\0QMetaMethod*\0"
    "new_QMetaMethod()\0obj\0"
    "delete_QMetaMethod(QMetaMethod*)\0"
    "QMetaMethod::Access\0theWrappedObject\0"
    "access(QMetaMethod*)\0int\0"
    "attributes(QMetaMethod*)\0const QMetaObject*\0"
    "enclosingMetaObject(QMetaMethod*)\0"
    "methodIndex(QMetaMethod*)\0"
    "QMetaMethod::MethodType\0"
    "methodType(QMetaMethod*)\0QList<QByteArray>\0"
    "parameterNames(QMetaMethod*)\0"
    "parameterTypes(QMetaMethod*)\0"
    "revision(QMetaMethod*)\0const char*\0"
    "signature(QMetaMethod*)\0tag(QMetaMethod*)\0"
    "typeName(QMetaMethod*)\0Access\0Attributes\0"
    "MethodType\0Private\0Protected\0Public\0"
    "Compatibility\0Cloned\0Scriptable\0Method\0"
    "Signal\0Slot\0Constructor\0"
};

void PythonQtWrapper_QMetaMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QMetaMethod *_t = static_cast<PythonQtWrapper_QMetaMethod *>(_o);
        switch (_id) {
        case 0: { QMetaMethod* _r = _t->new_QMetaMethod();
            if (_a[0]) *reinterpret_cast< QMetaMethod**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaMethod((*reinterpret_cast< QMetaMethod*(*)>(_a[1]))); break;
        case 2: { QMetaMethod::Access _r = _t->access((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaMethod::Access*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->attributes((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { const QMetaObject* _r = _t->enclosingMetaObject((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->methodIndex((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QMetaMethod::MethodType _r = _t->methodType((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaMethod::MethodType*>(_a[0]) = _r; }  break;
        case 7: { QList<QByteArray> _r = _t->parameterNames((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 8: { QList<QByteArray> _r = _t->parameterTypes((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->revision((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { const char* _r = _t->signature((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 11: { const char* _r = _t->tag((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 12: { const char* _r = _t->typeName((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QMetaMethod::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QMetaMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaMethod,
      qt_meta_data_PythonQtWrapper_QMetaMethod, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QMetaMethod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QMetaMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QMetaMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaMethod))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QMetaProperty[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   31,   30, 0x0a,
      70,   66,   30,   30, 0x0a,
     143,  126,  107,   30, 0x0a,
     189,  126,  179,   30, 0x0a,
     221,  126,  216,   30, 0x0a,
     253,  126,  216,   30, 0x0a,
     282,  126,  216,   30, 0x0a,
     330,  309,  216,   30, 0x0a,
     374,  126,  216,   30, 0x2a,
     403,  309,  216,   30, 0x0a,
     445,  126,  216,   30, 0x2a,
     472,  126,  216,   30, 0x0a,
     499,  126,  216,   30, 0x0a,
     523,  126,  216,   30, 0x0a,
     550,  126,  216,   30, 0x0a,
     577,  126,  216,   30, 0x0a,
     606,  309,  216,   30, 0x0a,
     650,  126,  216,   30, 0x2a,
     679,  309,  216,   30, 0x0a,
     719,  126,  216,   30, 0x2a,
     744,  309,  216,   30, 0x0a,
     782,  126,  216,   30, 0x2a,
     805,  126,  216,   30, 0x0a,
     829,  126,  216,   30, 0x0a,
     868,  126,  856,   30, 0x0a,
     901,  126,  889,   30, 0x0a,
     934,  126,  930,   30, 0x0a,
     968,  126,  930,   30, 0x0a,
    1007,  309,  998,   30, 0x0a,
    1043,  309,  216,   30, 0x0a,
    1074,  126,  930,   30, 0x0a,
    1114,  126, 1099,   30, 0x0a,
    1135,  126,  856,   30, 0x0a,
    1160,  126,  930,   30, 0x0a,
    1212, 1185,  216,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QMetaProperty[] = {
    "PythonQtWrapper_QMetaProperty\0\0"
    "QMetaProperty*\0new_QMetaProperty()\0"
    "obj\0delete_QMetaProperty(QMetaProperty*)\0"
    "const QMetaObject*\0theWrappedObject\0"
    "enclosingMetaObject(QMetaProperty*)\0"
    "QMetaEnum\0enumerator(QMetaProperty*)\0"
    "bool\0hasNotifySignal(QMetaProperty*)\0"
    "hasStdCppSet(QMetaProperty*)\0"
    "isConstant(QMetaProperty*)\0"
    "theWrappedObject,obj\0"
    "isDesignable(QMetaProperty*,const QObject*)\0"
    "isDesignable(QMetaProperty*)\0"
    "isEditable(QMetaProperty*,const QObject*)\0"
    "isEditable(QMetaProperty*)\0"
    "isEnumType(QMetaProperty*)\0"
    "isFinal(QMetaProperty*)\0"
    "isFlagType(QMetaProperty*)\0"
    "isReadable(QMetaProperty*)\0"
    "isResettable(QMetaProperty*)\0"
    "isScriptable(QMetaProperty*,const QObject*)\0"
    "isScriptable(QMetaProperty*)\0"
    "isStored(QMetaProperty*,const QObject*)\0"
    "isStored(QMetaProperty*)\0"
    "isUser(QMetaProperty*,const QObject*)\0"
    "isUser(QMetaProperty*)\0isValid(QMetaProperty*)\0"
    "isWritable(QMetaProperty*)\0const char*\0"
    "name(QMetaProperty*)\0QMetaMethod\0"
    "notifySignal(QMetaProperty*)\0int\0"
    "notifySignalIndex(QMetaProperty*)\0"
    "propertyIndex(QMetaProperty*)\0QVariant\0"
    "read(QMetaProperty*,const QObject*)\0"
    "reset(QMetaProperty*,QObject*)\0"
    "revision(QMetaProperty*)\0QVariant::Type\0"
    "type(QMetaProperty*)\0typeName(QMetaProperty*)\0"
    "userType(QMetaProperty*)\0"
    "theWrappedObject,obj,value\0"
    "write(QMetaProperty*,QObject*,QVariant)\0"
};

void PythonQtWrapper_QMetaProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QMetaProperty *_t = static_cast<PythonQtWrapper_QMetaProperty *>(_o);
        switch (_id) {
        case 0: { QMetaProperty* _r = _t->new_QMetaProperty();
            if (_a[0]) *reinterpret_cast< QMetaProperty**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaProperty((*reinterpret_cast< QMetaProperty*(*)>(_a[1]))); break;
        case 2: { const QMetaObject* _r = _t->enclosingMetaObject((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 3: { QMetaEnum _r = _t->enumerator((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaEnum*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->hasNotifySignal((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->hasStdCppSet((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isConstant((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isDesignable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isDesignable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isEditable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isEditable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isEnumType((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isFinal((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isFlagType((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isReadable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isResettable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isScriptable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isScriptable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isStored((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isStored((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isUser((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isUser((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isValid((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isWritable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { const char* _r = _t->name((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 25: { QMetaMethod _r = _t->notifySignal((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaMethod*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->notifySignalIndex((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->propertyIndex((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { QVariant _r = _t->read((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->reset((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->revision((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { QVariant::Type _r = _t->type((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant::Type*>(_a[0]) = _r; }  break;
        case 32: { const char* _r = _t->typeName((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->userType((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->write((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QMetaProperty::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QMetaProperty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaProperty,
      qt_meta_data_PythonQtWrapper_QMetaProperty, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QMetaProperty::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QMetaProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QMetaProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaProperty))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaProperty*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QMetaType[] = {

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
      38,   26,   27,   26, 0x0a,
      58,   54,   26,   26, 0x0a,
     103,   93,   87,   26, 0x0a,
     152,  147,   87,   26, 0x2a,
     194,  184,   26,   26, 0x0a,
     235,  147,  230,   26, 0x0a,
     287,  270,  230,   26, 0x0a,
     354,  337,  333,   26, 0x0a,
     404,  270,  230,   26, 0x0a,
     465,  456,  333,   26, 0x0a,
     512,  147,  500,   26, 0x0a,
     543,  456,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QMetaType[] = {
    "PythonQtWrapper_QMetaType\0\0QMetaType*\0"
    "new_QMetaType()\0obj\0delete_QMetaType(QMetaType*)\0"
    "void*\0type,copy\0"
    "static_QMetaType_construct(int,const void*)\0"
    "type\0static_QMetaType_construct(int)\0"
    "type,data\0static_QMetaType_destroy(int,void*)\0"
    "bool\0static_QMetaType_isRegistered(int)\0"
    "stream,type,data\0"
    "static_QMetaType_load(QDataStream&,int,void*)\0"
    "int\0typeName,aliasId\0"
    "static_QMetaType_registerTypedef(const char*,int)\0"
    "static_QMetaType_save(QDataStream&,int,const void*)\0"
    "typeName\0static_QMetaType_type(const char*)\0"
    "const char*\0static_QMetaType_typeName(int)\0"
    "static_QMetaType_unregisterType(const char*)\0"
};

void PythonQtWrapper_QMetaType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QMetaType *_t = static_cast<PythonQtWrapper_QMetaType *>(_o);
        switch (_id) {
        case 0: { QMetaType* _r = _t->new_QMetaType();
            if (_a[0]) *reinterpret_cast< QMetaType**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaType((*reinterpret_cast< QMetaType*(*)>(_a[1]))); break;
        case 2: { void* _r = _t->static_QMetaType_construct((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 3: { void* _r = _t->static_QMetaType_construct((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 4: _t->static_QMetaType_destroy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 5: { bool _r = _t->static_QMetaType_isRegistered((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->static_QMetaType_load((*reinterpret_cast< QDataStream(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->static_QMetaType_registerTypedef((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->static_QMetaType_save((*reinterpret_cast< QDataStream(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->static_QMetaType_type((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { const char* _r = _t->static_QMetaType_typeName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 11: _t->static_QMetaType_unregisterType((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QMetaType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QMetaType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaType,
      qt_meta_data_PythonQtWrapper_QMetaType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QMetaType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QMetaType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QMetaType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaType))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaType*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QMimeData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      58,   54,   26,   26, 0x0a,
     104,   87,   26,   26, 0x0a,
     131,   87,  122,   26, 0x0a,
     190,  164,  153,   26, 0x0a,
     227,   87,  215,   26, 0x0a,
     252,   87,  247,   26, 0x0a,
     273,  164,  247,   26, 0x0a,
     303,   87,  247,   26, 0x0a,
     323,   87,  247,   26, 0x0a,
     344,   87,  247,   26, 0x0a,
     364,   87,  247,   26, 0x0a,
     392,   87,  384,   26, 0x0a,
     409,   87,  122,   26, 0x0a,
     431,  164,   26,   26, 0x0a,
     504,  464,  122,   26, 0x0a,
     575,  552,   26,   26, 0x0a,
     640,  609,   26,   26, 0x0a,
     701,  679,   26,   26, 0x0a,
     752,  729,   26,   26, 0x0a,
     808,  786,   26,   26, 0x0a,
     858,  836,   26,   26, 0x0a,
     890,   87,  384,   26, 0x0a,
     919,   87,  907,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QMimeData[] = {
    "PythonQtWrapper_QMimeData\0\0QMimeData*\0"
    "new_QMimeData()\0obj\0delete_QMimeData(QMimeData*)\0"
    "theWrappedObject\0clear(QMimeData*)\0"
    "QVariant\0colorData(QMimeData*)\0"
    "QByteArray\0theWrappedObject,mimetype\0"
    "data(QMimeData*,QString)\0QStringList\0"
    "formats(QMimeData*)\0bool\0hasColor(QMimeData*)\0"
    "hasFormat(QMimeData*,QString)\0"
    "hasHtml(QMimeData*)\0hasImage(QMimeData*)\0"
    "hasText(QMimeData*)\0hasUrls(QMimeData*)\0"
    "QString\0html(QMimeData*)\0imageData(QMimeData*)\0"
    "removeFormat(QMimeData*,QString)\0"
    "theWrappedObject,mimetype,preferredType\0"
    "retrieveData(QMimeData*,QString,QVariant::Type)\0"
    "theWrappedObject,color\0"
    "setColorData(QMimeData*,QVariant)\0"
    "theWrappedObject,mimetype,data\0"
    "setData(QMimeData*,QString,QByteArray)\0"
    "theWrappedObject,html\0setHtml(QMimeData*,QString)\0"
    "theWrappedObject,image\0"
    "setImageData(QMimeData*,QVariant)\0"
    "theWrappedObject,text\0setText(QMimeData*,QString)\0"
    "theWrappedObject,urls\0"
    "setUrls(QMimeData*,QList<QUrl>)\0"
    "text(QMimeData*)\0QList<QUrl>\0"
    "urls(QMimeData*)\0"
};

void PythonQtWrapper_QMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QMimeData *_t = static_cast<PythonQtWrapper_QMimeData *>(_o);
        switch (_id) {
        case 0: { QMimeData* _r = _t->new_QMimeData();
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMimeData((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 2: _t->clear((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 3: { QVariant _r = _t->colorData((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 4: { QByteArray _r = _t->data((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->formats((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hasColor((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->hasFormat((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->hasHtml((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasImage((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasText((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->hasUrls((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->html((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->imageData((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: _t->removeFormat((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: { QVariant _r = _t->retrieveData((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant::Type(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 16: _t->setColorData((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 17: _t->setData((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 18: _t->setHtml((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->setImageData((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 20: _t->setText((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->setUrls((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 22: { QString _r = _t->text((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QList<QUrl> _r = _t->urls((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QMimeData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QMimeData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMimeData,
      qt_meta_data_PythonQtWrapper_QMimeData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QMimeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMimeData))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMimeData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QModelIndex[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      66,   60,   29,   28, 0x0a,
      99,   95,   28,   28, 0x0a,
     172,  144,  132,   28, 0x0a,
     221,  204,  200,   28, 0x0a,
     273,  251,  242,   28, 0x0a,
     296,  204,  242,   28, 0x2a,
     329,  204,  315,   28, 0x0a,
     356,  204,  349,   28, 0x0a,
     387,  204,  381,   28, 0x0a,
     422,  204,  417,   28, 0x0a,
     470,  204,  444,   28, 0x0a,
     513,  490,  417,   28, 0x0a,
     546,  490,  417,   28, 0x0a,
     579,  490,  417,   28, 0x0a,
     612,  204,  132,   28, 0x0a,
     633,  204,  200,   28, 0x0a,
     651,  144,  132,   28, 0x0a,
     689,   28,  681,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QModelIndex[] = {
    "PythonQtWrapper_QModelIndex\0\0QModelIndex*\0"
    "new_QModelIndex()\0other\0"
    "new_QModelIndex(QModelIndex)\0obj\0"
    "delete_QModelIndex(QModelIndex*)\0"
    "QModelIndex\0theWrappedObject,row,column\0"
    "child(QModelIndex*,int,int)\0int\0"
    "theWrappedObject\0column(QModelIndex*)\0"
    "QVariant\0theWrappedObject,role\0"
    "data(QModelIndex*,int)\0data(QModelIndex*)\0"
    "Qt::ItemFlags\0flags(QModelIndex*)\0"
    "qint64\0internalId(QModelIndex*)\0void*\0"
    "internalPointer(QModelIndex*)\0bool\0"
    "isValid(QModelIndex*)\0const QAbstractItemModel*\0"
    "model(QModelIndex*)\0theWrappedObject,other\0"
    "__ne__(QModelIndex*,QModelIndex)\0"
    "__lt__(QModelIndex*,QModelIndex)\0"
    "__eq__(QModelIndex*,QModelIndex)\0"
    "parent(QModelIndex*)\0row(QModelIndex*)\0"
    "sibling(QModelIndex*,int,int)\0QString\0"
    "py_toString(QModelIndex*)\0"
};

void PythonQtWrapper_QModelIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QModelIndex *_t = static_cast<PythonQtWrapper_QModelIndex *>(_o);
        switch (_id) {
        case 0: { QModelIndex* _r = _t->new_QModelIndex();
            if (_a[0]) *reinterpret_cast< QModelIndex**>(_a[0]) = _r; }  break;
        case 1: { QModelIndex* _r = _t->new_QModelIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QModelIndex((*reinterpret_cast< QModelIndex*(*)>(_a[1]))); break;
        case 3: { QModelIndex _r = _t->child((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->column((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->data((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 8: { qint64 _r = _t->internalId((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 9: { void* _r = _t->internalPointer((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isValid((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { const QAbstractItemModel* _r = _t->model((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractItemModel**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__ne__((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__lt__((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QModelIndex _r = _t->parent((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->row((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { QModelIndex _r = _t->sibling((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->py_toString((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QModelIndex::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QModelIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QModelIndex,
      qt_meta_data_PythonQtWrapper_QModelIndex, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QModelIndex::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QModelIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QModelIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QModelIndex))
        return static_cast<void*>(const_cast< PythonQtWrapper_QModelIndex*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QModelIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QMutex[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   32,   24,   23, 0x0a,
      71,   23,   24,   23, 0x2a,
      88,   84,   23,   23, 0x0a,
     128,  111,   23,   23, 0x0a,
     142,  111,   23,   23, 0x0a,
     167,  111,  162,   23, 0x0a,
     209,  184,  162,   23, 0x0a,
     230,  111,  162,   23, 0x0a,
     253,  111,   23,   23, 0x0a,
     269,  111,   23,   23, 0x0a,

 // enums: name, flags, count, data
     291, 0x0,    2,   68,

 // enum data: key, value
     305, uint(PythonQtWrapper_QMutex::NonRecursive),
     318, uint(PythonQtWrapper_QMutex::Recursive),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QMutex[] = {
    "PythonQtWrapper_QMutex\0\0QMutex*\0mode\0"
    "new_QMutex(QMutex::RecursionMode)\0"
    "new_QMutex()\0obj\0delete_QMutex(QMutex*)\0"
    "theWrappedObject\0lock(QMutex*)\0"
    "lockInline(QMutex*)\0bool\0tryLock(QMutex*)\0"
    "theWrappedObject,timeout\0tryLock(QMutex*,int)\0"
    "tryLockInline(QMutex*)\0unlock(QMutex*)\0"
    "unlockInline(QMutex*)\0RecursionMode\0"
    "NonRecursive\0Recursive\0"
};

void PythonQtWrapper_QMutex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QMutex *_t = static_cast<PythonQtWrapper_QMutex *>(_o);
        switch (_id) {
        case 0: { QMutex* _r = _t->new_QMutex((*reinterpret_cast< QMutex::RecursionMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMutex**>(_a[0]) = _r; }  break;
        case 1: { QMutex* _r = _t->new_QMutex();
            if (_a[0]) *reinterpret_cast< QMutex**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QMutex((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        case 3: _t->lock((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        case 4: _t->lockInline((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->tryLock((*reinterpret_cast< QMutex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->tryLock((*reinterpret_cast< QMutex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->tryLockInline((*reinterpret_cast< QMutex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->unlock((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        case 9: _t->unlockInline((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QMutex::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QMutex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMutex,
      qt_meta_data_PythonQtWrapper_QMutex, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QMutex::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QMutex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QMutex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMutex))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMutex*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMutex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   34,   25,   24, 0x0a,
      63,   24,   25,   24, 0x2a,
      81,   77,   24,   24, 0x0a,
     130,  111,  106,   24, 0x0a,
     182,  158,   24,   24, 0x0a,
     256,  239,  216,   24, 0x0a,
     275,  158,   24,   24, 0x0a,
     305,  239,   24,   24, 0x0a,
     330,  239,   24,   24, 0x0a,
     373,  239,  355,   24, 0x0a,
     404,  158,  106,   24, 0x0a,
     459,  428,  106,   24, 0x0a,
     498,  158,   24,   24, 0x0a,
     536,  239,  106,   24, 0x0a,
     579,  559,   24,   24, 0x0a,
     627,  603,   24,   24, 0x0a,
     667,  239,  659,   24, 0x0a,
     688,  158,   24,   24, 0x0a,
     747,  725,   24,   24, 0x0a,
     779,  239,  106,   24, 0x0a,
     834,  808,  804,   24, 0x0a,
     868,  239,  859,   24, 0x0a,
     885,  158,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QObject[] = {
    "PythonQtWrapper_QObject\0\0QObject*\0"
    "parent\0new_QObject(QObject*)\0new_QObject()\0"
    "obj\0delete_QObject(QObject*)\0bool\0"
    "theWrappedObject,b\0blockSignals(QObject*,bool)\0"
    "theWrappedObject,arg__1\0"
    "childEvent(QObject*,QChildEvent*)\0"
    "const QList<QObject*>*\0theWrappedObject\0"
    "children(QObject*)\0customEvent(QObject*,QEvent*)\0"
    "dumpObjectInfo(QObject*)\0"
    "dumpObjectTree(QObject*)\0QList<QByteArray>\0"
    "dynamicPropertyNames(QObject*)\0"
    "event(QObject*,QEvent*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "eventFilter(QObject*,QObject*,QEvent*)\0"
    "installEventFilter(QObject*,QObject*)\0"
    "isWidgetType(QObject*)\0theWrappedObject,id\0"
    "killTimer(QObject*,int)\0theWrappedObject,thread\0"
    "moveToThread(QObject*,QThread*)\0QString\0"
    "objectName(QObject*)\0"
    "removeEventFilter(QObject*,QObject*)\0"
    "theWrappedObject,name\0"
    "setObjectName(QObject*,QString)\0"
    "signalsBlocked(QObject*)\0int\0"
    "theWrappedObject,interval\0"
    "startTimer(QObject*,int)\0QThread*\0"
    "thread(QObject*)\0timerEvent(QObject*,QTimerEvent*)\0"
};

void PythonQtWrapper_QObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QObject *_t = static_cast<PythonQtWrapper_QObject *>(_o);
        switch (_id) {
        case 0: { QObject* _r = _t->new_QObject((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 1: { QObject* _r = _t->new_QObject();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->blockSignals((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->childEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QChildEvent*(*)>(_a[2]))); break;
        case 5: { const QList<QObject*>* _r = _t->children((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QList<QObject*>**>(_a[0]) = _r; }  break;
        case 6: _t->customEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 7: _t->dumpObjectInfo((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->dumpObjectTree((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 9: { QList<QByteArray> _r = _t->dynamicPropertyNames((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->event((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->installEventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 13: { bool _r = _t->isWidgetType((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->killTimer((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->moveToThread((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QThread*(*)>(_a[2]))); break;
        case 16: { QString _r = _t->objectName((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: _t->removeEventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 18: _t->setObjectName((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: { bool _r = _t->signalsBlocked((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->startTimer((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { QThread* _r = _t->thread((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QThread**>(_a[0]) = _r; }  break;
        case 22: _t->timerEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QObject,
      qt_meta_data_PythonQtWrapper_QObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QObject))
        return static_cast<void*>(const_cast< PythonQtWrapper_QObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QParallelAnimationGroup[] = {

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
      73,   66,   41,   40, 0x0a,
     111,   40,   41,   40, 0x2a,
     145,  141,   40,   40, 0x0a,
     223,  206,  202,   40, 0x0a,
     286,  263,  258,   40, 0x0a,
     355,  326,   40,   40, 0x0a,
     430,  403,   40,   40, 0x0a,
     537,  502,   40,   40, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup[] = {
    "PythonQtWrapper_QParallelAnimationGroup\0"
    "\0QParallelAnimationGroup*\0parent\0"
    "new_QParallelAnimationGroup(QObject*)\0"
    "new_QParallelAnimationGroup()\0obj\0"
    "delete_QParallelAnimationGroup(QParallelAnimationGroup*)\0"
    "int\0theWrappedObject\0"
    "duration(QParallelAnimationGroup*)\0"
    "bool\0theWrappedObject,event\0"
    "event(QParallelAnimationGroup*,QEvent*)\0"
    "theWrappedObject,currentTime\0"
    "updateCurrentTime(QParallelAnimationGroup*,int)\0"
    "theWrappedObject,direction\0"
    "updateDirection(QParallelAnimationGroup*,QAbstractAnimation::Direction"
    ")\0"
    "theWrappedObject,newState,oldState\0"
    "updateState(QParallelAnimationGroup*,QAbstractAnimation::State,QAbstra"
    "ctAnimation::State)\0"
};

void PythonQtWrapper_QParallelAnimationGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QParallelAnimationGroup *_t = static_cast<PythonQtWrapper_QParallelAnimationGroup *>(_o);
        switch (_id) {
        case 0: { QParallelAnimationGroup* _r = _t->new_QParallelAnimationGroup((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QParallelAnimationGroup**>(_a[0]) = _r; }  break;
        case 1: { QParallelAnimationGroup* _r = _t->new_QParallelAnimationGroup();
            if (_a[0]) *reinterpret_cast< QParallelAnimationGroup**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QParallelAnimationGroup((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1]))); break;
        case 3: { int _r = _t->duration((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->updateCurrentTime((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->updateDirection((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::Direction(*)>(_a[2]))); break;
        case 7: _t->updateState((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QParallelAnimationGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QParallelAnimationGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup,
      qt_meta_data_PythonQtWrapper_QParallelAnimationGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QParallelAnimationGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QParallelAnimationGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QParallelAnimationGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup))
        return static_cast<void*>(const_cast< PythonQtWrapper_QParallelAnimationGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QParallelAnimationGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPauseAnimation[] = {

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
      57,   50,   33,   32, 0x0a,
      87,   32,   33,   32, 0x2a,
     122,  109,   33,   32, 0x0a,
     162,  156,   33,   32, 0x2a,
     191,  187,   32,   32, 0x0a,
     253,  236,  232,   32, 0x0a,
     304,  285,  280,   32, 0x0a,
     359,  336,   32,   32, 0x0a,
     417,  393,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPauseAnimation[] = {
    "PythonQtWrapper_QPauseAnimation\0\0"
    "QPauseAnimation*\0parent\0"
    "new_QPauseAnimation(QObject*)\0"
    "new_QPauseAnimation()\0msecs,parent\0"
    "new_QPauseAnimation(int,QObject*)\0"
    "msecs\0new_QPauseAnimation(int)\0obj\0"
    "delete_QPauseAnimation(QPauseAnimation*)\0"
    "int\0theWrappedObject\0duration(QPauseAnimation*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QPauseAnimation*,QEvent*)\0"
    "theWrappedObject,msecs\0"
    "setDuration(QPauseAnimation*,int)\0"
    "theWrappedObject,arg__1\0"
    "updateCurrentTime(QPauseAnimation*,int)\0"
};

void PythonQtWrapper_QPauseAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPauseAnimation *_t = static_cast<PythonQtWrapper_QPauseAnimation *>(_o);
        switch (_id) {
        case 0: { QPauseAnimation* _r = _t->new_QPauseAnimation((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPauseAnimation**>(_a[0]) = _r; }  break;
        case 1: { QPauseAnimation* _r = _t->new_QPauseAnimation();
            if (_a[0]) *reinterpret_cast< QPauseAnimation**>(_a[0]) = _r; }  break;
        case 2: { QPauseAnimation* _r = _t->new_QPauseAnimation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPauseAnimation**>(_a[0]) = _r; }  break;
        case 3: { QPauseAnimation* _r = _t->new_QPauseAnimation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPauseAnimation**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QPauseAnimation((*reinterpret_cast< QPauseAnimation*(*)>(_a[1]))); break;
        case 5: { int _r = _t->duration((*reinterpret_cast< QPauseAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QPauseAnimation*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setDuration((*reinterpret_cast< QPauseAnimation*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->updateCurrentTime((*reinterpret_cast< QPauseAnimation*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPauseAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPauseAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPauseAnimation,
      qt_meta_data_PythonQtWrapper_QPauseAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPauseAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPauseAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPauseAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPauseAnimation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPauseAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPauseAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       5,  289, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   36,   26,   25, 0x0a,
      66,   25,   26,   25, 0x2a,
      85,   81,   25,   25, 0x0a,
     134,  117,  112,   25, 0x0a,
     158,  117,  151,   25, 0x0a,
     184,  117,  151,   25, 0x0a,
     208,  117,  112,   25, 0x0a,
     231,  117,   25,   25, 0x0a,
     273,  248,   25,   25, 0x0a,
     326,  117,   25,   25, 0x0a,
     367,  117,  355,   25, 0x0a,
     413,  117,  390,   25, 0x0a,
     442,  434,  430,   25, 0x0a,
     493,  475,  430,   25, 0x0a,
     538,  117,  430,   25, 0x0a,
     579,  117,  558,   25, 0x0a,
     601,  117,  112,   25, 0x0a,
     654,  117,  625,   25, 0x0a,
     704,  117,  684,   25, 0x0a,
     745,  117,  734,   25, 0x0a,
     777,  117,  734,   25, 0x0a,
     835,  117,  810,   25, 0x0a,
     887,  858,  151,   25, 0x0a,
     949,  920,   25,   25, 0x0a,
    1009,  987,   25,   25, 0x0a,
    1071,  920,   25,   25, 0x0a,
    1124,  248,   25,   25, 0x0a,
    1206, 1175,   25,   25, 0x0a,
    1292, 1266,   25,   25, 0x2a,
    1332, 1266,   25,   25, 0x0a,
    1372, 1175,   25,   25, 0x0a,
    1433, 1266,   25,   25, 0x2a,
    1503, 1474,   25,   25, 0x0a,
    1570, 1549,   25,   25, 0x0a,
    1609,  117,   25,   25, 0x0a,
    1668, 1638,   25,   25, 0x0a,
    1738, 1713,   25,   25, 0x2a,
    1803, 1763,   25,   25, 0x0a,
    1895, 1860,   25,   25, 0x2a,
    1932,  434,  112,   25, 0x0a,
    1971,  475,  112,   25, 0x0a,
    2061, 2022,  112,   25, 0x0a,
    2163, 2128,  112,   25, 0x2a,
    2245,  117, 2222,   25, 0x0a,
    2262,   25,  355,   25, 0x0a,
    2321, 2298,  112,   25, 0x0a,
    2356,  117,  112,   25, 0x2a,
    2387, 2298,  112,   25, 0x0a,
    2418,  117,  112,   25, 0x2a,
    2445, 2298,  112,   25, 0x0a,
    2477,  117,  112,   25, 0x2a,
    2505, 2298,  112,   25, 0x0a,
    2535,  117,  112,   25, 0x2a,
    2569,  117, 2561,   25, 0x0a,
    2623, 2597,  151,   25, 0x0a,

 // enums: name, flags, count, data
    2663, 0x0,    6,  309,
    2676, 0x0,    3,  321,
    2695, 0x0,    2,  327,
    2710, 0x0,    3,  331,
    2723, 0x0,    2,  337,

 // enum data: key, value
    2734, uint(PythonQtWrapper_QProcess::FailedToStart),
    2748, uint(PythonQtWrapper_QProcess::Crashed),
    2756, uint(PythonQtWrapper_QProcess::Timedout),
    2765, uint(PythonQtWrapper_QProcess::ReadError),
    2775, uint(PythonQtWrapper_QProcess::WriteError),
    2786, uint(PythonQtWrapper_QProcess::UnknownError),
    2799, uint(PythonQtWrapper_QProcess::SeparateChannels),
    2816, uint(PythonQtWrapper_QProcess::MergedChannels),
    2831, uint(PythonQtWrapper_QProcess::ForwardedChannels),
    2849, uint(PythonQtWrapper_QProcess::StandardOutput),
    2864, uint(PythonQtWrapper_QProcess::StandardError),
    2878, uint(PythonQtWrapper_QProcess::NotRunning),
    2889, uint(PythonQtWrapper_QProcess::Starting),
    2898, uint(PythonQtWrapper_QProcess::Running),
    2906, uint(PythonQtWrapper_QProcess::NormalExit),
    2917, uint(PythonQtWrapper_QProcess::CrashExit),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QProcess[] = {
    "PythonQtWrapper_QProcess\0\0QProcess*\0"
    "parent\0new_QProcess(QObject*)\0"
    "new_QProcess()\0obj\0delete_QProcess(QProcess*)\0"
    "bool\0theWrappedObject\0atEnd(QProcess*)\0"
    "qint64\0bytesAvailable(QProcess*)\0"
    "bytesToWrite(QProcess*)\0canReadLine(QProcess*)\0"
    "close(QProcess*)\0theWrappedObject,channel\0"
    "closeReadChannel(QProcess*,QProcess::ProcessChannel)\0"
    "closeWriteChannel(QProcess*)\0QStringList\0"
    "environment(QProcess*)\0QProcess::ProcessError\0"
    "error(QProcess*)\0int\0program\0"
    "static_QProcess_execute(QString)\0"
    "program,arguments\0"
    "static_QProcess_execute(QString,QStringList)\0"
    "exitCode(QProcess*)\0QProcess::ExitStatus\0"
    "exitStatus(QProcess*)\0isSequential(QProcess*)\0"
    "QProcess::ProcessChannelMode\0"
    "processChannelMode(QProcess*)\0"
    "QProcessEnvironment\0processEnvironment(QProcess*)\0"
    "QByteArray\0readAllStandardError(QProcess*)\0"
    "readAllStandardOutput(QProcess*)\0"
    "QProcess::ProcessChannel\0"
    "readChannel(QProcess*)\0"
    "theWrappedObject,data,maxlen\0"
    "readData(QProcess*,char*,qint64)\0"
    "theWrappedObject,environment\0"
    "setEnvironment(QProcess*,QStringList)\0"
    "theWrappedObject,mode\0"
    "setProcessChannelMode(QProcess*,QProcess::ProcessChannelMode)\0"
    "setProcessEnvironment(QProcess*,QProcessEnvironment)\0"
    "setReadChannel(QProcess*,QProcess::ProcessChannel)\0"
    "theWrappedObject,fileName,mode\0"
    "setStandardErrorFile(QProcess*,QString,QIODevice::OpenMode)\0"
    "theWrappedObject,fileName\0"
    "setStandardErrorFile(QProcess*,QString)\0"
    "setStandardInputFile(QProcess*,QString)\0"
    "setStandardOutputFile(QProcess*,QString,QIODevice::OpenMode)\0"
    "setStandardOutputFile(QProcess*,QString)\0"
    "theWrappedObject,destination\0"
    "setStandardOutputProcess(QProcess*,QProcess*)\0"
    "theWrappedObject,dir\0"
    "setWorkingDirectory(QProcess*,QString)\0"
    "setupChildProcess(QProcess*)\0"
    "theWrappedObject,program,mode\0"
    "start(QProcess*,QString,QIODevice::OpenMode)\0"
    "theWrappedObject,program\0"
    "start(QProcess*,QString)\0"
    "theWrappedObject,program,arguments,mode\0"
    "start(QProcess*,QString,QStringList,QIODevice::OpenMode)\0"
    "theWrappedObject,program,arguments\0"
    "start(QProcess*,QString,QStringList)\0"
    "static_QProcess_startDetached(QString)\0"
    "static_QProcess_startDetached(QString,QStringList)\0"
    "program,arguments,workingDirectory,pid\0"
    "static_QProcess_startDetached(QString,QStringList,QString,qint64*)\0"
    "program,arguments,workingDirectory\0"
    "static_QProcess_startDetached(QString,QStringList,QString)\0"
    "QProcess::ProcessState\0state(QProcess*)\0"
    "static_QProcess_systemEnvironment()\0"
    "theWrappedObject,msecs\0"
    "waitForBytesWritten(QProcess*,int)\0"
    "waitForBytesWritten(QProcess*)\0"
    "waitForFinished(QProcess*,int)\0"
    "waitForFinished(QProcess*)\0"
    "waitForReadyRead(QProcess*,int)\0"
    "waitForReadyRead(QProcess*)\0"
    "waitForStarted(QProcess*,int)\0"
    "waitForStarted(QProcess*)\0QString\0"
    "workingDirectory(QProcess*)\0"
    "theWrappedObject,data,len\0"
    "writeData(QProcess*,const char*,qint64)\0"
    "ProcessError\0ProcessChannelMode\0"
    "ProcessChannel\0ProcessState\0ExitStatus\0"
    "FailedToStart\0Crashed\0Timedout\0ReadError\0"
    "WriteError\0UnknownError\0SeparateChannels\0"
    "MergedChannels\0ForwardedChannels\0"
    "StandardOutput\0StandardError\0NotRunning\0"
    "Starting\0Running\0NormalExit\0CrashExit\0"
};

void PythonQtWrapper_QProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QProcess *_t = static_cast<PythonQtWrapper_QProcess *>(_o);
        switch (_id) {
        case 0: { QProcess* _r = _t->new_QProcess((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcess**>(_a[0]) = _r; }  break;
        case 1: { QProcess* _r = _t->new_QProcess();
            if (_a[0]) *reinterpret_cast< QProcess**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QProcess((*reinterpret_cast< QProcess*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->atEnd((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: { qint64 _r = _t->bytesToWrite((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->canReadLine((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->close((*reinterpret_cast< QProcess*(*)>(_a[1]))); break;
        case 8: _t->closeReadChannel((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< QProcess::ProcessChannel(*)>(_a[2]))); break;
        case 9: _t->closeWriteChannel((*reinterpret_cast< QProcess*(*)>(_a[1]))); break;
        case 10: { QStringList _r = _t->environment((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 11: { QProcess::ProcessError _r = _t->error((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcess::ProcessError*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->static_QProcess_execute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->static_QProcess_execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->exitCode((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { QProcess::ExitStatus _r = _t->exitStatus((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcess::ExitStatus*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isSequential((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QProcess::ProcessChannelMode _r = _t->processChannelMode((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcess::ProcessChannelMode*>(_a[0]) = _r; }  break;
        case 18: { QProcessEnvironment _r = _t->processEnvironment((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcessEnvironment*>(_a[0]) = _r; }  break;
        case 19: { QByteArray _r = _t->readAllStandardError((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 20: { QByteArray _r = _t->readAllStandardOutput((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 21: { QProcess::ProcessChannel _r = _t->readChannel((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcess::ProcessChannel*>(_a[0]) = _r; }  break;
        case 22: { qint64 _r = _t->readData((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 23: _t->setEnvironment((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 24: _t->setProcessChannelMode((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< QProcess::ProcessChannelMode(*)>(_a[2]))); break;
        case 25: _t->setProcessEnvironment((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QProcessEnvironment(*)>(_a[2]))); break;
        case 26: _t->setReadChannel((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< QProcess::ProcessChannel(*)>(_a[2]))); break;
        case 27: _t->setStandardErrorFile((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[3]))); break;
        case 28: _t->setStandardErrorFile((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->setStandardInputFile((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->setStandardOutputFile((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[3]))); break;
        case 31: _t->setStandardOutputFile((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 32: _t->setStandardOutputProcess((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< QProcess*(*)>(_a[2]))); break;
        case 33: _t->setWorkingDirectory((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 34: _t->setupChildProcess((*reinterpret_cast< QProcess*(*)>(_a[1]))); break;
        case 35: _t->start((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[3]))); break;
        case 36: _t->start((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 37: _t->start((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4]))); break;
        case 38: _t->start((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 39: { bool _r = _t->static_QProcess_startDetached((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->static_QProcess_startDetached((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->static_QProcess_startDetached((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< qint64*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->static_QProcess_startDetached((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { QProcess::ProcessState _r = _t->state((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcess::ProcessState*>(_a[0]) = _r; }  break;
        case 44: { QStringList _r = _t->static_QProcess_systemEnvironment();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->waitForFinished((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->waitForFinished((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->waitForStarted((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->waitForStarted((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { QString _r = _t->workingDirectory((*reinterpret_cast< QProcess*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 54: { qint64 _r = _t->writeData((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QProcess,
      qt_meta_data_PythonQtWrapper_QProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QProcess))
        return static_cast<void*>(const_cast< PythonQtWrapper_QProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QProcessEnvironment[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      90,   84,   37,   36, 0x0a,
     139,  135,   36,   36, 0x0a,
     205,  188,   36,   36, 0x0a,
     260,  238,  233,   36, 0x0a,
     318,  299,   36,   36, 0x0a,
     395,  367,   36,   36, 0x0a,
     440,  188,  233,   36, 0x0a,
     482,  188,  470,   36, 0x0a,
     532,  509,  233,   36, 0x0a,
     581,  509,   37,   36, 0x0a,
     639,  509,  233,   36, 0x0a,
     688,  238,   36,   36, 0x0a,
     745,   36,  725,   36, 0x0a,
     792,  188,  470,   36, 0x0a,
     870,  835,  827,   36, 0x0a,
     914,  238,  827,   36, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QProcessEnvironment[] = {
    "PythonQtWrapper_QProcessEnvironment\0"
    "\0QProcessEnvironment*\0new_QProcessEnvironment()\0"
    "other\0new_QProcessEnvironment(QProcessEnvironment)\0"
    "obj\0delete_QProcessEnvironment(QProcessEnvironment*)\0"
    "theWrappedObject\0clear(QProcessEnvironment*)\0"
    "bool\0theWrappedObject,name\0"
    "contains(QProcessEnvironment*,QString)\0"
    "theWrappedObject,e\0"
    "insert(QProcessEnvironment*,QProcessEnvironment)\0"
    "theWrappedObject,name,value\0"
    "insert(QProcessEnvironment*,QString,QString)\0"
    "isEmpty(QProcessEnvironment*)\0QStringList\0"
    "keys(QProcessEnvironment*)\0"
    "theWrappedObject,other\0"
    "__ne__(QProcessEnvironment*,QProcessEnvironment)\0"
    "operator_assign(QProcessEnvironment*,QProcessEnvironment)\0"
    "__eq__(QProcessEnvironment*,QProcessEnvironment)\0"
    "remove(QProcessEnvironment*,QString)\0"
    "QProcessEnvironment\0"
    "static_QProcessEnvironment_systemEnvironment()\0"
    "toStringList(QProcessEnvironment*)\0"
    "QString\0theWrappedObject,name,defaultValue\0"
    "value(QProcessEnvironment*,QString,QString)\0"
    "value(QProcessEnvironment*,QString)\0"
};

void PythonQtWrapper_QProcessEnvironment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QProcessEnvironment *_t = static_cast<PythonQtWrapper_QProcessEnvironment *>(_o);
        switch (_id) {
        case 0: { QProcessEnvironment* _r = _t->new_QProcessEnvironment();
            if (_a[0]) *reinterpret_cast< QProcessEnvironment**>(_a[0]) = _r; }  break;
        case 1: { QProcessEnvironment* _r = _t->new_QProcessEnvironment((*reinterpret_cast< const QProcessEnvironment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcessEnvironment**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QProcessEnvironment((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1]))); break;
        case 3: _t->clear((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->contains((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->insert((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QProcessEnvironment(*)>(_a[2]))); break;
        case 6: _t->insert((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: { bool _r = _t->isEmpty((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QStringList _r = _t->keys((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__ne__((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QProcessEnvironment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QProcessEnvironment* _r = _t->operator_assign((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QProcessEnvironment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QProcessEnvironment**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__eq__((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QProcessEnvironment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->remove((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: { QProcessEnvironment _r = _t->static_QProcessEnvironment_systemEnvironment();
            if (_a[0]) *reinterpret_cast< QProcessEnvironment*>(_a[0]) = _r; }  break;
        case 14: { QStringList _r = _t->toStringList((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->value((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->value((*reinterpret_cast< QProcessEnvironment*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QProcessEnvironment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QProcessEnvironment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QProcessEnvironment,
      qt_meta_data_PythonQtWrapper_QProcessEnvironment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QProcessEnvironment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QProcessEnvironment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QProcessEnvironment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QProcessEnvironment))
        return static_cast<void*>(const_cast< PythonQtWrapper_QProcessEnvironment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QProcessEnvironment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPropertyAnimation[] = {

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
      63,   56,   36,   35, 0x0a,
      96,   35,   36,   35, 0x2a,
     148,  121,   36,   35, 0x0a,
     221,  201,   36,   35, 0x2a,
     269,  265,   35,   35, 0x0a,
     344,  321,  316,   35, 0x0a,
     407,  390,  379,   35, 0x0a,
     471,  441,   35,   35, 0x0a,
     543,  519,   35,   35, 0x0a,
     598,  390,  589,   35, 0x0a,
     655,  632,   35,   35, 0x0a,
     739,  704,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPropertyAnimation[] = {
    "PythonQtWrapper_QPropertyAnimation\0\0"
    "QPropertyAnimation*\0parent\0"
    "new_QPropertyAnimation(QObject*)\0"
    "new_QPropertyAnimation()\0"
    "target,propertyName,parent\0"
    "new_QPropertyAnimation(QObject*,QByteArray,QObject*)\0"
    "target,propertyName\0"
    "new_QPropertyAnimation(QObject*,QByteArray)\0"
    "obj\0delete_QPropertyAnimation(QPropertyAnimation*)\0"
    "bool\0theWrappedObject,event\0"
    "event(QPropertyAnimation*,QEvent*)\0"
    "QByteArray\0theWrappedObject\0"
    "propertyName(QPropertyAnimation*)\0"
    "theWrappedObject,propertyName\0"
    "setPropertyName(QPropertyAnimation*,QByteArray)\0"
    "theWrappedObject,target\0"
    "setTargetObject(QPropertyAnimation*,QObject*)\0"
    "QObject*\0targetObject(QPropertyAnimation*)\0"
    "theWrappedObject,value\0"
    "updateCurrentValue(QPropertyAnimation*,QVariant)\0"
    "theWrappedObject,newState,oldState\0"
    "updateState(QPropertyAnimation*,QAbstractAnimation::State,QAbstractAni"
    "mation::State)\0"
};

void PythonQtWrapper_QPropertyAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPropertyAnimation *_t = static_cast<PythonQtWrapper_QPropertyAnimation *>(_o);
        switch (_id) {
        case 0: { QPropertyAnimation* _r = _t->new_QPropertyAnimation((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPropertyAnimation**>(_a[0]) = _r; }  break;
        case 1: { QPropertyAnimation* _r = _t->new_QPropertyAnimation();
            if (_a[0]) *reinterpret_cast< QPropertyAnimation**>(_a[0]) = _r; }  break;
        case 2: { QPropertyAnimation* _r = _t->new_QPropertyAnimation((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPropertyAnimation**>(_a[0]) = _r; }  break;
        case 3: { QPropertyAnimation* _r = _t->new_QPropertyAnimation((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPropertyAnimation**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QPropertyAnimation((*reinterpret_cast< QPropertyAnimation*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QPropertyAnimation*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QByteArray _r = _t->propertyName((*reinterpret_cast< QPropertyAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 7: _t->setPropertyName((*reinterpret_cast< QPropertyAnimation*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 8: _t->setTargetObject((*reinterpret_cast< QPropertyAnimation*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 9: { QObject* _r = _t->targetObject((*reinterpret_cast< QPropertyAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 10: _t->updateCurrentValue((*reinterpret_cast< QPropertyAnimation*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 11: _t->updateState((*reinterpret_cast< QPropertyAnimation*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPropertyAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPropertyAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPropertyAnimation,
      qt_meta_data_PythonQtWrapper_QPropertyAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPropertyAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPropertyAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPropertyAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPropertyAnimation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPropertyAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPropertyAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QReadWriteLock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   31,   32,   31, 0x0a,
      83,   69,   32,   31, 0x0a,
     137,  133,   31,   31, 0x0a,
     193,  176,   31,   31, 0x0a,
     222,  176,   31,   31, 0x0a,
     257,  176,  252,   31, 0x0a,
     314,  289,  252,   31, 0x0a,
     350,  176,  252,   31, 0x0a,
     383,  289,  252,   31, 0x0a,
     420,  176,   31,   31, 0x0a,

 // enums: name, flags, count, data
     444, 0x0,    2,   68,

 // enum data: key, value
     458, uint(PythonQtWrapper_QReadWriteLock::NonRecursive),
     471, uint(PythonQtWrapper_QReadWriteLock::Recursive),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QReadWriteLock[] = {
    "PythonQtWrapper_QReadWriteLock\0\0"
    "QReadWriteLock*\0new_QReadWriteLock()\0"
    "recursionMode\0"
    "new_QReadWriteLock(QReadWriteLock::RecursionMode)\0"
    "obj\0delete_QReadWriteLock(QReadWriteLock*)\0"
    "theWrappedObject\0lockForRead(QReadWriteLock*)\0"
    "lockForWrite(QReadWriteLock*)\0bool\0"
    "tryLockForRead(QReadWriteLock*)\0"
    "theWrappedObject,timeout\0"
    "tryLockForRead(QReadWriteLock*,int)\0"
    "tryLockForWrite(QReadWriteLock*)\0"
    "tryLockForWrite(QReadWriteLock*,int)\0"
    "unlock(QReadWriteLock*)\0RecursionMode\0"
    "NonRecursive\0Recursive\0"
};

void PythonQtWrapper_QReadWriteLock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QReadWriteLock *_t = static_cast<PythonQtWrapper_QReadWriteLock *>(_o);
        switch (_id) {
        case 0: { QReadWriteLock* _r = _t->new_QReadWriteLock();
            if (_a[0]) *reinterpret_cast< QReadWriteLock**>(_a[0]) = _r; }  break;
        case 1: { QReadWriteLock* _r = _t->new_QReadWriteLock((*reinterpret_cast< QReadWriteLock::RecursionMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QReadWriteLock**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QReadWriteLock((*reinterpret_cast< QReadWriteLock*(*)>(_a[1]))); break;
        case 3: _t->lockForRead((*reinterpret_cast< QReadWriteLock*(*)>(_a[1]))); break;
        case 4: _t->lockForWrite((*reinterpret_cast< QReadWriteLock*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->tryLockForRead((*reinterpret_cast< QReadWriteLock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->tryLockForRead((*reinterpret_cast< QReadWriteLock*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->tryLockForWrite((*reinterpret_cast< QReadWriteLock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->tryLockForWrite((*reinterpret_cast< QReadWriteLock*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->unlock((*reinterpret_cast< QReadWriteLock*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QReadWriteLock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QReadWriteLock::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QReadWriteLock,
      qt_meta_data_PythonQtWrapper_QReadWriteLock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QReadWriteLock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QReadWriteLock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QReadWriteLock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QReadWriteLock))
        return static_cast<void*>(const_cast< PythonQtWrapper_QReadWriteLock*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QReadWriteLock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QResource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   38,   27,   26, 0x0a,
      86,   81,   27,   26, 0x2a,
     109,   26,   27,   26, 0x2a,
     129,  125,   26,   26, 0x0a,
     183,  166,  158,   26, 0x0a,
     217,  212,   26,   26, 0x0a,
     270,  166,  257,   26, 0x0a,
     287,  166,  158,   26, 0x0a,
     313,  166,  308,   26, 0x0a,
     338,  166,  308,   26, 0x0a,
     366,  166,  358,   26, 0x0a,
     410,  385,  308,   26, 0x0a,
     473,  461,  308,   26, 0x2a,
     537,  516,  308,   26, 0x0a,
     601,  593,  308,   26, 0x2a,
     661,   26,  649,   26, 0x0a,
     714,  692,   26,   26, 0x0a,
     770,  746,   26,   26, 0x0a,
     807,  166,  800,   26, 0x0a,
     824,  385,  308,   26, 0x0a,
     877,  461,  308,   26, 0x2a,
     922,  516,  308,   26, 0x0a,
     980,  593,  308,   26, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QResource[] = {
    "PythonQtWrapper_QResource\0\0QResource*\0"
    "file,locale\0new_QResource(QString,QLocale)\0"
    "file\0new_QResource(QString)\0new_QResource()\0"
    "obj\0delete_QResource(QResource*)\0"
    "QString\0theWrappedObject\0"
    "absoluteFilePath(QResource*)\0path\0"
    "static_QResource_addSearchPath(QString)\0"
    "const uchar*\0data(QResource*)\0"
    "fileName(QResource*)\0bool\0"
    "isCompressed(QResource*)\0isValid(QResource*)\0"
    "QLocale\0locale(QResource*)\0"
    "rccFilename,resourceRoot\0"
    "static_QResource_registerResource(QString,QString)\0"
    "rccFilename\0static_QResource_registerResource(QString)\0"
    "rccData,resourceRoot\0"
    "static_QResource_registerResource(const uchar*,QString)\0"
    "rccData\0static_QResource_registerResource(const uchar*)\0"
    "QStringList\0static_QResource_searchPaths()\0"
    "theWrappedObject,file\0"
    "setFileName(QResource*,QString)\0"
    "theWrappedObject,locale\0"
    "setLocale(QResource*,QLocale)\0qint64\0"
    "size(QResource*)\0"
    "static_QResource_unregisterResource(QString,QString)\0"
    "static_QResource_unregisterResource(QString)\0"
    "static_QResource_unregisterResource(const uchar*,QString)\0"
    "static_QResource_unregisterResource(const uchar*)\0"
};

void PythonQtWrapper_QResource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QResource *_t = static_cast<PythonQtWrapper_QResource *>(_o);
        switch (_id) {
        case 0: { QResource* _r = _t->new_QResource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QResource**>(_a[0]) = _r; }  break;
        case 1: { QResource* _r = _t->new_QResource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QResource**>(_a[0]) = _r; }  break;
        case 2: { QResource* _r = _t->new_QResource();
            if (_a[0]) *reinterpret_cast< QResource**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QResource((*reinterpret_cast< QResource*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->absoluteFilePath((*reinterpret_cast< QResource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->static_QResource_addSearchPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: { const uchar* _r = _t->data((*reinterpret_cast< QResource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const uchar**>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->fileName((*reinterpret_cast< QResource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isCompressed((*reinterpret_cast< QResource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isValid((*reinterpret_cast< QResource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QLocale _r = _t->locale((*reinterpret_cast< QResource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocale*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->static_QResource_registerResource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->static_QResource_registerResource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->static_QResource_registerResource((*reinterpret_cast< const uchar*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->static_QResource_registerResource((*reinterpret_cast< const uchar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QStringList _r = _t->static_QResource_searchPaths();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 16: _t->setFileName((*reinterpret_cast< QResource*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setLocale((*reinterpret_cast< QResource*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2]))); break;
        case 18: { qint64 _r = _t->size((*reinterpret_cast< QResource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->static_QResource_unregisterResource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->static_QResource_unregisterResource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->static_QResource_unregisterResource((*reinterpret_cast< const uchar*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->static_QResource_unregisterResource((*reinterpret_cast< const uchar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QResource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QResource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QResource,
      qt_meta_data_PythonQtWrapper_QResource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QResource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QResource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QResource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QResource))
        return static_cast<void*>(const_cast< PythonQtWrapper_QResource*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QResource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QRunnable[] = {

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
      38,   26,   27,   26, 0x0a,
      58,   54,   26,   26, 0x0a,
     109,   92,   87,   26, 0x0a,
     161,  132,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QRunnable[] = {
    "PythonQtWrapper_QRunnable\0\0QRunnable*\0"
    "new_QRunnable()\0obj\0delete_QRunnable(QRunnable*)\0"
    "bool\0theWrappedObject\0autoDelete(QRunnable*)\0"
    "theWrappedObject,_autoDelete\0"
    "setAutoDelete(QRunnable*,bool)\0"
};

void PythonQtWrapper_QRunnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QRunnable *_t = static_cast<PythonQtWrapper_QRunnable *>(_o);
        switch (_id) {
        case 0: { QRunnable* _r = _t->new_QRunnable();
            if (_a[0]) *reinterpret_cast< QRunnable**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QRunnable((*reinterpret_cast< QRunnable*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->autoDelete((*reinterpret_cast< QRunnable*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->setAutoDelete((*reinterpret_cast< QRunnable*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QRunnable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QRunnable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRunnable,
      qt_meta_data_PythonQtWrapper_QRunnable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QRunnable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QRunnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QRunnable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRunnable))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRunnable*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRunnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSemaphore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   40,   28,   27, 0x0a,
      62,   27,   28,   27, 0x2a,
      83,   79,   27,   27, 0x0a,
     133,  114,   27,   27, 0x0a,
     175,  158,   27,   27, 0x2a,
     200,  158,  196,   27, 0x0a,
     223,  114,   27,   27, 0x0a,
     248,  158,   27,   27, 0x2a,
     274,  114,  269,   27, 0x0a,
     302,  158,  269,   27, 0x2a,
     353,  326,  269,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSemaphore[] = {
    "PythonQtWrapper_QSemaphore\0\0QSemaphore*\0"
    "n\0new_QSemaphore(int)\0new_QSemaphore()\0"
    "obj\0delete_QSemaphore(QSemaphore*)\0"
    "theWrappedObject,n\0acquire(QSemaphore*,int)\0"
    "theWrappedObject\0acquire(QSemaphore*)\0"
    "int\0available(QSemaphore*)\0"
    "release(QSemaphore*,int)\0release(QSemaphore*)\0"
    "bool\0tryAcquire(QSemaphore*,int)\0"
    "tryAcquire(QSemaphore*)\0"
    "theWrappedObject,n,timeout\0"
    "tryAcquire(QSemaphore*,int,int)\0"
};

void PythonQtWrapper_QSemaphore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSemaphore *_t = static_cast<PythonQtWrapper_QSemaphore *>(_o);
        switch (_id) {
        case 0: { QSemaphore* _r = _t->new_QSemaphore((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSemaphore**>(_a[0]) = _r; }  break;
        case 1: { QSemaphore* _r = _t->new_QSemaphore();
            if (_a[0]) *reinterpret_cast< QSemaphore**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSemaphore((*reinterpret_cast< QSemaphore*(*)>(_a[1]))); break;
        case 3: _t->acquire((*reinterpret_cast< QSemaphore*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->acquire((*reinterpret_cast< QSemaphore*(*)>(_a[1]))); break;
        case 5: { int _r = _t->available((*reinterpret_cast< QSemaphore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->release((*reinterpret_cast< QSemaphore*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->release((*reinterpret_cast< QSemaphore*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->tryAcquire((*reinterpret_cast< QSemaphore*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->tryAcquire((*reinterpret_cast< QSemaphore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->tryAcquire((*reinterpret_cast< QSemaphore*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSemaphore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSemaphore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSemaphore,
      qt_meta_data_PythonQtWrapper_QSemaphore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSemaphore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSemaphore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSemaphore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSemaphore))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSemaphore*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSemaphore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSequentialAnimationGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      77,   70,   43,   42, 0x0a,
     117,   42,   43,   42, 0x2a,
     153,  149,   42,   42, 0x0a,
     254,  231,  214,   42, 0x0a,
     332,  315,  295,   42, 0x0a,
     381,  315,  377,   42, 0x0a,
     446,  423,  418,   42, 0x0a,
     517,  488,  214,   42, 0x0a,
     589,  565,   42,   42, 0x0a,
     666,  639,   42,   42, 0x0a,
     775,  740,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSequentialAnimationGroup[] = {
    "PythonQtWrapper_QSequentialAnimationGroup\0"
    "\0QSequentialAnimationGroup*\0parent\0"
    "new_QSequentialAnimationGroup(QObject*)\0"
    "new_QSequentialAnimationGroup()\0obj\0"
    "delete_QSequentialAnimationGroup(QSequentialAnimationGroup*)\0"
    "QPauseAnimation*\0theWrappedObject,msecs\0"
    "addPause(QSequentialAnimationGroup*,int)\0"
    "QAbstractAnimation*\0theWrappedObject\0"
    "currentAnimation(QSequentialAnimationGroup*)\0"
    "int\0duration(QSequentialAnimationGroup*)\0"
    "bool\0theWrappedObject,event\0"
    "event(QSequentialAnimationGroup*,QEvent*)\0"
    "theWrappedObject,index,msecs\0"
    "insertPause(QSequentialAnimationGroup*,int,int)\0"
    "theWrappedObject,arg__1\0"
    "updateCurrentTime(QSequentialAnimationGroup*,int)\0"
    "theWrappedObject,direction\0"
    "updateDirection(QSequentialAnimationGroup*,QAbstractAnimation::Directi"
    "on)\0"
    "theWrappedObject,newState,oldState\0"
    "updateState(QSequentialAnimationGroup*,QAbstractAnimation::State,QAbst"
    "ractAnimation::State)\0"
};

void PythonQtWrapper_QSequentialAnimationGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSequentialAnimationGroup *_t = static_cast<PythonQtWrapper_QSequentialAnimationGroup *>(_o);
        switch (_id) {
        case 0: { QSequentialAnimationGroup* _r = _t->new_QSequentialAnimationGroup((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSequentialAnimationGroup**>(_a[0]) = _r; }  break;
        case 1: { QSequentialAnimationGroup* _r = _t->new_QSequentialAnimationGroup();
            if (_a[0]) *reinterpret_cast< QSequentialAnimationGroup**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSequentialAnimationGroup((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1]))); break;
        case 3: { QPauseAnimation* _r = _t->addPause((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPauseAnimation**>(_a[0]) = _r; }  break;
        case 4: { QAbstractAnimation* _r = _t->currentAnimation((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractAnimation**>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->duration((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QPauseAnimation* _r = _t->insertPause((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPauseAnimation**>(_a[0]) = _r; }  break;
        case 8: _t->updateCurrentTime((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateDirection((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::Direction(*)>(_a[2]))); break;
        case 10: _t->updateState((*reinterpret_cast< QSequentialAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSequentialAnimationGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSequentialAnimationGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSequentialAnimationGroup,
      qt_meta_data_PythonQtWrapper_QSequentialAnimationGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSequentialAnimationGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSequentialAnimationGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSequentialAnimationGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSequentialAnimationGroup))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSequentialAnimationGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSequentialAnimationGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       3,  254, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   27,   26, 0x0a,
      69,   26,   27,   26, 0x2a,
     130,   85,   27,   26, 0x0a,
     243,  205,   27,   26, 0x2a,
     335,  309,   27,   26, 0x2a,
     431,  393,   27,   26, 0x0a,
     519,  488,   27,   26, 0x2a,
     586,  567,   27,   26, 0x2a,
     649,  626,   27,   26, 0x0a,
     715,  699,   27,   26, 0x2a,
     788,  756,   27,   26, 0x0a,
     853,  828,   27,   26, 0x2a,
     897,  884,   27,   26, 0x2a,
     924,  920,   26,   26, 0x0a,
     982,  965,  953,   26, 0x0a,
    1010,  965, 1002,   26, 0x0a,
    1062, 1038,   26,   26, 0x0a,
    1097, 1038, 1093,   26, 0x0a,
    1161, 1132,   26,   26, 0x0a,
    1201, 1038,   26,   26, 0x2a,
    1237,  965,  953,   26, 0x0a,
    1261,  965,  953,   26, 0x0a,
    1283,  965,   26,   26, 0x0a,
    1327, 1306, 1301,   26, 0x0a,
    1374,   26, 1356,   26, 0x0a,
    1407,  965,   26,   26, 0x0a,
    1428,  965,   26,   26, 0x0a,
    1472, 1449, 1301,   26, 0x0a,
    1498,  965, 1301,   26, 0x0a,
    1527,  965, 1002,   26, 0x0a,
    1548,  965, 1356,   26, 0x0a,
    1567,  965, 1002,   26, 0x0a,
    1597,  965, 1585,   26, 0x0a,
    1618,  965, 1301,   26, 0x0a,
    1641,  965, 1002,   26, 0x0a,
    1670, 1306,   26,   26, 0x0a,
    1714,  965, 1697,   26, 0x0a,
    1751, 1732,   26,   26, 0x0a,
    1788, 1781,   26,   26, 0x0a,
    1860, 1841,   26,   26, 0x0a,
    1920, 1897,   26,   26, 0x0a,
    1983, 1956,   26,   26, 0x0a,
    2037, 2019,   26,   26, 0x0a,
    2133, 2106,   26,   26, 0x0a,
    2189,  965, 2171,   26, 0x0a,
    2208,  965,   26,   26, 0x0a,
    2268, 2234, 2225,   26, 0x0a,
    2303, 1306, 2225,   26, 0x2a,

 // enums: name, flags, count, data
    2329, 0x0,   19,  266,
    2336, 0x0,    3,  304,
    2343, 0x0,    2,  310,

 // enum data: key, value
    2349, uint(PythonQtWrapper_QSettings::NativeFormat),
    2362, uint(PythonQtWrapper_QSettings::IniFormat),
    2372, uint(PythonQtWrapper_QSettings::InvalidFormat),
    2386, uint(PythonQtWrapper_QSettings::CustomFormat1),
    2400, uint(PythonQtWrapper_QSettings::CustomFormat2),
    2414, uint(PythonQtWrapper_QSettings::CustomFormat3),
    2428, uint(PythonQtWrapper_QSettings::CustomFormat4),
    2442, uint(PythonQtWrapper_QSettings::CustomFormat5),
    2456, uint(PythonQtWrapper_QSettings::CustomFormat6),
    2470, uint(PythonQtWrapper_QSettings::CustomFormat7),
    2484, uint(PythonQtWrapper_QSettings::CustomFormat8),
    2498, uint(PythonQtWrapper_QSettings::CustomFormat9),
    2512, uint(PythonQtWrapper_QSettings::CustomFormat10),
    2527, uint(PythonQtWrapper_QSettings::CustomFormat11),
    2542, uint(PythonQtWrapper_QSettings::CustomFormat12),
    2557, uint(PythonQtWrapper_QSettings::CustomFormat13),
    2572, uint(PythonQtWrapper_QSettings::CustomFormat14),
    2587, uint(PythonQtWrapper_QSettings::CustomFormat15),
    2602, uint(PythonQtWrapper_QSettings::CustomFormat16),
    2617, uint(PythonQtWrapper_QSettings::NoError),
    2625, uint(PythonQtWrapper_QSettings::AccessError),
    2637, uint(PythonQtWrapper_QSettings::FormatError),
    2649, uint(PythonQtWrapper_QSettings::UserScope),
    2659, uint(PythonQtWrapper_QSettings::SystemScope),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSettings[] = {
    "PythonQtWrapper_QSettings\0\0QSettings*\0"
    "parent\0new_QSettings(QObject*)\0"
    "new_QSettings()\0"
    "format,scope,organization,application,parent\0"
    "new_QSettings(QSettings::Format,QSettings::Scope,QString,QString,QObje"
    "ct*)\0"
    "format,scope,organization,application\0"
    "new_QSettings(QSettings::Format,QSettings::Scope,QString,QString)\0"
    "format,scope,organization\0"
    "new_QSettings(QSettings::Format,QSettings::Scope,QString)\0"
    "scope,organization,application,parent\0"
    "new_QSettings(QSettings::Scope,QString,QString,QObject*)\0"
    "scope,organization,application\0"
    "new_QSettings(QSettings::Scope,QString,QString)\0"
    "scope,organization\0"
    "new_QSettings(QSettings::Scope,QString)\0"
    "fileName,format,parent\0"
    "new_QSettings(QString,QSettings::Format,QObject*)\0"
    "fileName,format\0"
    "new_QSettings(QString,QSettings::Format)\0"
    "organization,application,parent\0"
    "new_QSettings(QString,QString,QObject*)\0"
    "organization,application\0"
    "new_QSettings(QString,QString)\0"
    "organization\0new_QSettings(QString)\0"
    "obj\0delete_QSettings(QSettings*)\0"
    "QStringList\0theWrappedObject\0"
    "allKeys(QSettings*)\0QString\0"
    "applicationName(QSettings*)\0"
    "theWrappedObject,prefix\0"
    "beginGroup(QSettings*,QString)\0int\0"
    "beginReadArray(QSettings*,QString)\0"
    "theWrappedObject,prefix,size\0"
    "beginWriteArray(QSettings*,QString,int)\0"
    "beginWriteArray(QSettings*,QString)\0"
    "childGroups(QSettings*)\0childKeys(QSettings*)\0"
    "clear(QSettings*)\0bool\0theWrappedObject,key\0"
    "contains(QSettings*,QString)\0"
    "QSettings::Format\0static_QSettings_defaultFormat()\0"
    "endArray(QSettings*)\0endGroup(QSettings*)\0"
    "theWrappedObject,event\0event(QSettings*,QEvent*)\0"
    "fallbacksEnabled(QSettings*)\0"
    "fileName(QSettings*)\0format(QSettings*)\0"
    "group(QSettings*)\0QTextCodec*\0"
    "iniCodec(QSettings*)\0isWritable(QSettings*)\0"
    "organizationName(QSettings*)\0"
    "remove(QSettings*,QString)\0QSettings::Scope\0"
    "scope(QSettings*)\0theWrappedObject,i\0"
    "setArrayIndex(QSettings*,int)\0format\0"
    "static_QSettings_setDefaultFormat(QSettings::Format)\0"
    "theWrappedObject,b\0"
    "setFallbacksEnabled(QSettings*,bool)\0"
    "theWrappedObject,codec\0"
    "setIniCodec(QSettings*,QTextCodec*)\0"
    "theWrappedObject,codecName\0"
    "setIniCodec(QSettings*,const char*)\0"
    "format,scope,path\0"
    "static_QSettings_setPath(QSettings::Format,QSettings::Scope,QString)\0"
    "theWrappedObject,key,value\0"
    "setValue(QSettings*,QString,QVariant)\0"
    "QSettings::Status\0status(QSettings*)\0"
    "sync(QSettings*)\0QVariant\0"
    "theWrappedObject,key,defaultValue\0"
    "value(QSettings*,QString,QVariant)\0"
    "value(QSettings*,QString)\0Format\0"
    "Status\0Scope\0NativeFormat\0IniFormat\0"
    "InvalidFormat\0CustomFormat1\0CustomFormat2\0"
    "CustomFormat3\0CustomFormat4\0CustomFormat5\0"
    "CustomFormat6\0CustomFormat7\0CustomFormat8\0"
    "CustomFormat9\0CustomFormat10\0"
    "CustomFormat11\0CustomFormat12\0"
    "CustomFormat13\0CustomFormat14\0"
    "CustomFormat15\0CustomFormat16\0NoError\0"
    "AccessError\0FormatError\0UserScope\0"
    "SystemScope\0"
};

void PythonQtWrapper_QSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSettings *_t = static_cast<PythonQtWrapper_QSettings *>(_o);
        switch (_id) {
        case 0: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 1: { QSettings* _r = _t->new_QSettings();
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 2: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< QSettings::Format(*)>(_a[1])),(*reinterpret_cast< QSettings::Scope(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QObject*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 3: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< QSettings::Format(*)>(_a[1])),(*reinterpret_cast< QSettings::Scope(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 4: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< QSettings::Format(*)>(_a[1])),(*reinterpret_cast< QSettings::Scope(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 5: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< QSettings::Scope(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 6: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< QSettings::Scope(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 7: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< QSettings::Scope(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 8: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSettings::Format(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 9: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSettings::Format(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 10: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 11: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 12: { QSettings* _r = _t->new_QSettings((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 13: _t->delete_QSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 14: { QStringList _r = _t->allKeys((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->applicationName((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: _t->beginGroup((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: { int _r = _t->beginReadArray((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: _t->beginWriteArray((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->beginWriteArray((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: { QStringList _r = _t->childGroups((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 21: { QStringList _r = _t->childKeys((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 22: _t->clear((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 23: { bool _r = _t->contains((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { QSettings::Format _r = _t->static_QSettings_defaultFormat();
            if (_a[0]) *reinterpret_cast< QSettings::Format*>(_a[0]) = _r; }  break;
        case 25: _t->endArray((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 26: _t->endGroup((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 27: { bool _r = _t->event((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->fallbacksEnabled((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { QString _r = _t->fileName((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 30: { QSettings::Format _r = _t->format((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSettings::Format*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->group((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { QTextCodec* _r = _t->iniCodec((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->isWritable((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { QString _r = _t->organizationName((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 35: _t->remove((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: { QSettings::Scope _r = _t->scope((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSettings::Scope*>(_a[0]) = _r; }  break;
        case 37: _t->setArrayIndex((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 38: _t->static_QSettings_setDefaultFormat((*reinterpret_cast< QSettings::Format(*)>(_a[1]))); break;
        case 39: _t->setFallbacksEnabled((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->setIniCodec((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< QTextCodec*(*)>(_a[2]))); break;
        case 41: _t->setIniCodec((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 42: _t->static_QSettings_setPath((*reinterpret_cast< QSettings::Format(*)>(_a[1])),(*reinterpret_cast< QSettings::Scope(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 43: _t->setValue((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 44: { QSettings::Status _r = _t->status((*reinterpret_cast< QSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSettings::Status*>(_a[0]) = _r; }  break;
        case 45: _t->sync((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 46: { QVariant _r = _t->value((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 47: { QVariant _r = _t->value((*reinterpret_cast< QSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSettings,
      qt_meta_data_PythonQtWrapper_QSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSettings))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSharedMemory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       2,  124, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     112,  101,   31,   30, 0x0a,
     152,  148,   31,   30, 0x2a,
     183,  179,   30,   30, 0x0a,
     247,  225,  220,   30, 0x0a,
     313,  296,  220,   30, 0x2a,
     348,  296,  336,   30, 0x0a,
     401,  374,  220,   30, 0x0a,
     476,  454,  220,   30, 0x2a,
     509,  296,  503,   30, 0x0a,
     509,  296,  336,   30, 0x0a,
     563,  296,  530,   30, 0x0a,
     593,  296,  585,   30, 0x0a,
     621,  296,  220,   30, 0x0a,
     648,  296,  585,   30, 0x0a,
     668,  296,  220,   30, 0x0a,
     689,  296,  585,   30, 0x0a,
     736,  715,   30,   30, 0x0a,
     767,  715,   30,   30, 0x0a,
     808,  296,  804,   30, 0x0a,
     829,  296,  220,   30, 0x0a,

 // enums: name, flags, count, data
     852, 0x0,    9,  132,
     870, 0x0,    2,  150,

 // enum data: key, value
     881, uint(PythonQtWrapper_QSharedMemory::NoError),
     889, uint(PythonQtWrapper_QSharedMemory::PermissionDenied),
     906, uint(PythonQtWrapper_QSharedMemory::InvalidSize),
     918, uint(PythonQtWrapper_QSharedMemory::KeyError),
     927, uint(PythonQtWrapper_QSharedMemory::AlreadyExists),
     941, uint(PythonQtWrapper_QSharedMemory::NotFound),
     950, uint(PythonQtWrapper_QSharedMemory::LockError),
     960, uint(PythonQtWrapper_QSharedMemory::OutOfResources),
     975, uint(PythonQtWrapper_QSharedMemory::UnknownError),
     988, uint(PythonQtWrapper_QSharedMemory::ReadOnly),
     997, uint(PythonQtWrapper_QSharedMemory::ReadWrite),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSharedMemory[] = {
    "PythonQtWrapper_QSharedMemory\0\0"
    "QSharedMemory*\0parent\0new_QSharedMemory(QObject*)\0"
    "new_QSharedMemory()\0key,parent\0"
    "new_QSharedMemory(QString,QObject*)\0"
    "key\0new_QSharedMemory(QString)\0obj\0"
    "delete_QSharedMemory(QSharedMemory*)\0"
    "bool\0theWrappedObject,mode\0"
    "attach(QSharedMemory*,QSharedMemory::AccessMode)\0"
    "theWrappedObject\0attach(QSharedMemory*)\0"
    "const void*\0constData(QSharedMemory*)\0"
    "theWrappedObject,size,mode\0"
    "create(QSharedMemory*,int,QSharedMemory::AccessMode)\0"
    "theWrappedObject,size\0create(QSharedMemory*,int)\0"
    "void*\0data(QSharedMemory*)\0"
    "QSharedMemory::SharedMemoryError\0"
    "error(QSharedMemory*)\0QString\0"
    "errorString(QSharedMemory*)\0"
    "isAttached(QSharedMemory*)\0"
    "key(QSharedMemory*)\0lock(QSharedMemory*)\0"
    "nativeKey(QSharedMemory*)\0"
    "theWrappedObject,key\0"
    "setKey(QSharedMemory*,QString)\0"
    "setNativeKey(QSharedMemory*,QString)\0"
    "int\0size(QSharedMemory*)\0"
    "unlock(QSharedMemory*)\0SharedMemoryError\0"
    "AccessMode\0NoError\0PermissionDenied\0"
    "InvalidSize\0KeyError\0AlreadyExists\0"
    "NotFound\0LockError\0OutOfResources\0"
    "UnknownError\0ReadOnly\0ReadWrite\0"
};

void PythonQtWrapper_QSharedMemory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSharedMemory *_t = static_cast<PythonQtWrapper_QSharedMemory *>(_o);
        switch (_id) {
        case 0: { QSharedMemory* _r = _t->new_QSharedMemory((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSharedMemory**>(_a[0]) = _r; }  break;
        case 1: { QSharedMemory* _r = _t->new_QSharedMemory();
            if (_a[0]) *reinterpret_cast< QSharedMemory**>(_a[0]) = _r; }  break;
        case 2: { QSharedMemory* _r = _t->new_QSharedMemory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSharedMemory**>(_a[0]) = _r; }  break;
        case 3: { QSharedMemory* _r = _t->new_QSharedMemory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSharedMemory**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSharedMemory((*reinterpret_cast< QSharedMemory*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->attach((*reinterpret_cast< QSharedMemory*(*)>(_a[1])),(*reinterpret_cast< QSharedMemory::AccessMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->attach((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { const void* _r = _t->constData((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const void**>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->create((*reinterpret_cast< QSharedMemory*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QSharedMemory::AccessMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->create((*reinterpret_cast< QSharedMemory*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { void* _r = _t->data((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 11: { const void* _r = _t->data((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const void**>(_a[0]) = _r; }  break;
        case 12: { QSharedMemory::SharedMemoryError _r = _t->error((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSharedMemory::SharedMemoryError*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->errorString((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isAttached((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->key((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->lock((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->nativeKey((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: _t->setKey((*reinterpret_cast< QSharedMemory*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->setNativeKey((*reinterpret_cast< QSharedMemory*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: { int _r = _t->size((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->unlock((*reinterpret_cast< QSharedMemory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSharedMemory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSharedMemory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSharedMemory,
      qt_meta_data_PythonQtWrapper_QSharedMemory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSharedMemory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSharedMemory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSharedMemory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSharedMemory))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSharedMemory*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSharedMemory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSignalMapper[] = {

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
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     175,  151,  142,   30, 0x0a,
     230,  208,  142,   30, 0x0a,
     282,  262,  142,   30, 0x0a,
     334,  310,   30,   30, 0x0a,
     405,  374,   30,   30, 0x0a,
     479,  450,   30,   30, 0x0a,
     550,  523,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSignalMapper[] = {
    "PythonQtWrapper_QSignalMapper\0\0"
    "QSignalMapper*\0parent\0new_QSignalMapper(QObject*)\0"
    "new_QSignalMapper()\0obj\0"
    "delete_QSignalMapper(QSignalMapper*)\0"
    "QObject*\0theWrappedObject,object\0"
    "mapping(QSignalMapper*,QObject*)\0"
    "theWrappedObject,text\0"
    "mapping(QSignalMapper*,QString)\0"
    "theWrappedObject,id\0mapping(QSignalMapper*,int)\0"
    "theWrappedObject,sender\0"
    "removeMappings(QSignalMapper*,QObject*)\0"
    "theWrappedObject,sender,object\0"
    "setMapping(QSignalMapper*,QObject*,QObject*)\0"
    "theWrappedObject,sender,text\0"
    "setMapping(QSignalMapper*,QObject*,QString)\0"
    "theWrappedObject,sender,id\0"
    "setMapping(QSignalMapper*,QObject*,int)\0"
};

void PythonQtWrapper_QSignalMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSignalMapper *_t = static_cast<PythonQtWrapper_QSignalMapper *>(_o);
        switch (_id) {
        case 0: { QSignalMapper* _r = _t->new_QSignalMapper((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSignalMapper**>(_a[0]) = _r; }  break;
        case 1: { QSignalMapper* _r = _t->new_QSignalMapper();
            if (_a[0]) *reinterpret_cast< QSignalMapper**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSignalMapper((*reinterpret_cast< QSignalMapper*(*)>(_a[1]))); break;
        case 3: { QObject* _r = _t->mapping((*reinterpret_cast< QSignalMapper*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 4: { QObject* _r = _t->mapping((*reinterpret_cast< QSignalMapper*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 5: { QObject* _r = _t->mapping((*reinterpret_cast< QSignalMapper*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 6: _t->removeMappings((*reinterpret_cast< QSignalMapper*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 7: _t->setMapping((*reinterpret_cast< QSignalMapper*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        case 8: _t->setMapping((*reinterpret_cast< QSignalMapper*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->setMapping((*reinterpret_cast< QSignalMapper*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSignalMapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSignalMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSignalMapper,
      qt_meta_data_PythonQtWrapper_QSignalMapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSignalMapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSignalMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSignalMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSignalMapper))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSignalMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSignalMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSignalTransition[] = {

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
      80,   54,   35,   34, 0x0a,
     146,  132,   35,   34, 0x2a,
     202,  190,   35,   34, 0x0a,
     233,   34,   35,   34, 0x2a,
     261,  257,   34,   34, 0x0a,
     330,  311,  306,   34, 0x0a,
     387,  364,  306,   34, 0x0a,
     425,  364,   34,   34, 0x0a,
     492,  475,  466,   34, 0x0a,
     549,  525,   34,   34, 0x0a,
     618,  594,   34,   34, 0x0a,
     670,  475,  659,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSignalTransition[] = {
    "PythonQtWrapper_QSignalTransition\0\0"
    "QSignalTransition*\0sender,signal,sourceState\0"
    "new_QSignalTransition(QObject*,const char*,QState*)\0"
    "sender,signal\0new_QSignalTransition(QObject*,const char*)\0"
    "sourceState\0new_QSignalTransition(QState*)\0"
    "new_QSignalTransition()\0obj\0"
    "delete_QSignalTransition(QSignalTransition*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QSignalTransition*,QEvent*)\0"
    "theWrappedObject,event\0"
    "eventTest(QSignalTransition*,QEvent*)\0"
    "onTransition(QSignalTransition*,QEvent*)\0"
    "QObject*\0theWrappedObject\0"
    "senderObject(QSignalTransition*)\0"
    "theWrappedObject,sender\0"
    "setSenderObject(QSignalTransition*,QObject*)\0"
    "theWrappedObject,signal\0"
    "setSignal(QSignalTransition*,QByteArray)\0"
    "QByteArray\0signal(QSignalTransition*)\0"
};

void PythonQtWrapper_QSignalTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSignalTransition *_t = static_cast<PythonQtWrapper_QSignalTransition *>(_o);
        switch (_id) {
        case 0: { QSignalTransition* _r = _t->new_QSignalTransition((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< QState*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSignalTransition**>(_a[0]) = _r; }  break;
        case 1: { QSignalTransition* _r = _t->new_QSignalTransition((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSignalTransition**>(_a[0]) = _r; }  break;
        case 2: { QSignalTransition* _r = _t->new_QSignalTransition((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSignalTransition**>(_a[0]) = _r; }  break;
        case 3: { QSignalTransition* _r = _t->new_QSignalTransition();
            if (_a[0]) *reinterpret_cast< QSignalTransition**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSignalTransition((*reinterpret_cast< QSignalTransition*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QSignalTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->eventTest((*reinterpret_cast< QSignalTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->onTransition((*reinterpret_cast< QSignalTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 8: { QObject* _r = _t->senderObject((*reinterpret_cast< QSignalTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 9: _t->setSenderObject((*reinterpret_cast< QSignalTransition*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 10: _t->setSignal((*reinterpret_cast< QSignalTransition*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 11: { QByteArray _r = _t->signal((*reinterpret_cast< QSignalTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSignalTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSignalTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSignalTransition,
      qt_meta_data_PythonQtWrapper_QSignalTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSignalTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSignalTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSignalTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSignalTransition))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSignalTransition*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSignalTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSocketNotifier[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      71,   50,   33,   32, 0x0a,
     141,  127,   33,   32, 0x2a,
     192,  188,   32,   32, 0x0a,
     262,  238,  233,   32, 0x0a,
     311,  294,  233,   32, 0x0a,
     343,  294,  339,   32, 0x0a,
     390,  294,  368,   32, 0x0a,

 // enums: name, flags, count, data
     413, 0x0,    3,   53,

 // enum data: key, value
     418, uint(PythonQtWrapper_QSocketNotifier::Read),
     423, uint(PythonQtWrapper_QSocketNotifier::Write),
     429, uint(PythonQtWrapper_QSocketNotifier::Exception),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSocketNotifier[] = {
    "PythonQtWrapper_QSocketNotifier\0\0"
    "QSocketNotifier*\0socket,arg__2,parent\0"
    "new_QSocketNotifier(int,QSocketNotifier::Type,QObject*)\0"
    "socket,arg__2\0"
    "new_QSocketNotifier(int,QSocketNotifier::Type)\0"
    "obj\0delete_QSocketNotifier(QSocketNotifier*)\0"
    "bool\0theWrappedObject,arg__1\0"
    "event(QSocketNotifier*,QEvent*)\0"
    "theWrappedObject\0isEnabled(QSocketNotifier*)\0"
    "int\0socket(QSocketNotifier*)\0"
    "QSocketNotifier::Type\0type(QSocketNotifier*)\0"
    "Type\0Read\0Write\0Exception\0"
};

void PythonQtWrapper_QSocketNotifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSocketNotifier *_t = static_cast<PythonQtWrapper_QSocketNotifier *>(_o);
        switch (_id) {
        case 0: { QSocketNotifier* _r = _t->new_QSocketNotifier((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSocketNotifier::Type(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSocketNotifier**>(_a[0]) = _r; }  break;
        case 1: { QSocketNotifier* _r = _t->new_QSocketNotifier((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSocketNotifier::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSocketNotifier**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSocketNotifier((*reinterpret_cast< QSocketNotifier*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->event((*reinterpret_cast< QSocketNotifier*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isEnabled((*reinterpret_cast< QSocketNotifier*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->socket((*reinterpret_cast< QSocketNotifier*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QSocketNotifier::Type _r = _t->type((*reinterpret_cast< QSocketNotifier*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSocketNotifier::Type*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSocketNotifier::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSocketNotifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSocketNotifier,
      qt_meta_data_PythonQtWrapper_QSocketNotifier, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSocketNotifier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSocketNotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSocketNotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSocketNotifier))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSocketNotifier*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSocketNotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QState[] = {

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
      39,   32,   24,   23, 0x0a,
      59,   23,   24,   23, 0x2a,
      89,   72,   24,   23, 0x0a,
     137,  127,   24,   23, 0x2a,
     171,  167,   23,   23, 0x0a,
     239,  215,  194,   23, 0x0a,
     306,  278,   23,   23, 0x0a,
     407,  369,  350,   23, 0x0a,
     502,  467,   23,   23, 0x0a,
     591,  574,  556,   23, 0x0a,
     626,  574,  610,   23, 0x0a,
     670,  651,  646,   23, 0x0a,
     693,  574,  610,   23, 0x0a,
     738,  715,   23,   23, 0x0a,
     763,  715,   23,   23, 0x0a,
     787,  278,   23,   23, 0x0a,
     856,  834,   23,   23, 0x0a,
     919,  896,   23,   23, 0x0a,
     958,  896,   23,   23, 0x0a,
    1027,  574,  999,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QState[] = {
    "PythonQtWrapper_QState\0\0QState*\0parent\0"
    "new_QState(QState*)\0new_QState()\0"
    "childMode,parent\0new_QState(QState::ChildMode,QState*)\0"
    "childMode\0new_QState(QState::ChildMode)\0"
    "obj\0delete_QState(QState*)\0"
    "QAbstractTransition*\0theWrappedObject,target\0"
    "addTransition(QState*,QAbstractState*)\0"
    "theWrappedObject,transition\0"
    "addTransition(QState*,QAbstractTransition*)\0"
    "QSignalTransition*\0"
    "theWrappedObject,sender,signal,target\0"
    "addTransition(QState*,QObject*,const char*,QAbstractState*)\0"
    "theWrappedObject,object,name,value\0"
    "assignProperty(QState*,QObject*,const char*,QVariant)\0"
    "QState::ChildMode\0theWrappedObject\0"
    "childMode(QState*)\0QAbstractState*\0"
    "errorState(QState*)\0bool\0theWrappedObject,e\0"
    "event(QState*,QEvent*)\0initialState(QState*)\0"
    "theWrappedObject,event\0onEntry(QState*,QEvent*)\0"
    "onExit(QState*,QEvent*)\0"
    "removeTransition(QState*,QAbstractTransition*)\0"
    "theWrappedObject,mode\0"
    "setChildMode(QState*,QState::ChildMode)\0"
    "theWrappedObject,state\0"
    "setErrorState(QState*,QAbstractState*)\0"
    "setInitialState(QState*,QAbstractState*)\0"
    "QList<QAbstractTransition*>\0"
    "transitions(QState*)\0"
};

void PythonQtWrapper_QState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QState *_t = static_cast<PythonQtWrapper_QState *>(_o);
        switch (_id) {
        case 0: { QState* _r = _t->new_QState((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QState**>(_a[0]) = _r; }  break;
        case 1: { QState* _r = _t->new_QState();
            if (_a[0]) *reinterpret_cast< QState**>(_a[0]) = _r; }  break;
        case 2: { QState* _r = _t->new_QState((*reinterpret_cast< QState::ChildMode(*)>(_a[1])),(*reinterpret_cast< QState*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QState**>(_a[0]) = _r; }  break;
        case 3: { QState* _r = _t->new_QState((*reinterpret_cast< QState::ChildMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QState**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QState((*reinterpret_cast< QState*(*)>(_a[1]))); break;
        case 5: { QAbstractTransition* _r = _t->addTransition((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QAbstractState*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAbstractTransition**>(_a[0]) = _r; }  break;
        case 6: _t->addTransition((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QAbstractTransition*(*)>(_a[2]))); break;
        case 7: { QSignalTransition* _r = _t->addTransition((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< QAbstractState*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSignalTransition**>(_a[0]) = _r; }  break;
        case 8: _t->assignProperty((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 9: { QState::ChildMode _r = _t->childMode((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QState::ChildMode*>(_a[0]) = _r; }  break;
        case 10: { QAbstractState* _r = _t->errorState((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractState**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->event((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QAbstractState* _r = _t->initialState((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractState**>(_a[0]) = _r; }  break;
        case 13: _t->onEntry((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 14: _t->onExit((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 15: _t->removeTransition((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QAbstractTransition*(*)>(_a[2]))); break;
        case 16: _t->setChildMode((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QState::ChildMode(*)>(_a[2]))); break;
        case 17: _t->setErrorState((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QAbstractState*(*)>(_a[2]))); break;
        case 18: _t->setInitialState((*reinterpret_cast< QState*(*)>(_a[1])),(*reinterpret_cast< QAbstractState*(*)>(_a[2]))); break;
        case 19: { QList<QAbstractTransition*> _r = _t->transitions((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QAbstractTransition*>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QState::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QState,
      qt_meta_data_PythonQtWrapper_QState, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QState::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QState::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QState))
        return static_cast<void*>(const_cast< PythonQtWrapper_QState*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QStateMachine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       2,  159, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     169,  142,   30,   30, 0x0a,
     248,  225,   30,   30, 0x0a,
     312,  289,   30,   30, 0x0a,
     351,  289,   30,   30, 0x0a,
     423,  403,  398,   30, 0x0a,
     479,  462,   30,   30, 0x0a,
     528,  462,  506,   30, 0x0a,
     585,  462,  558,   30, 0x0a,
     619,  289,   30,   30, 0x0a,
     656,  289,   30,   30, 0x0a,
     722,  462,  701,   30, 0x0a,
     752,  462,  744,   30, 0x0a,
     799,  780,  398,   30, 0x0a,
     860,  829,  398,   30, 0x0a,
     934,  462,  905,   30, 0x0a,
     970,  462,  398,   30, 0x0a,
     997,  462,  398,   30, 0x0a,
    1023,  289,   30,   30, 0x0a,
    1055,  289,   30,   30, 0x0a,
    1119, 1090, 1086,   30, 0x0a,
    1196, 1164,   30,   30, 0x0a,
    1259,  289,   30,   30, 0x2a,
    1293,  142,   30,   30, 0x0a,
    1352,  225,   30,   30, 0x0a,
    1421, 1396,   30,   30, 0x0a,
    1485, 1454,   30,   30, 0x0a,

 // enums: name, flags, count, data
    1553, 0x0,    4,  167,
    1559, 0x0,    2,  175,

 // enum data: key, value
    1573, uint(PythonQtWrapper_QStateMachine::NoError),
    1581, uint(PythonQtWrapper_QStateMachine::NoInitialStateError),
    1601, uint(PythonQtWrapper_QStateMachine::NoDefaultStateInHistoryStateError),
    1635, uint(PythonQtWrapper_QStateMachine::NoCommonAncestorForTransitionError),
    1670, uint(PythonQtWrapper_QStateMachine::NormalPriority),
    1685, uint(PythonQtWrapper_QStateMachine::HighPriority),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStateMachine[] = {
    "PythonQtWrapper_QStateMachine\0\0"
    "QStateMachine*\0parent\0new_QStateMachine(QObject*)\0"
    "new_QStateMachine()\0obj\0"
    "delete_QStateMachine(QStateMachine*)\0"
    "theWrappedObject,animation\0"
    "addDefaultAnimation(QStateMachine*,QAbstractAnimation*)\0"
    "theWrappedObject,state\0"
    "addState(QStateMachine*,QAbstractState*)\0"
    "theWrappedObject,event\0"
    "beginMicrostep(QStateMachine*,QEvent*)\0"
    "beginSelectTransitions(QStateMachine*,QEvent*)\0"
    "bool\0theWrappedObject,id\0"
    "cancelDelayedEvent(QStateMachine*,int)\0"
    "theWrappedObject\0clearError(QStateMachine*)\0"
    "QSet<QAbstractState*>\0"
    "configuration(QStateMachine*)\0"
    "QList<QAbstractAnimation*>\0"
    "defaultAnimations(QStateMachine*)\0"
    "endMicrostep(QStateMachine*,QEvent*)\0"
    "endSelectTransitions(QStateMachine*,QEvent*)\0"
    "QStateMachine::Error\0error(QStateMachine*)\0"
    "QString\0errorString(QStateMachine*)\0"
    "theWrappedObject,e\0event(QStateMachine*,QEvent*)\0"
    "theWrappedObject,watched,event\0"
    "eventFilter(QStateMachine*,QObject*,QEvent*)\0"
    "QStateMachine::RestorePolicy\0"
    "globalRestorePolicy(QStateMachine*)\0"
    "isAnimated(QStateMachine*)\0"
    "isRunning(QStateMachine*)\0"
    "onEntry(QStateMachine*,QEvent*)\0"
    "onExit(QStateMachine*,QEvent*)\0int\0"
    "theWrappedObject,event,delay\0"
    "postDelayedEvent(QStateMachine*,QEvent*,int)\0"
    "theWrappedObject,event,priority\0"
    "postEvent(QStateMachine*,QEvent*,QStateMachine::EventPriority)\0"
    "postEvent(QStateMachine*,QEvent*)\0"
    "removeDefaultAnimation(QStateMachine*,QAbstractAnimation*)\0"
    "removeState(QStateMachine*,QAbstractState*)\0"
    "theWrappedObject,enabled\0"
    "setAnimated(QStateMachine*,bool)\0"
    "theWrappedObject,restorePolicy\0"
    "setGlobalRestorePolicy(QStateMachine*,QStateMachine::RestorePolicy)\0"
    "Error\0EventPriority\0NoError\0"
    "NoInitialStateError\0"
    "NoDefaultStateInHistoryStateError\0"
    "NoCommonAncestorForTransitionError\0"
    "NormalPriority\0HighPriority\0"
};

void PythonQtWrapper_QStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStateMachine *_t = static_cast<PythonQtWrapper_QStateMachine *>(_o);
        switch (_id) {
        case 0: { QStateMachine* _r = _t->new_QStateMachine((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStateMachine**>(_a[0]) = _r; }  break;
        case 1: { QStateMachine* _r = _t->new_QStateMachine();
            if (_a[0]) *reinterpret_cast< QStateMachine**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStateMachine((*reinterpret_cast< QStateMachine*(*)>(_a[1]))); break;
        case 3: _t->addDefaultAnimation((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation*(*)>(_a[2]))); break;
        case 4: _t->addState((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QAbstractState*(*)>(_a[2]))); break;
        case 5: _t->beginMicrostep((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 6: _t->beginSelectTransitions((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 7: { bool _r = _t->cancelDelayedEvent((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->clearError((*reinterpret_cast< QStateMachine*(*)>(_a[1]))); break;
        case 9: { QSet<QAbstractState*> _r = _t->configuration((*reinterpret_cast< QStateMachine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSet<QAbstractState*>*>(_a[0]) = _r; }  break;
        case 10: { QList<QAbstractAnimation*> _r = _t->defaultAnimations((*reinterpret_cast< QStateMachine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QAbstractAnimation*>*>(_a[0]) = _r; }  break;
        case 11: _t->endMicrostep((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 12: _t->endSelectTransitions((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 13: { QStateMachine::Error _r = _t->error((*reinterpret_cast< QStateMachine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStateMachine::Error*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->errorString((*reinterpret_cast< QStateMachine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->event((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->eventFilter((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QStateMachine::RestorePolicy _r = _t->globalRestorePolicy((*reinterpret_cast< QStateMachine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStateMachine::RestorePolicy*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isAnimated((*reinterpret_cast< QStateMachine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isRunning((*reinterpret_cast< QStateMachine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->onEntry((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 21: _t->onExit((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 22: { int _r = _t->postDelayedEvent((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: _t->postEvent((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< QStateMachine::EventPriority(*)>(_a[3]))); break;
        case 24: _t->postEvent((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 25: _t->removeDefaultAnimation((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation*(*)>(_a[2]))); break;
        case 26: _t->removeState((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QAbstractState*(*)>(_a[2]))); break;
        case 27: _t->setAnimated((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->setGlobalRestorePolicy((*reinterpret_cast< QStateMachine*(*)>(_a[1])),(*reinterpret_cast< QStateMachine::RestorePolicy(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStateMachine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStateMachine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStateMachine,
      qt_meta_data_PythonQtWrapper_QStateMachine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStateMachine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStateMachine))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStateMachine*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStateMachine_SignalEvent[] = {

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
     100,   71,   43,   42, 0x0a,
     164,  160,   42,   42, 0x0a,
     259,  242,  226,   42, 0x0a,
     307,  242,  298,   42, 0x0a,
     347,  242,  343,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStateMachine_SignalEvent[] = {
    "PythonQtWrapper_QStateMachine_SignalEvent\0"
    "\0QStateMachine::SignalEvent*\0"
    "sender,signalIndex,arguments\0"
    "new_QStateMachine_SignalEvent(QObject*,int,QList<QVariant>)\0"
    "obj\0delete_QStateMachine_SignalEvent(QStateMachine::SignalEvent*)\0"
    "QList<QVariant>\0theWrappedObject\0"
    "arguments(QStateMachine::SignalEvent*)\0"
    "QObject*\0sender(QStateMachine::SignalEvent*)\0"
    "int\0signalIndex(QStateMachine::SignalEvent*)\0"
};

void PythonQtWrapper_QStateMachine_SignalEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStateMachine_SignalEvent *_t = static_cast<PythonQtWrapper_QStateMachine_SignalEvent *>(_o);
        switch (_id) {
        case 0: { QStateMachine::SignalEvent* _r = _t->new_QStateMachine_SignalEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QList<QVariant>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStateMachine::SignalEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QStateMachine_SignalEvent((*reinterpret_cast< QStateMachine::SignalEvent*(*)>(_a[1]))); break;
        case 2: { QList<QVariant> _r = _t->arguments((*reinterpret_cast< QStateMachine::SignalEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = _r; }  break;
        case 3: { QObject* _r = _t->sender((*reinterpret_cast< QStateMachine::SignalEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->signalIndex((*reinterpret_cast< QStateMachine::SignalEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStateMachine_SignalEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStateMachine_SignalEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStateMachine_SignalEvent,
      qt_meta_data_PythonQtWrapper_QStateMachine_SignalEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStateMachine_SignalEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStateMachine_SignalEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStateMachine_SignalEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStateMachine_SignalEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStateMachine_SignalEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStateMachine_SignalEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QStateMachine_WrappedEvent[] = {

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
      86,   73,   44,   43, 0x0a,
     139,  135,   43,   43, 0x0a,
     228,  211,  203,   43, 0x0a,
     273,  211,  264,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStateMachine_WrappedEvent[] = {
    "PythonQtWrapper_QStateMachine_WrappedEvent\0"
    "\0QStateMachine::WrappedEvent*\0"
    "object,event\0"
    "new_QStateMachine_WrappedEvent(QObject*,QEvent*)\0"
    "obj\0delete_QStateMachine_WrappedEvent(QStateMachine::WrappedEvent*)\0"
    "QEvent*\0theWrappedObject\0"
    "event(QStateMachine::WrappedEvent*)\0"
    "QObject*\0object(QStateMachine::WrappedEvent*)\0"
};

void PythonQtWrapper_QStateMachine_WrappedEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStateMachine_WrappedEvent *_t = static_cast<PythonQtWrapper_QStateMachine_WrappedEvent *>(_o);
        switch (_id) {
        case 0: { QStateMachine::WrappedEvent* _r = _t->new_QStateMachine_WrappedEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStateMachine::WrappedEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QStateMachine_WrappedEvent((*reinterpret_cast< QStateMachine::WrappedEvent*(*)>(_a[1]))); break;
        case 2: { QEvent* _r = _t->event((*reinterpret_cast< QStateMachine::WrappedEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEvent**>(_a[0]) = _r; }  break;
        case 3: { QObject* _r = _t->object((*reinterpret_cast< QStateMachine::WrappedEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStateMachine_WrappedEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStateMachine_WrappedEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStateMachine_WrappedEvent,
      qt_meta_data_PythonQtWrapper_QStateMachine_WrappedEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStateMachine_WrappedEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStateMachine_WrappedEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStateMachine_WrappedEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStateMachine_WrappedEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStateMachine_WrappedEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStateMachine_WrappedEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStringMatcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   31,   32,   31, 0x0a,
      80,   69,   32,   31, 0x0a,
     136,  128,   32,   31, 0x2a,
     170,  164,   32,   31, 0x0a,
     209,  205,   31,   31, 0x0a,
     285,  268,  248,   31, 0x0a,
     348,  322,  318,   31, 0x0a,
     406,  385,  318,   31, 0x2a,
     447,  268,  439,   31, 0x0a,
     492,  472,   31,   31, 0x0a,
     573,  548,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStringMatcher[] = {
    "PythonQtWrapper_QStringMatcher\0\0"
    "QStringMatcher*\0new_QStringMatcher()\0"
    "pattern,cs\0new_QStringMatcher(QString,Qt::CaseSensitivity)\0"
    "pattern\0new_QStringMatcher(QString)\0"
    "other\0new_QStringMatcher(QStringMatcher)\0"
    "obj\0delete_QStringMatcher(QStringMatcher*)\0"
    "Qt::CaseSensitivity\0theWrappedObject\0"
    "caseSensitivity(QStringMatcher*)\0int\0"
    "theWrappedObject,str,from\0"
    "indexIn(QStringMatcher*,QString,int)\0"
    "theWrappedObject,str\0"
    "indexIn(QStringMatcher*,QString)\0"
    "QString\0pattern(QStringMatcher*)\0"
    "theWrappedObject,cs\0"
    "setCaseSensitivity(QStringMatcher*,Qt::CaseSensitivity)\0"
    "theWrappedObject,pattern\0"
    "setPattern(QStringMatcher*,QString)\0"
};

void PythonQtWrapper_QStringMatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStringMatcher *_t = static_cast<PythonQtWrapper_QStringMatcher *>(_o);
        switch (_id) {
        case 0: { QStringMatcher* _r = _t->new_QStringMatcher();
            if (_a[0]) *reinterpret_cast< QStringMatcher**>(_a[0]) = _r; }  break;
        case 1: { QStringMatcher* _r = _t->new_QStringMatcher((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringMatcher**>(_a[0]) = _r; }  break;
        case 2: { QStringMatcher* _r = _t->new_QStringMatcher((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringMatcher**>(_a[0]) = _r; }  break;
        case 3: { QStringMatcher* _r = _t->new_QStringMatcher((*reinterpret_cast< const QStringMatcher(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringMatcher**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QStringMatcher((*reinterpret_cast< QStringMatcher*(*)>(_a[1]))); break;
        case 5: { Qt::CaseSensitivity _r = _t->caseSensitivity((*reinterpret_cast< QStringMatcher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CaseSensitivity*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->indexIn((*reinterpret_cast< QStringMatcher*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->indexIn((*reinterpret_cast< QStringMatcher*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->pattern((*reinterpret_cast< QStringMatcher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->setCaseSensitivity((*reinterpret_cast< QStringMatcher*(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 10: _t->setPattern((*reinterpret_cast< QStringMatcher*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStringMatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStringMatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStringMatcher,
      qt_meta_data_PythonQtWrapper_QStringMatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStringMatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStringMatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStringMatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStringMatcher))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStringMatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStringMatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSysInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       2,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   25,   26,   25, 0x0a,
      55,   51,   25,   25, 0x0a,

 // enums: name, flags, count, data
      82, 0x0,    3,   32,
      89, 0x0,    1,   38,

 // enum data: key, value
      95, uint(PythonQtWrapper_QSysInfo::BigEndian),
     105, uint(PythonQtWrapper_QSysInfo::LittleEndian),
     118, uint(PythonQtWrapper_QSysInfo::ByteOrder),
     128, uint(PythonQtWrapper_QSysInfo::WordSize),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSysInfo[] = {
    "PythonQtWrapper_QSysInfo\0\0QSysInfo*\0"
    "new_QSysInfo()\0obj\0delete_QSysInfo(QSysInfo*)\0"
    "Endian\0Sizes\0BigEndian\0LittleEndian\0"
    "ByteOrder\0WordSize\0"
};

void PythonQtWrapper_QSysInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSysInfo *_t = static_cast<PythonQtWrapper_QSysInfo *>(_o);
        switch (_id) {
        case 0: { QSysInfo* _r = _t->new_QSysInfo();
            if (_a[0]) *reinterpret_cast< QSysInfo**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSysInfo((*reinterpret_cast< QSysInfo*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSysInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSysInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSysInfo,
      qt_meta_data_PythonQtWrapper_QSysInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSysInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSysInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSysInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSysInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSysInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSysInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
