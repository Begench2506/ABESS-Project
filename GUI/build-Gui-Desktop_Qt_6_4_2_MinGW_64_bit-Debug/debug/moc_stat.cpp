/****************************************************************************
** Meta object code from reading C++ file 'stat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Gui/stat.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Stat_t {
    uint offsetsAndSizes[16];
    char stringdata0[5];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[12];
    char stringdata5[12];
    char stringdata6[7];
    char stringdata7[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Stat_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Stat_t qt_meta_stringdata_Stat = {
    {
        QT_MOC_LITERAL(0, 4),  // "Stat"
        QT_MOC_LITERAL(5, 9),  // "on_closed"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 15),  // "on_Back_clicked"
        QT_MOC_LITERAL(32, 11),  // "update_stat"
        QT_MOC_LITERAL(44, 11),  // "on_stat_all"
        QT_MOC_LITERAL(56, 6),  // "qwerty"
        QT_MOC_LITERAL(63, 19)   // "on_stat_all_clicked"
    },
    "Stat",
    "on_closed",
    "",
    "on_Back_clicked",
    "update_stat",
    "on_stat_all",
    "qwerty",
    "on_stat_all_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Stat[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    1,   52,    2, 0x08,    3 /* Private */,
       5,    1,   55,    2, 0x08,    5 /* Private */,
       6,    0,   58,    2, 0x08,    7 /* Private */,
       7,    0,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Stat::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Stat.offsetsAndSizes,
    qt_meta_data_Stat,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Stat_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Stat, std::true_type>,
        // method 'on_closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_stat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_stat_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'qwerty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stat_all_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Stat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Stat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_closed(); break;
        case 1: _t->on_Back_clicked(); break;
        case 2: _t->update_stat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_stat_all((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->qwerty(); break;
        case 5: _t->on_stat_all_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Stat::*)();
            if (_t _q_method = &Stat::on_closed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Stat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Stat.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Stat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Stat::on_closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
