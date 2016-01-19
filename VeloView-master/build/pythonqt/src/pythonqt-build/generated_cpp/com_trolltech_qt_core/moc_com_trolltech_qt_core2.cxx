/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_core2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_core/com_trolltech_qt_core2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_core2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QSystemSemaphore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       2,   79, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      74,   52,   34,   33, 0x0a,
     154,  137,   34,   33, 0x2a,
     192,  188,   34,   33, 0x2a,
     226,  222,   33,   33, 0x0a,
     291,  274,  269,   33, 0x0a,
     357,  274,  318,   33, 0x0a,
     390,  274,  382,   33, 0x0a,
     421,  274,  382,   33, 0x0a,
     463,  444,  269,   33, 0x0a,
     494,  274,  269,   33, 0x2a,
     560,  521,   33,   33, 0x0a,
     661,  627,   33,   33, 0x2a,
     720,  699,   33,   33, 0x2a,

 // enums: name, flags, count, data
     754, 0x0,    2,   87,
     765, 0x0,    7,   91,

 // enum data: key, value
     786, uint(PythonQtWrapper_QSystemSemaphore::Open),
     791, uint(PythonQtWrapper_QSystemSemaphore::Create),
     798, uint(PythonQtWrapper_QSystemSemaphore::NoError),
     806, uint(PythonQtWrapper_QSystemSemaphore::PermissionDenied),
     823, uint(PythonQtWrapper_QSystemSemaphore::KeyError),
     832, uint(PythonQtWrapper_QSystemSemaphore::AlreadyExists),
     846, uint(PythonQtWrapper_QSystemSemaphore::NotFound),
     855, uint(PythonQtWrapper_QSystemSemaphore::OutOfResources),
     870, uint(PythonQtWrapper_QSystemSemaphore::UnknownError),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSystemSemaphore[] = {
    "PythonQtWrapper_QSystemSemaphore\0\0"
    "QSystemSemaphore*\0key,initialValue,mode\0"
    "new_QSystemSemaphore(QString,int,QSystemSemaphore::AccessMode)\0"
    "key,initialValue\0new_QSystemSemaphore(QString,int)\0"
    "key\0new_QSystemSemaphore(QString)\0obj\0"
    "delete_QSystemSemaphore(QSystemSemaphore*)\0"
    "bool\0theWrappedObject\0acquire(QSystemSemaphore*)\0"
    "QSystemSemaphore::SystemSemaphoreError\0"
    "error(QSystemSemaphore*)\0QString\0"
    "errorString(QSystemSemaphore*)\0"
    "key(QSystemSemaphore*)\0theWrappedObject,n\0"
    "release(QSystemSemaphore*,int)\0"
    "release(QSystemSemaphore*)\0"
    "theWrappedObject,key,initialValue,mode\0"
    "setKey(QSystemSemaphore*,QString,int,QSystemSemaphore::AccessMode)\0"
    "theWrappedObject,key,initialValue\0"
    "setKey(QSystemSemaphore*,QString,int)\0"
    "theWrappedObject,key\0"
    "setKey(QSystemSemaphore*,QString)\0"
    "AccessMode\0SystemSemaphoreError\0Open\0"
    "Create\0NoError\0PermissionDenied\0"
    "KeyError\0AlreadyExists\0NotFound\0"
    "OutOfResources\0UnknownError\0"
};

void PythonQtWrapper_QSystemSemaphore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSystemSemaphore *_t = static_cast<PythonQtWrapper_QSystemSemaphore *>(_o);
        switch (_id) {
        case 0: { QSystemSemaphore* _r = _t->new_QSystemSemaphore((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QSystemSemaphore::AccessMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSystemSemaphore**>(_a[0]) = _r; }  break;
        case 1: { QSystemSemaphore* _r = _t->new_QSystemSemaphore((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSystemSemaphore**>(_a[0]) = _r; }  break;
        case 2: { QSystemSemaphore* _r = _t->new_QSystemSemaphore((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSystemSemaphore**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSystemSemaphore((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->acquire((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QSystemSemaphore::SystemSemaphoreError _r = _t->error((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSystemSemaphore::SystemSemaphoreError*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->errorString((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->key((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->release((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->release((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->setKey((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QSystemSemaphore::AccessMode(*)>(_a[4]))); break;
        case 11: _t->setKey((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->setKey((*reinterpret_cast< QSystemSemaphore*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSystemSemaphore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSystemSemaphore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSystemSemaphore,
      qt_meta_data_PythonQtWrapper_QSystemSemaphore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSystemSemaphore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSystemSemaphore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSystemSemaphore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSystemSemaphore))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSystemSemaphore*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSystemSemaphore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTemporaryFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   31,   32,   31, 0x0a,
      76,   69,   32,   31, 0x0a,
     118,  105,   32,   31, 0x0a,
     166,  146,   32,   31, 0x0a,
     207,  203,   31,   31, 0x0a,
     268,  251,  246,   31, 0x0a,
     301,  296,   32,   31, 0x0a,
     356,  347,   32,   31, 0x0a,
     424,  251,  403,   31, 0x0a,
     460,  251,  452,   31, 0x0a,
     486,  251,  452,   31, 0x0a,
     516,  251,  246,   31, 0x0a,
     561,  538,  246,   31, 0x0a,
     622,  603,   31,   31, 0x0a,
     680,  658,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTemporaryFile[] = {
    "PythonQtWrapper_QTemporaryFile\0\0"
    "QTemporaryFile*\0new_QTemporaryFile()\0"
    "parent\0new_QTemporaryFile(QObject*)\0"
    "templateName\0new_QTemporaryFile(QString)\0"
    "templateName,parent\0"
    "new_QTemporaryFile(QString,QObject*)\0"
    "obj\0delete_QTemporaryFile(QTemporaryFile*)\0"
    "bool\0theWrappedObject\0autoRemove(QTemporaryFile*)\0"
    "file\0static_QTemporaryFile_createLocalFile(QFile&)\0"
    "fileName\0static_QTemporaryFile_createLocalFile(QString)\0"
    "QAbstractFileEngine*\0fileEngine(QTemporaryFile*)\0"
    "QString\0fileName(QTemporaryFile*)\0"
    "fileTemplate(QTemporaryFile*)\0"
    "open(QTemporaryFile*)\0theWrappedObject,flags\0"
    "open(QTemporaryFile*,QIODevice::OpenMode)\0"
    "theWrappedObject,b\0"
    "setAutoRemove(QTemporaryFile*,bool)\0"
    "theWrappedObject,name\0"
    "setFileTemplate(QTemporaryFile*,QString)\0"
};

void PythonQtWrapper_QTemporaryFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTemporaryFile *_t = static_cast<PythonQtWrapper_QTemporaryFile *>(_o);
        switch (_id) {
        case 0: { QTemporaryFile* _r = _t->new_QTemporaryFile();
            if (_a[0]) *reinterpret_cast< QTemporaryFile**>(_a[0]) = _r; }  break;
        case 1: { QTemporaryFile* _r = _t->new_QTemporaryFile((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTemporaryFile**>(_a[0]) = _r; }  break;
        case 2: { QTemporaryFile* _r = _t->new_QTemporaryFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTemporaryFile**>(_a[0]) = _r; }  break;
        case 3: { QTemporaryFile* _r = _t->new_QTemporaryFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTemporaryFile**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTemporaryFile((*reinterpret_cast< QTemporaryFile*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->autoRemove((*reinterpret_cast< QTemporaryFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QTemporaryFile* _r = _t->static_QTemporaryFile_createLocalFile((*reinterpret_cast< QFile(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTemporaryFile**>(_a[0]) = _r; }  break;
        case 7: { QTemporaryFile* _r = _t->static_QTemporaryFile_createLocalFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTemporaryFile**>(_a[0]) = _r; }  break;
        case 8: { QAbstractFileEngine* _r = _t->fileEngine((*reinterpret_cast< QTemporaryFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractFileEngine**>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->fileName((*reinterpret_cast< QTemporaryFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->fileTemplate((*reinterpret_cast< QTemporaryFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->open((*reinterpret_cast< QTemporaryFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->open((*reinterpret_cast< QTemporaryFile*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->setAutoRemove((*reinterpret_cast< QTemporaryFile*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->setFileTemplate((*reinterpret_cast< QTemporaryFile*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTemporaryFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTemporaryFile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTemporaryFile,
      qt_meta_data_PythonQtWrapper_QTemporaryFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTemporaryFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTemporaryFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTemporaryFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTemporaryFile))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTemporaryFile*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTemporaryFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextBoundaryFinder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       3,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      96,   84,   37,   36, 0x0a,
     169,  163,   37,   36, 0x0a,
     218,  214,   36,   36, 0x0a,
     321,  304,  267,   36, 0x0a,
     364,  304,  359,   36, 0x0a,
     399,  304,  359,   36, 0x0a,
     433,  304,  429,   36, 0x0a,
     490,  464,   36,   36, 0x0a,
     536,  304,  528,   36, 0x0a,
     565,  304,   36,   36, 0x0a,
     593,  304,  429,   36, 0x0a,
     630,  304,  429,   36, 0x0a,
     671,  304,   36,   36, 0x0a,
     735,  304,  701,   36, 0x0a,

 // enums: name, flags, count, data
     762, 0x0,    3,  101,
     777, 0x1,    3,  107,
     793, 0x0,    4,  113,

 // enum data: key, value
     806, uint(PythonQtWrapper_QTextBoundaryFinder::NotAtBoundary),
     820, uint(PythonQtWrapper_QTextBoundaryFinder::StartWord),
     830, uint(PythonQtWrapper_QTextBoundaryFinder::EndWord),
     806, uint(PythonQtWrapper_QTextBoundaryFinder::NotAtBoundary),
     820, uint(PythonQtWrapper_QTextBoundaryFinder::StartWord),
     830, uint(PythonQtWrapper_QTextBoundaryFinder::EndWord),
     838, uint(PythonQtWrapper_QTextBoundaryFinder::Grapheme),
     847, uint(PythonQtWrapper_QTextBoundaryFinder::Word),
     852, uint(PythonQtWrapper_QTextBoundaryFinder::Line),
     857, uint(PythonQtWrapper_QTextBoundaryFinder::Sentence),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextBoundaryFinder[] = {
    "PythonQtWrapper_QTextBoundaryFinder\0"
    "\0QTextBoundaryFinder*\0new_QTextBoundaryFinder()\0"
    "type,string\0"
    "new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType,QString)\0"
    "other\0new_QTextBoundaryFinder(QTextBoundaryFinder)\0"
    "obj\0delete_QTextBoundaryFinder(QTextBoundaryFinder*)\0"
    "QTextBoundaryFinder::BoundaryReasons\0"
    "theWrappedObject\0boundaryReasons(QTextBoundaryFinder*)\0"
    "bool\0isAtBoundary(QTextBoundaryFinder*)\0"
    "isValid(QTextBoundaryFinder*)\0int\0"
    "position(QTextBoundaryFinder*)\0"
    "theWrappedObject,position\0"
    "setPosition(QTextBoundaryFinder*,int)\0"
    "QString\0string(QTextBoundaryFinder*)\0"
    "toEnd(QTextBoundaryFinder*)\0"
    "toNextBoundary(QTextBoundaryFinder*)\0"
    "toPreviousBoundary(QTextBoundaryFinder*)\0"
    "toStart(QTextBoundaryFinder*)\0"
    "QTextBoundaryFinder::BoundaryType\0"
    "type(QTextBoundaryFinder*)\0BoundaryReason\0"
    "BoundaryReasons\0BoundaryType\0NotAtBoundary\0"
    "StartWord\0EndWord\0Grapheme\0Word\0Line\0"
    "Sentence\0"
};

void PythonQtWrapper_QTextBoundaryFinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextBoundaryFinder *_t = static_cast<PythonQtWrapper_QTextBoundaryFinder *>(_o);
        switch (_id) {
        case 0: { QTextBoundaryFinder* _r = _t->new_QTextBoundaryFinder();
            if (_a[0]) *reinterpret_cast< QTextBoundaryFinder**>(_a[0]) = _r; }  break;
        case 1: { QTextBoundaryFinder* _r = _t->new_QTextBoundaryFinder((*reinterpret_cast< QTextBoundaryFinder::BoundaryType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBoundaryFinder**>(_a[0]) = _r; }  break;
        case 2: { QTextBoundaryFinder* _r = _t->new_QTextBoundaryFinder((*reinterpret_cast< const QTextBoundaryFinder(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBoundaryFinder**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextBoundaryFinder((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1]))); break;
        case 4: { QTextBoundaryFinder::BoundaryReasons _r = _t->boundaryReasons((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBoundaryFinder::BoundaryReasons*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isAtBoundary((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isValid((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->position((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->setPosition((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: { QString _r = _t->string((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->toEnd((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1]))); break;
        case 11: { int _r = _t->toNextBoundary((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->toPreviousBoundary((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: _t->toStart((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1]))); break;
        case 14: { QTextBoundaryFinder::BoundaryType _r = _t->type((*reinterpret_cast< QTextBoundaryFinder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBoundaryFinder::BoundaryType*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextBoundaryFinder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextBoundaryFinder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBoundaryFinder,
      qt_meta_data_PythonQtWrapper_QTextBoundaryFinder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextBoundaryFinder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextBoundaryFinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextBoundaryFinder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBoundaryFinder))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBoundaryFinder*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBoundaryFinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextCodec[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       2,  129, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   46,   28,   27, 0x0a,
      84,   27,   28,   27, 0x0a,
     131,   27,  120,   27, 0x0a,
     194,  170,  165,   27, 0x0a,
     223,  170,  165,   27, 0x0a,
     266,   27,  254,   27, 0x0a,
     306,  303,  254,   27, 0x0a,
     365,  349,  254,   27, 0x0a,
     420,   27,  254,   27, 0x0a,
     459,  455,  254,   27, 0x0a,
     499,  494,  254,   27, 0x0a,
     542,  494,  254,   27, 0x0a,
     586,  303,  254,   27, 0x0a,
     632,  349,  254,   27, 0x0a,
     721,  701,  690,   27, 0x0a,
     768,   46,  754,   27, 0x0a,
     816,  793,  754,   27, 0x0a,
     883,   46,  869,   27, 0x0a,
     908,  793,  869,   27, 0x0a,
     963,  961,   27,   27, 0x0a,
    1014,  961,   27,   27, 0x0a,
    1063,  961,   27,   27, 0x0a,
    1116,  170, 1108,   27, 0x0a,

 // enums: name, flags, count, data
    1150, 0x0,    4,  137,
    1165, 0x1,    4,  145,

 // enum data: key, value
    1181, uint(PythonQtWrapper_QTextCodec::DefaultConversion),
    1199, uint(PythonQtWrapper_QTextCodec::ConvertInvalidToNull),
    1220, uint(PythonQtWrapper_QTextCodec::IgnoreHeader),
    1233, uint(PythonQtWrapper_QTextCodec::FreeFunction),
    1181, uint(PythonQtWrapper_QTextCodec::DefaultConversion),
    1199, uint(PythonQtWrapper_QTextCodec::ConvertInvalidToNull),
    1220, uint(PythonQtWrapper_QTextCodec::IgnoreHeader),
    1233, uint(PythonQtWrapper_QTextCodec::FreeFunction),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextCodec[] = {
    "PythonQtWrapper_QTextCodec\0\0"
    "QList<QByteArray>\0theWrappedObject\0"
    "aliases(QTextCodec*)\0"
    "static_QTextCodec_availableCodecs()\0"
    "QList<int>\0static_QTextCodec_availableMibs()\0"
    "bool\0theWrappedObject,arg__1\0"
    "canEncode(QTextCodec*,QChar)\0"
    "canEncode(QTextCodec*,QString)\0"
    "QTextCodec*\0static_QTextCodec_codecForCStrings()\0"
    "ba\0static_QTextCodec_codecForHtml(QByteArray)\0"
    "ba,defaultCodec\0"
    "static_QTextCodec_codecForHtml(QByteArray,QTextCodec*)\0"
    "static_QTextCodec_codecForLocale()\0"
    "mib\0static_QTextCodec_codecForMib(int)\0"
    "name\0static_QTextCodec_codecForName(QByteArray)\0"
    "static_QTextCodec_codecForName(const char*)\0"
    "static_QTextCodec_codecForUtfText(QByteArray)\0"
    "static_QTextCodec_codecForUtfText(QByteArray,QTextCodec*)\0"
    "QByteArray\0theWrappedObject,uc\0"
    "fromUnicode(QTextCodec*,QString)\0"
    "QTextDecoder*\0makeDecoder(QTextCodec*)\0"
    "theWrappedObject,flags\0"
    "makeDecoder(QTextCodec*,QTextCodec::ConversionFlags)\0"
    "QTextEncoder*\0makeEncoder(QTextCodec*)\0"
    "makeEncoder(QTextCodec*,QTextCodec::ConversionFlags)\0"
    "c\0static_QTextCodec_setCodecForCStrings(QTextCodec*)\0"
    "static_QTextCodec_setCodecForLocale(QTextCodec*)\0"
    "static_QTextCodec_setCodecForTr(QTextCodec*)\0"
    "QString\0toUnicode(QTextCodec*,QByteArray)\0"
    "ConversionFlag\0ConversionFlags\0"
    "DefaultConversion\0ConvertInvalidToNull\0"
    "IgnoreHeader\0FreeFunction\0"
};

void PythonQtWrapper_QTextCodec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextCodec *_t = static_cast<PythonQtWrapper_QTextCodec *>(_o);
        switch (_id) {
        case 0: { QList<QByteArray> _r = _t->aliases((*reinterpret_cast< QTextCodec*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 1: { QList<QByteArray> _r = _t->static_QTextCodec_availableCodecs();
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 2: { QList<int> _r = _t->static_QTextCodec_availableMibs();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->canEncode((*reinterpret_cast< QTextCodec*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->canEncode((*reinterpret_cast< QTextCodec*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QTextCodec* _r = _t->static_QTextCodec_codecForCStrings();
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 6: { QTextCodec* _r = _t->static_QTextCodec_codecForHtml((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 7: { QTextCodec* _r = _t->static_QTextCodec_codecForHtml((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QTextCodec*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 8: { QTextCodec* _r = _t->static_QTextCodec_codecForLocale();
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 9: { QTextCodec* _r = _t->static_QTextCodec_codecForMib((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 10: { QTextCodec* _r = _t->static_QTextCodec_codecForName((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 11: { QTextCodec* _r = _t->static_QTextCodec_codecForName((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 12: { QTextCodec* _r = _t->static_QTextCodec_codecForUtfText((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 13: { QTextCodec* _r = _t->static_QTextCodec_codecForUtfText((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QTextCodec*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 14: { QByteArray _r = _t->fromUnicode((*reinterpret_cast< QTextCodec*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 15: { QTextDecoder* _r = _t->makeDecoder((*reinterpret_cast< QTextCodec*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDecoder**>(_a[0]) = _r; }  break;
        case 16: { QTextDecoder* _r = _t->makeDecoder((*reinterpret_cast< QTextCodec*(*)>(_a[1])),(*reinterpret_cast< QTextCodec::ConversionFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDecoder**>(_a[0]) = _r; }  break;
        case 17: { QTextEncoder* _r = _t->makeEncoder((*reinterpret_cast< QTextCodec*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEncoder**>(_a[0]) = _r; }  break;
        case 18: { QTextEncoder* _r = _t->makeEncoder((*reinterpret_cast< QTextCodec*(*)>(_a[1])),(*reinterpret_cast< QTextCodec::ConversionFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextEncoder**>(_a[0]) = _r; }  break;
        case 19: _t->static_QTextCodec_setCodecForCStrings((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        case 20: _t->static_QTextCodec_setCodecForLocale((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        case 21: _t->static_QTextCodec_setCodecForTr((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        case 22: { QString _r = _t->toUnicode((*reinterpret_cast< QTextCodec*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextCodec::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextCodec::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextCodec,
      qt_meta_data_PythonQtWrapper_QTextCodec, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextCodec::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextCodec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextCodec::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextCodec))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextCodec*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextCodec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextDecoder[] = {

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
      50,   44,   30,   29, 0x0a,
      98,   86,   30,   29, 0x0a,
     166,  162,   29,   29, 0x0a,
     223,  206,  201,   29, 0x0a,
     277,  257,  249,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextDecoder[] = {
    "PythonQtWrapper_QTextDecoder\0\0"
    "QTextDecoder*\0codec\0"
    "new_QTextDecoder(const QTextCodec*)\0"
    "codec,flags\0"
    "new_QTextDecoder(const QTextCodec*,QTextCodec::ConversionFlags)\0"
    "obj\0delete_QTextDecoder(QTextDecoder*)\0"
    "bool\0theWrappedObject\0hasFailure(QTextDecoder*)\0"
    "QString\0theWrappedObject,ba\0"
    "toUnicode(QTextDecoder*,QByteArray)\0"
};

void PythonQtWrapper_QTextDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextDecoder *_t = static_cast<PythonQtWrapper_QTextDecoder *>(_o);
        switch (_id) {
        case 0: { QTextDecoder* _r = _t->new_QTextDecoder((*reinterpret_cast< const QTextCodec*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDecoder**>(_a[0]) = _r; }  break;
        case 1: { QTextDecoder* _r = _t->new_QTextDecoder((*reinterpret_cast< const QTextCodec*(*)>(_a[1])),(*reinterpret_cast< QTextCodec::ConversionFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDecoder**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextDecoder((*reinterpret_cast< QTextDecoder*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->hasFailure((*reinterpret_cast< QTextDecoder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->toUnicode((*reinterpret_cast< QTextDecoder*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextDecoder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextDecoder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextDecoder,
      qt_meta_data_PythonQtWrapper_QTextDecoder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextDecoder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextDecoder))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextDecoder*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextEncoder[] = {

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
      50,   44,   30,   29, 0x0a,
      98,   86,   30,   29, 0x0a,
     166,  162,   29,   29, 0x0a,
     233,  212,  201,   29, 0x0a,
     290,  273,  268,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextEncoder[] = {
    "PythonQtWrapper_QTextEncoder\0\0"
    "QTextEncoder*\0codec\0"
    "new_QTextEncoder(const QTextCodec*)\0"
    "codec,flags\0"
    "new_QTextEncoder(const QTextCodec*,QTextCodec::ConversionFlags)\0"
    "obj\0delete_QTextEncoder(QTextEncoder*)\0"
    "QByteArray\0theWrappedObject,str\0"
    "fromUnicode(QTextEncoder*,QString)\0"
    "bool\0theWrappedObject\0hasFailure(QTextEncoder*)\0"
};

void PythonQtWrapper_QTextEncoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextEncoder *_t = static_cast<PythonQtWrapper_QTextEncoder *>(_o);
        switch (_id) {
        case 0: { QTextEncoder* _r = _t->new_QTextEncoder((*reinterpret_cast< const QTextCodec*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEncoder**>(_a[0]) = _r; }  break;
        case 1: { QTextEncoder* _r = _t->new_QTextEncoder((*reinterpret_cast< const QTextCodec*(*)>(_a[1])),(*reinterpret_cast< QTextCodec::ConversionFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextEncoder**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextEncoder((*reinterpret_cast< QTextEncoder*(*)>(_a[1]))); break;
        case 3: { QByteArray _r = _t->fromUnicode((*reinterpret_cast< QTextEncoder*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->hasFailure((*reinterpret_cast< QTextEncoder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextEncoder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextEncoder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextEncoder,
      qt_meta_data_PythonQtWrapper_QTextEncoder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextEncoder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextEncoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextEncoder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextEncoder))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextEncoder*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextEncoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextStream[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       5,  294, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      67,   60,   29,   28, 0x0a,
     110,   95,   29,   28, 0x0a,
     164,  158,   29,   28, 0x2a,
     196,  192,   28,   28, 0x0a,
     251,  234,  229,   28, 0x0a,
     271,  234,  229,   28, 0x0a,
     315,  234,  303,   28, 0x0a,
     346,  234,  335,   28, 0x0a,
     395,  234,  367,   28, 0x0a,
     428,  234,  424,   28, 0x0a,
     453,  234,   28,   28, 0x0a,
     473,  234,  229,   28, 0x0a,
     509,  234,  424,   28, 0x0a,
     543,  234,  535,   28, 0x0a,
     589,  234,  564,   28, 0x0a,
     634,  615,   29,   28, 0x0a,
     687,  667,   29,   28, 0x0a,
     735,  716,   29,   28, 0x0a,
     768,  716,   29,   28, 0x0a,
     818,  799,   29,   28, 0x0a,
     856,  799,   29,   28, 0x0a,
     890,  799,   29,   28, 0x0a,
     928,  667,   29,   28, 0x0a,
     957,  716,   29,   28, 0x0a,
     990,  716,   29,   28, 0x0a,
    1021,  799,   29,   28, 0x0a,
    1059,  799,   29,   28, 0x0a,
    1093,  799,   29,   28, 0x0a,
    1137,  234, 1131,   28, 0x0a,
    1166,  234, 1159,   28, 0x0a,
    1216, 1192, 1184,   28, 0x0a,
    1242,  234, 1184,   28, 0x0a,
    1264, 1192, 1184,   28, 0x0a,
    1294,  234, 1184,   28, 0x2a,
    1349,  234, 1317,   28, 0x0a,
    1382,  234,  424,   28, 0x0a,
    1416,  234,   28,   28, 0x0a,
    1436,  234,   28,   28, 0x0a,
    1483, 1462,  229,   28, 0x0a,
    1534, 1509,   28,   28, 0x0a,
    1597, 1574,   28,   28, 0x0a,
    1659, 1632,   28,   28, 0x0a,
    1718, 1694,   28,   28, 0x0a,
    1780, 1753,   28,   28, 0x0a,
    1863, 1840,   28,   28, 0x0a,
    1921, 1895,   28,   28, 0x0a,
    1987, 1965,   28,   28, 0x0a,
    2044, 2020,   28,   28, 0x0a,
    2099, 2076,   28,   28, 0x0a,
    2153,  667,   28,   28, 0x0a,
    2210, 2184,   28,   28, 0x0a,
    2305, 2278,   28,   28, 0x0a,
    2370, 2346,   28,   28, 0x0a,
    2414,  234,   28,   28, 0x0a,
    2463,  234, 2443,   28, 0x0a,

 // enums: name, flags, count, data
    2484, 0x0,    3,  314,
    2503, 0x0,    5,  320,
    2514, 0x1,    5,  330,
    2526, 0x0,    4,  340,
    2541, 0x0,    4,  348,

 // enum data: key, value
    2548, uint(PythonQtWrapper_QTextStream::SmartNotation),
    2562, uint(PythonQtWrapper_QTextStream::FixedNotation),
    2576, uint(PythonQtWrapper_QTextStream::ScientificNotation),
    2595, uint(PythonQtWrapper_QTextStream::ShowBase),
    2604, uint(PythonQtWrapper_QTextStream::ForcePoint),
    2615, uint(PythonQtWrapper_QTextStream::ForceSign),
    2625, uint(PythonQtWrapper_QTextStream::UppercaseBase),
    2639, uint(PythonQtWrapper_QTextStream::UppercaseDigits),
    2595, uint(PythonQtWrapper_QTextStream::ShowBase),
    2604, uint(PythonQtWrapper_QTextStream::ForcePoint),
    2615, uint(PythonQtWrapper_QTextStream::ForceSign),
    2625, uint(PythonQtWrapper_QTextStream::UppercaseBase),
    2639, uint(PythonQtWrapper_QTextStream::UppercaseDigits),
    2655, uint(PythonQtWrapper_QTextStream::AlignLeft),
    2665, uint(PythonQtWrapper_QTextStream::AlignRight),
    2676, uint(PythonQtWrapper_QTextStream::AlignCenter),
    2688, uint(PythonQtWrapper_QTextStream::AlignAccountingStyle),
    2709, uint(PythonQtWrapper_QTextStream::Ok),
    2712, uint(PythonQtWrapper_QTextStream::ReadPastEnd),
    2724, uint(PythonQtWrapper_QTextStream::ReadCorruptData),
    2740, uint(PythonQtWrapper_QTextStream::WriteFailed),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextStream[] = {
    "PythonQtWrapper_QTextStream\0\0QTextStream*\0"
    "new_QTextStream()\0device\0"
    "new_QTextStream(QIODevice*)\0array,openMode\0"
    "new_QTextStream(QByteArray,QIODevice::OpenMode)\0"
    "array\0new_QTextStream(QByteArray)\0obj\0"
    "delete_QTextStream(QTextStream*)\0bool\0"
    "theWrappedObject\0atEnd(QTextStream*)\0"
    "autoDetectUnicode(QTextStream*)\0"
    "QTextCodec*\0codec(QTextStream*)\0"
    "QIODevice*\0device(QTextStream*)\0"
    "QTextStream::FieldAlignment\0"
    "fieldAlignment(QTextStream*)\0int\0"
    "fieldWidth(QTextStream*)\0flush(QTextStream*)\0"
    "generateByteOrderMark(QTextStream*)\0"
    "integerBase(QTextStream*)\0QLocale\0"
    "locale(QTextStream*)\0QTextStream::NumberFlags\0"
    "numberFlags(QTextStream*)\0theWrappedObject,b\0"
    "writeBoolean(QTextStream*,QBool)\0"
    "theWrappedObject,ch\0writeByte(QTextStream*,char)\0"
    "theWrappedObject,f\0writeDouble(QTextStream*,double)\0"
    "writeFloat(QTextStream*,float)\0"
    "theWrappedObject,i\0"
    "writeLongLong(QTextStream*,qlonglong)\0"
    "writeInt(QTextStream*,signed int)\0"
    "writeShort(QTextStream*,signed short)\0"
    "readByte(QTextStream*,char&)\0"
    "readDouble(QTextStream*,double&)\0"
    "readFloat(QTextStream*,float&)\0"
    "readLongLong(QTextStream*,qlonglong&)\0"
    "readInt(QTextStream*,signed int&)\0"
    "readShort(QTextStream*,signed short&)\0"
    "QChar\0padChar(QTextStream*)\0qint64\0"
    "pos(QTextStream*)\0QString\0"
    "theWrappedObject,maxlen\0"
    "read(QTextStream*,qint64)\0"
    "readAll(QTextStream*)\0"
    "readLine(QTextStream*,qint64)\0"
    "readLine(QTextStream*)\0"
    "QTextStream::RealNumberNotation\0"
    "realNumberNotation(QTextStream*)\0"
    "realNumberPrecision(QTextStream*)\0"
    "reset(QTextStream*)\0resetStatus(QTextStream*)\0"
    "theWrappedObject,pos\0seek(QTextStream*,qint64)\0"
    "theWrappedObject,enabled\0"
    "setAutoDetectUnicode(QTextStream*,bool)\0"
    "theWrappedObject,codec\0"
    "setCodec(QTextStream*,QTextCodec*)\0"
    "theWrappedObject,codecName\0"
    "setCodec(QTextStream*,const char*)\0"
    "theWrappedObject,device\0"
    "setDevice(QTextStream*,QIODevice*)\0"
    "theWrappedObject,alignment\0"
    "setFieldAlignment(QTextStream*,QTextStream::FieldAlignment)\0"
    "theWrappedObject,width\0"
    "setFieldWidth(QTextStream*,int)\0"
    "theWrappedObject,generate\0"
    "setGenerateByteOrderMark(QTextStream*,bool)\0"
    "theWrappedObject,base\0"
    "setIntegerBase(QTextStream*,int)\0"
    "theWrappedObject,locale\0"
    "setLocale(QTextStream*,QLocale)\0"
    "theWrappedObject,flags\0"
    "setNumberFlags(QTextStream*,QTextStream::NumberFlags)\0"
    "setPadChar(QTextStream*,QChar)\0"
    "theWrappedObject,notation\0"
    "setRealNumberNotation(QTextStream*,QTextStream::RealNumberNotation)\0"
    "theWrappedObject,precision\0"
    "setRealNumberPrecision(QTextStream*,int)\0"
    "theWrappedObject,status\0"
    "setStatus(QTextStream*,QTextStream::Status)\0"
    "skipWhiteSpace(QTextStream*)\0"
    "QTextStream::Status\0status(QTextStream*)\0"
    "RealNumberNotation\0NumberFlag\0NumberFlags\0"
    "FieldAlignment\0Status\0SmartNotation\0"
    "FixedNotation\0ScientificNotation\0"
    "ShowBase\0ForcePoint\0ForceSign\0"
    "UppercaseBase\0UppercaseDigits\0AlignLeft\0"
    "AlignRight\0AlignCenter\0AlignAccountingStyle\0"
    "Ok\0ReadPastEnd\0ReadCorruptData\0"
    "WriteFailed\0"
};

void PythonQtWrapper_QTextStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextStream *_t = static_cast<PythonQtWrapper_QTextStream *>(_o);
        switch (_id) {
        case 0: { QTextStream* _r = _t->new_QTextStream();
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 1: { QTextStream* _r = _t->new_QTextStream((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 2: { QTextStream* _r = _t->new_QTextStream((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 3: { QTextStream* _r = _t->new_QTextStream((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextStream((*reinterpret_cast< QTextStream*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->atEnd((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->autoDetectUnicode((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QTextCodec* _r = _t->codec((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 8: { QIODevice* _r = _t->device((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 9: { QTextStream::FieldAlignment _r = _t->fieldAlignment((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextStream::FieldAlignment*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->fieldWidth((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->flush((*reinterpret_cast< QTextStream*(*)>(_a[1]))); break;
        case 12: { bool _r = _t->generateByteOrderMark((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->integerBase((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { QLocale _r = _t->locale((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocale*>(_a[0]) = _r; }  break;
        case 15: { QTextStream::NumberFlags _r = _t->numberFlags((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextStream::NumberFlags*>(_a[0]) = _r; }  break;
        case 16: { QTextStream* _r = _t->writeBoolean((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< QBool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 17: { QTextStream* _r = _t->writeByte((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 18: { QTextStream* _r = _t->writeDouble((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 19: { QTextStream* _r = _t->writeFloat((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 20: { QTextStream* _r = _t->writeLongLong((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 21: { QTextStream* _r = _t->writeInt((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< signed int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 22: { QTextStream* _r = _t->writeShort((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< signed short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 23: { QTextStream* _r = _t->readByte((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 24: { QTextStream* _r = _t->readDouble((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 25: { QTextStream* _r = _t->readFloat((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 26: { QTextStream* _r = _t->readLongLong((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 27: { QTextStream* _r = _t->readInt((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< signed int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 28: { QTextStream* _r = _t->readShort((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< signed short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextStream**>(_a[0]) = _r; }  break;
        case 29: { QChar _r = _t->padChar((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 30: { qint64 _r = _t->pos((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->read((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { QString _r = _t->readAll((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { QString _r = _t->readLine((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 34: { QString _r = _t->readLine((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 35: { QTextStream::RealNumberNotation _r = _t->realNumberNotation((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextStream::RealNumberNotation*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->realNumberPrecision((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: _t->reset((*reinterpret_cast< QTextStream*(*)>(_a[1]))); break;
        case 38: _t->resetStatus((*reinterpret_cast< QTextStream*(*)>(_a[1]))); break;
        case 39: { bool _r = _t->seek((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->setAutoDetectUnicode((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->setCodec((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< QTextCodec*(*)>(_a[2]))); break;
        case 42: _t->setCodec((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 43: _t->setDevice((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 44: _t->setFieldAlignment((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< QTextStream::FieldAlignment(*)>(_a[2]))); break;
        case 45: _t->setFieldWidth((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->setGenerateByteOrderMark((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->setIntegerBase((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->setLocale((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2]))); break;
        case 49: _t->setNumberFlags((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< QTextStream::NumberFlags(*)>(_a[2]))); break;
        case 50: _t->setPadChar((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2]))); break;
        case 51: _t->setRealNumberNotation((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< QTextStream::RealNumberNotation(*)>(_a[2]))); break;
        case 52: _t->setRealNumberPrecision((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->setStatus((*reinterpret_cast< QTextStream*(*)>(_a[1])),(*reinterpret_cast< QTextStream::Status(*)>(_a[2]))); break;
        case 54: _t->skipWhiteSpace((*reinterpret_cast< QTextStream*(*)>(_a[1]))); break;
        case 55: { QTextStream::Status _r = _t->status((*reinterpret_cast< QTextStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextStream::Status*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextStream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextStream,
      qt_meta_data_PythonQtWrapper_QTextStream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextStream))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextStream*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QThreadPool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     151,  134,  130,   28, 0x0a,
     183,  134,  130,   28, 0x0a,
     211,   28,   29,   28, 0x0a,
     247,  134,  130,   28, 0x0a,
     276,  134,   28,   28, 0x0a,
     304,  134,   28,   28, 0x0a,
     363,  332,   28,   28, 0x0a,
     430,  398,   28,   28, 0x0a,
     501,  466,   28,   28, 0x0a,
     562,  536,   28,   28, 0x2a,
     598,  536,  593,   28, 0x0a,
     632,  134,   28,   28, 0x0a,
     681,  658,  593,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QThreadPool[] = {
    "PythonQtWrapper_QThreadPool\0\0QThreadPool*\0"
    "parent\0new_QThreadPool(QObject*)\0"
    "new_QThreadPool()\0obj\0"
    "delete_QThreadPool(QThreadPool*)\0int\0"
    "theWrappedObject\0activeThreadCount(QThreadPool*)\0"
    "expiryTimeout(QThreadPool*)\0"
    "static_QThreadPool_globalInstance()\0"
    "maxThreadCount(QThreadPool*)\0"
    "releaseThread(QThreadPool*)\0"
    "reserveThread(QThreadPool*)\0"
    "theWrappedObject,expiryTimeout\0"
    "setExpiryTimeout(QThreadPool*,int)\0"
    "theWrappedObject,maxThreadCount\0"
    "setMaxThreadCount(QThreadPool*,int)\0"
    "theWrappedObject,runnable,priority\0"
    "start(QThreadPool*,QRunnable*,int)\0"
    "theWrappedObject,runnable\0"
    "start(QThreadPool*,QRunnable*)\0bool\0"
    "tryStart(QThreadPool*,QRunnable*)\0"
    "waitForDone(QThreadPool*)\0"
    "theWrappedObject,msecs\0"
    "waitForDone(QThreadPool*,int)\0"
};

void PythonQtWrapper_QThreadPool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QThreadPool *_t = static_cast<PythonQtWrapper_QThreadPool *>(_o);
        switch (_id) {
        case 0: { QThreadPool* _r = _t->new_QThreadPool((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QThreadPool**>(_a[0]) = _r; }  break;
        case 1: { QThreadPool* _r = _t->new_QThreadPool();
            if (_a[0]) *reinterpret_cast< QThreadPool**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QThreadPool((*reinterpret_cast< QThreadPool*(*)>(_a[1]))); break;
        case 3: { int _r = _t->activeThreadCount((*reinterpret_cast< QThreadPool*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->expiryTimeout((*reinterpret_cast< QThreadPool*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QThreadPool* _r = _t->static_QThreadPool_globalInstance();
            if (_a[0]) *reinterpret_cast< QThreadPool**>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->maxThreadCount((*reinterpret_cast< QThreadPool*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->releaseThread((*reinterpret_cast< QThreadPool*(*)>(_a[1]))); break;
        case 8: _t->reserveThread((*reinterpret_cast< QThreadPool*(*)>(_a[1]))); break;
        case 9: _t->setExpiryTimeout((*reinterpret_cast< QThreadPool*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setMaxThreadCount((*reinterpret_cast< QThreadPool*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->start((*reinterpret_cast< QThreadPool*(*)>(_a[1])),(*reinterpret_cast< QRunnable*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->start((*reinterpret_cast< QThreadPool*(*)>(_a[1])),(*reinterpret_cast< QRunnable*(*)>(_a[2]))); break;
        case 13: { bool _r = _t->tryStart((*reinterpret_cast< QThreadPool*(*)>(_a[1])),(*reinterpret_cast< QRunnable*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->waitForDone((*reinterpret_cast< QThreadPool*(*)>(_a[1]))); break;
        case 15: { bool _r = _t->waitForDone((*reinterpret_cast< QThreadPool*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QThreadPool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QThreadPool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QThreadPool,
      qt_meta_data_PythonQtWrapper_QThreadPool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QThreadPool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QThreadPool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QThreadPool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QThreadPool))
        return static_cast<void*>(const_cast< PythonQtWrapper_QThreadPool*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QThreadPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTimeLine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       3,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   38,   27,   26, 0x0a,
      91,   82,   27,   26, 0x2a,
     110,   26,   27,   26, 0x2a,
     130,  126,   26,   26, 0x0a,
     180,  163,  159,   26, 0x0a,
     205,  163,  159,   26, 0x0a,
     235,  163,  229,   26, 0x0a,
     282,  163,  260,   26, 0x0a,
     326,  163,  305,   26, 0x0a,
     348,  163,  159,   26, 0x0a,
     382,  163,  369,   26, 0x0a,
     406,  163,  159,   26, 0x0a,
     449,  427,  159,   26, 0x0a,
     478,  163,  159,   26, 0x0a,
     523,  500,   26,   26, 0x0a,
     598,  571,   26,   26, 0x0a,
     670,  644,   26,   26, 0x0a,
     721,  698,   26,   26, 0x0a,
     784,  761,   26,   26, 0x0a,
     849,  812,   26,   26, 0x0a,
     906,  883,   26,   26, 0x0a,
     935,  761,   26,   26, 0x0a,
     991,  965,   26,   26, 0x0a,
    1025,  163,  159,   26, 0x0a,
    1065,  163, 1048,   26, 0x0a,
    1106, 1083,   26,   26, 0x0a,
    1142,  163,  159,   26, 0x0a,
    1169,  427,  229,   26, 0x0a,

 // enums: name, flags, count, data
    1198, 0x0,    2,  166,
    1208, 0x0,    6,  170,
    1219, 0x0,    3,  182,

 // enum data: key, value
    1225, uint(PythonQtWrapper_QTimeLine::Forward),
    1233, uint(PythonQtWrapper_QTimeLine::Backward),
    1242, uint(PythonQtWrapper_QTimeLine::EaseInCurve),
    1254, uint(PythonQtWrapper_QTimeLine::EaseOutCurve),
    1267, uint(PythonQtWrapper_QTimeLine::EaseInOutCurve),
    1282, uint(PythonQtWrapper_QTimeLine::LinearCurve),
    1294, uint(PythonQtWrapper_QTimeLine::SineCurve),
    1304, uint(PythonQtWrapper_QTimeLine::CosineCurve),
    1316, uint(PythonQtWrapper_QTimeLine::NotRunning),
    1327, uint(PythonQtWrapper_QTimeLine::Paused),
    1334, uint(PythonQtWrapper_QTimeLine::Running),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTimeLine[] = {
    "PythonQtWrapper_QTimeLine\0\0QTimeLine*\0"
    "duration,parent\0new_QTimeLine(int,QObject*)\0"
    "duration\0new_QTimeLine(int)\0new_QTimeLine()\0"
    "obj\0delete_QTimeLine(QTimeLine*)\0int\0"
    "theWrappedObject\0currentFrame(QTimeLine*)\0"
    "currentTime(QTimeLine*)\0qreal\0"
    "currentValue(QTimeLine*)\0QTimeLine::CurveShape\0"
    "curveShape(QTimeLine*)\0QTimeLine::Direction\0"
    "direction(QTimeLine*)\0duration(QTimeLine*)\0"
    "QEasingCurve\0easingCurve(QTimeLine*)\0"
    "endFrame(QTimeLine*)\0theWrappedObject,msec\0"
    "frameForTime(QTimeLine*,int)\0"
    "loopCount(QTimeLine*)\0theWrappedObject,shape\0"
    "setCurveShape(QTimeLine*,QTimeLine::CurveShape)\0"
    "theWrappedObject,direction\0"
    "setDirection(QTimeLine*,QTimeLine::Direction)\0"
    "theWrappedObject,duration\0"
    "setDuration(QTimeLine*,int)\0"
    "theWrappedObject,curve\0"
    "setEasingCurve(QTimeLine*,QEasingCurve)\0"
    "theWrappedObject,frame\0"
    "setEndFrame(QTimeLine*,int)\0"
    "theWrappedObject,startFrame,endFrame\0"
    "setFrameRange(QTimeLine*,int,int)\0"
    "theWrappedObject,count\0"
    "setLoopCount(QTimeLine*,int)\0"
    "setStartFrame(QTimeLine*,int)\0"
    "theWrappedObject,interval\0"
    "setUpdateInterval(QTimeLine*,int)\0"
    "startFrame(QTimeLine*)\0QTimeLine::State\0"
    "state(QTimeLine*)\0theWrappedObject,event\0"
    "timerEvent(QTimeLine*,QTimerEvent*)\0"
    "updateInterval(QTimeLine*)\0"
    "valueForTime(QTimeLine*,int)\0Direction\0"
    "CurveShape\0State\0Forward\0Backward\0"
    "EaseInCurve\0EaseOutCurve\0EaseInOutCurve\0"
    "LinearCurve\0SineCurve\0CosineCurve\0"
    "NotRunning\0Paused\0Running\0"
};

void PythonQtWrapper_QTimeLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTimeLine *_t = static_cast<PythonQtWrapper_QTimeLine *>(_o);
        switch (_id) {
        case 0: { QTimeLine* _r = _t->new_QTimeLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTimeLine**>(_a[0]) = _r; }  break;
        case 1: { QTimeLine* _r = _t->new_QTimeLine((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeLine**>(_a[0]) = _r; }  break;
        case 2: { QTimeLine* _r = _t->new_QTimeLine();
            if (_a[0]) *reinterpret_cast< QTimeLine**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTimeLine((*reinterpret_cast< QTimeLine*(*)>(_a[1]))); break;
        case 4: { int _r = _t->currentFrame((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->currentTime((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->currentValue((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { QTimeLine::CurveShape _r = _t->curveShape((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeLine::CurveShape*>(_a[0]) = _r; }  break;
        case 8: { QTimeLine::Direction _r = _t->direction((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeLine::Direction*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->duration((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QEasingCurve _r = _t->easingCurve((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEasingCurve*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->endFrame((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->frameForTime((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->loopCount((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->setCurveShape((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< QTimeLine::CurveShape(*)>(_a[2]))); break;
        case 15: _t->setDirection((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< QTimeLine::Direction(*)>(_a[2]))); break;
        case 16: _t->setDuration((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->setEasingCurve((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< const QEasingCurve(*)>(_a[2]))); break;
        case 18: _t->setEndFrame((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setFrameRange((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->setLoopCount((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->setStartFrame((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->setUpdateInterval((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: { int _r = _t->startFrame((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { QTimeLine::State _r = _t->state((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeLine::State*>(_a[0]) = _r; }  break;
        case 25: _t->timerEvent((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 26: { int _r = _t->updateInterval((*reinterpret_cast< QTimeLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { qreal _r = _t->valueForTime((*reinterpret_cast< QTimeLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTimeLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTimeLine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTimeLine,
      qt_meta_data_PythonQtWrapper_QTimeLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTimeLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTimeLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTimeLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTimeLine))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTimeLine*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTimeLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTimer[] = {

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
      39,   32,   24,   23, 0x0a,
      60,   23,   24,   23, 0x2a,
      77,   73,   23,   23, 0x0a,
     121,  104,  100,   23, 0x0a,
     144,  104,  139,   23, 0x0a,
     162,  104,  139,   23, 0x0a,
     206,  184,   23,   23, 0x0a,
     259,  231,   23,   23, 0x0a,
     308,  287,   23,   23, 0x0a,
     383,  359,   23,   23, 0x0a,
     416,  104,  100,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTimer[] = {
    "PythonQtWrapper_QTimer\0\0QTimer*\0parent\0"
    "new_QTimer(QObject*)\0new_QTimer()\0obj\0"
    "delete_QTimer(QTimer*)\0int\0theWrappedObject\0"
    "interval(QTimer*)\0bool\0isActive(QTimer*)\0"
    "isSingleShot(QTimer*)\0theWrappedObject,msec\0"
    "setInterval(QTimer*,int)\0"
    "theWrappedObject,singleShot\0"
    "setSingleShot(QTimer*,bool)\0"
    "msec,receiver,member\0"
    "static_QTimer_singleShot(int,QObject*,const char*)\0"
    "theWrappedObject,arg__1\0"
    "timerEvent(QTimer*,QTimerEvent*)\0"
    "timerId(QTimer*)\0"
};

void PythonQtWrapper_QTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTimer *_t = static_cast<PythonQtWrapper_QTimer *>(_o);
        switch (_id) {
        case 0: { QTimer* _r = _t->new_QTimer((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimer**>(_a[0]) = _r; }  break;
        case 1: { QTimer* _r = _t->new_QTimer();
            if (_a[0]) *reinterpret_cast< QTimer**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTimer((*reinterpret_cast< QTimer*(*)>(_a[1]))); break;
        case 3: { int _r = _t->interval((*reinterpret_cast< QTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isActive((*reinterpret_cast< QTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isSingleShot((*reinterpret_cast< QTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setInterval((*reinterpret_cast< QTimer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setSingleShot((*reinterpret_cast< QTimer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->static_QTimer_singleShot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 9: _t->timerEvent((*reinterpret_cast< QTimer*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 10: { int _r = _t->timerId((*reinterpret_cast< QTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTimer,
      qt_meta_data_PythonQtWrapper_QTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTimer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTimer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTimerEvent[] = {

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
      50,   42,   29,   28, 0x0a,
      75,   71,   28,   28, 0x0a,
     129,  112,  108,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTimerEvent[] = {
    "PythonQtWrapper_QTimerEvent\0\0QTimerEvent*\0"
    "timerId\0new_QTimerEvent(int)\0obj\0"
    "delete_QTimerEvent(QTimerEvent*)\0int\0"
    "theWrappedObject\0timerId(QTimerEvent*)\0"
};

void PythonQtWrapper_QTimerEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTimerEvent *_t = static_cast<PythonQtWrapper_QTimerEvent *>(_o);
        switch (_id) {
        case 0: { QTimerEvent* _r = _t->new_QTimerEvent((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimerEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTimerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 2: { int _r = _t->timerId((*reinterpret_cast< QTimerEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTimerEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTimerEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTimerEvent,
      qt_meta_data_PythonQtWrapper_QTimerEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTimerEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTimerEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTimerEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTimerEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTimerEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTimerEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTranslator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     152,  135,  130,   28, 0x0a,
     231,  174,  130,   28, 0x0a,
     340,  290,  130,   28, 0x2a,
     431,  391,  130,   28, 0x2a,
     507,  474,  130,   28, 0x2a,
     603,  542,  130,   28, 0x0a,
     708,  654,  130,   28, 0x2a,
     787,  751,  130,   28, 0x2a,
     848,  822,  130,   28, 0x2a,
     901,  875,  130,   28, 0x0a,
     996,  945,  937,   28, 0x0a,
    1092, 1056,  937,   28, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTranslator[] = {
    "PythonQtWrapper_QTranslator\0\0QTranslator*\0"
    "parent\0new_QTranslator(QObject*)\0"
    "new_QTranslator()\0obj\0"
    "delete_QTranslator(QTranslator*)\0bool\0"
    "theWrappedObject\0isEmpty(QTranslator*)\0"
    "theWrappedObject,locale,filename,prefix,directory,suffix\0"
    "load(QTranslator*,QLocale,QString,QString,QString,QString)\0"
    "theWrappedObject,locale,filename,prefix,directory\0"
    "load(QTranslator*,QLocale,QString,QString,QString)\0"
    "theWrappedObject,locale,filename,prefix\0"
    "load(QTranslator*,QLocale,QString,QString)\0"
    "theWrappedObject,locale,filename\0"
    "load(QTranslator*,QLocale,QString)\0"
    "theWrappedObject,filename,directory,search_delimiters,suffix\0"
    "load(QTranslator*,QString,QString,QString,QString)\0"
    "theWrappedObject,filename,directory,search_delimiters\0"
    "load(QTranslator*,QString,QString,QString)\0"
    "theWrappedObject,filename,directory\0"
    "load(QTranslator*,QString,QString)\0"
    "theWrappedObject,filename\0"
    "load(QTranslator*,QString)\0"
    "theWrappedObject,data,len\0"
    "load(QTranslator*,const uchar*,int)\0"
    "QString\0theWrappedObject,context,sourceText,disambiguation\0"
    "translate(QTranslator*,const char*,const char*,const char*)\0"
    "theWrappedObject,context,sourceText\0"
    "translate(QTranslator*,const char*,const char*)\0"
};

void PythonQtWrapper_QTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTranslator *_t = static_cast<PythonQtWrapper_QTranslator *>(_o);
        switch (_id) {
        case 0: { QTranslator* _r = _t->new_QTranslator((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTranslator**>(_a[0]) = _r; }  break;
        case 1: { QTranslator* _r = _t->new_QTranslator();
            if (_a[0]) *reinterpret_cast< QTranslator**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTranslator((*reinterpret_cast< QTranslator*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isEmpty((*reinterpret_cast< QTranslator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->load((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const uchar*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->translate((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->translate((*reinterpret_cast< QTranslator*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTranslator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTranslator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTranslator,
      qt_meta_data_PythonQtWrapper_QTranslator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTranslator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTranslator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTranslator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QUuid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       2,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   22,   23,   22, 0x0a,
      49,   42,   23,   22, 0x0a,
      71,   42,   23,   22, 0x0a,
     122,   90,   23,   22, 0x0a,
     206,  200,   23,   22, 0x0a,
     227,  223,   22,   22, 0x0a,
     254,   22,  248,   22, 0x0a,
     280,   42,  248,   22, 0x0a,
     339,  322,  317,   22, 0x0a,
     376,  354,  317,   22, 0x0a,
     420,  397,  317,   22, 0x0a,
     465,  441,   22,   22, 0x0a,
     494,  354,  317,   22, 0x0a,
     515,  397,  317,   22, 0x0a,
     536,  441,   22,   22, 0x0a,
     577,  322,  566,   22, 0x0a,
     597,  322,  566,   22, 0x0a,
     623,  322,  615,   22, 0x0a,
     655,  322,  640,   22, 0x0a,
     686,  322,  671,   22, 0x0a,
     702,   22,  615,   22, 0x0a,
     722,  223,  317,   22, 0x0a,
     765,  742,   22,   22, 0x0a,
     796,  322,  791,   22, 0x0a,
     840,  817,   22,   22, 0x0a,
     875,  322,  868,   22, 0x0a,
     919,  896,   22,   22, 0x0a,
     947,  322,  868,   22, 0x0a,

 // enums: name, flags, count, data
     968, 0x0,    5,  162,
     976, 0x0,    5,  172,

 // enum data: key, value
     984, uint(PythonQtWrapper_QUuid::VarUnknown),
     995, uint(PythonQtWrapper_QUuid::NCS),
     999, uint(PythonQtWrapper_QUuid::DCE),
    1003, uint(PythonQtWrapper_QUuid::Microsoft),
    1013, uint(PythonQtWrapper_QUuid::Reserved),
    1022, uint(PythonQtWrapper_QUuid::VerUnknown),
    1033, uint(PythonQtWrapper_QUuid::Time),
    1038, uint(PythonQtWrapper_QUuid::EmbeddedPOSIX),
    1052, uint(PythonQtWrapper_QUuid::Name),
    1057, uint(PythonQtWrapper_QUuid::Random),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QUuid[] = {
    "PythonQtWrapper_QUuid\0\0QUuid*\0new_QUuid()\0"
    "arg__1\0new_QUuid(QByteArray)\0"
    "new_QUuid(QString)\0l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8\0"
    "new_QUuid(uint,ushort,ushort,uchar,uchar,uchar,uchar,uchar,uchar,uchar"
    ",uchar)\0"
    "other\0new_QUuid(QUuid)\0obj\0"
    "delete_QUuid(QUuid*)\0QUuid\0"
    "static_QUuid_createUuid()\0"
    "static_QUuid_fromRfc4122(QByteArray)\0"
    "bool\0theWrappedObject\0isNull(QUuid*)\0"
    "theWrappedObject,orig\0__ne__(QUuid*,QUuid)\0"
    "theWrappedObject,other\0__lt__(QUuid*,QUuid)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QUuid*,QDataStream&)\0"
    "__eq__(QUuid*,QUuid)\0__gt__(QUuid*,QUuid)\0"
    "readFrom(QUuid*,QDataStream&)\0QByteArray\0"
    "toByteArray(QUuid*)\0toRfc4122(QUuid*)\0"
    "QString\0toString(QUuid*)\0QUuid::Variant\0"
    "variant(QUuid*)\0QUuid::Version\0"
    "version(QUuid*)\0py_toString(QUuid*)\0"
    "__nonzero__(QUuid*)\0theWrappedObject,data1\0"
    "py_set_data1(QUuid*,uint)\0uint\0"
    "py_get_data1(QUuid*)\0theWrappedObject,data2\0"
    "py_set_data2(QUuid*,ushort)\0ushort\0"
    "py_get_data2(QUuid*)\0theWrappedObject,data3\0"
    "py_set_data3(QUuid*,ushort)\0"
    "py_get_data3(QUuid*)\0Variant\0Version\0"
    "VarUnknown\0NCS\0DCE\0Microsoft\0Reserved\0"
    "VerUnknown\0Time\0EmbeddedPOSIX\0Name\0"
    "Random\0"
};

void PythonQtWrapper_QUuid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QUuid *_t = static_cast<PythonQtWrapper_QUuid *>(_o);
        switch (_id) {
        case 0: { QUuid* _r = _t->new_QUuid();
            if (_a[0]) *reinterpret_cast< QUuid**>(_a[0]) = _r; }  break;
        case 1: { QUuid* _r = _t->new_QUuid((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUuid**>(_a[0]) = _r; }  break;
        case 2: { QUuid* _r = _t->new_QUuid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUuid**>(_a[0]) = _r; }  break;
        case 3: { QUuid* _r = _t->new_QUuid((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< ushort(*)>(_a[2])),(*reinterpret_cast< ushort(*)>(_a[3])),(*reinterpret_cast< uchar(*)>(_a[4])),(*reinterpret_cast< uchar(*)>(_a[5])),(*reinterpret_cast< uchar(*)>(_a[6])),(*reinterpret_cast< uchar(*)>(_a[7])),(*reinterpret_cast< uchar(*)>(_a[8])),(*reinterpret_cast< uchar(*)>(_a[9])),(*reinterpret_cast< uchar(*)>(_a[10])),(*reinterpret_cast< uchar(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< QUuid**>(_a[0]) = _r; }  break;
        case 4: { QUuid* _r = _t->new_QUuid((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUuid**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QUuid((*reinterpret_cast< QUuid*(*)>(_a[1]))); break;
        case 6: { QUuid _r = _t->static_QUuid_createUuid();
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = _r; }  break;
        case 7: { QUuid _r = _t->static_QUuid_fromRfc4122((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isNull((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__ne__((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__lt__((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->writeTo((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 12: { bool _r = _t->__eq__((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__gt__((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->readFrom((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 15: { QByteArray _r = _t->toByteArray((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 16: { QByteArray _r = _t->toRfc4122((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->toString((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QUuid::Variant _r = _t->variant((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUuid::Variant*>(_a[0]) = _r; }  break;
        case 19: { QUuid::Version _r = _t->version((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUuid::Version*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->py_toString((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->__nonzero__((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->py_set_data1((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 23: { uint _r = _t->py_get_data1((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 24: _t->py_set_data2((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< ushort(*)>(_a[2]))); break;
        case 25: { ushort _r = _t->py_get_data2((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ushort*>(_a[0]) = _r; }  break;
        case 26: _t->py_set_data3((*reinterpret_cast< QUuid*(*)>(_a[1])),(*reinterpret_cast< ushort(*)>(_a[2]))); break;
        case 27: { ushort _r = _t->py_get_data3((*reinterpret_cast< QUuid*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ushort*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QUuid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QUuid::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QUuid,
      qt_meta_data_PythonQtWrapper_QUuid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QUuid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QUuid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QUuid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QUuid))
        return static_cast<void*>(const_cast< PythonQtWrapper_QUuid*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QUuid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QVariantAnimation[] = {

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
      61,   54,   35,   34, 0x0a,
      93,   34,   35,   34, 0x2a,
     121,  117,   34,   34, 0x0a,
     192,  175,  166,   34, 0x0a,
     229,  175,  225,   34, 0x0a,
     271,  175,  258,   34, 0x0a,
     303,  175,  166,   34, 0x0a,
     360,  337,  332,   34, 0x0a,
     428,  394,  166,   34, 0x0a,
     507,  485,  166,   34, 0x0a,
     576,  175,  544,   34, 0x0a,
     629,  606,   34,   34, 0x0a,
     689,  665,   34,   34, 0x0a,
     760,  737,   34,   34, 0x0a,
     829,  801,   34,   34, 0x0a,
     902,  878,   34,   34, 0x0a,
     967,  737,   34,   34, 0x0a,
    1010,  175,  166,   34, 0x0a,
    1065, 1041,   34,   34, 0x0a,
    1142, 1107,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QVariantAnimation[] = {
    "PythonQtWrapper_QVariantAnimation\0\0"
    "QVariantAnimation*\0parent\0"
    "new_QVariantAnimation(QObject*)\0"
    "new_QVariantAnimation()\0obj\0"
    "delete_QVariantAnimation(QVariantAnimation*)\0"
    "QVariant\0theWrappedObject\0"
    "currentValue(QVariantAnimation*)\0int\0"
    "duration(QVariantAnimation*)\0QEasingCurve\0"
    "easingCurve(QVariantAnimation*)\0"
    "endValue(QVariantAnimation*)\0bool\0"
    "theWrappedObject,event\0"
    "event(QVariantAnimation*,QEvent*)\0"
    "theWrappedObject,from,to,progress\0"
    "interpolated(QVariantAnimation*,QVariant,QVariant,qreal)\0"
    "theWrappedObject,step\0"
    "keyValueAt(QVariantAnimation*,qreal)\0"
    "QVector<QPair<qreal,QVariant> >\0"
    "keyValues(QVariantAnimation*)\0"
    "theWrappedObject,msecs\0"
    "setDuration(QVariantAnimation*,int)\0"
    "theWrappedObject,easing\0"
    "setEasingCurve(QVariantAnimation*,QEasingCurve)\0"
    "theWrappedObject,value\0"
    "setEndValue(QVariantAnimation*,QVariant)\0"
    "theWrappedObject,step,value\0"
    "setKeyValueAt(QVariantAnimation*,qreal,QVariant)\0"
    "theWrappedObject,values\0"
    "setKeyValues(QVariantAnimation*,QVector<QPair<qreal,QVariant> >)\0"
    "setStartValue(QVariantAnimation*,QVariant)\0"
    "startValue(QVariantAnimation*)\0"
    "theWrappedObject,arg__1\0"
    "updateCurrentTime(QVariantAnimation*,int)\0"
    "theWrappedObject,newState,oldState\0"
    "updateState(QVariantAnimation*,QAbstractAnimation::State,QAbstractAnim"
    "ation::State)\0"
};

void PythonQtWrapper_QVariantAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QVariantAnimation *_t = static_cast<PythonQtWrapper_QVariantAnimation *>(_o);
        switch (_id) {
        case 0: { QVariantAnimation* _r = _t->new_QVariantAnimation((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantAnimation**>(_a[0]) = _r; }  break;
        case 1: { QVariantAnimation* _r = _t->new_QVariantAnimation();
            if (_a[0]) *reinterpret_cast< QVariantAnimation**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QVariantAnimation((*reinterpret_cast< QVariantAnimation*(*)>(_a[1]))); break;
        case 3: { QVariant _r = _t->currentValue((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->duration((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QEasingCurve _r = _t->easingCurve((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEasingCurve*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->endValue((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->event((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->interpolated((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { QVariant _r = _t->keyValueAt((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: { QVector<QPair<qreal,QVariant> > _r = _t->keyValues((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPair<qreal,QVariant> >*>(_a[0]) = _r; }  break;
        case 11: _t->setDuration((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->setEasingCurve((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< const QEasingCurve(*)>(_a[2]))); break;
        case 13: _t->setEndValue((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 14: _t->setKeyValueAt((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 15: _t->setKeyValues((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPair<qreal,QVariant> >(*)>(_a[2]))); break;
        case 16: _t->setStartValue((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 17: { QVariant _r = _t->startValue((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 18: _t->updateCurrentTime((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->updateState((*reinterpret_cast< QVariantAnimation*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QVariantAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QVariantAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVariantAnimation,
      qt_meta_data_PythonQtWrapper_QVariantAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QVariantAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QVariantAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QVariantAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVariantAnimation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVariantAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVariantAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QWaitCondition[] = {

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
      48,   31,   32,   31, 0x0a,
      73,   69,   31,   31, 0x0a,
     145,  117,  112,   31, 0x0a,
     204,  181,  112,   31, 0x2a,
     270,  234,  112,   31, 0x0a,
     345,  314,  112,   31, 0x2a,
     400,  383,   31,   31, 0x0a,
     425,  383,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QWaitCondition[] = {
    "PythonQtWrapper_QWaitCondition\0\0"
    "QWaitCondition*\0new_QWaitCondition()\0"
    "obj\0delete_QWaitCondition(QWaitCondition*)\0"
    "bool\0theWrappedObject,mutex,time\0"
    "wait(QWaitCondition*,QMutex*,ulong)\0"
    "theWrappedObject,mutex\0"
    "wait(QWaitCondition*,QMutex*)\0"
    "theWrappedObject,readWriteLock,time\0"
    "wait(QWaitCondition*,QReadWriteLock*,ulong)\0"
    "theWrappedObject,readWriteLock\0"
    "wait(QWaitCondition*,QReadWriteLock*)\0"
    "theWrappedObject\0wakeAll(QWaitCondition*)\0"
    "wakeOne(QWaitCondition*)\0"
};

void PythonQtWrapper_QWaitCondition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QWaitCondition *_t = static_cast<PythonQtWrapper_QWaitCondition *>(_o);
        switch (_id) {
        case 0: { QWaitCondition* _r = _t->new_QWaitCondition();
            if (_a[0]) *reinterpret_cast< QWaitCondition**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QWaitCondition((*reinterpret_cast< QWaitCondition*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->wait((*reinterpret_cast< QWaitCondition*(*)>(_a[1])),(*reinterpret_cast< QMutex*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->wait((*reinterpret_cast< QWaitCondition*(*)>(_a[1])),(*reinterpret_cast< QMutex*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->wait((*reinterpret_cast< QWaitCondition*(*)>(_a[1])),(*reinterpret_cast< QReadWriteLock*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->wait((*reinterpret_cast< QWaitCondition*(*)>(_a[1])),(*reinterpret_cast< QReadWriteLock*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->wakeAll((*reinterpret_cast< QWaitCondition*(*)>(_a[1]))); break;
        case 7: _t->wakeOne((*reinterpret_cast< QWaitCondition*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QWaitCondition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QWaitCondition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QWaitCondition,
      qt_meta_data_PythonQtWrapper_QWaitCondition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QWaitCondition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QWaitCondition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QWaitCondition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QWaitCondition))
        return static_cast<void*>(const_cast< PythonQtWrapper_QWaitCondition*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QWaitCondition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlStreamEntityResolver[] = {

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
      68,   41,   42,   41, 0x0a,
     103,   99,   41,   41, 0x0a,
     205,  170,  162,   41, 0x0a,
     284,  262,  162,   41, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlStreamEntityResolver[] = {
    "PythonQtWrapper_QXmlStreamEntityResolver\0"
    "\0QXmlStreamEntityResolver*\0"
    "new_QXmlStreamEntityResolver()\0obj\0"
    "delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver*)\0"
    "QString\0theWrappedObject,publicId,systemId\0"
    "resolveEntity(QXmlStreamEntityResolver*,QString,QString)\0"
    "theWrappedObject,name\0"
    "resolveUndeclaredEntity(QXmlStreamEntityResolver*,QString)\0"
};

void PythonQtWrapper_QXmlStreamEntityResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlStreamEntityResolver *_t = static_cast<PythonQtWrapper_QXmlStreamEntityResolver *>(_o);
        switch (_id) {
        case 0: { QXmlStreamEntityResolver* _r = _t->new_QXmlStreamEntityResolver();
            if (_a[0]) *reinterpret_cast< QXmlStreamEntityResolver**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlStreamEntityResolver((*reinterpret_cast< QXmlStreamEntityResolver*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->resolveEntity((*reinterpret_cast< QXmlStreamEntityResolver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->resolveUndeclaredEntity((*reinterpret_cast< QXmlStreamEntityResolver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlStreamEntityResolver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlStreamEntityResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlStreamEntityResolver,
      qt_meta_data_PythonQtWrapper_QXmlStreamEntityResolver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlStreamEntityResolver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlStreamEntityResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlStreamEntityResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlStreamEntityResolver))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlStreamEntityResolver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlStreamEntityResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QtConcurrent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      29, 0x0,    3,   26,
      42, 0x1,    3,   32,
      56, 0x0,    2,   38,

 // enum data: key, value
      77, uint(PythonQtWrapper_QtConcurrent::UnorderedReduce),
      93, uint(PythonQtWrapper_QtConcurrent::OrderedReduce),
     107, uint(PythonQtWrapper_QtConcurrent::SequentialReduce),
      77, uint(PythonQtWrapper_QtConcurrent::UnorderedReduce),
      93, uint(PythonQtWrapper_QtConcurrent::OrderedReduce),
     107, uint(PythonQtWrapper_QtConcurrent::SequentialReduce),
     124, uint(PythonQtWrapper_QtConcurrent::ThrottleThread),
     139, uint(PythonQtWrapper_QtConcurrent::ThreadFinished),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QtConcurrent[] = {
    "PythonQtWrapper_QtConcurrent\0ReduceOption\0"
    "ReduceOptions\0ThreadFunctionResult\0"
    "UnorderedReduce\0OrderedReduce\0"
    "SequentialReduce\0ThrottleThread\0"
    "ThreadFinished\0"
};

void PythonQtWrapper_QtConcurrent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PythonQtWrapper_QtConcurrent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QtConcurrent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QtConcurrent,
      qt_meta_data_PythonQtWrapper_QtConcurrent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QtConcurrent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QtConcurrent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QtConcurrent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QtConcurrent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QtConcurrent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QtConcurrent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
