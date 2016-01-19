/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_core0.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_core/com_trolltech_qt_core0.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_core0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QAbstractAnimation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   56,   36,   35, 0x0a,
      96,   35,   36,   35, 0x2a,
     125,  121,   35,   35, 0x0a,
     193,  176,  172,   35, 0x0a,
     226,  176,  172,   35, 0x0a,
     263,  176,  172,   35, 0x0a,
     326,  176,  296,   35, 0x0a,
     385,  362,  357,   35, 0x0a,
     437,  176,  420,   35, 0x0a,
     464,  176,  172,   35, 0x0a,
     522,  495,   35,   35, 0x0a,
     613,  586,   35,   35, 0x0a,
     677,  176,  651,   35, 0x0a,
     704,  176,  172,   35, 0x0a,
     739,  495,   35,   35, 0x0a,
     841,  806,   35,   35, 0x0a,

 // enums: name, flags, count, data
     926, 0x0,    2,   98,

 // enum data: key, value
     941, uint(PythonQtWrapper_QAbstractAnimation::KeepWhenStopped),
     957, uint(PythonQtWrapper_QAbstractAnimation::DeleteWhenStopped),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractAnimation[] = {
    "PythonQtWrapper_QAbstractAnimation\0\0"
    "QAbstractAnimation*\0parent\0"
    "new_QAbstractAnimation(QObject*)\0"
    "new_QAbstractAnimation()\0obj\0"
    "delete_QAbstractAnimation(QAbstractAnimation*)\0"
    "int\0theWrappedObject\0"
    "currentLoop(QAbstractAnimation*)\0"
    "currentLoopTime(QAbstractAnimation*)\0"
    "currentTime(QAbstractAnimation*)\0"
    "QAbstractAnimation::Direction\0"
    "direction(QAbstractAnimation*)\0bool\0"
    "theWrappedObject,event\0"
    "event(QAbstractAnimation*,QEvent*)\0"
    "QAnimationGroup*\0group(QAbstractAnimation*)\0"
    "loopCount(QAbstractAnimation*)\0"
    "theWrappedObject,direction\0"
    "setDirection(QAbstractAnimation*,QAbstractAnimation::Direction)\0"
    "theWrappedObject,loopCount\0"
    "setLoopCount(QAbstractAnimation*,int)\0"
    "QAbstractAnimation::State\0"
    "state(QAbstractAnimation*)\0"
    "totalDuration(QAbstractAnimation*)\0"
    "updateDirection(QAbstractAnimation*,QAbstractAnimation::Direction)\0"
    "theWrappedObject,newState,oldState\0"
    "updateState(QAbstractAnimation*,QAbstractAnimation::State,QAbstractAni"
    "mation::State)\0"
    "DeletionPolicy\0KeepWhenStopped\0"
    "DeleteWhenStopped\0"
};

void PythonQtWrapper_QAbstractAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractAnimation *_t = static_cast<PythonQtWrapper_QAbstractAnimation *>(_o);
        switch (_id) {
        case 0: { QAbstractAnimation* _r = _t->new_QAbstractAnimation((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractAnimation**>(_a[0]) = _r; }  break;
        case 1: { QAbstractAnimation* _r = _t->new_QAbstractAnimation();
            if (_a[0]) *reinterpret_cast< QAbstractAnimation**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractAnimation((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1]))); break;
        case 3: { int _r = _t->currentLoop((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->currentLoopTime((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->currentTime((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QAbstractAnimation::Direction _r = _t->direction((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractAnimation::Direction*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->event((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QAnimationGroup* _r = _t->group((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAnimationGroup**>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->loopCount((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->setDirection((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::Direction(*)>(_a[2]))); break;
        case 11: _t->setLoopCount((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: { QAbstractAnimation::State _r = _t->state((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractAnimation::State*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->totalDuration((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->updateDirection((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::Direction(*)>(_a[2]))); break;
        case 15: _t->updateState((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractAnimation,
      qt_meta_data_PythonQtWrapper_QAbstractAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractAnimation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QAbstractItemModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   56,   36,   35, 0x0a,
      96,   35,   36,   35, 0x2a,
     125,  121,   35,   35, 0x0a,
     207,  184,  172,   35, 0x0a,
     275,  251,  246,   35, 0x0a,
     368,  321,  246,   35, 0x0a,
     454,  251,   35,   35, 0x0a,
     511,  184,  497,   35, 0x0a,
     550,  251,  246,   35, 0x0a,
     612,  595,  246,   35, 0x2a,
     680,  645,  246,   35, 0x0a,
     758,  730,  246,   35, 0x2a,
     847,  805,  796,   35, 0x0a,
     940,  903,  796,   35, 0x2a,
    1023,  992,  246,   35, 0x0a,
    1097, 1073,  246,   35, 0x2a,
    1172, 1135,  246,   35, 0x0a,
    1257, 1227,  246,   35, 0x2a,
    1328, 1300,  246,   35, 0x0a,
    1396, 1375,  246,   35, 0x2a,
    1465, 1431,  246,   35, 0x0a,
    1544, 1517,  246,   35, 0x2a,
    1603,  184, 1584,   35, 0x0a,
    1709, 1664, 1645,   35, 0x0a,
    1819, 1780, 1645,   35, 0x2a,
    1909, 1875, 1645,   35, 0x2a,
    1997, 1972, 1961,   35, 0x0a,
    2058,  595, 2046,   35, 0x0a,
    2098,  595, 2089,   35, 0x0a,
    2126,  992,  246,   35, 0x0a,
    2176, 1073,  246,   35, 0x2a,
    2214, 1135,  246,   35, 0x0a,
    2269, 1227,  246,   35, 0x2a,
    2312, 1300,  246,   35, 0x0a,
    2359, 1375,  246,   35, 0x2a,
    2394, 1431,  246,   35, 0x0a,
    2446, 1517,  246,   35, 0x2a,
    2486,  595,   35,   35, 0x0a,
    2543,  595, 2514,   35, 0x0a,
    2608, 2574,  246,   35, 0x0a,
    2691, 2662,  246,   35, 0x2a,
    2789, 2741,  246,   35, 0x0a,
    2900, 2857,  246,   35, 0x2a,
    2993, 2964,  246,   35, 0x0a,
    3081, 3057,   35,   35, 0x0a,
    3174, 3142,  172,   35, 0x0a,
    3253, 3223,   35,   35, 0x0a,
    3297, 1073,   35,   35, 0x2a,
    3333,  184, 3327,   35, 0x0a,
    3371,  595,  246,   35, 0x0a,
    3415,  595, 3399,   35, 0x0a,
    3457,  595, 3399,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractItemModel[] = {
    "PythonQtWrapper_QAbstractItemModel\0\0"
    "QAbstractItemModel*\0parent\0"
    "new_QAbstractItemModel(QObject*)\0"
    "new_QAbstractItemModel()\0obj\0"
    "delete_QAbstractItemModel(QAbstractItemModel*)\0"
    "QModelIndex\0theWrappedObject,index\0"
    "buddy(QAbstractItemModel*,QModelIndex)\0"
    "bool\0theWrappedObject,parent\0"
    "canFetchMore(QAbstractItemModel*,QModelIndex)\0"
    "theWrappedObject,data,action,row,column,parent\0"
    "dropMimeData(QAbstractItemModel*,const QMimeData*,Qt::DropAction,int,i"
    "nt,QModelIndex)\0"
    "fetchMore(QAbstractItemModel*,QModelIndex)\0"
    "Qt::ItemFlags\0flags(QAbstractItemModel*,QModelIndex)\0"
    "hasChildren(QAbstractItemModel*,QModelIndex)\0"
    "theWrappedObject\0hasChildren(QAbstractItemModel*)\0"
    "theWrappedObject,row,column,parent\0"
    "hasIndex(QAbstractItemModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,column\0"
    "hasIndex(QAbstractItemModel*,int,int)\0"
    "QVariant\0theWrappedObject,section,orientation,role\0"
    "headerData(QAbstractItemModel*,int,Qt::Orientation,int)\0"
    "theWrappedObject,section,orientation\0"
    "headerData(QAbstractItemModel*,int,Qt::Orientation)\0"
    "theWrappedObject,column,parent\0"
    "insertColumn(QAbstractItemModel*,int,QModelIndex)\0"
    "theWrappedObject,column\0"
    "insertColumn(QAbstractItemModel*,int)\0"
    "theWrappedObject,column,count,parent\0"
    "insertColumns(QAbstractItemModel*,int,int,QModelIndex)\0"
    "theWrappedObject,column,count\0"
    "insertColumns(QAbstractItemModel*,int,int)\0"
    "theWrappedObject,row,parent\0"
    "insertRow(QAbstractItemModel*,int,QModelIndex)\0"
    "theWrappedObject,row\0"
    "insertRow(QAbstractItemModel*,int)\0"
    "theWrappedObject,row,count,parent\0"
    "insertRows(QAbstractItemModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,count\0"
    "insertRows(QAbstractItemModel*,int,int)\0"
    "QMap<int,QVariant>\0"
    "itemData(QAbstractItemModel*,QModelIndex)\0"
    "QList<QModelIndex>\0"
    "theWrappedObject,start,role,value,hits,flags\0"
    "match(QAbstractItemModel*,QModelIndex,int,QVariant,int,Qt::MatchFlags)\0"
    "theWrappedObject,start,role,value,hits\0"
    "match(QAbstractItemModel*,QModelIndex,int,QVariant,int)\0"
    "theWrappedObject,start,role,value\0"
    "match(QAbstractItemModel*,QModelIndex,int,QVariant)\0"
    "QMimeData*\0theWrappedObject,indexes\0"
    "mimeData(QAbstractItemModel*,QList<QModelIndex>)\0"
    "QStringList\0mimeTypes(QAbstractItemModel*)\0"
    "QObject*\0parent(QAbstractItemModel*)\0"
    "removeColumn(QAbstractItemModel*,int,QModelIndex)\0"
    "removeColumn(QAbstractItemModel*,int)\0"
    "removeColumns(QAbstractItemModel*,int,int,QModelIndex)\0"
    "removeColumns(QAbstractItemModel*,int,int)\0"
    "removeRow(QAbstractItemModel*,int,QModelIndex)\0"
    "removeRow(QAbstractItemModel*,int)\0"
    "removeRows(QAbstractItemModel*,int,int,QModelIndex)\0"
    "removeRows(QAbstractItemModel*,int,int)\0"
    "revert(QAbstractItemModel*)\0"
    "const QHash<int,QByteArray>*\0"
    "roleNames(QAbstractItemModel*)\0"
    "theWrappedObject,index,value,role\0"
    "setData(QAbstractItemModel*,QModelIndex,QVariant,int)\0"
    "theWrappedObject,index,value\0"
    "setData(QAbstractItemModel*,QModelIndex,QVariant)\0"
    "theWrappedObject,section,orientation,value,role\0"
    "setHeaderData(QAbstractItemModel*,int,Qt::Orientation,QVariant,int)\0"
    "theWrappedObject,section,orientation,value\0"
    "setHeaderData(QAbstractItemModel*,int,Qt::Orientation,QVariant)\0"
    "theWrappedObject,index,roles\0"
    "setItemData(QAbstractItemModel*,QModelIndex,QMap<int,QVariant>)\0"
    "theWrappedObject,arg__1\0"
    "setSupportedDragActions(QAbstractItemModel*,Qt::DropActions)\0"
    "theWrappedObject,row,column,idx\0"
    "sibling(QAbstractItemModel*,int,int,QModelIndex)\0"
    "theWrappedObject,column,order\0"
    "sort(QAbstractItemModel*,int,Qt::SortOrder)\0"
    "sort(QAbstractItemModel*,int)\0QSize\0"
    "span(QAbstractItemModel*,QModelIndex)\0"
    "submit(QAbstractItemModel*)\0Qt::DropActions\0"
    "supportedDragActions(QAbstractItemModel*)\0"
    "supportedDropActions(QAbstractItemModel*)\0"
};

void PythonQtWrapper_QAbstractItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractItemModel *_t = static_cast<PythonQtWrapper_QAbstractItemModel *>(_o);
        switch (_id) {
        case 0: { QAbstractItemModel* _r = _t->new_QAbstractItemModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = _r; }  break;
        case 1: { QAbstractItemModel* _r = _t->new_QAbstractItemModel();
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractItemModel((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 3: { QModelIndex _r = _t->buddy((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->canFetchMore((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->dropMimeData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->fetchMore((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->hasChildren((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasChildren((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasIndex((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->hasIndex((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QVariant _r = _t->headerData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->headerData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->insertColumn((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->insertColumn((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->insertColumns((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->insertColumns((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->insertRow((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->insertRow((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->insertRows((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->insertRows((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { QMap<int,QVariant> _r = _t->itemData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMap<int,QVariant>*>(_a[0]) = _r; }  break;
        case 23: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 24: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 25: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 26: { QMimeData* _r = _t->mimeData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QModelIndex>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 27: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 28: { QObject* _r = _t->parent((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->removeColumn((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->removeColumn((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->removeColumns((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->removeColumns((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->removeRow((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->removeRow((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->removeRows((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->removeRows((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: _t->revert((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 38: { const QHash<int,QByteArray>* _r = _t->roleNames((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QHash<int,QByteArray>**>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->setData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->setData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->setHeaderData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->setHeaderData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->setItemData((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QMap<int,QVariant>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: _t->setSupportedDragActions((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< Qt::DropActions(*)>(_a[2]))); break;
        case 45: { QModelIndex _r = _t->sibling((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 46: _t->sort((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 47: _t->sort((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: { QSize _r = _t->span((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->submit((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { Qt::DropActions _r = _t->supportedDragActions((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        case 51: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractItemModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractItemModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractItemModel,
      qt_meta_data_PythonQtWrapper_QAbstractItemModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractItemModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractItemModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractItemModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QAbstractListModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   56,   36,   35, 0x0a,
      96,   35,   36,   35, 0x2a,
     125,  121,   35,   35, 0x0a,
     224,  177,  172,   35, 0x0a,
     357,  322,  310,   35, 0x0a,
     432,  404,  310,   35, 0x2a,
     488,  467,  310,   35, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractListModel[] = {
    "PythonQtWrapper_QAbstractListModel\0\0"
    "QAbstractListModel*\0parent\0"
    "new_QAbstractListModel(QObject*)\0"
    "new_QAbstractListModel()\0obj\0"
    "delete_QAbstractListModel(QAbstractListModel*)\0"
    "bool\0theWrappedObject,data,action,row,column,parent\0"
    "dropMimeData(QAbstractListModel*,const QMimeData*,Qt::DropAction,int,i"
    "nt,QModelIndex)\0"
    "QModelIndex\0theWrappedObject,row,column,parent\0"
    "index(QAbstractListModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,column\0"
    "index(QAbstractListModel*,int,int)\0"
    "theWrappedObject,row\0"
    "index(QAbstractListModel*,int)\0"
};

void PythonQtWrapper_QAbstractListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractListModel *_t = static_cast<PythonQtWrapper_QAbstractListModel *>(_o);
        switch (_id) {
        case 0: { QAbstractListModel* _r = _t->new_QAbstractListModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractListModel**>(_a[0]) = _r; }  break;
        case 1: { QAbstractListModel* _r = _t->new_QAbstractListModel();
            if (_a[0]) *reinterpret_cast< QAbstractListModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractListModel((*reinterpret_cast< QAbstractListModel*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->dropMimeData((*reinterpret_cast< QAbstractListModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QModelIndex _r = _t->index((*reinterpret_cast< QAbstractListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 5: { QModelIndex _r = _t->index((*reinterpret_cast< QAbstractListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 6: { QModelIndex _r = _t->index((*reinterpret_cast< QAbstractListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractListModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractListModel,
      qt_meta_data_PythonQtWrapper_QAbstractListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractListModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractListModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QAbstractState[] = {

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
      36,   32,   31,   31, 0x0a,
      99,   80,   75,   31, 0x0a,
     162,  145,  130,   31, 0x0a,
     195,  145,  187,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractState[] = {
    "PythonQtWrapper_QAbstractState\0\0obj\0"
    "delete_QAbstractState(QAbstractState*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QAbstractState*,QEvent*)\0"
    "QStateMachine*\0theWrappedObject\0"
    "machine(QAbstractState*)\0QState*\0"
    "parentState(QAbstractState*)\0"
};

void PythonQtWrapper_QAbstractState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractState *_t = static_cast<PythonQtWrapper_QAbstractState *>(_o);
        switch (_id) {
        case 0: _t->delete_QAbstractState((*reinterpret_cast< QAbstractState*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->event((*reinterpret_cast< QAbstractState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QStateMachine* _r = _t->machine((*reinterpret_cast< QAbstractState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStateMachine**>(_a[0]) = _r; }  break;
        case 3: { QState* _r = _t->parentState((*reinterpret_cast< QAbstractState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QState**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractState::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractState,
      qt_meta_data_PythonQtWrapper_QAbstractState, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractState::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractState::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractState))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractState*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QAbstractTransition[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      70,   58,   37,   36, 0x0a,
     103,   36,   37,   36, 0x2a,
     133,  129,   36,   36, 0x0a,
     209,  182,   36,   36, 0x0a,
     308,  291,  264,   36, 0x0a,
     365,  346,  341,   36, 0x0a,
     416,  291,  401,   36, 0x0a,
     446,  182,   36,   36, 0x0a,
     528,  504,   36,   36, 0x0a,
     606,  581,   36,   36, 0x0a,
     675,  291,  667,   36, 0x0a,
     725,  291,  709,   36, 0x0a,
     782,  291,  759,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractTransition[] = {
    "PythonQtWrapper_QAbstractTransition\0"
    "\0QAbstractTransition*\0sourceState\0"
    "new_QAbstractTransition(QState*)\0"
    "new_QAbstractTransition()\0obj\0"
    "delete_QAbstractTransition(QAbstractTransition*)\0"
    "theWrappedObject,animation\0"
    "addAnimation(QAbstractTransition*,QAbstractAnimation*)\0"
    "QList<QAbstractAnimation*>\0theWrappedObject\0"
    "animations(QAbstractTransition*)\0bool\0"
    "theWrappedObject,e\0"
    "event(QAbstractTransition*,QEvent*)\0"
    "QStateMachine*\0machine(QAbstractTransition*)\0"
    "removeAnimation(QAbstractTransition*,QAbstractAnimation*)\0"
    "theWrappedObject,target\0"
    "setTargetState(QAbstractTransition*,QAbstractState*)\0"
    "theWrappedObject,targets\0"
    "setTargetStates(QAbstractTransition*,QList<QAbstractState*>)\0"
    "QState*\0sourceState(QAbstractTransition*)\0"
    "QAbstractState*\0targetState(QAbstractTransition*)\0"
    "QList<QAbstractState*>\0"
    "targetStates(QAbstractTransition*)\0"
};

void PythonQtWrapper_QAbstractTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractTransition *_t = static_cast<PythonQtWrapper_QAbstractTransition *>(_o);
        switch (_id) {
        case 0: { QAbstractTransition* _r = _t->new_QAbstractTransition((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractTransition**>(_a[0]) = _r; }  break;
        case 1: { QAbstractTransition* _r = _t->new_QAbstractTransition();
            if (_a[0]) *reinterpret_cast< QAbstractTransition**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractTransition((*reinterpret_cast< QAbstractTransition*(*)>(_a[1]))); break;
        case 3: _t->addAnimation((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation*(*)>(_a[2]))); break;
        case 4: { QList<QAbstractAnimation*> _r = _t->animations((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QAbstractAnimation*>*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QStateMachine* _r = _t->machine((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStateMachine**>(_a[0]) = _r; }  break;
        case 7: _t->removeAnimation((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation*(*)>(_a[2]))); break;
        case 8: _t->setTargetState((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])),(*reinterpret_cast< QAbstractState*(*)>(_a[2]))); break;
        case 9: _t->setTargetStates((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])),(*reinterpret_cast< const QList<QAbstractState*>(*)>(_a[2]))); break;
        case 10: { QState* _r = _t->sourceState((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QState**>(_a[0]) = _r; }  break;
        case 11: { QAbstractState* _r = _t->targetState((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractState**>(_a[0]) = _r; }  break;
        case 12: { QList<QAbstractState*> _r = _t->targetStates((*reinterpret_cast< QAbstractTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QAbstractState*>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractTransition,
      qt_meta_data_PythonQtWrapper_QAbstractTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractTransition))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractTransition*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QAnimationGroup[] = {

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
      57,   50,   33,   32, 0x0a,
      87,   32,   33,   32, 0x2a,
     113,  109,   32,   32, 0x0a,
     181,  154,   32,   32, 0x0a,
     275,  252,  232,   32, 0x0a,
     330,  313,  309,   32, 0x0a,
     363,  313,   32,   32, 0x0a,
     415,  392,  387,   32, 0x0a,
     447,  154,  309,   32, 0x0a,
     535,  502,   32,   32, 0x0a,
     593,  154,   32,   32, 0x0a,
     647,  252,  232,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAnimationGroup[] = {
    "PythonQtWrapper_QAnimationGroup\0\0"
    "QAnimationGroup*\0parent\0"
    "new_QAnimationGroup(QObject*)\0"
    "new_QAnimationGroup()\0obj\0"
    "delete_QAnimationGroup(QAnimationGroup*)\0"
    "theWrappedObject,animation\0"
    "addAnimation(QAnimationGroup*,QAbstractAnimation*)\0"
    "QAbstractAnimation*\0theWrappedObject,index\0"
    "animationAt(QAnimationGroup*,int)\0int\0"
    "theWrappedObject\0animationCount(QAnimationGroup*)\0"
    "clear(QAnimationGroup*)\0bool\0"
    "theWrappedObject,event\0"
    "event(QAnimationGroup*,QEvent*)\0"
    "indexOfAnimation(QAnimationGroup*,QAbstractAnimation*)\0"
    "theWrappedObject,index,animation\0"
    "insertAnimation(QAnimationGroup*,int,QAbstractAnimation*)\0"
    "removeAnimation(QAnimationGroup*,QAbstractAnimation*)\0"
    "takeAnimation(QAnimationGroup*,int)\0"
};

void PythonQtWrapper_QAnimationGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAnimationGroup *_t = static_cast<PythonQtWrapper_QAnimationGroup *>(_o);
        switch (_id) {
        case 0: { QAnimationGroup* _r = _t->new_QAnimationGroup((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAnimationGroup**>(_a[0]) = _r; }  break;
        case 1: { QAnimationGroup* _r = _t->new_QAnimationGroup();
            if (_a[0]) *reinterpret_cast< QAnimationGroup**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAnimationGroup((*reinterpret_cast< QAnimationGroup*(*)>(_a[1]))); break;
        case 3: _t->addAnimation((*reinterpret_cast< QAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation*(*)>(_a[2]))); break;
        case 4: { QAbstractAnimation* _r = _t->animationAt((*reinterpret_cast< QAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAbstractAnimation**>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->animationCount((*reinterpret_cast< QAnimationGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->clear((*reinterpret_cast< QAnimationGroup*(*)>(_a[1]))); break;
        case 7: { bool _r = _t->event((*reinterpret_cast< QAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->indexOfAnimation((*reinterpret_cast< QAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->insertAnimation((*reinterpret_cast< QAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QAbstractAnimation*(*)>(_a[3]))); break;
        case 10: _t->removeAnimation((*reinterpret_cast< QAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation*(*)>(_a[2]))); break;
        case 11: { QAbstractAnimation* _r = _t->takeAnimation((*reinterpret_cast< QAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAbstractAnimation**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAnimationGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAnimationGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAnimationGroup,
      qt_meta_data_PythonQtWrapper_QAnimationGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAnimationGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAnimationGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAnimationGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAnimationGroup))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAnimationGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAnimationGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QBasicTimer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      66,   60,   29,   28, 0x0a,
      99,   95,   28,   28, 0x0a,
     154,  137,  132,   28, 0x0a,
     203,  177,   28,   28, 0x0a,
     236,  137,   28,   28, 0x0a,
     259,  137,  255,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QBasicTimer[] = {
    "PythonQtWrapper_QBasicTimer\0\0QBasicTimer*\0"
    "new_QBasicTimer()\0other\0"
    "new_QBasicTimer(QBasicTimer)\0obj\0"
    "delete_QBasicTimer(QBasicTimer*)\0bool\0"
    "theWrappedObject\0isActive(QBasicTimer*)\0"
    "theWrappedObject,msec,obj\0"
    "start(QBasicTimer*,int,QObject*)\0"
    "stop(QBasicTimer*)\0int\0timerId(QBasicTimer*)\0"
};

void PythonQtWrapper_QBasicTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QBasicTimer *_t = static_cast<PythonQtWrapper_QBasicTimer *>(_o);
        switch (_id) {
        case 0: { QBasicTimer* _r = _t->new_QBasicTimer();
            if (_a[0]) *reinterpret_cast< QBasicTimer**>(_a[0]) = _r; }  break;
        case 1: { QBasicTimer* _r = _t->new_QBasicTimer((*reinterpret_cast< const QBasicTimer(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBasicTimer**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QBasicTimer((*reinterpret_cast< QBasicTimer*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isActive((*reinterpret_cast< QBasicTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->start((*reinterpret_cast< QBasicTimer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        case 5: _t->stop((*reinterpret_cast< QBasicTimer*(*)>(_a[1]))); break;
        case 6: { int _r = _t->timerId((*reinterpret_cast< QBasicTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QBasicTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QBasicTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QBasicTimer,
      qt_meta_data_PythonQtWrapper_QBasicTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QBasicTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QBasicTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QBasicTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QBasicTimer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QBasicTimer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QBasicTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QBuffer[] = {

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
      45,   34,   25,   24, 0x0a,
      83,   79,   25,   24, 0x2a,
     115,  108,   25,   24, 0x0a,
     137,   24,   25,   24, 0x2a,
     155,  151,   24,   24, 0x0a,
     202,  185,  180,   24, 0x0a,
     218,  185,  180,   24, 0x0a,
     240,  185,   24,   24, 0x0a,
     282,  256,  180,   24, 0x0a,
     324,  185,  317,   24, 0x0a,
     367,  338,  317,   24, 0x0a,
     420,  399,  180,   24, 0x0a,
     461,  442,   24,   24, 0x0a,
     515,  493,   24,   24, 0x0a,
     544,  185,  317,   24, 0x0a,
     585,  559,  317,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QBuffer[] = {
    "PythonQtWrapper_QBuffer\0\0QBuffer*\0"
    "buf,parent\0new_QBuffer(QByteArray*,QObject*)\0"
    "buf\0new_QBuffer(QByteArray*)\0parent\0"
    "new_QBuffer(QObject*)\0new_QBuffer()\0"
    "obj\0delete_QBuffer(QBuffer*)\0bool\0"
    "theWrappedObject\0atEnd(QBuffer*)\0"
    "canReadLine(QBuffer*)\0close(QBuffer*)\0"
    "theWrappedObject,openMode\0"
    "open(QBuffer*,QIODevice::OpenMode)\0"
    "qint64\0pos(QBuffer*)\0theWrappedObject,data,maxlen\0"
    "readData(QBuffer*,char*,qint64)\0"
    "theWrappedObject,off\0seek(QBuffer*,qint64)\0"
    "theWrappedObject,a\0setBuffer(QBuffer*,QByteArray*)\0"
    "theWrappedObject,data\0"
    "setData(QBuffer*,QByteArray)\0"
    "size(QBuffer*)\0theWrappedObject,data,len\0"
    "writeData(QBuffer*,const char*,qint64)\0"
};

void PythonQtWrapper_QBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QBuffer *_t = static_cast<PythonQtWrapper_QBuffer *>(_o);
        switch (_id) {
        case 0: { QBuffer* _r = _t->new_QBuffer((*reinterpret_cast< QByteArray*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBuffer**>(_a[0]) = _r; }  break;
        case 1: { QBuffer* _r = _t->new_QBuffer((*reinterpret_cast< QByteArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBuffer**>(_a[0]) = _r; }  break;
        case 2: { QBuffer* _r = _t->new_QBuffer((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBuffer**>(_a[0]) = _r; }  break;
        case 3: { QBuffer* _r = _t->new_QBuffer();
            if (_a[0]) *reinterpret_cast< QBuffer**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QBuffer((*reinterpret_cast< QBuffer*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->atEnd((*reinterpret_cast< QBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->canReadLine((*reinterpret_cast< QBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->close((*reinterpret_cast< QBuffer*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->open((*reinterpret_cast< QBuffer*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { qint64 _r = _t->pos((*reinterpret_cast< QBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 10: { qint64 _r = _t->readData((*reinterpret_cast< QBuffer*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->seek((*reinterpret_cast< QBuffer*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setBuffer((*reinterpret_cast< QBuffer*(*)>(_a[1])),(*reinterpret_cast< QByteArray*(*)>(_a[2]))); break;
        case 13: _t->setData((*reinterpret_cast< QBuffer*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 14: { qint64 _r = _t->size((*reinterpret_cast< QBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 15: { qint64 _r = _t->writeData((*reinterpret_cast< QBuffer*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QBuffer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QBuffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QBuffer,
      qt_meta_data_PythonQtWrapper_QBuffer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QBuffer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QBuffer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QBuffer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QByteArrayMatcher[] = {

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
      54,   34,   35,   34, 0x0a,
      86,   78,   35,   34, 0x0a,
     126,  120,   35,   34, 0x0a,
     182,  167,   35,   34, 0x0a,
     225,  221,   34,   34, 0x0a,
     299,  274,  270,   34, 0x0a,
     362,  342,  270,   34, 0x2a,
     431,  401,  270,   34, 0x0a,
     504,  479,  270,   34, 0x2a,
     576,  559,  548,   34, 0x0a,
     629,  604,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QByteArrayMatcher[] = {
    "PythonQtWrapper_QByteArrayMatcher\0\0"
    "QByteArrayMatcher*\0new_QByteArrayMatcher()\0"
    "pattern\0new_QByteArrayMatcher(QByteArray)\0"
    "other\0new_QByteArrayMatcher(QByteArrayMatcher)\0"
    "pattern,length\0new_QByteArrayMatcher(const char*,int)\0"
    "obj\0delete_QByteArrayMatcher(QByteArrayMatcher*)\0"
    "int\0theWrappedObject,ba,from\0"
    "indexIn(QByteArrayMatcher*,QByteArray,int)\0"
    "theWrappedObject,ba\0"
    "indexIn(QByteArrayMatcher*,QByteArray)\0"
    "theWrappedObject,str,len,from\0"
    "indexIn(QByteArrayMatcher*,const char*,int,int)\0"
    "theWrappedObject,str,len\0"
    "indexIn(QByteArrayMatcher*,const char*,int)\0"
    "QByteArray\0theWrappedObject\0"
    "pattern(QByteArrayMatcher*)\0"
    "theWrappedObject,pattern\0"
    "setPattern(QByteArrayMatcher*,QByteArray)\0"
};

void PythonQtWrapper_QByteArrayMatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QByteArrayMatcher *_t = static_cast<PythonQtWrapper_QByteArrayMatcher *>(_o);
        switch (_id) {
        case 0: { QByteArrayMatcher* _r = _t->new_QByteArrayMatcher();
            if (_a[0]) *reinterpret_cast< QByteArrayMatcher**>(_a[0]) = _r; }  break;
        case 1: { QByteArrayMatcher* _r = _t->new_QByteArrayMatcher((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArrayMatcher**>(_a[0]) = _r; }  break;
        case 2: { QByteArrayMatcher* _r = _t->new_QByteArrayMatcher((*reinterpret_cast< const QByteArrayMatcher(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArrayMatcher**>(_a[0]) = _r; }  break;
        case 3: { QByteArrayMatcher* _r = _t->new_QByteArrayMatcher((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArrayMatcher**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QByteArrayMatcher((*reinterpret_cast< QByteArrayMatcher*(*)>(_a[1]))); break;
        case 5: { int _r = _t->indexIn((*reinterpret_cast< QByteArrayMatcher*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->indexIn((*reinterpret_cast< QByteArrayMatcher*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->indexIn((*reinterpret_cast< QByteArrayMatcher*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->indexIn((*reinterpret_cast< QByteArrayMatcher*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QByteArray _r = _t->pattern((*reinterpret_cast< QByteArrayMatcher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 10: _t->setPattern((*reinterpret_cast< QByteArrayMatcher*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QByteArrayMatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QByteArrayMatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QByteArrayMatcher,
      qt_meta_data_PythonQtWrapper_QByteArrayMatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QByteArrayMatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QByteArrayMatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QByteArrayMatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QByteArrayMatcher))
        return static_cast<void*>(const_cast< PythonQtWrapper_QByteArrayMatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QByteArrayMatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QChildEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   42,   29,   28, 0x0a,
      96,   92,   28,   28, 0x0a,
     151,  134,  129,   28, 0x0a,
     180,  134,  171,   28, 0x0a,
     200,  134,  129,   28, 0x0a,
     223,  134,  129,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QChildEvent[] = {
    "PythonQtWrapper_QChildEvent\0\0QChildEvent*\0"
    "type,child\0new_QChildEvent(QEvent::Type,QObject*)\0"
    "obj\0delete_QChildEvent(QChildEvent*)\0"
    "bool\0theWrappedObject\0added(QChildEvent*)\0"
    "QObject*\0child(QChildEvent*)\0"
    "polished(QChildEvent*)\0removed(QChildEvent*)\0"
};

void PythonQtWrapper_QChildEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QChildEvent *_t = static_cast<PythonQtWrapper_QChildEvent *>(_o);
        switch (_id) {
        case 0: { QChildEvent* _r = _t->new_QChildEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QChildEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QChildEvent((*reinterpret_cast< QChildEvent*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->added((*reinterpret_cast< QChildEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { QObject* _r = _t->child((*reinterpret_cast< QChildEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->polished((*reinterpret_cast< QChildEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->removed((*reinterpret_cast< QChildEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QChildEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QChildEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QChildEvent,
      qt_meta_data_PythonQtWrapper_QChildEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QChildEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QChildEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QChildEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QChildEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QChildEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QChildEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QCoreApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       1,  239, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   34,   33,   33, 0x0a,
      88,   81,   33,   33, 0x0a,
     144,   33,  136,   33, 0x0a,
     189,   33,  136,   33, 0x0a,
     235,   33,  136,   33, 0x0a,
     284,   33,  277,   33, 0x0a,
     325,   33,  136,   33, 0x0a,
     375,   33,  370,   33, 0x0a,
     437,  413,  370,   33, 0x0a,
     474,   33,  470,   33, 0x0a,
     513,  505,   33,   33, 0x0a,
     547,   33,   33,   33, 0x2a,
     578,   33,   33,   33, 0x0a,
     610,   33,  370,   33, 0x0a,
     665,  653,   33,   33, 0x0a,
     739,   33,  721,   33, 0x0a,
     786,   33,  774,   33, 0x0a,
     856,  825,  370,   33, 0x0a,
     899,   33,  136,   33, 0x0a,
     944,   33,  136,   33, 0x0a,
    1002,  987,   33,   33, 0x0a,
    1078, 1054,   33,   33, 0x0a,
    1140, 1134,   33,   33, 0x0a,
    1210,   33,   33,   33, 0x2a,
    1264, 1250,   33,   33, 0x0a,
    1338,   81,   33,   33, 0x0a,
    1398, 1389,   33,   33, 0x0a,
    1470, 1451,   33,   33, 0x0a,
    1527,  653,   33,   33, 0x0a,
    1582,  987,  370,   33, 0x0a,
    1634,   33,   33,   33, 0x0a,
    1697, 1677,   33,   33, 0x0a,
    1764, 1752,   33,   33, 0x0a,
    1824, 1816,   33,   33, 0x0a,
    1892, 1879,   33,   33, 0x0a,
    1970, 1960,   33,   33, 0x2a,
    2033,   81,   33,   33, 0x0a,
    2096, 2086,   33,   33, 0x0a,
    2159, 2151,   33,   33, 0x0a,
    2212,   33,  370,   33, 0x0a,
    2249, 1960,  370,   33, 0x0a,
    2349, 2313,  136,   33, 0x0a,
    2474, 2447,  136,   33, 0x2a,
    2557, 2545,  136,   33, 0x2a,
    2654, 2616,  136,   33, 0x0a,

 // enums: name, flags, count, data
    2756, 0x0,    3,  243,

 // enum data: key, value
    2765, uint(PythonQtWrapper_QCoreApplication::CodecForTr),
    2776, uint(PythonQtWrapper_QCoreApplication::UnicodeUTF8),
    2788, uint(PythonQtWrapper_QCoreApplication::DefaultCodec),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QCoreApplication[] = {
    "PythonQtWrapper_QCoreApplication\0\0obj\0"
    "delete_QCoreApplication(QCoreApplication*)\0"
    "arg__1\0static_QCoreApplication_addLibraryPath(QString)\0"
    "QString\0static_QCoreApplication_applicationDirPath()\0"
    "static_QCoreApplication_applicationFilePath()\0"
    "static_QCoreApplication_applicationName()\0"
    "qint64\0static_QCoreApplication_applicationPid()\0"
    "static_QCoreApplication_applicationVersion()\0"
    "bool\0static_QCoreApplication_closingDown()\0"
    "theWrappedObject,arg__1\0"
    "event(QCoreApplication*,QEvent*)\0int\0"
    "static_QCoreApplication_exec()\0retcode\0"
    "static_QCoreApplication_exit(int)\0"
    "static_QCoreApplication_exit()\0"
    "static_QCoreApplication_flush()\0"
    "static_QCoreApplication_hasPendingEvents()\0"
    "messageFile\0"
    "static_QCoreApplication_installTranslator(QTranslator*)\0"
    "QCoreApplication*\0static_QCoreApplication_instance()\0"
    "QStringList\0static_QCoreApplication_libraryPaths()\0"
    "theWrappedObject,arg__1,arg__2\0"
    "notify(QCoreApplication*,QObject*,QEvent*)\0"
    "static_QCoreApplication_organizationDomain()\0"
    "static_QCoreApplication_organizationName()\0"
    "receiver,event\0"
    "static_QCoreApplication_postEvent(QObject*,QEvent*)\0"
    "receiver,event,priority\0"
    "static_QCoreApplication_postEvent(QObject*,QEvent*,int)\0"
    "flags\0"
    "static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags)\0"
    "static_QCoreApplication_processEvents()\0"
    "flags,maxtime\0"
    "static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags,i"
    "nt)\0"
    "static_QCoreApplication_removeLibraryPath(QString)\0"
    "receiver\0static_QCoreApplication_removePostedEvents(QObject*)\0"
    "receiver,eventType\0"
    "static_QCoreApplication_removePostedEvents(QObject*,int)\0"
    "static_QCoreApplication_removeTranslator(QTranslator*)\0"
    "static_QCoreApplication_sendEvent(QObject*,QEvent*)\0"
    "static_QCoreApplication_sendPostedEvents()\0"
    "receiver,event_type\0"
    "static_QCoreApplication_sendPostedEvents(QObject*,int)\0"
    "application\0"
    "static_QCoreApplication_setApplicationName(QString)\0"
    "version\0static_QCoreApplication_setApplicationVersion(QString)\0"
    "attribute,on\0"
    "static_QCoreApplication_setAttribute(Qt::ApplicationAttribute,bool)\0"
    "attribute\0"
    "static_QCoreApplication_setAttribute(Qt::ApplicationAttribute)\0"
    "static_QCoreApplication_setLibraryPaths(QStringList)\0"
    "orgDomain\0"
    "static_QCoreApplication_setOrganizationDomain(QString)\0"
    "orgName\0static_QCoreApplication_setOrganizationName(QString)\0"
    "static_QCoreApplication_startingUp()\0"
    "static_QCoreApplication_testAttribute(Qt::ApplicationAttribute)\0"
    "context,key,disambiguation,encoding\0"
    "static_QCoreApplication_translate(const char*,const char*,const char*,"
    "QCoreApplication::Encoding)\0"
    "context,key,disambiguation\0"
    "static_QCoreApplication_translate(const char*,const char*,const char*)\0"
    "context,key\0"
    "static_QCoreApplication_translate(const char*,const char*)\0"
    "context,key,disambiguation,encoding,n\0"
    "static_QCoreApplication_translate(const char*,const char*,const char*,"
    "QCoreApplication::Encoding,int)\0"
    "Encoding\0CodecForTr\0UnicodeUTF8\0"
    "DefaultCodec\0"
};

void PythonQtWrapper_QCoreApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QCoreApplication *_t = static_cast<PythonQtWrapper_QCoreApplication *>(_o);
        switch (_id) {
        case 0: _t->delete_QCoreApplication((*reinterpret_cast< QCoreApplication*(*)>(_a[1]))); break;
        case 1: _t->static_QCoreApplication_addLibraryPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QString _r = _t->static_QCoreApplication_applicationDirPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->static_QCoreApplication_applicationFilePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->static_QCoreApplication_applicationName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { qint64 _r = _t->static_QCoreApplication_applicationPid();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->static_QCoreApplication_applicationVersion();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->static_QCoreApplication_closingDown();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QCoreApplication*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->static_QCoreApplication_exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->static_QCoreApplication_exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->static_QCoreApplication_exit(); break;
        case 12: _t->static_QCoreApplication_flush(); break;
        case 13: { bool _r = _t->static_QCoreApplication_hasPendingEvents();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->static_QCoreApplication_installTranslator((*reinterpret_cast< QTranslator*(*)>(_a[1]))); break;
        case 15: { QCoreApplication* _r = _t->static_QCoreApplication_instance();
            if (_a[0]) *reinterpret_cast< QCoreApplication**>(_a[0]) = _r; }  break;
        case 16: { QStringList _r = _t->static_QCoreApplication_libraryPaths();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->notify((*reinterpret_cast< QCoreApplication*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->static_QCoreApplication_organizationDomain();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->static_QCoreApplication_organizationName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: _t->static_QCoreApplication_postEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 21: _t->static_QCoreApplication_postEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->static_QCoreApplication_processEvents((*reinterpret_cast< QEventLoop::ProcessEventsFlags(*)>(_a[1]))); break;
        case 23: _t->static_QCoreApplication_processEvents(); break;
        case 24: _t->static_QCoreApplication_processEvents((*reinterpret_cast< QEventLoop::ProcessEventsFlags(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->static_QCoreApplication_removeLibraryPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->static_QCoreApplication_removePostedEvents((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 27: _t->static_QCoreApplication_removePostedEvents((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->static_QCoreApplication_removeTranslator((*reinterpret_cast< QTranslator*(*)>(_a[1]))); break;
        case 29: { bool _r = _t->static_QCoreApplication_sendEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->static_QCoreApplication_sendPostedEvents(); break;
        case 31: _t->static_QCoreApplication_sendPostedEvents((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->static_QCoreApplication_setApplicationName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->static_QCoreApplication_setApplicationVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->static_QCoreApplication_setAttribute((*reinterpret_cast< Qt::ApplicationAttribute(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->static_QCoreApplication_setAttribute((*reinterpret_cast< Qt::ApplicationAttribute(*)>(_a[1]))); break;
        case 36: _t->static_QCoreApplication_setLibraryPaths((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 37: _t->static_QCoreApplication_setOrganizationDomain((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->static_QCoreApplication_setOrganizationName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: { bool _r = _t->static_QCoreApplication_startingUp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->static_QCoreApplication_testAttribute((*reinterpret_cast< Qt::ApplicationAttribute(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->static_QCoreApplication_translate((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< QCoreApplication::Encoding(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 42: { QString _r = _t->static_QCoreApplication_translate((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 43: { QString _r = _t->static_QCoreApplication_translate((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 44: { QString _r = _t->static_QCoreApplication_translate((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< QCoreApplication::Encoding(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QCoreApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QCoreApplication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QCoreApplication,
      qt_meta_data_PythonQtWrapper_QCoreApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QCoreApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QCoreApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QCoreApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QCoreApplication))
        return static_cast<void*>(const_cast< PythonQtWrapper_QCoreApplication*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QCoreApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QCryptographicHash[] = {

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
      63,   56,   36,   35, 0x0a,
     121,  117,   35,   35, 0x0a,
     190,  168,   35,   35, 0x0a,
     253,  241,  230,   35, 0x0a,
     343,  326,   35,   35, 0x0a,
     370,  326,  230,   35, 0x0a,

 // enums: name, flags, count, data
     398, 0x0,    3,   48,

 // enum data: key, value
     408, uint(PythonQtWrapper_QCryptographicHash::Md4),
     412, uint(PythonQtWrapper_QCryptographicHash::Md5),
     416, uint(PythonQtWrapper_QCryptographicHash::Sha1),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QCryptographicHash[] = {
    "PythonQtWrapper_QCryptographicHash\0\0"
    "QCryptographicHash*\0method\0"
    "new_QCryptographicHash(QCryptographicHash::Algorithm)\0"
    "obj\0delete_QCryptographicHash(QCryptographicHash*)\0"
    "theWrappedObject,data\0"
    "addData(QCryptographicHash*,QByteArray)\0"
    "QByteArray\0data,method\0"
    "static_QCryptographicHash_hash(QByteArray,QCryptographicHash::Algorith"
    "m)\0"
    "theWrappedObject\0reset(QCryptographicHash*)\0"
    "result(QCryptographicHash*)\0Algorithm\0"
    "Md4\0Md5\0Sha1\0"
};

void PythonQtWrapper_QCryptographicHash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QCryptographicHash *_t = static_cast<PythonQtWrapper_QCryptographicHash *>(_o);
        switch (_id) {
        case 0: { QCryptographicHash* _r = _t->new_QCryptographicHash((*reinterpret_cast< QCryptographicHash::Algorithm(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCryptographicHash**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QCryptographicHash((*reinterpret_cast< QCryptographicHash*(*)>(_a[1]))); break;
        case 2: _t->addData((*reinterpret_cast< QCryptographicHash*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: { QByteArray _r = _t->static_QCryptographicHash_hash((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QCryptographicHash::Algorithm(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 4: _t->reset((*reinterpret_cast< QCryptographicHash*(*)>(_a[1]))); break;
        case 5: { QByteArray _r = _t->result((*reinterpret_cast< QCryptographicHash*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QCryptographicHash::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QCryptographicHash::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QCryptographicHash,
      qt_meta_data_PythonQtWrapper_QCryptographicHash, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QCryptographicHash::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QCryptographicHash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QCryptographicHash::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QCryptographicHash))
        return static_cast<void*>(const_cast< PythonQtWrapper_QCryptographicHash*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QCryptographicHash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDataStream[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       3,  164, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      73,   60,   29,   28, 0x0a,
     129,  122,   29,   28, 0x0a,
     157,  122,   29,   28, 0x0a,
     189,  185,   28,   28, 0x0a,
     244,  227,  222,   28, 0x0a,
     275,  227,  264,   28, 0x0a,
     332,  227,  296,   28, 0x0a,
     388,  369,   29,   28, 0x0a,
     439,  420,   29,   28, 0x0a,
     472,  420,   29,   28, 0x0a,
     503,  369,   29,   28, 0x0a,
     530,  369,   29,   28, 0x0a,
     565,  369,   29,   28, 0x0a,
     596,  369,   29,   28, 0x0a,
     628,  420,   29,   28, 0x0a,
     661,  420,   29,   28, 0x0a,
     692,  369,   29,   28, 0x0a,
     719,  369,   29,   28, 0x0a,
     754,  369,   29,   28, 0x0a,
     785,  369,   29,   28, 0x0a,
     826,  227,   28,   28, 0x0a,
     876,  852,   28,   28, 0x0a,
     938,  911,   28,   28, 0x0a,
    1038, 1014,   28,   28, 0x0a,
    1082,  852,   28,   28, 0x0a,
    1136, 1115, 1111,   28, 0x0a,
    1186,  227, 1166,   28, 0x0a,
    1207,  227,   28,   28, 0x0a,
    1233,  227, 1111,   28, 0x0a,

 // enums: name, flags, count, data
    1255, 0x0,    2,  176,
    1278, 0x0,   15,  180,
    1286, 0x0,    4,  210,

 // enum data: key, value
    1293, uint(PythonQtWrapper_QDataStream::SinglePrecision),
    1309, uint(PythonQtWrapper_QDataStream::DoublePrecision),
    1325, uint(PythonQtWrapper_QDataStream::Qt_1_0),
    1332, uint(PythonQtWrapper_QDataStream::Qt_2_0),
    1339, uint(PythonQtWrapper_QDataStream::Qt_2_1),
    1346, uint(PythonQtWrapper_QDataStream::Qt_3_0),
    1353, uint(PythonQtWrapper_QDataStream::Qt_3_1),
    1360, uint(PythonQtWrapper_QDataStream::Qt_3_3),
    1367, uint(PythonQtWrapper_QDataStream::Qt_4_0),
    1374, uint(PythonQtWrapper_QDataStream::Qt_4_1),
    1381, uint(PythonQtWrapper_QDataStream::Qt_4_2),
    1388, uint(PythonQtWrapper_QDataStream::Qt_4_3),
    1395, uint(PythonQtWrapper_QDataStream::Qt_4_4),
    1402, uint(PythonQtWrapper_QDataStream::Qt_4_5),
    1409, uint(PythonQtWrapper_QDataStream::Qt_4_6),
    1416, uint(PythonQtWrapper_QDataStream::Qt_4_7),
    1423, uint(PythonQtWrapper_QDataStream::Qt_4_8),
    1430, uint(PythonQtWrapper_QDataStream::Ok),
    1433, uint(PythonQtWrapper_QDataStream::ReadPastEnd),
    1445, uint(PythonQtWrapper_QDataStream::ReadCorruptData),
    1461, uint(PythonQtWrapper_QDataStream::WriteFailed),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDataStream[] = {
    "PythonQtWrapper_QDataStream\0\0QDataStream*\0"
    "new_QDataStream()\0arg__1,flags\0"
    "new_QDataStream(QByteArray*,QIODevice::OpenMode)\0"
    "arg__1\0new_QDataStream(QIODevice*)\0"
    "new_QDataStream(QByteArray)\0obj\0"
    "delete_QDataStream(QDataStream*)\0bool\0"
    "theWrappedObject\0atEnd(QDataStream*)\0"
    "QIODevice*\0device(QDataStream*)\0"
    "QDataStream::FloatingPointPrecision\0"
    "floatingPointPrecision(QDataStream*)\0"
    "theWrappedObject,i\0writeBoolean(QDataStream*,bool)\0"
    "theWrappedObject,f\0writeDouble(QDataStream*,double)\0"
    "writeFloat(QDataStream*,float)\0"
    "writeInt(QDataStream*,int)\0"
    "writeLongLong(QDataStream*,qint64)\0"
    "writeShort(QDataStream*,short)\0"
    "readBoolean(QDataStream*,bool&)\0"
    "readDouble(QDataStream*,double&)\0"
    "readFloat(QDataStream*,float&)\0"
    "readInt(QDataStream*,int&)\0"
    "readLongLong(QDataStream*,qint64&)\0"
    "readShort(QDataStream*,short&)\0"
    "readUShort(QDataStream*,unsigned short&)\0"
    "resetStatus(QDataStream*)\0"
    "theWrappedObject,arg__1\0"
    "setDevice(QDataStream*,QIODevice*)\0"
    "theWrappedObject,precision\0"
    "setFloatingPointPrecision(QDataStream*,QDataStream::FloatingPointPreci"
    "sion)\0"
    "theWrappedObject,status\0"
    "setStatus(QDataStream*,QDataStream::Status)\0"
    "setVersion(QDataStream*,int)\0int\0"
    "theWrappedObject,len\0skipRawData(QDataStream*,int)\0"
    "QDataStream::Status\0status(QDataStream*)\0"
    "unsetDevice(QDataStream*)\0"
    "version(QDataStream*)\0FloatingPointPrecision\0"
    "Version\0Status\0SinglePrecision\0"
    "DoublePrecision\0Qt_1_0\0Qt_2_0\0Qt_2_1\0"
    "Qt_3_0\0Qt_3_1\0Qt_3_3\0Qt_4_0\0Qt_4_1\0"
    "Qt_4_2\0Qt_4_3\0Qt_4_4\0Qt_4_5\0Qt_4_6\0"
    "Qt_4_7\0Qt_4_8\0Ok\0ReadPastEnd\0"
    "ReadCorruptData\0WriteFailed\0"
};

void PythonQtWrapper_QDataStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDataStream *_t = static_cast<PythonQtWrapper_QDataStream *>(_o);
        switch (_id) {
        case 0: { QDataStream* _r = _t->new_QDataStream();
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 1: { QDataStream* _r = _t->new_QDataStream((*reinterpret_cast< QByteArray*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 2: { QDataStream* _r = _t->new_QDataStream((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 3: { QDataStream* _r = _t->new_QDataStream((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QDataStream((*reinterpret_cast< QDataStream*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->atEnd((*reinterpret_cast< QDataStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QIODevice* _r = _t->device((*reinterpret_cast< QDataStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 7: { QDataStream::FloatingPointPrecision _r = _t->floatingPointPrecision((*reinterpret_cast< QDataStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDataStream::FloatingPointPrecision*>(_a[0]) = _r; }  break;
        case 8: { QDataStream* _r = _t->writeBoolean((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 9: { QDataStream* _r = _t->writeDouble((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 10: { QDataStream* _r = _t->writeFloat((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 11: { QDataStream* _r = _t->writeInt((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 12: { QDataStream* _r = _t->writeLongLong((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 13: { QDataStream* _r = _t->writeShort((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 14: { QDataStream* _r = _t->readBoolean((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 15: { QDataStream* _r = _t->readDouble((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 16: { QDataStream* _r = _t->readFloat((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 17: { QDataStream* _r = _t->readInt((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 18: { QDataStream* _r = _t->readLongLong((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 19: { QDataStream* _r = _t->readShort((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 20: { QDataStream* _r = _t->readUShort((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDataStream**>(_a[0]) = _r; }  break;
        case 21: _t->resetStatus((*reinterpret_cast< QDataStream*(*)>(_a[1]))); break;
        case 22: _t->setDevice((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 23: _t->setFloatingPointPrecision((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< QDataStream::FloatingPointPrecision(*)>(_a[2]))); break;
        case 24: _t->setStatus((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< QDataStream::Status(*)>(_a[2]))); break;
        case 25: _t->setVersion((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: { int _r = _t->skipRawData((*reinterpret_cast< QDataStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { QDataStream::Status _r = _t->status((*reinterpret_cast< QDataStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDataStream::Status*>(_a[0]) = _r; }  break;
        case 28: _t->unsetDevice((*reinterpret_cast< QDataStream*(*)>(_a[1]))); break;
        case 29: { int _r = _t->version((*reinterpret_cast< QDataStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDataStream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDataStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDataStream,
      qt_meta_data_PythonQtWrapper_QDataStream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDataStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDataStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDataStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDataStream))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDataStream*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDataStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QDir[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      77,   14, // methods
       0,    0, // properties
       4,  399, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   28,   22,   21, 0x0a,
      55,   50,   22,   21, 0x0a,
      73,   21,   22,   21, 0x2a,
     112,   84,   22,   21, 0x0a,
     189,  168,   22,   21, 0x2a,
     247,  231,   22,   21, 0x2a,
     277,  273,   21,   21, 0x0a,
     330,  304,  296,   21, 0x0a,
     379,  362,  296,   21, 0x0a,
     411,  399,   21,   21, 0x0a,
     454,  362,  296,   21, 0x0a,
     505,  480,  475,   21, 0x0a,
     523,  362,  475,   21, 0x0a,
     535,   50,  296,   21, 0x0a,
     575,  566,  296,   21, 0x0a,
     619,  362,  614,   21, 0x0a,
     637,   21,  632,   21, 0x0a,
     659,   21,  296,   21, 0x0a,
     685,  362,  296,   21, 0x0a,
     717,   21,  700,   21, 0x0a,
     768,  738,  700,   21, 0x0a,
     844,  819,  700,   21, 0x2a,
     879,  362,  700,   21, 0x2a,
     942,  900,  700,   21, 0x0a,
    1042, 1005,  700,   21, 0x2a,
    1118, 1089,  700,   21, 0x2a,
    1163,  738, 1151,   21, 0x0a,
    1210,  819, 1151,   21, 0x2a,
    1241,  362, 1151,   21, 0x2a,
    1258,  900, 1151,   21, 0x0a,
    1317, 1005, 1151,   21, 0x2a,
    1360, 1089, 1151,   21, 0x2a,
    1389,  362,  475,   21, 0x0a,
    1425, 1403,  475,   21, 0x0a,
    1447,  304,  296,   21, 0x0a,
    1485,  362, 1471,   21, 0x0a,
    1499,  566,  296,   21, 0x0a,
    1541,   21,  632,   21, 0x0a,
    1560,   21,  296,   21, 0x0a,
    1583,  362,  475,   21, 0x0a,
    1601,   50,  475,   21, 0x0a,
    1637,  362,  475,   21, 0x0a,
    1655,  362,  475,   21, 0x0a,
    1673,   50,  475,   21, 0x0a,
    1709,  362,  475,   21, 0x0a,
    1723,  362,  475,   21, 0x0a,
    1759, 1743,  475,   21, 0x0a,
    1811, 1794,  475,   21, 0x0a,
    1850,  480,  475,   21, 0x0a,
    1896, 1871,  475,   21, 0x0a,
    1918,  362, 1151,   21, 0x0a,
    1948, 1937, 1151,   21, 0x0a,
    2012, 1991,  475,   21, 0x0a,
    2031, 1991,  475,   21, 0x0a,
    2074, 2050,  296,   21, 0x0a,
    2104,  362,  296,   21, 0x0a,
    2116,  362,   21,   21, 0x0a,
    2131,  304,  296,   21, 0x0a,
    2163,  304,  475,   21, 0x0a,
    2218, 2185,  475,   21, 0x0a,
    2248,  480,  475,   21, 0x0a,
    2269, 1871,  475,   21, 0x0a,
    2291,   21,  632,   21, 0x0a,
    2310,   21,  296,   21, 0x0a,
    2340, 2333, 1151,   21, 0x0a,
    2379,   21, 2373,   21, 0x0a,
    2403,   50,  475,   21, 0x0a,
    2459, 2435,   21,   21, 0x0a,
    2490, 1089,   21,   21, 0x0a,
    2546, 2524,   21,   21, 0x0a,
    2588, 2569,   21,   21, 0x0a,
    2658, 2636,   21,   21, 0x0a,
    2708,  362, 2692,   21, 0x0a,
    2723,   21,  632,   21, 0x0a,
    2742,   21,  296,   21, 0x0a,
    2765,  566,  296,   21, 0x0a,
    2805,   21,  296,   21, 0x0a,

 // enums: name, flags, count, data
    2824, 0x0,   20,  415,
    2831, 0x1,   20,  455,
    2839, 0x0,   12,  495,
    2848, 0x1,   12,  519,

 // enum data: key, value
    2858, uint(PythonQtWrapper_QDir::Dirs),
    2863, uint(PythonQtWrapper_QDir::Files),
    2869, uint(PythonQtWrapper_QDir::Drives),
    2876, uint(PythonQtWrapper_QDir::NoSymLinks),
    2887, uint(PythonQtWrapper_QDir::AllEntries),
    2898, uint(PythonQtWrapper_QDir::TypeMask),
    2907, uint(PythonQtWrapper_QDir::Readable),
    2916, uint(PythonQtWrapper_QDir::Writable),
    2925, uint(PythonQtWrapper_QDir::Executable),
    2936, uint(PythonQtWrapper_QDir::PermissionMask),
    2951, uint(PythonQtWrapper_QDir::Modified),
    2960, uint(PythonQtWrapper_QDir::Hidden),
    2967, uint(PythonQtWrapper_QDir::System),
    2974, uint(PythonQtWrapper_QDir::AccessMask),
    2985, uint(PythonQtWrapper_QDir::AllDirs),
    2993, uint(PythonQtWrapper_QDir::CaseSensitive),
    3007, uint(PythonQtWrapper_QDir::NoDotAndDotDot),
    3022, uint(PythonQtWrapper_QDir::NoDot),
    3028, uint(PythonQtWrapper_QDir::NoDotDot),
    3037, uint(PythonQtWrapper_QDir::NoFilter),
    2858, uint(PythonQtWrapper_QDir::Dirs),
    2863, uint(PythonQtWrapper_QDir::Files),
    2869, uint(PythonQtWrapper_QDir::Drives),
    2876, uint(PythonQtWrapper_QDir::NoSymLinks),
    2887, uint(PythonQtWrapper_QDir::AllEntries),
    2898, uint(PythonQtWrapper_QDir::TypeMask),
    2907, uint(PythonQtWrapper_QDir::Readable),
    2916, uint(PythonQtWrapper_QDir::Writable),
    2925, uint(PythonQtWrapper_QDir::Executable),
    2936, uint(PythonQtWrapper_QDir::PermissionMask),
    2951, uint(PythonQtWrapper_QDir::Modified),
    2960, uint(PythonQtWrapper_QDir::Hidden),
    2967, uint(PythonQtWrapper_QDir::System),
    2974, uint(PythonQtWrapper_QDir::AccessMask),
    2985, uint(PythonQtWrapper_QDir::AllDirs),
    2993, uint(PythonQtWrapper_QDir::CaseSensitive),
    3007, uint(PythonQtWrapper_QDir::NoDotAndDotDot),
    3022, uint(PythonQtWrapper_QDir::NoDot),
    3028, uint(PythonQtWrapper_QDir::NoDotDot),
    3037, uint(PythonQtWrapper_QDir::NoFilter),
    3046, uint(PythonQtWrapper_QDir::Name),
    3051, uint(PythonQtWrapper_QDir::Time),
    3056, uint(PythonQtWrapper_QDir::Size),
    3061, uint(PythonQtWrapper_QDir::Unsorted),
    3070, uint(PythonQtWrapper_QDir::SortByMask),
    3081, uint(PythonQtWrapper_QDir::DirsFirst),
    3091, uint(PythonQtWrapper_QDir::Reversed),
    3100, uint(PythonQtWrapper_QDir::IgnoreCase),
    3111, uint(PythonQtWrapper_QDir::DirsLast),
    3120, uint(PythonQtWrapper_QDir::LocaleAware),
    3132, uint(PythonQtWrapper_QDir::Type),
    3137, uint(PythonQtWrapper_QDir::NoSort),
    3046, uint(PythonQtWrapper_QDir::Name),
    3051, uint(PythonQtWrapper_QDir::Time),
    3056, uint(PythonQtWrapper_QDir::Size),
    3061, uint(PythonQtWrapper_QDir::Unsorted),
    3070, uint(PythonQtWrapper_QDir::SortByMask),
    3081, uint(PythonQtWrapper_QDir::DirsFirst),
    3091, uint(PythonQtWrapper_QDir::Reversed),
    3100, uint(PythonQtWrapper_QDir::IgnoreCase),
    3111, uint(PythonQtWrapper_QDir::DirsLast),
    3120, uint(PythonQtWrapper_QDir::LocaleAware),
    3132, uint(PythonQtWrapper_QDir::Type),
    3137, uint(PythonQtWrapper_QDir::NoSort),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDir[] = {
    "PythonQtWrapper_QDir\0\0QDir*\0arg__1\0"
    "new_QDir(QDir)\0path\0new_QDir(QString)\0"
    "new_QDir()\0path,nameFilter,sort,filter\0"
    "new_QDir(QString,QString,QDir::SortFlags,QDir::Filters)\0"
    "path,nameFilter,sort\0"
    "new_QDir(QString,QString,QDir::SortFlags)\0"
    "path,nameFilter\0new_QDir(QString,QString)\0"
    "obj\0delete_QDir(QDir*)\0QString\0"
    "theWrappedObject,fileName\0"
    "absoluteFilePath(QDir*,QString)\0"
    "theWrappedObject\0absolutePath(QDir*)\0"
    "prefix,path\0static_QDir_addSearchPath(QString,QString)\0"
    "canonicalPath(QDir*)\0bool\0"
    "theWrappedObject,dirName\0cd(QDir*,QString)\0"
    "cdUp(QDir*)\0static_QDir_cleanPath(QString)\0"
    "pathName\0static_QDir_convertSeparators(QString)\0"
    "uint\0count(QDir*)\0QDir\0static_QDir_current()\0"
    "static_QDir_currentPath()\0dirName(QDir*)\0"
    "QList<QFileInfo>\0static_QDir_drives()\0"
    "theWrappedObject,filters,sort\0"
    "entryInfoList(QDir*,QDir::Filters,QDir::SortFlags)\0"
    "theWrappedObject,filters\0"
    "entryInfoList(QDir*,QDir::Filters)\0"
    "entryInfoList(QDir*)\0"
    "theWrappedObject,nameFilters,filters,sort\0"
    "entryInfoList(QDir*,QStringList,QDir::Filters,QDir::SortFlags)\0"
    "theWrappedObject,nameFilters,filters\0"
    "entryInfoList(QDir*,QStringList,QDir::Filters)\0"
    "theWrappedObject,nameFilters\0"
    "entryInfoList(QDir*,QStringList)\0"
    "QStringList\0entryList(QDir*,QDir::Filters,QDir::SortFlags)\0"
    "entryList(QDir*,QDir::Filters)\0"
    "entryList(QDir*)\0"
    "entryList(QDir*,QStringList,QDir::Filters,QDir::SortFlags)\0"
    "entryList(QDir*,QStringList,QDir::Filters)\0"
    "entryList(QDir*,QStringList)\0exists(QDir*)\0"
    "theWrappedObject,name\0exists(QDir*,QString)\0"
    "filePath(QDir*,QString)\0QDir::Filters\0"
    "filter(QDir*)\0static_QDir_fromNativeSeparators(QString)\0"
    "static_QDir_home()\0static_QDir_homePath()\0"
    "isAbsolute(QDir*)\0static_QDir_isAbsolutePath(QString)\0"
    "isReadable(QDir*)\0isRelative(QDir*)\0"
    "static_QDir_isRelativePath(QString)\0"
    "isRoot(QDir*)\0makeAbsolute(QDir*)\0"
    "filter,fileName\0static_QDir_match(QString,QString)\0"
    "filters,fileName\0"
    "static_QDir_match(QStringList,QString)\0"
    "mkdir(QDir*,QString)\0theWrappedObject,dirPath\0"
    "mkpath(QDir*,QString)\0nameFilters(QDir*)\0"
    "nameFilter\0static_QDir_nameFiltersFromString(QString)\0"
    "theWrappedObject,dir\0__ne__(QDir*,QDir)\0"
    "__eq__(QDir*,QDir)\0theWrappedObject,arg__1\0"
    "operator_subscript(QDir*,int)\0path(QDir*)\0"
    "refresh(QDir*)\0relativeFilePath(QDir*,QString)\0"
    "remove(QDir*,QString)\0"
    "theWrappedObject,oldName,newName\0"
    "rename(QDir*,QString,QString)\0"
    "rmdir(QDir*,QString)\0rmpath(QDir*,QString)\0"
    "static_QDir_root()\0static_QDir_rootPath()\0"
    "prefix\0static_QDir_searchPaths(QString)\0"
    "QChar\0static_QDir_separator()\0"
    "static_QDir_setCurrent(QString)\0"
    "theWrappedObject,filter\0"
    "setFilter(QDir*,QDir::Filters)\0"
    "setNameFilters(QDir*,QStringList)\0"
    "theWrappedObject,path\0setPath(QDir*,QString)\0"
    "prefix,searchPaths\0"
    "static_QDir_setSearchPaths(QString,QStringList)\0"
    "theWrappedObject,sort\0"
    "setSorting(QDir*,QDir::SortFlags)\0"
    "QDir::SortFlags\0sorting(QDir*)\0"
    "static_QDir_temp()\0static_QDir_tempPath()\0"
    "static_QDir_toNativeSeparators(QString)\0"
    "py_toString(QDir*)\0Filter\0Filters\0"
    "SortFlag\0SortFlags\0Dirs\0Files\0Drives\0"
    "NoSymLinks\0AllEntries\0TypeMask\0Readable\0"
    "Writable\0Executable\0PermissionMask\0"
    "Modified\0Hidden\0System\0AccessMask\0"
    "AllDirs\0CaseSensitive\0NoDotAndDotDot\0"
    "NoDot\0NoDotDot\0NoFilter\0Name\0Time\0"
    "Size\0Unsorted\0SortByMask\0DirsFirst\0"
    "Reversed\0IgnoreCase\0DirsLast\0LocaleAware\0"
    "Type\0NoSort\0"
};

void PythonQtWrapper_QDir::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDir *_t = static_cast<PythonQtWrapper_QDir *>(_o);
        switch (_id) {
        case 0: { QDir* _r = _t->new_QDir((*reinterpret_cast< const QDir(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir**>(_a[0]) = _r; }  break;
        case 1: { QDir* _r = _t->new_QDir((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir**>(_a[0]) = _r; }  break;
        case 2: { QDir* _r = _t->new_QDir();
            if (_a[0]) *reinterpret_cast< QDir**>(_a[0]) = _r; }  break;
        case 3: { QDir* _r = _t->new_QDir((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QDir::SortFlags(*)>(_a[3])),(*reinterpret_cast< QDir::Filters(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDir**>(_a[0]) = _r; }  break;
        case 4: { QDir* _r = _t->new_QDir((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QDir::SortFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDir**>(_a[0]) = _r; }  break;
        case 5: { QDir* _r = _t->new_QDir((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDir**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QDir((*reinterpret_cast< QDir*(*)>(_a[1]))); break;
        case 7: { QString _r = _t->absoluteFilePath((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->absolutePath((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->static_QDir_addSearchPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: { QString _r = _t->canonicalPath((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->cd((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->cdUp((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->static_QDir_cleanPath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->static_QDir_convertSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { uint _r = _t->count((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 16: { QDir _r = _t->static_QDir_current();
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->static_QDir_currentPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->dirName((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QList<QFileInfo> _r = _t->static_QDir_drives();
            if (_a[0]) *reinterpret_cast< QList<QFileInfo>*>(_a[0]) = _r; }  break;
        case 20: { QList<QFileInfo> _r = _t->entryInfoList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2])),(*reinterpret_cast< QDir::SortFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QFileInfo>*>(_a[0]) = _r; }  break;
        case 21: { QList<QFileInfo> _r = _t->entryInfoList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QFileInfo>*>(_a[0]) = _r; }  break;
        case 22: { QList<QFileInfo> _r = _t->entryInfoList((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QFileInfo>*>(_a[0]) = _r; }  break;
        case 23: { QList<QFileInfo> _r = _t->entryInfoList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< QDir::Filters(*)>(_a[3])),(*reinterpret_cast< QDir::SortFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QFileInfo>*>(_a[0]) = _r; }  break;
        case 24: { QList<QFileInfo> _r = _t->entryInfoList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< QDir::Filters(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QFileInfo>*>(_a[0]) = _r; }  break;
        case 25: { QList<QFileInfo> _r = _t->entryInfoList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QFileInfo>*>(_a[0]) = _r; }  break;
        case 26: { QStringList _r = _t->entryList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2])),(*reinterpret_cast< QDir::SortFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 27: { QStringList _r = _t->entryList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 28: { QStringList _r = _t->entryList((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 29: { QStringList _r = _t->entryList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< QDir::Filters(*)>(_a[3])),(*reinterpret_cast< QDir::SortFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 30: { QStringList _r = _t->entryList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< QDir::Filters(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 31: { QStringList _r = _t->entryList((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->exists((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->exists((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { QString _r = _t->filePath((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 35: { QDir::Filters _r = _t->filter((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir::Filters*>(_a[0]) = _r; }  break;
        case 36: { QString _r = _t->static_QDir_fromNativeSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 37: { QDir _r = _t->static_QDir_home();
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->static_QDir_homePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->isAbsolute((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->static_QDir_isAbsolutePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->isReadable((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->isRelative((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->static_QDir_isRelativePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->isRoot((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->makeAbsolute((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->static_QDir_match((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->static_QDir_match((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->mkdir((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->mkpath((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { QStringList _r = _t->nameFilters((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 51: { QStringList _r = _t->static_QDir_nameFiltersFromString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->__ne__((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QDir(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { bool _r = _t->__eq__((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QDir(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 54: { QString _r = _t->operator_subscript((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 55: { QString _r = _t->path((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 56: _t->refresh((*reinterpret_cast< QDir*(*)>(_a[1]))); break;
        case 57: { QString _r = _t->relativeFilePath((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 58: { bool _r = _t->remove((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->rename((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { bool _r = _t->rmdir((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 61: { bool _r = _t->rmpath((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: { QDir _r = _t->static_QDir_root();
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = _r; }  break;
        case 63: { QString _r = _t->static_QDir_rootPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 64: { QStringList _r = _t->static_QDir_searchPaths((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 65: { QChar _r = _t->static_QDir_separator();
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 66: { bool _r = _t->static_QDir_setCurrent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 67: _t->setFilter((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2]))); break;
        case 68: _t->setNameFilters((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 69: _t->setPath((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 70: _t->static_QDir_setSearchPaths((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 71: _t->setSorting((*reinterpret_cast< QDir*(*)>(_a[1])),(*reinterpret_cast< QDir::SortFlags(*)>(_a[2]))); break;
        case 72: { QDir::SortFlags _r = _t->sorting((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir::SortFlags*>(_a[0]) = _r; }  break;
        case 73: { QDir _r = _t->static_QDir_temp();
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = _r; }  break;
        case 74: { QString _r = _t->static_QDir_tempPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 75: { QString _r = _t->static_QDir_toNativeSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 76: { QString _r = _t->py_toString((*reinterpret_cast< QDir*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDir::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDir::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDir,
      qt_meta_data_PythonQtWrapper_QDir, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDir::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDir::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDir::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDir))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDir*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDir::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QDirIterator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       2,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   44,   30,   29, 0x0a,
     109,  105,   30,   29, 0x2a,
     150,  132,   30,   29, 0x0a,
     230,  218,   30,   29, 0x2a,
     281,  270,   30,   29, 0x0a,
     340,  335,   30,   29, 0x2a,
     397,  366,   30,   29, 0x0a,
     502,  477,   30,   29, 0x2a,
     571,  554,   30,   29, 0x2a,
     613,  609,   29,   29, 0x0a,
     675,  658,  648,   29, 0x0a,
     707,  658,  699,   29, 0x0a,
     731,  658,  699,   29, 0x0a,
     760,  658,  755,   29, 0x0a,
     783,  658,  699,   29, 0x0a,
     803,  658,  699,   29, 0x0a,

 // enums: name, flags, count, data
     823, 0x0,    3,  102,
     836, 0x1,    3,  108,

 // enum data: key, value
     850, uint(PythonQtWrapper_QDirIterator::NoIteratorFlags),
     866, uint(PythonQtWrapper_QDirIterator::FollowSymlinks),
     881, uint(PythonQtWrapper_QDirIterator::Subdirectories),
     850, uint(PythonQtWrapper_QDirIterator::NoIteratorFlags),
     866, uint(PythonQtWrapper_QDirIterator::FollowSymlinks),
     881, uint(PythonQtWrapper_QDirIterator::Subdirectories),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDirIterator[] = {
    "PythonQtWrapper_QDirIterator\0\0"
    "QDirIterator*\0dir,flags\0"
    "new_QDirIterator(QDir,QDirIterator::IteratorFlags)\0"
    "dir\0new_QDirIterator(QDir)\0path,filter,flags\0"
    "new_QDirIterator(QString,QDir::Filters,QDirIterator::IteratorFlags)\0"
    "path,filter\0new_QDirIterator(QString,QDir::Filters)\0"
    "path,flags\0"
    "new_QDirIterator(QString,QDirIterator::IteratorFlags)\0"
    "path\0new_QDirIterator(QString)\0"
    "path,nameFilters,filters,flags\0"
    "new_QDirIterator(QString,QStringList,QDir::Filters,QDirIterator::Itera"
    "torFlags)\0"
    "path,nameFilters,filters\0"
    "new_QDirIterator(QString,QStringList,QDir::Filters)\0"
    "path,nameFilters\0new_QDirIterator(QString,QStringList)\0"
    "obj\0delete_QDirIterator(QDirIterator*)\0"
    "QFileInfo\0theWrappedObject\0"
    "fileInfo(QDirIterator*)\0QString\0"
    "fileName(QDirIterator*)\0filePath(QDirIterator*)\0"
    "bool\0hasNext(QDirIterator*)\0"
    "next(QDirIterator*)\0path(QDirIterator*)\0"
    "IteratorFlag\0IteratorFlags\0NoIteratorFlags\0"
    "FollowSymlinks\0Subdirectories\0"
};

void PythonQtWrapper_QDirIterator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDirIterator *_t = static_cast<PythonQtWrapper_QDirIterator *>(_o);
        switch (_id) {
        case 0: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QDir(*)>(_a[1])),(*reinterpret_cast< QDirIterator::IteratorFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 1: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QDir(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 2: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2])),(*reinterpret_cast< QDirIterator::IteratorFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 3: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QDir::Filters(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 4: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QDirIterator::IteratorFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 5: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 6: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< QDir::Filters(*)>(_a[3])),(*reinterpret_cast< QDirIterator::IteratorFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 7: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< QDir::Filters(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 8: { QDirIterator* _r = _t->new_QDirIterator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDirIterator**>(_a[0]) = _r; }  break;
        case 9: _t->delete_QDirIterator((*reinterpret_cast< QDirIterator*(*)>(_a[1]))); break;
        case 10: { QFileInfo _r = _t->fileInfo((*reinterpret_cast< QDirIterator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileInfo*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->fileName((*reinterpret_cast< QDirIterator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->filePath((*reinterpret_cast< QDirIterator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasNext((*reinterpret_cast< QDirIterator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->next((*reinterpret_cast< QDirIterator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->path((*reinterpret_cast< QDirIterator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDirIterator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDirIterator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDirIterator,
      qt_meta_data_PythonQtWrapper_QDirIterator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDirIterator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDirIterator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDirIterator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDirIterator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDirIterator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDirIterator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDynamicPropertyChangeEvent[] = {

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
      79,   74,   45,   44, 0x0a,
     127,  123,   44,   44, 0x0a,
     220,  203,  192,   44, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDynamicPropertyChangeEvent[] = {
    "PythonQtWrapper_QDynamicPropertyChangeEvent\0"
    "\0QDynamicPropertyChangeEvent*\0name\0"
    "new_QDynamicPropertyChangeEvent(QByteArray)\0"
    "obj\0"
    "delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent*)\0"
    "QByteArray\0theWrappedObject\0"
    "propertyName(QDynamicPropertyChangeEvent*)\0"
};

void PythonQtWrapper_QDynamicPropertyChangeEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDynamicPropertyChangeEvent *_t = static_cast<PythonQtWrapper_QDynamicPropertyChangeEvent *>(_o);
        switch (_id) {
        case 0: { QDynamicPropertyChangeEvent* _r = _t->new_QDynamicPropertyChangeEvent((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDynamicPropertyChangeEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QDynamicPropertyChangeEvent((*reinterpret_cast< QDynamicPropertyChangeEvent*(*)>(_a[1]))); break;
        case 2: { QByteArray _r = _t->propertyName((*reinterpret_cast< QDynamicPropertyChangeEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDynamicPropertyChangeEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDynamicPropertyChangeEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDynamicPropertyChangeEvent,
      qt_meta_data_PythonQtWrapper_QDynamicPropertyChangeEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDynamicPropertyChangeEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDynamicPropertyChangeEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDynamicPropertyChangeEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDynamicPropertyChangeEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDynamicPropertyChangeEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDynamicPropertyChangeEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QEasingCurve[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       1,  109, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   44,   30,   29, 0x0a,
      86,   29,   30,   29, 0x2a,
     111,  105,   30,   29, 0x0a,
     146,  142,   29,   29, 0x0a,
     204,  187,  181,   29, 0x0a,
     257,  234,  229,   29, 0x0a,
     316,  292,   29,   29, 0x0a,
     352,  234,   30,   29, 0x0a,
     396,  234,  229,   29, 0x0a,
     431,  292,   29,   29, 0x0a,
     468,  187,  181,   29, 0x0a,
     493,  187,  181,   29, 0x0a,
     542,  515,   29,   29, 0x0a,
     603,  576,   29,   29, 0x0a,
     661,  637,   29,   29, 0x0a,
     714,  692,   29,   29, 0x0a,
     775,  187,  756,   29, 0x0a,
     821,  795,  181,   29, 0x0a,
     867,   29,  859,   29, 0x0a,

 // enums: name, flags, count, data
     894, 0x0,   47,  113,

 // enum data: key, value
     899, uint(PythonQtWrapper_QEasingCurve::Linear),
     906, uint(PythonQtWrapper_QEasingCurve::InQuad),
     913, uint(PythonQtWrapper_QEasingCurve::OutQuad),
     921, uint(PythonQtWrapper_QEasingCurve::InOutQuad),
     931, uint(PythonQtWrapper_QEasingCurve::OutInQuad),
     941, uint(PythonQtWrapper_QEasingCurve::InCubic),
     949, uint(PythonQtWrapper_QEasingCurve::OutCubic),
     958, uint(PythonQtWrapper_QEasingCurve::InOutCubic),
     969, uint(PythonQtWrapper_QEasingCurve::OutInCubic),
     980, uint(PythonQtWrapper_QEasingCurve::InQuart),
     988, uint(PythonQtWrapper_QEasingCurve::OutQuart),
     997, uint(PythonQtWrapper_QEasingCurve::InOutQuart),
    1008, uint(PythonQtWrapper_QEasingCurve::OutInQuart),
    1019, uint(PythonQtWrapper_QEasingCurve::InQuint),
    1027, uint(PythonQtWrapper_QEasingCurve::OutQuint),
    1036, uint(PythonQtWrapper_QEasingCurve::InOutQuint),
    1047, uint(PythonQtWrapper_QEasingCurve::OutInQuint),
    1058, uint(PythonQtWrapper_QEasingCurve::InSine),
    1065, uint(PythonQtWrapper_QEasingCurve::OutSine),
    1073, uint(PythonQtWrapper_QEasingCurve::InOutSine),
    1083, uint(PythonQtWrapper_QEasingCurve::OutInSine),
    1093, uint(PythonQtWrapper_QEasingCurve::InExpo),
    1100, uint(PythonQtWrapper_QEasingCurve::OutExpo),
    1108, uint(PythonQtWrapper_QEasingCurve::InOutExpo),
    1118, uint(PythonQtWrapper_QEasingCurve::OutInExpo),
    1128, uint(PythonQtWrapper_QEasingCurve::InCirc),
    1135, uint(PythonQtWrapper_QEasingCurve::OutCirc),
    1143, uint(PythonQtWrapper_QEasingCurve::InOutCirc),
    1153, uint(PythonQtWrapper_QEasingCurve::OutInCirc),
    1163, uint(PythonQtWrapper_QEasingCurve::InElastic),
    1173, uint(PythonQtWrapper_QEasingCurve::OutElastic),
    1184, uint(PythonQtWrapper_QEasingCurve::InOutElastic),
    1197, uint(PythonQtWrapper_QEasingCurve::OutInElastic),
    1210, uint(PythonQtWrapper_QEasingCurve::InBack),
    1217, uint(PythonQtWrapper_QEasingCurve::OutBack),
    1225, uint(PythonQtWrapper_QEasingCurve::InOutBack),
    1235, uint(PythonQtWrapper_QEasingCurve::OutInBack),
    1245, uint(PythonQtWrapper_QEasingCurve::InBounce),
    1254, uint(PythonQtWrapper_QEasingCurve::OutBounce),
    1264, uint(PythonQtWrapper_QEasingCurve::InOutBounce),
    1276, uint(PythonQtWrapper_QEasingCurve::OutInBounce),
    1288, uint(PythonQtWrapper_QEasingCurve::InCurve),
    1296, uint(PythonQtWrapper_QEasingCurve::OutCurve),
    1305, uint(PythonQtWrapper_QEasingCurve::SineCurve),
    1315, uint(PythonQtWrapper_QEasingCurve::CosineCurve),
    1327, uint(PythonQtWrapper_QEasingCurve::Custom),
    1334, uint(PythonQtWrapper_QEasingCurve::NCurveTypes),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QEasingCurve[] = {
    "PythonQtWrapper_QEasingCurve\0\0"
    "QEasingCurve*\0type\0"
    "new_QEasingCurve(QEasingCurve::Type)\0"
    "new_QEasingCurve()\0other\0"
    "new_QEasingCurve(QEasingCurve)\0obj\0"
    "delete_QEasingCurve(QEasingCurve*)\0"
    "qreal\0theWrappedObject\0amplitude(QEasingCurve*)\0"
    "bool\0theWrappedObject,other\0"
    "__ne__(QEasingCurve*,QEasingCurve)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QEasingCurve*,QDataStream&)\0"
    "operator_assign(QEasingCurve*,QEasingCurve)\0"
    "__eq__(QEasingCurve*,QEasingCurve)\0"
    "readFrom(QEasingCurve*,QDataStream&)\0"
    "overshoot(QEasingCurve*)\0period(QEasingCurve*)\0"
    "theWrappedObject,amplitude\0"
    "setAmplitude(QEasingCurve*,qreal)\0"
    "theWrappedObject,overshoot\0"
    "setOvershoot(QEasingCurve*,qreal)\0"
    "theWrappedObject,period\0"
    "setPeriod(QEasingCurve*,qreal)\0"
    "theWrappedObject,type\0"
    "setType(QEasingCurve*,QEasingCurve::Type)\0"
    "QEasingCurve::Type\0type(QEasingCurve*)\0"
    "theWrappedObject,progress\0"
    "valueForProgress(QEasingCurve*,qreal)\0"
    "QString\0py_toString(QEasingCurve*)\0"
    "Type\0Linear\0InQuad\0OutQuad\0InOutQuad\0"
    "OutInQuad\0InCubic\0OutCubic\0InOutCubic\0"
    "OutInCubic\0InQuart\0OutQuart\0InOutQuart\0"
    "OutInQuart\0InQuint\0OutQuint\0InOutQuint\0"
    "OutInQuint\0InSine\0OutSine\0InOutSine\0"
    "OutInSine\0InExpo\0OutExpo\0InOutExpo\0"
    "OutInExpo\0InCirc\0OutCirc\0InOutCirc\0"
    "OutInCirc\0InElastic\0OutElastic\0"
    "InOutElastic\0OutInElastic\0InBack\0"
    "OutBack\0InOutBack\0OutInBack\0InBounce\0"
    "OutBounce\0InOutBounce\0OutInBounce\0"
    "InCurve\0OutCurve\0SineCurve\0CosineCurve\0"
    "Custom\0NCurveTypes\0"
};

void PythonQtWrapper_QEasingCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QEasingCurve *_t = static_cast<PythonQtWrapper_QEasingCurve *>(_o);
        switch (_id) {
        case 0: { QEasingCurve* _r = _t->new_QEasingCurve((*reinterpret_cast< QEasingCurve::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEasingCurve**>(_a[0]) = _r; }  break;
        case 1: { QEasingCurve* _r = _t->new_QEasingCurve();
            if (_a[0]) *reinterpret_cast< QEasingCurve**>(_a[0]) = _r; }  break;
        case 2: { QEasingCurve* _r = _t->new_QEasingCurve((*reinterpret_cast< const QEasingCurve(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEasingCurve**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QEasingCurve((*reinterpret_cast< QEasingCurve*(*)>(_a[1]))); break;
        case 4: { qreal _r = _t->amplitude((*reinterpret_cast< QEasingCurve*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__ne__((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< const QEasingCurve(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->writeTo((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 7: { QEasingCurve* _r = _t->operator_assign((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< const QEasingCurve(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QEasingCurve**>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__eq__((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< const QEasingCurve(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->readFrom((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 10: { qreal _r = _t->overshoot((*reinterpret_cast< QEasingCurve*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->period((*reinterpret_cast< QEasingCurve*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: _t->setAmplitude((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 13: _t->setOvershoot((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 14: _t->setPeriod((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 15: _t->setType((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< QEasingCurve::Type(*)>(_a[2]))); break;
        case 16: { QEasingCurve::Type _r = _t->type((*reinterpret_cast< QEasingCurve*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEasingCurve::Type*>(_a[0]) = _r; }  break;
        case 17: { qreal _r = _t->valueForProgress((*reinterpret_cast< QEasingCurve*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->py_toString((*reinterpret_cast< QEasingCurve*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QEasingCurve::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QEasingCurve::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QEasingCurve,
      qt_meta_data_PythonQtWrapper_QEasingCurve, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QEasingCurve::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QEasingCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QEasingCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QEasingCurve))
        return static_cast<void*>(const_cast< PythonQtWrapper_QEasingCurve*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QEasingCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QElapsedTimer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   31,   30, 0x0a,
      70,   66,   30,   30, 0x0a,
     132,   30,  107,   30, 0x0a,
     189,  172,  165,   30, 0x0a,
     243,  218,  213,   30, 0x0a,
     277,  172,   30,   30, 0x0a,
     304,   30,  213,   30, 0x0a,
     339,  172,  213,   30, 0x0a,
     363,  172,  165,   30, 0x0a,
     422,  399,  165,   30, 0x0a,
     460,  172,  165,   30, 0x0a,
     489,  399,  213,   30, 0x0a,
     526,  399,  213,   30, 0x0a,
     563,  172,  165,   30, 0x0a,
     587,  399,  165,   30, 0x0a,
     624,  172,   30,   30, 0x0a,

 // enums: name, flags, count, data
     646, 0x0,    5,   98,

 // enum data: key, value
     656, uint(PythonQtWrapper_QElapsedTimer::SystemTime),
     667, uint(PythonQtWrapper_QElapsedTimer::MonotonicClock),
     682, uint(PythonQtWrapper_QElapsedTimer::TickCounter),
     694, uint(PythonQtWrapper_QElapsedTimer::MachAbsoluteTime),
     711, uint(PythonQtWrapper_QElapsedTimer::PerformanceCounter),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QElapsedTimer[] = {
    "PythonQtWrapper_QElapsedTimer\0\0"
    "QElapsedTimer*\0new_QElapsedTimer()\0"
    "obj\0delete_QElapsedTimer(QElapsedTimer*)\0"
    "QElapsedTimer::ClockType\0"
    "static_QElapsedTimer_clockType()\0"
    "qint64\0theWrappedObject\0elapsed(QElapsedTimer*)\0"
    "bool\0theWrappedObject,timeout\0"
    "hasExpired(QElapsedTimer*,qint64)\0"
    "invalidate(QElapsedTimer*)\0"
    "static_QElapsedTimer_isMonotonic()\0"
    "isValid(QElapsedTimer*)\0"
    "msecsSinceReference(QElapsedTimer*)\0"
    "theWrappedObject,other\0"
    "msecsTo(QElapsedTimer*,QElapsedTimer)\0"
    "nsecsElapsed(QElapsedTimer*)\0"
    "__ne__(QElapsedTimer*,QElapsedTimer)\0"
    "__eq__(QElapsedTimer*,QElapsedTimer)\0"
    "restart(QElapsedTimer*)\0"
    "secsTo(QElapsedTimer*,QElapsedTimer)\0"
    "start(QElapsedTimer*)\0ClockType\0"
    "SystemTime\0MonotonicClock\0TickCounter\0"
    "MachAbsoluteTime\0PerformanceCounter\0"
};

void PythonQtWrapper_QElapsedTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QElapsedTimer *_t = static_cast<PythonQtWrapper_QElapsedTimer *>(_o);
        switch (_id) {
        case 0: { QElapsedTimer* _r = _t->new_QElapsedTimer();
            if (_a[0]) *reinterpret_cast< QElapsedTimer**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QElapsedTimer((*reinterpret_cast< QElapsedTimer*(*)>(_a[1]))); break;
        case 2: { QElapsedTimer::ClockType _r = _t->static_QElapsedTimer_clockType();
            if (_a[0]) *reinterpret_cast< QElapsedTimer::ClockType*>(_a[0]) = _r; }  break;
        case 3: { qint64 _r = _t->elapsed((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->hasExpired((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->invalidate((*reinterpret_cast< QElapsedTimer*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->static_QElapsedTimer_isMonotonic();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isValid((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { qint64 _r = _t->msecsSinceReference((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 9: { qint64 _r = _t->msecsTo((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])),(*reinterpret_cast< const QElapsedTimer(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 10: { qint64 _r = _t->nsecsElapsed((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])),(*reinterpret_cast< const QElapsedTimer(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__eq__((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])),(*reinterpret_cast< const QElapsedTimer(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { qint64 _r = _t->restart((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 14: { qint64 _r = _t->secsTo((*reinterpret_cast< QElapsedTimer*(*)>(_a[1])),(*reinterpret_cast< const QElapsedTimer(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 15: _t->start((*reinterpret_cast< QElapsedTimer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QElapsedTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QElapsedTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QElapsedTimer,
      qt_meta_data_PythonQtWrapper_QElapsedTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QElapsedTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QElapsedTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QElapsedTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QElapsedTimer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QElapsedTimer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QElapsedTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   32,   24,   23, 0x0a,
      66,   62,   23,   23, 0x0a,
     106,   89,   23,   23, 0x0a,
     122,   89,   23,   23, 0x0a,
     143,   89,  138,   23, 0x0a,
     172,  167,  163,   23, 0x0a,
     209,   23,  163,   23, 0x2a,
     269,  243,   23,   23, 0x0a,
     295,   89,  138,   23, 0x0a,
     329,   89,  316,   23, 0x0a,
     351,   23,  343,   23, 0x0a,

 // enums: name, flags, count, data
     372, 0x0,  159,   73,

 // enum data: key, value
     377, uint(PythonQtWrapper_QEvent::None),
     382, uint(PythonQtWrapper_QEvent::Timer),
     388, uint(PythonQtWrapper_QEvent::MouseButtonPress),
     405, uint(PythonQtWrapper_QEvent::MouseButtonRelease),
     424, uint(PythonQtWrapper_QEvent::MouseButtonDblClick),
     444, uint(PythonQtWrapper_QEvent::MouseMove),
     454, uint(PythonQtWrapper_QEvent::KeyPress),
     463, uint(PythonQtWrapper_QEvent::KeyRelease),
     474, uint(PythonQtWrapper_QEvent::FocusIn),
     482, uint(PythonQtWrapper_QEvent::FocusOut),
     491, uint(PythonQtWrapper_QEvent::Enter),
     497, uint(PythonQtWrapper_QEvent::Leave),
     503, uint(PythonQtWrapper_QEvent::Paint),
     509, uint(PythonQtWrapper_QEvent::Move),
     514, uint(PythonQtWrapper_QEvent::Resize),
     521, uint(PythonQtWrapper_QEvent::Create),
     528, uint(PythonQtWrapper_QEvent::Destroy),
     536, uint(PythonQtWrapper_QEvent::Show),
     541, uint(PythonQtWrapper_QEvent::Hide),
     546, uint(PythonQtWrapper_QEvent::Close),
     552, uint(PythonQtWrapper_QEvent::Quit),
     557, uint(PythonQtWrapper_QEvent::ParentChange),
     570, uint(PythonQtWrapper_QEvent::ParentAboutToChange),
     590, uint(PythonQtWrapper_QEvent::ThreadChange),
     603, uint(PythonQtWrapper_QEvent::WindowActivate),
     618, uint(PythonQtWrapper_QEvent::WindowDeactivate),
     635, uint(PythonQtWrapper_QEvent::ShowToParent),
     648, uint(PythonQtWrapper_QEvent::HideToParent),
     661, uint(PythonQtWrapper_QEvent::Wheel),
     667, uint(PythonQtWrapper_QEvent::WindowTitleChange),
     685, uint(PythonQtWrapper_QEvent::WindowIconChange),
     702, uint(PythonQtWrapper_QEvent::ApplicationWindowIconChange),
     730, uint(PythonQtWrapper_QEvent::ApplicationFontChange),
     752, uint(PythonQtWrapper_QEvent::ApplicationLayoutDirectionChange),
     785, uint(PythonQtWrapper_QEvent::ApplicationPaletteChange),
     810, uint(PythonQtWrapper_QEvent::PaletteChange),
     824, uint(PythonQtWrapper_QEvent::Clipboard),
     834, uint(PythonQtWrapper_QEvent::Speech),
     841, uint(PythonQtWrapper_QEvent::MetaCall),
     850, uint(PythonQtWrapper_QEvent::SockAct),
     858, uint(PythonQtWrapper_QEvent::WinEventAct),
     870, uint(PythonQtWrapper_QEvent::DeferredDelete),
     885, uint(PythonQtWrapper_QEvent::DragEnter),
     895, uint(PythonQtWrapper_QEvent::DragMove),
     904, uint(PythonQtWrapper_QEvent::DragLeave),
     914, uint(PythonQtWrapper_QEvent::Drop),
     919, uint(PythonQtWrapper_QEvent::DragResponse),
     932, uint(PythonQtWrapper_QEvent::ChildAdded),
     943, uint(PythonQtWrapper_QEvent::ChildPolished),
     957, uint(PythonQtWrapper_QEvent::ChildRemoved),
     970, uint(PythonQtWrapper_QEvent::ShowWindowRequest),
     988, uint(PythonQtWrapper_QEvent::PolishRequest),
    1002, uint(PythonQtWrapper_QEvent::Polish),
    1009, uint(PythonQtWrapper_QEvent::LayoutRequest),
    1023, uint(PythonQtWrapper_QEvent::UpdateRequest),
    1037, uint(PythonQtWrapper_QEvent::UpdateLater),
    1049, uint(PythonQtWrapper_QEvent::EmbeddingControl),
    1066, uint(PythonQtWrapper_QEvent::ActivateControl),
    1082, uint(PythonQtWrapper_QEvent::DeactivateControl),
    1100, uint(PythonQtWrapper_QEvent::ContextMenu),
    1112, uint(PythonQtWrapper_QEvent::InputMethod),
    1124, uint(PythonQtWrapper_QEvent::AccessibilityPrepare),
    1145, uint(PythonQtWrapper_QEvent::TabletMove),
    1156, uint(PythonQtWrapper_QEvent::LocaleChange),
    1169, uint(PythonQtWrapper_QEvent::LanguageChange),
    1184, uint(PythonQtWrapper_QEvent::LayoutDirectionChange),
    1206, uint(PythonQtWrapper_QEvent::Style),
    1212, uint(PythonQtWrapper_QEvent::TabletPress),
    1224, uint(PythonQtWrapper_QEvent::TabletRelease),
    1238, uint(PythonQtWrapper_QEvent::OkRequest),
    1248, uint(PythonQtWrapper_QEvent::HelpRequest),
    1260, uint(PythonQtWrapper_QEvent::IconDrag),
    1269, uint(PythonQtWrapper_QEvent::FontChange),
    1280, uint(PythonQtWrapper_QEvent::EnabledChange),
    1294, uint(PythonQtWrapper_QEvent::ActivationChange),
    1311, uint(PythonQtWrapper_QEvent::StyleChange),
    1323, uint(PythonQtWrapper_QEvent::IconTextChange),
    1338, uint(PythonQtWrapper_QEvent::ModifiedChange),
    1353, uint(PythonQtWrapper_QEvent::MouseTrackingChange),
    1373, uint(PythonQtWrapper_QEvent::WindowBlocked),
    1387, uint(PythonQtWrapper_QEvent::WindowUnblocked),
    1403, uint(PythonQtWrapper_QEvent::WindowStateChange),
    1421, uint(PythonQtWrapper_QEvent::ToolTip),
    1429, uint(PythonQtWrapper_QEvent::WhatsThis),
    1439, uint(PythonQtWrapper_QEvent::StatusTip),
    1449, uint(PythonQtWrapper_QEvent::ActionChanged),
    1463, uint(PythonQtWrapper_QEvent::ActionAdded),
    1475, uint(PythonQtWrapper_QEvent::ActionRemoved),
    1489, uint(PythonQtWrapper_QEvent::FileOpen),
    1498, uint(PythonQtWrapper_QEvent::Shortcut),
    1507, uint(PythonQtWrapper_QEvent::ShortcutOverride),
    1524, uint(PythonQtWrapper_QEvent::WhatsThisClicked),
    1541, uint(PythonQtWrapper_QEvent::ToolBarChange),
    1555, uint(PythonQtWrapper_QEvent::ApplicationActivate),
    1575, uint(PythonQtWrapper_QEvent::ApplicationActivated),
    1596, uint(PythonQtWrapper_QEvent::ApplicationDeactivate),
    1618, uint(PythonQtWrapper_QEvent::ApplicationDeactivated),
    1641, uint(PythonQtWrapper_QEvent::QueryWhatsThis),
    1656, uint(PythonQtWrapper_QEvent::EnterWhatsThisMode),
    1675, uint(PythonQtWrapper_QEvent::LeaveWhatsThisMode),
    1694, uint(PythonQtWrapper_QEvent::ZOrderChange),
    1707, uint(PythonQtWrapper_QEvent::HoverEnter),
    1718, uint(PythonQtWrapper_QEvent::HoverLeave),
    1729, uint(PythonQtWrapper_QEvent::HoverMove),
    1739, uint(PythonQtWrapper_QEvent::AccessibilityHelp),
    1757, uint(PythonQtWrapper_QEvent::AccessibilityDescription),
    1782, uint(PythonQtWrapper_QEvent::AcceptDropsChange),
    1800, uint(PythonQtWrapper_QEvent::MenubarUpdated),
    1815, uint(PythonQtWrapper_QEvent::ZeroTimerEvent),
    1830, uint(PythonQtWrapper_QEvent::GraphicsSceneMouseMove),
    1853, uint(PythonQtWrapper_QEvent::GraphicsSceneMousePress),
    1877, uint(PythonQtWrapper_QEvent::GraphicsSceneMouseRelease),
    1903, uint(PythonQtWrapper_QEvent::GraphicsSceneMouseDoubleClick),
    1933, uint(PythonQtWrapper_QEvent::GraphicsSceneContextMenu),
    1958, uint(PythonQtWrapper_QEvent::GraphicsSceneHoverEnter),
    1982, uint(PythonQtWrapper_QEvent::GraphicsSceneHoverMove),
    2005, uint(PythonQtWrapper_QEvent::GraphicsSceneHoverLeave),
    2029, uint(PythonQtWrapper_QEvent::GraphicsSceneHelp),
    2047, uint(PythonQtWrapper_QEvent::GraphicsSceneDragEnter),
    2070, uint(PythonQtWrapper_QEvent::GraphicsSceneDragMove),
    2092, uint(PythonQtWrapper_QEvent::GraphicsSceneDragLeave),
    2115, uint(PythonQtWrapper_QEvent::GraphicsSceneDrop),
    2133, uint(PythonQtWrapper_QEvent::GraphicsSceneWheel),
    2152, uint(PythonQtWrapper_QEvent::KeyboardLayoutChange),
    2173, uint(PythonQtWrapper_QEvent::DynamicPropertyChange),
    2195, uint(PythonQtWrapper_QEvent::TabletEnterProximity),
    2216, uint(PythonQtWrapper_QEvent::TabletLeaveProximity),
    2237, uint(PythonQtWrapper_QEvent::NonClientAreaMouseMove),
    2260, uint(PythonQtWrapper_QEvent::NonClientAreaMouseButtonPress),
    2290, uint(PythonQtWrapper_QEvent::NonClientAreaMouseButtonRelease),
    2322, uint(PythonQtWrapper_QEvent::NonClientAreaMouseButtonDblClick),
    2355, uint(PythonQtWrapper_QEvent::MacSizeChange),
    2369, uint(PythonQtWrapper_QEvent::ContentsRectChange),
    2388, uint(PythonQtWrapper_QEvent::MacGLWindowChange),
    2406, uint(PythonQtWrapper_QEvent::FutureCallOut),
    2420, uint(PythonQtWrapper_QEvent::GraphicsSceneResize),
    2440, uint(PythonQtWrapper_QEvent::GraphicsSceneMove),
    2458, uint(PythonQtWrapper_QEvent::CursorChange),
    2471, uint(PythonQtWrapper_QEvent::ToolTipChange),
    2485, uint(PythonQtWrapper_QEvent::NetworkReplyUpdated),
    2505, uint(PythonQtWrapper_QEvent::GrabMouse),
    2515, uint(PythonQtWrapper_QEvent::UngrabMouse),
    2527, uint(PythonQtWrapper_QEvent::GrabKeyboard),
    2540, uint(PythonQtWrapper_QEvent::UngrabKeyboard),
    2555, uint(PythonQtWrapper_QEvent::MacGLClearDrawable),
    2574, uint(PythonQtWrapper_QEvent::StateMachineSignal),
    2593, uint(PythonQtWrapper_QEvent::StateMachineWrapped),
    2613, uint(PythonQtWrapper_QEvent::TouchBegin),
    2624, uint(PythonQtWrapper_QEvent::TouchUpdate),
    2636, uint(PythonQtWrapper_QEvent::TouchEnd),
    2645, uint(PythonQtWrapper_QEvent::NativeGesture),
    2659, uint(PythonQtWrapper_QEvent::RequestSoftwareInputPanel),
    2685, uint(PythonQtWrapper_QEvent::CloseSoftwareInputPanel),
    2709, uint(PythonQtWrapper_QEvent::UpdateSoftKeys),
    2724, uint(PythonQtWrapper_QEvent::WinIdChange),
    2736, uint(PythonQtWrapper_QEvent::Gesture),
    2744, uint(PythonQtWrapper_QEvent::GestureOverride),
    2760, uint(PythonQtWrapper_QEvent::User),
    2765, uint(PythonQtWrapper_QEvent::MaxUser),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QEvent[] = {
    "PythonQtWrapper_QEvent\0\0QEvent*\0type\0"
    "new_QEvent(QEvent::Type)\0obj\0"
    "delete_QEvent(QEvent*)\0theWrappedObject\0"
    "accept(QEvent*)\0ignore(QEvent*)\0bool\0"
    "isAccepted(QEvent*)\0int\0hint\0"
    "static_QEvent_registerEventType(int)\0"
    "static_QEvent_registerEventType()\0"
    "theWrappedObject,accepted\0"
    "setAccepted(QEvent*,bool)\0"
    "spontaneous(QEvent*)\0QEvent::Type\0"
    "type(QEvent*)\0QString\0py_toString(QEvent*)\0"
    "Type\0None\0Timer\0MouseButtonPress\0"
    "MouseButtonRelease\0MouseButtonDblClick\0"
    "MouseMove\0KeyPress\0KeyRelease\0FocusIn\0"
    "FocusOut\0Enter\0Leave\0Paint\0Move\0Resize\0"
    "Create\0Destroy\0Show\0Hide\0Close\0Quit\0"
    "ParentChange\0ParentAboutToChange\0"
    "ThreadChange\0WindowActivate\0"
    "WindowDeactivate\0ShowToParent\0"
    "HideToParent\0Wheel\0WindowTitleChange\0"
    "WindowIconChange\0ApplicationWindowIconChange\0"
    "ApplicationFontChange\0"
    "ApplicationLayoutDirectionChange\0"
    "ApplicationPaletteChange\0PaletteChange\0"
    "Clipboard\0Speech\0MetaCall\0SockAct\0"
    "WinEventAct\0DeferredDelete\0DragEnter\0"
    "DragMove\0DragLeave\0Drop\0DragResponse\0"
    "ChildAdded\0ChildPolished\0ChildRemoved\0"
    "ShowWindowRequest\0PolishRequest\0Polish\0"
    "LayoutRequest\0UpdateRequest\0UpdateLater\0"
    "EmbeddingControl\0ActivateControl\0"
    "DeactivateControl\0ContextMenu\0InputMethod\0"
    "AccessibilityPrepare\0TabletMove\0"
    "LocaleChange\0LanguageChange\0"
    "LayoutDirectionChange\0Style\0TabletPress\0"
    "TabletRelease\0OkRequest\0HelpRequest\0"
    "IconDrag\0FontChange\0EnabledChange\0"
    "ActivationChange\0StyleChange\0"
    "IconTextChange\0ModifiedChange\0"
    "MouseTrackingChange\0WindowBlocked\0"
    "WindowUnblocked\0WindowStateChange\0"
    "ToolTip\0WhatsThis\0StatusTip\0ActionChanged\0"
    "ActionAdded\0ActionRemoved\0FileOpen\0"
    "Shortcut\0ShortcutOverride\0WhatsThisClicked\0"
    "ToolBarChange\0ApplicationActivate\0"
    "ApplicationActivated\0ApplicationDeactivate\0"
    "ApplicationDeactivated\0QueryWhatsThis\0"
    "EnterWhatsThisMode\0LeaveWhatsThisMode\0"
    "ZOrderChange\0HoverEnter\0HoverLeave\0"
    "HoverMove\0AccessibilityHelp\0"
    "AccessibilityDescription\0AcceptDropsChange\0"
    "MenubarUpdated\0ZeroTimerEvent\0"
    "GraphicsSceneMouseMove\0GraphicsSceneMousePress\0"
    "GraphicsSceneMouseRelease\0"
    "GraphicsSceneMouseDoubleClick\0"
    "GraphicsSceneContextMenu\0"
    "GraphicsSceneHoverEnter\0GraphicsSceneHoverMove\0"
    "GraphicsSceneHoverLeave\0GraphicsSceneHelp\0"
    "GraphicsSceneDragEnter\0GraphicsSceneDragMove\0"
    "GraphicsSceneDragLeave\0GraphicsSceneDrop\0"
    "GraphicsSceneWheel\0KeyboardLayoutChange\0"
    "DynamicPropertyChange\0TabletEnterProximity\0"
    "TabletLeaveProximity\0NonClientAreaMouseMove\0"
    "NonClientAreaMouseButtonPress\0"
    "NonClientAreaMouseButtonRelease\0"
    "NonClientAreaMouseButtonDblClick\0"
    "MacSizeChange\0ContentsRectChange\0"
    "MacGLWindowChange\0FutureCallOut\0"
    "GraphicsSceneResize\0GraphicsSceneMove\0"
    "CursorChange\0ToolTipChange\0"
    "NetworkReplyUpdated\0GrabMouse\0UngrabMouse\0"
    "GrabKeyboard\0UngrabKeyboard\0"
    "MacGLClearDrawable\0StateMachineSignal\0"
    "StateMachineWrapped\0TouchBegin\0"
    "TouchUpdate\0TouchEnd\0NativeGesture\0"
    "RequestSoftwareInputPanel\0"
    "CloseSoftwareInputPanel\0UpdateSoftKeys\0"
    "WinIdChange\0Gesture\0GestureOverride\0"
    "User\0MaxUser\0"
};

void PythonQtWrapper_QEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QEvent *_t = static_cast<PythonQtWrapper_QEvent *>(_o);
        switch (_id) {
        case 0: { QEvent* _r = _t->new_QEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 2: _t->accept((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 3: _t->ignore((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->isAccepted((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->static_QEvent_registerEventType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->static_QEvent_registerEventType();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->setAccepted((*reinterpret_cast< QEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: { bool _r = _t->spontaneous((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QEvent::Type _r = _t->type((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEvent::Type*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->py_toString((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QEvent,
      qt_meta_data_PythonQtWrapper_QEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QEventLoop[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       2,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     151,  128,  124,   27, 0x0a,
     217,  200,  124,   27, 0x2a,
     263,  235,   27,   27, 0x0a,
     285,  200,   27,   27, 0x2a,
     308,  200,  303,   27, 0x0a,
     331,  128,  303,   27, 0x0a,
     389,  200,  303,   27, 0x2a,
     451,  416,   27,   27, 0x0a,
     513,  200,   27,   27, 0x0a,

 // enums: name, flags, count, data
     533, 0x0,    8,   82,
     551, 0x1,    8,   98,

 // enum data: key, value
     570, uint(PythonQtWrapper_QEventLoop::AllEvents),
     580, uint(PythonQtWrapper_QEventLoop::ExcludeUserInputEvents),
     603, uint(PythonQtWrapper_QEventLoop::ExcludeSocketNotifiers),
     626, uint(PythonQtWrapper_QEventLoop::WaitForMoreEvents),
     644, uint(PythonQtWrapper_QEventLoop::X11ExcludeTimers),
     661, uint(PythonQtWrapper_QEventLoop::DeferredDeletion),
     678, uint(PythonQtWrapper_QEventLoop::EventLoopExec),
     692, uint(PythonQtWrapper_QEventLoop::DialogExec),
     570, uint(PythonQtWrapper_QEventLoop::AllEvents),
     580, uint(PythonQtWrapper_QEventLoop::ExcludeUserInputEvents),
     603, uint(PythonQtWrapper_QEventLoop::ExcludeSocketNotifiers),
     626, uint(PythonQtWrapper_QEventLoop::WaitForMoreEvents),
     644, uint(PythonQtWrapper_QEventLoop::X11ExcludeTimers),
     661, uint(PythonQtWrapper_QEventLoop::DeferredDeletion),
     678, uint(PythonQtWrapper_QEventLoop::EventLoopExec),
     692, uint(PythonQtWrapper_QEventLoop::DialogExec),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QEventLoop[] = {
    "PythonQtWrapper_QEventLoop\0\0QEventLoop*\0"
    "parent\0new_QEventLoop(QObject*)\0"
    "new_QEventLoop()\0obj\0"
    "delete_QEventLoop(QEventLoop*)\0int\0"
    "theWrappedObject,flags\0"
    "exec(QEventLoop*,QEventLoop::ProcessEventsFlags)\0"
    "theWrappedObject\0exec(QEventLoop*)\0"
    "theWrappedObject,returnCode\0"
    "exit(QEventLoop*,int)\0exit(QEventLoop*)\0"
    "bool\0isRunning(QEventLoop*)\0"
    "processEvents(QEventLoop*,QEventLoop::ProcessEventsFlags)\0"
    "processEvents(QEventLoop*)\0"
    "theWrappedObject,flags,maximumTime\0"
    "processEvents(QEventLoop*,QEventLoop::ProcessEventsFlags,int)\0"
    "wakeUp(QEventLoop*)\0ProcessEventsFlag\0"
    "ProcessEventsFlags\0AllEvents\0"
    "ExcludeUserInputEvents\0ExcludeSocketNotifiers\0"
    "WaitForMoreEvents\0X11ExcludeTimers\0"
    "DeferredDeletion\0EventLoopExec\0"
    "DialogExec\0"
};

void PythonQtWrapper_QEventLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QEventLoop *_t = static_cast<PythonQtWrapper_QEventLoop *>(_o);
        switch (_id) {
        case 0: { QEventLoop* _r = _t->new_QEventLoop((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEventLoop**>(_a[0]) = _r; }  break;
        case 1: { QEventLoop* _r = _t->new_QEventLoop();
            if (_a[0]) *reinterpret_cast< QEventLoop**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QEventLoop((*reinterpret_cast< QEventLoop*(*)>(_a[1]))); break;
        case 3: { int _r = _t->exec((*reinterpret_cast< QEventLoop*(*)>(_a[1])),(*reinterpret_cast< QEventLoop::ProcessEventsFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->exec((*reinterpret_cast< QEventLoop*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->exit((*reinterpret_cast< QEventLoop*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->exit((*reinterpret_cast< QEventLoop*(*)>(_a[1]))); break;
        case 7: { bool _r = _t->isRunning((*reinterpret_cast< QEventLoop*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->processEvents((*reinterpret_cast< QEventLoop*(*)>(_a[1])),(*reinterpret_cast< QEventLoop::ProcessEventsFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->processEvents((*reinterpret_cast< QEventLoop*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->processEvents((*reinterpret_cast< QEventLoop*(*)>(_a[1])),(*reinterpret_cast< QEventLoop::ProcessEventsFlags(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->wakeUp((*reinterpret_cast< QEventLoop*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QEventLoop::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QEventLoop::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QEventLoop,
      qt_meta_data_PythonQtWrapper_QEventLoop, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QEventLoop::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QEventLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QEventLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QEventLoop))
        return static_cast<void*>(const_cast< PythonQtWrapper_QEventLoop*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QEventLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QEventTransition[] = {

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
      76,   52,   34,   33, 0x0a,
     140,  128,   34,   33, 0x2a,
     196,  184,   34,   33, 0x0a,
     226,   33,   34,   33, 0x2a,
     253,  249,   33,   33, 0x0a,
     320,  301,  296,   33, 0x0a,
     379,  362,  353,   33, 0x0a,
     433,  410,  296,   33, 0x0a,
     483,  362,  470,   33, 0x0a,
     512,  410,   33,   33, 0x0a,
     576,  552,   33,   33, 0x0a,
     641,  619,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QEventTransition[] = {
    "PythonQtWrapper_QEventTransition\0\0"
    "QEventTransition*\0object,type,sourceState\0"
    "new_QEventTransition(QObject*,QEvent::Type,QState*)\0"
    "object,type\0new_QEventTransition(QObject*,QEvent::Type)\0"
    "sourceState\0new_QEventTransition(QState*)\0"
    "new_QEventTransition()\0obj\0"
    "delete_QEventTransition(QEventTransition*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QEventTransition*,QEvent*)\0"
    "QObject*\0theWrappedObject\0"
    "eventSource(QEventTransition*)\0"
    "theWrappedObject,event\0"
    "eventTest(QEventTransition*,QEvent*)\0"
    "QEvent::Type\0eventType(QEventTransition*)\0"
    "onTransition(QEventTransition*,QEvent*)\0"
    "theWrappedObject,object\0"
    "setEventSource(QEventTransition*,QObject*)\0"
    "theWrappedObject,type\0"
    "setEventType(QEventTransition*,QEvent::Type)\0"
};

void PythonQtWrapper_QEventTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QEventTransition *_t = static_cast<PythonQtWrapper_QEventTransition *>(_o);
        switch (_id) {
        case 0: { QEventTransition* _r = _t->new_QEventTransition((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent::Type(*)>(_a[2])),(*reinterpret_cast< QState*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QEventTransition**>(_a[0]) = _r; }  break;
        case 1: { QEventTransition* _r = _t->new_QEventTransition((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QEventTransition**>(_a[0]) = _r; }  break;
        case 2: { QEventTransition* _r = _t->new_QEventTransition((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEventTransition**>(_a[0]) = _r; }  break;
        case 3: { QEventTransition* _r = _t->new_QEventTransition();
            if (_a[0]) *reinterpret_cast< QEventTransition**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QEventTransition((*reinterpret_cast< QEventTransition*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QEventTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QObject* _r = _t->eventSource((*reinterpret_cast< QEventTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->eventTest((*reinterpret_cast< QEventTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QEvent::Type _r = _t->eventType((*reinterpret_cast< QEventTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QEvent::Type*>(_a[0]) = _r; }  break;
        case 9: _t->onTransition((*reinterpret_cast< QEventTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 10: _t->setEventSource((*reinterpret_cast< QEventTransition*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 11: _t->setEventType((*reinterpret_cast< QEventTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent::Type(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QEventTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QEventTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QEventTransition,
      qt_meta_data_PythonQtWrapper_QEventTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QEventTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QEventTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QEventTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QEventTransition))
        return static_cast<void*>(const_cast< PythonQtWrapper_QEventTransition*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QEventTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFactoryInterface[] = {

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
      54,   34,   35,   34, 0x0a,
      82,   78,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFactoryInterface[] = {
    "PythonQtWrapper_QFactoryInterface\0\0"
    "QFactoryInterface*\0new_QFactoryInterface()\0"
    "obj\0delete_QFactoryInterface(QFactoryInterface*)\0"
};

void PythonQtWrapper_QFactoryInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFactoryInterface *_t = static_cast<PythonQtWrapper_QFactoryInterface *>(_o);
        switch (_id) {
        case 0: { QFactoryInterface* _r = _t->new_QFactoryInterface();
            if (_a[0]) *reinterpret_cast< QFactoryInterface**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QFactoryInterface((*reinterpret_cast< QFactoryInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFactoryInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFactoryInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFactoryInterface,
      qt_meta_data_PythonQtWrapper_QFactoryInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFactoryInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFactoryInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFactoryInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFactoryInterface))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFactoryInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFactoryInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       6,  229, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   22,   23,   22, 0x0a,
      49,   42,   23,   22, 0x0a,
      74,   69,   23,   22, 0x0a,
     105,   93,   23,   22, 0x0a,
     137,  133,   22,   22, 0x0a,
     180,  163,  158,   22, 0x0a,
     194,  163,   22,   22, 0x0a,
     225,  208,  158,   22, 0x0a,
     285,  260,  158,   22, 0x0a,
     328,  314,  306,   22, 0x0a,
     384,  375,  364,   22, 0x0a,
     434,  163,  417,   22, 0x0a,
     448,  163,  158,   22, 0x0a,
     463,  375,  158,   22, 0x0a,
     513,  163,  492,   22, 0x0a,
     532,  163,  306,   22, 0x0a,
     549,  163,  158,   22, 0x0a,
     567,  163,  563,   22, 0x0a,
     582,  163,  158,   22, 0x0a,
     603,  260,  158,   22, 0x0a,
     640,  624,  158,   22, 0x0a,
     698,  675,  158,   22, 0x0a,
     771,  731,  158,   22, 0x0a,
     850,  163,  831,   22, 0x0a,
     879,  870,  831,   22, 0x0a,
     920,  163,  913,   22, 0x0a,
     961,  932,  913,   22, 0x0a,
     991,  932,  913,   22, 0x0a,
    1025,  163,  158,   22, 0x0a,
    1040,  375,  158,   22, 0x0a,
    1069,  260,  158,   22, 0x0a,
    1108, 1092,  158,   22, 0x0a,
    1157, 1145,  158,   22, 0x0a,
    1213, 1193,  158,   22, 0x0a,
    1259, 1235,  158,   22, 0x0a,
    1301, 1279,   22,   22, 0x0a,
    1361, 1329,  158,   22, 0x0a,
    1427, 1403,  158,   22, 0x0a,
    1483,  163,  913,   22, 0x0a,
    1496,  163,  306,   22, 0x0a,
    1518,  375,  306,   22, 0x0a,
    1554,  163,   22,   22, 0x0a,
    1599, 1573,  913,   22, 0x0a,

 // enums: name, flags, count, data
    1636, 0x0,   15,  253,
    1646, 0x0,    2,  283,
    1661, 0x1,    2,  287,
    1677, 0x0,    1,  291,
    1692, 0x0,   12,  293,
    1703, 0x1,   12,  317,

 // enum data: key, value
    1715, uint(PythonQtWrapper_QFile::NoError),
    1723, uint(PythonQtWrapper_QFile::ReadError),
    1733, uint(PythonQtWrapper_QFile::WriteError),
    1744, uint(PythonQtWrapper_QFile::FatalError),
    1755, uint(PythonQtWrapper_QFile::ResourceError),
    1769, uint(PythonQtWrapper_QFile::OpenError),
    1779, uint(PythonQtWrapper_QFile::AbortError),
    1790, uint(PythonQtWrapper_QFile::TimeOutError),
    1803, uint(PythonQtWrapper_QFile::UnspecifiedError),
    1820, uint(PythonQtWrapper_QFile::RemoveError),
    1832, uint(PythonQtWrapper_QFile::RenameError),
    1844, uint(PythonQtWrapper_QFile::PositionError),
    1858, uint(PythonQtWrapper_QFile::ResizeError),
    1870, uint(PythonQtWrapper_QFile::PermissionsError),
    1887, uint(PythonQtWrapper_QFile::CopyError),
    1897, uint(PythonQtWrapper_QFile::AutoCloseHandle),
    1913, uint(PythonQtWrapper_QFile::DontCloseHandle),
    1897, uint(PythonQtWrapper_QFile::AutoCloseHandle),
    1913, uint(PythonQtWrapper_QFile::DontCloseHandle),
    1929, uint(PythonQtWrapper_QFile::NoOptions),
    1939, uint(PythonQtWrapper_QFile::ReadOwner),
    1949, uint(PythonQtWrapper_QFile::WriteOwner),
    1960, uint(PythonQtWrapper_QFile::ExeOwner),
    1969, uint(PythonQtWrapper_QFile::ReadUser),
    1978, uint(PythonQtWrapper_QFile::WriteUser),
    1988, uint(PythonQtWrapper_QFile::ExeUser),
    1996, uint(PythonQtWrapper_QFile::ReadGroup),
    2006, uint(PythonQtWrapper_QFile::WriteGroup),
    2017, uint(PythonQtWrapper_QFile::ExeGroup),
    2026, uint(PythonQtWrapper_QFile::ReadOther),
    2036, uint(PythonQtWrapper_QFile::WriteOther),
    2047, uint(PythonQtWrapper_QFile::ExeOther),
    1939, uint(PythonQtWrapper_QFile::ReadOwner),
    1949, uint(PythonQtWrapper_QFile::WriteOwner),
    1960, uint(PythonQtWrapper_QFile::ExeOwner),
    1969, uint(PythonQtWrapper_QFile::ReadUser),
    1978, uint(PythonQtWrapper_QFile::WriteUser),
    1988, uint(PythonQtWrapper_QFile::ExeUser),
    1996, uint(PythonQtWrapper_QFile::ReadGroup),
    2006, uint(PythonQtWrapper_QFile::WriteGroup),
    2017, uint(PythonQtWrapper_QFile::ExeGroup),
    2026, uint(PythonQtWrapper_QFile::ReadOther),
    2036, uint(PythonQtWrapper_QFile::WriteOther),
    2047, uint(PythonQtWrapper_QFile::ExeOther),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFile[] = {
    "PythonQtWrapper_QFile\0\0QFile*\0new_QFile()\0"
    "parent\0new_QFile(QObject*)\0name\0"
    "new_QFile(QString)\0name,parent\0"
    "new_QFile(QString,QObject*)\0obj\0"
    "delete_QFile(QFile*)\0bool\0theWrappedObject\0"
    "atEnd(QFile*)\0close(QFile*)\0"
    "fileName,newName\0static_QFile_copy(QString,QString)\0"
    "theWrappedObject,newName\0copy(QFile*,QString)\0"
    "QString\0localFileName\0"
    "static_QFile_decodeName(QByteArray)\0"
    "QByteArray\0fileName\0"
    "static_QFile_encodeName(QString)\0"
    "QFile::FileError\0error(QFile*)\0"
    "exists(QFile*)\0static_QFile_exists(QString)\0"
    "QAbstractFileEngine*\0fileEngine(QFile*)\0"
    "fileName(QFile*)\0flush(QFile*)\0int\0"
    "handle(QFile*)\0isSequential(QFile*)\0"
    "link(QFile*,QString)\0oldname,newName\0"
    "static_QFile_link(QString,QString)\0"
    "theWrappedObject,flags\0"
    "open(QFile*,QIODevice::OpenMode)\0"
    "theWrappedObject,fd,ioFlags,handleFlags\0"
    "open(QFile*,int,QIODevice::OpenMode,QFile::FileHandleFlags)\0"
    "QFile::Permissions\0permissions(QFile*)\0"
    "filename\0static_QFile_permissions(QString)\0"
    "qint64\0pos(QFile*)\0theWrappedObject,data,maxlen\0"
    "readData(QFile*,char*,qint64)\0"
    "readLineData(QFile*,char*,qint64)\0"
    "remove(QFile*)\0static_QFile_remove(QString)\0"
    "rename(QFile*,QString)\0oldName,newName\0"
    "static_QFile_rename(QString,QString)\0"
    "filename,sz\0static_QFile_resize(QString,qint64)\0"
    "theWrappedObject,sz\0resize(QFile*,qint64)\0"
    "theWrappedObject,offset\0seek(QFile*,qint64)\0"
    "theWrappedObject,name\0setFileName(QFile*,QString)\0"
    "theWrappedObject,permissionSpec\0"
    "setPermissions(QFile*,QFile::Permissions)\0"
    "filename,permissionSpec\0"
    "static_QFile_setPermissions(QString,QFile::Permissions)\0"
    "size(QFile*)\0symLinkTarget(QFile*)\0"
    "static_QFile_symLinkTarget(QString)\0"
    "unsetError(QFile*)\0theWrappedObject,data,len\0"
    "writeData(QFile*,const char*,qint64)\0"
    "FileError\0FileHandleFlag\0FileHandleFlags\0"
    "MemoryMapFlags\0Permission\0Permissions\0"
    "NoError\0ReadError\0WriteError\0FatalError\0"
    "ResourceError\0OpenError\0AbortError\0"
    "TimeOutError\0UnspecifiedError\0RemoveError\0"
    "RenameError\0PositionError\0ResizeError\0"
    "PermissionsError\0CopyError\0AutoCloseHandle\0"
    "DontCloseHandle\0NoOptions\0ReadOwner\0"
    "WriteOwner\0ExeOwner\0ReadUser\0WriteUser\0"
    "ExeUser\0ReadGroup\0WriteGroup\0ExeGroup\0"
    "ReadOther\0WriteOther\0ExeOther\0"
};

void PythonQtWrapper_QFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFile *_t = static_cast<PythonQtWrapper_QFile *>(_o);
        switch (_id) {
        case 0: { QFile* _r = _t->new_QFile();
            if (_a[0]) *reinterpret_cast< QFile**>(_a[0]) = _r; }  break;
        case 1: { QFile* _r = _t->new_QFile((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFile**>(_a[0]) = _r; }  break;
        case 2: { QFile* _r = _t->new_QFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFile**>(_a[0]) = _r; }  break;
        case 3: { QFile* _r = _t->new_QFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFile**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QFile((*reinterpret_cast< QFile*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->atEnd((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->close((*reinterpret_cast< QFile*(*)>(_a[1]))); break;
        case 7: { bool _r = _t->static_QFile_copy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->copy((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->static_QFile_decodeName((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QByteArray _r = _t->static_QFile_encodeName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 11: { QFile::FileError _r = _t->error((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFile::FileError*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->exists((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->static_QFile_exists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QAbstractFileEngine* _r = _t->fileEngine((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractFileEngine**>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->fileName((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->flush((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->handle((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isSequential((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->link((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->static_QFile_link((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->open((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->open((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[3])),(*reinterpret_cast< QFile::FileHandleFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QFile::Permissions _r = _t->permissions((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFile::Permissions*>(_a[0]) = _r; }  break;
        case 24: { QFile::Permissions _r = _t->static_QFile_permissions((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFile::Permissions*>(_a[0]) = _r; }  break;
        case 25: { qint64 _r = _t->pos((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 26: { qint64 _r = _t->readData((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 27: { qint64 _r = _t->readLineData((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->remove((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->static_QFile_remove((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->rename((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->static_QFile_rename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->static_QFile_resize((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->resize((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->seek((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: _t->setFileName((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: { bool _r = _t->setPermissions((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< QFile::Permissions(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->static_QFile_setPermissions((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QFile::Permissions(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { qint64 _r = _t->size((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->symLinkTarget((*reinterpret_cast< QFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { QString _r = _t->static_QFile_symLinkTarget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 41: _t->unsetError((*reinterpret_cast< QFile*(*)>(_a[1]))); break;
        case 42: { qint64 _r = _t->writeData((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFile,
      qt_meta_data_PythonQtWrapper_QFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFile))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFile*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFileInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      63,   54,   27,   26, 0x0a,
      96,   91,   27,   26, 0x0a,
     126,  117,   27,   26, 0x0a,
     151,   91,   27,   26, 0x0a,
     178,  174,   26,   26, 0x0a,
     229,  212,  207,   26, 0x0a,
     261,  212,  253,   26, 0x0a,
     290,  212,  253,   26, 0x0a,
     315,  212,  253,   26, 0x0a,
     336,  212,  253,   26, 0x0a,
     364,  212,  359,   26, 0x0a,
     384,  212,  253,   26, 0x0a,
     414,  212,  253,   26, 0x0a,
     440,  212,  253,   26, 0x0a,
     469,  212,  253,   26, 0x0a,
     506,  212,  496,   26, 0x0a,
     526,  212,  207,   26, 0x0a,
     542,  212,  359,   26, 0x0a,
     561,  212,  253,   26, 0x0a,
     582,  212,  253,   26, 0x0a,
     603,  212,  253,   26, 0x0a,
     626,  212,  621,   26, 0x0a,
     646,  212,  359,   26, 0x0a,
     669,  212,  359,   26, 0x0a,
     690,  212,  359,   26, 0x0a,
     708,  212,  359,   26, 0x0a,
     733,  212,  359,   26, 0x0a,
     752,  212,  359,   26, 0x0a,
     773,  212,  359,   26, 0x0a,
     796,  212,  359,   26, 0x0a,
     819,  212,  359,   26, 0x0a,
     838,  212,  359,   26, 0x0a,
     860,  212,  359,   26, 0x0a,
     883,  212,  496,   26, 0x0a,
     908,  212,  496,   26, 0x0a,
     929,  212,  359,   26, 0x0a,
     980,  954,  359,   26, 0x0a,
    1009,  954,  359,   26, 0x0a,
    1038,  212,  253,   26, 0x0a,
    1056,  212,  621,   26, 0x0a,
    1076,  212,  253,   26, 0x0a,
    1122, 1093,  359,   26, 0x0a,
    1183,  212, 1164,   26, 0x0a,
    1207,  212,   26,   26, 0x0a,
    1247, 1227,   26,   26, 0x0a,
    1301, 1275,   26,   26, 0x0a,
    1356, 1334,   26,   26, 0x0a,
    1382, 1334,   26,   26, 0x0a,
    1417,  212, 1410,   26, 0x0a,
    1434,  212,  253,   26, 0x0a,
    1453,  212,  253,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFileInfo[] = {
    "PythonQtWrapper_QFileInfo\0\0QFileInfo*\0"
    "new_QFileInfo()\0dir,file\0"
    "new_QFileInfo(QDir,QString)\0file\0"
    "new_QFileInfo(QFile)\0fileinfo\0"
    "new_QFileInfo(QFileInfo)\0"
    "new_QFileInfo(QString)\0obj\0"
    "delete_QFileInfo(QFileInfo*)\0QDir\0"
    "theWrappedObject\0absoluteDir(QFileInfo*)\0"
    "QString\0absoluteFilePath(QFileInfo*)\0"
    "absolutePath(QFileInfo*)\0baseName(QFileInfo*)\0"
    "bundleName(QFileInfo*)\0bool\0"
    "caching(QFileInfo*)\0canonicalFilePath(QFileInfo*)\0"
    "canonicalPath(QFileInfo*)\0"
    "completeBaseName(QFileInfo*)\0"
    "completeSuffix(QFileInfo*)\0QDateTime\0"
    "created(QFileInfo*)\0dir(QFileInfo*)\0"
    "exists(QFileInfo*)\0fileName(QFileInfo*)\0"
    "filePath(QFileInfo*)\0group(QFileInfo*)\0"
    "uint\0groupId(QFileInfo*)\0"
    "isAbsolute(QFileInfo*)\0isBundle(QFileInfo*)\0"
    "isDir(QFileInfo*)\0isExecutable(QFileInfo*)\0"
    "isFile(QFileInfo*)\0isHidden(QFileInfo*)\0"
    "isReadable(QFileInfo*)\0isRelative(QFileInfo*)\0"
    "isRoot(QFileInfo*)\0isSymLink(QFileInfo*)\0"
    "isWritable(QFileInfo*)\0lastModified(QFileInfo*)\0"
    "lastRead(QFileInfo*)\0makeAbsolute(QFileInfo*)\0"
    "theWrappedObject,fileinfo\0"
    "__ne__(QFileInfo*,QFileInfo)\0"
    "__eq__(QFileInfo*,QFileInfo)\0"
    "owner(QFileInfo*)\0ownerId(QFileInfo*)\0"
    "path(QFileInfo*)\0theWrappedObject,permissions\0"
    "permission(QFileInfo*,QFile::Permissions)\0"
    "QFile::Permissions\0permissions(QFileInfo*)\0"
    "refresh(QFileInfo*)\0theWrappedObject,on\0"
    "setCaching(QFileInfo*,bool)\0"
    "theWrappedObject,dir,file\0"
    "setFile(QFileInfo*,QDir,QString)\0"
    "theWrappedObject,file\0setFile(QFileInfo*,QFile)\0"
    "setFile(QFileInfo*,QString)\0qint64\0"
    "size(QFileInfo*)\0suffix(QFileInfo*)\0"
    "symLinkTarget(QFileInfo*)\0"
};

void PythonQtWrapper_QFileInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFileInfo *_t = static_cast<PythonQtWrapper_QFileInfo *>(_o);
        switch (_id) {
        case 0: { QFileInfo* _r = _t->new_QFileInfo();
            if (_a[0]) *reinterpret_cast< QFileInfo**>(_a[0]) = _r; }  break;
        case 1: { QFileInfo* _r = _t->new_QFileInfo((*reinterpret_cast< const QDir(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFileInfo**>(_a[0]) = _r; }  break;
        case 2: { QFileInfo* _r = _t->new_QFileInfo((*reinterpret_cast< const QFile(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileInfo**>(_a[0]) = _r; }  break;
        case 3: { QFileInfo* _r = _t->new_QFileInfo((*reinterpret_cast< const QFileInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileInfo**>(_a[0]) = _r; }  break;
        case 4: { QFileInfo* _r = _t->new_QFileInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileInfo**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QFileInfo((*reinterpret_cast< QFileInfo*(*)>(_a[1]))); break;
        case 6: { QDir _r = _t->absoluteDir((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->absoluteFilePath((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->absolutePath((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->baseName((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->bundleName((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->caching((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->canonicalFilePath((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->canonicalPath((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->completeBaseName((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->completeSuffix((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QDateTime _r = _t->created((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 17: { QDir _r = _t->dir((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->exists((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->fileName((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->filePath((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->group((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { uint _r = _t->groupId((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isAbsolute((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isBundle((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isDir((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isExecutable((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isFile((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isHidden((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isReadable((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isRelative((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->isRoot((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->isSymLink((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->isWritable((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { QDateTime _r = _t->lastModified((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 35: { QDateTime _r = _t->lastRead((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->makeAbsolute((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->__ne__((*reinterpret_cast< QFileInfo*(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->__eq__((*reinterpret_cast< QFileInfo*(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->owner((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { uint _r = _t->ownerId((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->path((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->permission((*reinterpret_cast< QFileInfo*(*)>(_a[1])),(*reinterpret_cast< QFile::Permissions(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { QFile::Permissions _r = _t->permissions((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFile::Permissions*>(_a[0]) = _r; }  break;
        case 44: _t->refresh((*reinterpret_cast< QFileInfo*(*)>(_a[1]))); break;
        case 45: _t->setCaching((*reinterpret_cast< QFileInfo*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->setFile((*reinterpret_cast< QFileInfo*(*)>(_a[1])),(*reinterpret_cast< const QDir(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 47: _t->setFile((*reinterpret_cast< QFileInfo*(*)>(_a[1])),(*reinterpret_cast< const QFile(*)>(_a[2]))); break;
        case 48: _t->setFile((*reinterpret_cast< QFileInfo*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 49: { qint64 _r = _t->size((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 50: { QString _r = _t->suffix((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 51: { QString _r = _t->symLinkTarget((*reinterpret_cast< QFileInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFileInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFileInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFileInfo,
      qt_meta_data_PythonQtWrapper_QFileInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFileInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFileInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFileInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFileInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFileInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFileInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFileSystemWatcher[] = {

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
      63,   56,   36,   35, 0x0a,
      96,   35,   36,   35, 0x2a,
     134,  121,   36,   35, 0x0a,
     185,  179,   36,   35, 0x2a,
     225,  221,   35,   35, 0x0a,
     294,  272,   35,   35, 0x0a,
     354,  331,   35,   35, 0x0a,
     425,  408,  396,   35, 0x0a,
     458,  408,  396,   35, 0x0a,
     485,  272,   35,   35, 0x0a,
     525,  331,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher[] = {
    "PythonQtWrapper_QFileSystemWatcher\0\0"
    "QFileSystemWatcher*\0parent\0"
    "new_QFileSystemWatcher(QObject*)\0"
    "new_QFileSystemWatcher()\0paths,parent\0"
    "new_QFileSystemWatcher(QStringList,QObject*)\0"
    "paths\0new_QFileSystemWatcher(QStringList)\0"
    "obj\0delete_QFileSystemWatcher(QFileSystemWatcher*)\0"
    "theWrappedObject,file\0"
    "addPath(QFileSystemWatcher*,QString)\0"
    "theWrappedObject,files\0"
    "addPaths(QFileSystemWatcher*,QStringList)\0"
    "QStringList\0theWrappedObject\0"
    "directories(QFileSystemWatcher*)\0"
    "files(QFileSystemWatcher*)\0"
    "removePath(QFileSystemWatcher*,QString)\0"
    "removePaths(QFileSystemWatcher*,QStringList)\0"
};

void PythonQtWrapper_QFileSystemWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFileSystemWatcher *_t = static_cast<PythonQtWrapper_QFileSystemWatcher *>(_o);
        switch (_id) {
        case 0: { QFileSystemWatcher* _r = _t->new_QFileSystemWatcher((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileSystemWatcher**>(_a[0]) = _r; }  break;
        case 1: { QFileSystemWatcher* _r = _t->new_QFileSystemWatcher();
            if (_a[0]) *reinterpret_cast< QFileSystemWatcher**>(_a[0]) = _r; }  break;
        case 2: { QFileSystemWatcher* _r = _t->new_QFileSystemWatcher((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFileSystemWatcher**>(_a[0]) = _r; }  break;
        case 3: { QFileSystemWatcher* _r = _t->new_QFileSystemWatcher((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileSystemWatcher**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QFileSystemWatcher((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1]))); break;
        case 5: _t->addPath((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->addPaths((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 7: { QStringList _r = _t->directories((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { QStringList _r = _t->files((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 9: _t->removePath((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->removePaths((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFileSystemWatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFileSystemWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher,
      qt_meta_data_PythonQtWrapper_QFileSystemWatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFileSystemWatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFileSystemWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFileSystemWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFileSystemWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFileSystemWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFinalState[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      74,   28,   29,   28, 0x2a,
      96,   92,   28,   28, 0x0a,
     153,  134,  129,   28, 0x0a,
     204,  181,   28,   28, 0x0a,
     234,  181,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFinalState[] = {
    "PythonQtWrapper_QFinalState\0\0QFinalState*\0"
    "parent\0new_QFinalState(QState*)\0"
    "new_QFinalState()\0obj\0"
    "delete_QFinalState(QFinalState*)\0bool\0"
    "theWrappedObject,e\0event(QFinalState*,QEvent*)\0"
    "theWrappedObject,event\0"
    "onEntry(QFinalState*,QEvent*)\0"
    "onExit(QFinalState*,QEvent*)\0"
};

void PythonQtWrapper_QFinalState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFinalState *_t = static_cast<PythonQtWrapper_QFinalState *>(_o);
        switch (_id) {
        case 0: { QFinalState* _r = _t->new_QFinalState((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFinalState**>(_a[0]) = _r; }  break;
        case 1: { QFinalState* _r = _t->new_QFinalState();
            if (_a[0]) *reinterpret_cast< QFinalState**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFinalState((*reinterpret_cast< QFinalState*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->event((*reinterpret_cast< QFinalState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->onEntry((*reinterpret_cast< QFinalState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 5: _t->onExit((*reinterpret_cast< QFinalState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFinalState::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFinalState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFinalState,
      qt_meta_data_PythonQtWrapper_QFinalState, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFinalState::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFinalState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFinalState::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFinalState))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFinalState*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFinalState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QHistoryState[] = {

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
      58,   46,   31,   30, 0x0a,
     117,  112,   31,   30, 0x2a,
     170,  163,   31,   30, 0x0a,
     197,   30,   31,   30, 0x2a,
     221,  217,   30,   30, 0x0a,
     291,  274,  258,   30, 0x0a,
     344,  325,  320,   30, 0x0a,
     401,  274,  374,   30, 0x0a,
     452,  429,   30,   30, 0x0a,
     484,  429,   30,   30, 0x0a,
     538,  515,   30,   30, 0x0a,
     608,  586,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHistoryState[] = {
    "PythonQtWrapper_QHistoryState\0\0"
    "QHistoryState*\0type,parent\0"
    "new_QHistoryState(QHistoryState::HistoryType,QState*)\0"
    "type\0new_QHistoryState(QHistoryState::HistoryType)\0"
    "parent\0new_QHistoryState(QState*)\0"
    "new_QHistoryState()\0obj\0"
    "delete_QHistoryState(QHistoryState*)\0"
    "QAbstractState*\0theWrappedObject\0"
    "defaultState(QHistoryState*)\0bool\0"
    "theWrappedObject,e\0event(QHistoryState*,QEvent*)\0"
    "QHistoryState::HistoryType\0"
    "historyType(QHistoryState*)\0"
    "theWrappedObject,event\0"
    "onEntry(QHistoryState*,QEvent*)\0"
    "onExit(QHistoryState*,QEvent*)\0"
    "theWrappedObject,state\0"
    "setDefaultState(QHistoryState*,QAbstractState*)\0"
    "theWrappedObject,type\0"
    "setHistoryType(QHistoryState*,QHistoryState::HistoryType)\0"
};

void PythonQtWrapper_QHistoryState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHistoryState *_t = static_cast<PythonQtWrapper_QHistoryState *>(_o);
        switch (_id) {
        case 0: { QHistoryState* _r = _t->new_QHistoryState((*reinterpret_cast< QHistoryState::HistoryType(*)>(_a[1])),(*reinterpret_cast< QState*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHistoryState**>(_a[0]) = _r; }  break;
        case 1: { QHistoryState* _r = _t->new_QHistoryState((*reinterpret_cast< QHistoryState::HistoryType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHistoryState**>(_a[0]) = _r; }  break;
        case 2: { QHistoryState* _r = _t->new_QHistoryState((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHistoryState**>(_a[0]) = _r; }  break;
        case 3: { QHistoryState* _r = _t->new_QHistoryState();
            if (_a[0]) *reinterpret_cast< QHistoryState**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QHistoryState((*reinterpret_cast< QHistoryState*(*)>(_a[1]))); break;
        case 5: { QAbstractState* _r = _t->defaultState((*reinterpret_cast< QHistoryState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractState**>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QHistoryState::HistoryType _r = _t->historyType((*reinterpret_cast< QHistoryState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHistoryState::HistoryType*>(_a[0]) = _r; }  break;
        case 8: _t->onEntry((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 9: _t->onExit((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 10: _t->setDefaultState((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QAbstractState*(*)>(_a[2]))); break;
        case 11: _t->setHistoryType((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QHistoryState::HistoryType(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHistoryState::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHistoryState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHistoryState,
      qt_meta_data_PythonQtWrapper_QHistoryState, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHistoryState::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHistoryState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHistoryState::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHistoryState))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHistoryState*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHistoryState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QIODevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       2,  184, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      61,   54,   27,   26, 0x0a,
      89,   85,   26,   26, 0x0a,
     140,  123,  118,   26, 0x0a,
     165,  123,  158,   26, 0x0a,
     192,  123,  158,   26, 0x0a,
     217,  123,  118,   26, 0x0a,
     241,  123,   26,   26, 0x0a,
     267,  123,  259,   26, 0x0a,
     310,  291,  118,   26, 0x0a,
     336,  123,  118,   26, 0x0a,
     355,  123,  118,   26, 0x0a,
     378,  123,  118,   26, 0x0a,
     403,  123,  118,   26, 0x0a,
     433,  123,  118,   26, 0x0a,
     478,  456,  118,   26, 0x0a,
     535,  123,  515,   26, 0x0a,
     591,  567,  556,   26, 0x0a,
     615,  123,  158,   26, 0x0a,
     631,  291,  118,   26, 0x0a,
     656,  567,  556,   26, 0x0a,
     680,  123,  556,   26, 0x0a,
     700,  567,  556,   26, 0x0a,
     728,  123,  556,   26, 0x2a,
     778,  749,  158,   26, 0x0a,
     816,  123,  118,   26, 0x0a,
     855,  834,  118,   26, 0x0a,
     904,  879,   26,   26, 0x0a,
     940,  123,  158,   26, 0x0a,
     957,  291,   26,   26, 0x0a,
    1007,  984,  118,   26, 0x0a,
    1043,  984,  118,   26, 0x0a,
    1098, 1076,  158,   26, 0x0a,
    1127, 1076,  158,   26, 0x0a,

 // enums: name, flags, count, data
    1157, 0x0,    8,  192,
    1170, 0x1,    8,  208,

 // enum data: key, value
    1179, uint(PythonQtWrapper_QIODevice::NotOpen),
    1187, uint(PythonQtWrapper_QIODevice::ReadOnly),
    1196, uint(PythonQtWrapper_QIODevice::WriteOnly),
    1206, uint(PythonQtWrapper_QIODevice::ReadWrite),
    1216, uint(PythonQtWrapper_QIODevice::Append),
    1223, uint(PythonQtWrapper_QIODevice::Truncate),
    1232, uint(PythonQtWrapper_QIODevice::Text),
    1237, uint(PythonQtWrapper_QIODevice::Unbuffered),
    1179, uint(PythonQtWrapper_QIODevice::NotOpen),
    1187, uint(PythonQtWrapper_QIODevice::ReadOnly),
    1196, uint(PythonQtWrapper_QIODevice::WriteOnly),
    1206, uint(PythonQtWrapper_QIODevice::ReadWrite),
    1216, uint(PythonQtWrapper_QIODevice::Append),
    1223, uint(PythonQtWrapper_QIODevice::Truncate),
    1232, uint(PythonQtWrapper_QIODevice::Text),
    1237, uint(PythonQtWrapper_QIODevice::Unbuffered),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QIODevice[] = {
    "PythonQtWrapper_QIODevice\0\0QIODevice*\0"
    "new_QIODevice()\0parent\0new_QIODevice(QObject*)\0"
    "obj\0delete_QIODevice(QIODevice*)\0bool\0"
    "theWrappedObject\0atEnd(QIODevice*)\0"
    "qint64\0bytesAvailable(QIODevice*)\0"
    "bytesToWrite(QIODevice*)\0"
    "canReadLine(QIODevice*)\0close(QIODevice*)\0"
    "QString\0errorString(QIODevice*)\0"
    "theWrappedObject,c\0getChar(QIODevice*,char*)\0"
    "isOpen(QIODevice*)\0isReadable(QIODevice*)\0"
    "isSequential(QIODevice*)\0"
    "isTextModeEnabled(QIODevice*)\0"
    "isWritable(QIODevice*)\0theWrappedObject,mode\0"
    "open(QIODevice*,QIODevice::OpenMode)\0"
    "QIODevice::OpenMode\0openMode(QIODevice*)\0"
    "QByteArray\0theWrappedObject,maxlen\0"
    "peek(QIODevice*,qint64)\0pos(QIODevice*)\0"
    "putChar(QIODevice*,char)\0"
    "read(QIODevice*,qint64)\0readAll(QIODevice*)\0"
    "readLine(QIODevice*,qint64)\0"
    "readLine(QIODevice*)\0theWrappedObject,data,maxlen\0"
    "readLineData(QIODevice*,char*,qint64)\0"
    "reset(QIODevice*)\0theWrappedObject,pos\0"
    "seek(QIODevice*,qint64)\0"
    "theWrappedObject,enabled\0"
    "setTextModeEnabled(QIODevice*,bool)\0"
    "size(QIODevice*)\0ungetChar(QIODevice*,char)\0"
    "theWrappedObject,msecs\0"
    "waitForBytesWritten(QIODevice*,int)\0"
    "waitForReadyRead(QIODevice*,int)\0"
    "theWrappedObject,data\0"
    "write(QIODevice*,QByteArray)\0"
    "write(QIODevice*,const char*)\0"
    "OpenModeFlag\0OpenMode\0NotOpen\0ReadOnly\0"
    "WriteOnly\0ReadWrite\0Append\0Truncate\0"
    "Text\0Unbuffered\0"
};

void PythonQtWrapper_QIODevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QIODevice *_t = static_cast<PythonQtWrapper_QIODevice *>(_o);
        switch (_id) {
        case 0: { QIODevice* _r = _t->new_QIODevice();
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 1: { QIODevice* _r = _t->new_QIODevice((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QIODevice((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->atEnd((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: { qint64 _r = _t->bytesToWrite((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->canReadLine((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->close((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 8: { QString _r = _t->errorString((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->getChar((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isOpen((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isReadable((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isSequential((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isTextModeEnabled((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isWritable((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->open((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { QIODevice::OpenMode _r = _t->openMode((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice::OpenMode*>(_a[0]) = _r; }  break;
        case 17: { QByteArray _r = _t->peek((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 18: { qint64 _r = _t->pos((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->putChar((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QByteArray _r = _t->read((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 21: { QByteArray _r = _t->readAll((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 22: { QByteArray _r = _t->readLine((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 23: { QByteArray _r = _t->readLine((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 24: { qint64 _r = _t->readLineData((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->reset((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->seek((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->setTextModeEnabled((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: { qint64 _r = _t->size((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 29: _t->ungetChar((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2]))); break;
        case 30: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { qint64 _r = _t->write((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 33: { qint64 _r = _t->write((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QIODevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QIODevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIODevice,
      qt_meta_data_PythonQtWrapper_QIODevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QIODevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QIODevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QIODevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIODevice))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIODevice*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIODevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QLibrary[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       2,  134, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   36,   26,   25, 0x0a,
      66,   25,   26,   25, 0x2a,
      97,   81,   26,   25, 0x0a,
     137,  128,   26,   25, 0x2a,
     183,  159,   26,   25, 0x0a,
     239,  222,   26,   25, 0x2a,
     292,  269,   26,   25, 0x0a,
     343,  327,   26,   25, 0x2a,
     373,  369,   25,   25, 0x0a,
     425,  408,  400,   25, 0x0a,
     448,  408,  400,   25, 0x0a,
     473,  128,  468,   25, 0x0a,
     508,  408,  468,   25, 0x0a,
     528,  408,  468,   25, 0x0a,
     564,  408,  544,   25, 0x0a,
     615,  591,  585,   25, 0x0a,
     684,  668,  585,   25, 0x0a,
     752,  729,  585,   25, 0x0a,
     825,  801,  585,   25, 0x0a,
     882,  856,   25,   25, 0x0a,
     947,  913,   25,   25, 0x0a,
    1029,  996,   25,   25, 0x0a,
    1097, 1074,   25,   25, 0x0a,
    1141,  408,  468,   25, 0x0a,

 // enums: name, flags, count, data
    1159, 0x0,    3,  142,
    1168, 0x1,    3,  148,

 // enum data: key, value
    1178, uint(PythonQtWrapper_QLibrary::ResolveAllSymbolsHint),
    1200, uint(PythonQtWrapper_QLibrary::ExportExternalSymbolsHint),
    1226, uint(PythonQtWrapper_QLibrary::LoadArchiveMemberHint),
    1178, uint(PythonQtWrapper_QLibrary::ResolveAllSymbolsHint),
    1200, uint(PythonQtWrapper_QLibrary::ExportExternalSymbolsHint),
    1226, uint(PythonQtWrapper_QLibrary::LoadArchiveMemberHint),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLibrary[] = {
    "PythonQtWrapper_QLibrary\0\0QLibrary*\0"
    "parent\0new_QLibrary(QObject*)\0"
    "new_QLibrary()\0fileName,parent\0"
    "new_QLibrary(QString,QObject*)\0fileName\0"
    "new_QLibrary(QString)\0fileName,version,parent\0"
    "new_QLibrary(QString,QString,QObject*)\0"
    "fileName,version\0new_QLibrary(QString,QString)\0"
    "fileName,verNum,parent\0"
    "new_QLibrary(QString,int,QObject*)\0"
    "fileName,verNum\0new_QLibrary(QString,int)\0"
    "obj\0delete_QLibrary(QLibrary*)\0QString\0"
    "theWrappedObject\0errorString(QLibrary*)\0"
    "fileName(QLibrary*)\0bool\0"
    "static_QLibrary_isLibrary(QString)\0"
    "isLoaded(QLibrary*)\0load(QLibrary*)\0"
    "QLibrary::LoadHints\0loadHints(QLibrary*)\0"
    "void*\0fileName,version,symbol\0"
    "static_QLibrary_resolve(QString,QString,const char*)\0"
    "fileName,symbol\0"
    "static_QLibrary_resolve(QString,const char*)\0"
    "fileName,verNum,symbol\0"
    "static_QLibrary_resolve(QString,int,const char*)\0"
    "theWrappedObject,symbol\0"
    "resolve(QLibrary*,const char*)\0"
    "theWrappedObject,fileName\0"
    "setFileName(QLibrary*,QString)\0"
    "theWrappedObject,fileName,version\0"
    "setFileNameAndVersion(QLibrary*,QString,QString)\0"
    "theWrappedObject,fileName,verNum\0"
    "setFileNameAndVersion(QLibrary*,QString,int)\0"
    "theWrappedObject,hints\0"
    "setLoadHints(QLibrary*,QLibrary::LoadHints)\0"
    "unload(QLibrary*)\0LoadHint\0LoadHints\0"
    "ResolveAllSymbolsHint\0ExportExternalSymbolsHint\0"
    "LoadArchiveMemberHint\0"
};

void PythonQtWrapper_QLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLibrary *_t = static_cast<PythonQtWrapper_QLibrary *>(_o);
        switch (_id) {
        case 0: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 1: { QLibrary* _r = _t->new_QLibrary();
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 2: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 3: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 4: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 5: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 6: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 7: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 8: _t->delete_QLibrary((*reinterpret_cast< QLibrary*(*)>(_a[1]))); break;
        case 9: { QString _r = _t->errorString((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->fileName((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->static_QLibrary_isLibrary((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isLoaded((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->load((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QLibrary::LoadHints _r = _t->loadHints((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLibrary::LoadHints*>(_a[0]) = _r; }  break;
        case 15: { void* _r = _t->static_QLibrary_resolve((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 16: { void* _r = _t->static_QLibrary_resolve((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 17: { void* _r = _t->static_QLibrary_resolve((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 18: { void* _r = _t->resolve((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 19: _t->setFileName((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->setFileNameAndVersion((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 21: _t->setFileNameAndVersion((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->setLoadHints((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< QLibrary::LoadHints(*)>(_a[2]))); break;
        case 23: { bool _r = _t->unload((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLibrary::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLibrary::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLibrary,
      qt_meta_data_PythonQtWrapper_QLibrary, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLibrary::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLibrary))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLibrary*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QLibraryInfo[] = {

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
      34,   30,   29,   29, 0x0a,
      75,   29,   69,   29, 0x0a,
     115,   29,  107,   29, 0x0a,
     146,   29,  107,   29, 0x0a,
     185,   29,  107,   29, 0x0a,
     223,  216,  107,   29, 0x0a,

 // enums: name, flags, count, data
     283, 0x0,   12,   48,

 // enum data: key, value
     299, uint(PythonQtWrapper_QLibraryInfo::PrefixPath),
     310, uint(PythonQtWrapper_QLibraryInfo::DocumentationPath),
     328, uint(PythonQtWrapper_QLibraryInfo::HeadersPath),
     340, uint(PythonQtWrapper_QLibraryInfo::LibrariesPath),
     354, uint(PythonQtWrapper_QLibraryInfo::BinariesPath),
     367, uint(PythonQtWrapper_QLibraryInfo::PluginsPath),
     379, uint(PythonQtWrapper_QLibraryInfo::DataPath),
     388, uint(PythonQtWrapper_QLibraryInfo::TranslationsPath),
     405, uint(PythonQtWrapper_QLibraryInfo::SettingsPath),
     418, uint(PythonQtWrapper_QLibraryInfo::DemosPath),
     428, uint(PythonQtWrapper_QLibraryInfo::ExamplesPath),
     441, uint(PythonQtWrapper_QLibraryInfo::ImportsPath),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLibraryInfo[] = {
    "PythonQtWrapper_QLibraryInfo\0\0obj\0"
    "delete_QLibraryInfo(QLibraryInfo*)\0"
    "QDate\0static_QLibraryInfo_buildDate()\0"
    "QString\0static_QLibraryInfo_buildKey()\0"
    "static_QLibraryInfo_licensedProducts()\0"
    "static_QLibraryInfo_licensee()\0arg__1\0"
    "static_QLibraryInfo_location(QLibraryInfo::LibraryLocation)\0"
    "LibraryLocation\0PrefixPath\0DocumentationPath\0"
    "HeadersPath\0LibrariesPath\0BinariesPath\0"
    "PluginsPath\0DataPath\0TranslationsPath\0"
    "SettingsPath\0DemosPath\0ExamplesPath\0"
    "ImportsPath\0"
};

void PythonQtWrapper_QLibraryInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLibraryInfo *_t = static_cast<PythonQtWrapper_QLibraryInfo *>(_o);
        switch (_id) {
        case 0: _t->delete_QLibraryInfo((*reinterpret_cast< QLibraryInfo*(*)>(_a[1]))); break;
        case 1: { QDate _r = _t->static_QLibraryInfo_buildDate();
            if (_a[0]) *reinterpret_cast< QDate*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->static_QLibraryInfo_buildKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->static_QLibraryInfo_licensedProducts();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->static_QLibraryInfo_licensee();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->static_QLibraryInfo_location((*reinterpret_cast< QLibraryInfo::LibraryLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLibraryInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLibraryInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLibraryInfo,
      qt_meta_data_PythonQtWrapper_QLibraryInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLibraryInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLibraryInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLibraryInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLibraryInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLibraryInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLibraryInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
