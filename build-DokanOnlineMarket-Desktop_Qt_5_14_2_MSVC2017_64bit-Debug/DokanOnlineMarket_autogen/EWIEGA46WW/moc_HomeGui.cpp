/****************************************************************************
** Meta object code from reading C++ file 'HomeGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../DokanOnlineMarket/HomeGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HomeGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HomeGui_t {
    QByteArrayData data[10];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomeGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomeGui_t qt_meta_stringdata_HomeGui = {
    {
QT_MOC_LITERAL(0, 0, 7), // "HomeGui"
QT_MOC_LITERAL(1, 8, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "on_btn1_bar1_3_clicked"
QT_MOC_LITERAL(4, 54, 22), // "on_btn2_bar1_3_clicked"
QT_MOC_LITERAL(5, 77, 21), // "on_btn_logout_clicked"
QT_MOC_LITERAL(6, 99, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(7, 119, 18), // "on_btn_fav_clicked"
QT_MOC_LITERAL(8, 138, 19), // "on_btn_Cart_clicked"
QT_MOC_LITERAL(9, 158, 19) // "on_btn_Home_clicked"

    },
    "HomeGui\0on_pushButton_clicked\0\0"
    "on_btn1_bar1_3_clicked\0on_btn2_bar1_3_clicked\0"
    "on_btn_logout_clicked\0on_btn_back_clicked\0"
    "on_btn_fav_clicked\0on_btn_Cart_clicked\0"
    "on_btn_Home_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomeGui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HomeGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HomeGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_btn1_bar1_3_clicked(); break;
        case 2: _t->on_btn2_bar1_3_clicked(); break;
        case 3: _t->on_btn_logout_clicked(); break;
        case 4: _t->on_btn_back_clicked(); break;
        case 5: _t->on_btn_fav_clicked(); break;
        case 6: _t->on_btn_Cart_clicked(); break;
        case 7: _t->on_btn_Home_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HomeGui::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_HomeGui.data,
    qt_meta_data_HomeGui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HomeGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomeGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HomeGui.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HomeGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
