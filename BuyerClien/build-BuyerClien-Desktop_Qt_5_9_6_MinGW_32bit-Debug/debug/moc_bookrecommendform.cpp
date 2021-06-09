/****************************************************************************
** Meta object code from reading C++ file 'bookrecommendform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget/bookrecommendform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookrecommendform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BookRecommendForm_t {
    QByteArrayData data[16];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookRecommendForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookRecommendForm_t qt_meta_stringdata_BookRecommendForm = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BookRecommendForm"
QT_MOC_LITERAL(1, 18, 20), // "pb_F5_ClickedSignals"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "shoppingCartInsert"
QT_MOC_LITERAL(4, 59, 12), // "ShoppingCart"
QT_MOC_LITERAL(5, 72, 4), // "info"
QT_MOC_LITERAL(6, 77, 18), // "shoppingCartUpdate"
QT_MOC_LITERAL(7, 96, 16), // "detailedInfoSlot"
QT_MOC_LITERAL(8, 113, 8), // "BookInfo"
QT_MOC_LITERAL(9, 122, 22), // "shoppingCartInsertSlot"
QT_MOC_LITERAL(10, 145, 22), // "shoppingCartUpdateSlot"
QT_MOC_LITERAL(11, 168, 17), // "on_pb_all_clicked"
QT_MOC_LITERAL(12, 186, 16), // "on_pb_xs_clicked"
QT_MOC_LITERAL(13, 203, 16), // "on_pb_bc_clicked"
QT_MOC_LITERAL(14, 220, 16), // "on_pb_F5_clicked"
QT_MOC_LITERAL(15, 237, 20) // "on_pb_search_clicked"

    },
    "BookRecommendForm\0pb_F5_ClickedSignals\0"
    "\0shoppingCartInsert\0ShoppingCart\0info\0"
    "shoppingCartUpdate\0detailedInfoSlot\0"
    "BookInfo\0shoppingCartInsertSlot\0"
    "shoppingCartUpdateSlot\0on_pb_all_clicked\0"
    "on_pb_xs_clicked\0on_pb_bc_clicked\0"
    "on_pb_F5_clicked\0on_pb_search_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookRecommendForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   76,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BookRecommendForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookRecommendForm *_t = static_cast<BookRecommendForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pb_F5_ClickedSignals(); break;
        case 1: _t->shoppingCartInsert((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 2: _t->shoppingCartUpdate((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 3: _t->detailedInfoSlot((*reinterpret_cast< BookInfo(*)>(_a[1]))); break;
        case 4: _t->shoppingCartInsertSlot((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 5: _t->shoppingCartUpdateSlot((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 6: _t->on_pb_all_clicked(); break;
        case 7: _t->on_pb_xs_clicked(); break;
        case 8: _t->on_pb_bc_clicked(); break;
        case 9: _t->on_pb_F5_clicked(); break;
        case 10: _t->on_pb_search_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BookRecommendForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookRecommendForm::pb_F5_ClickedSignals)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BookRecommendForm::*_t)(ShoppingCart );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookRecommendForm::shoppingCartInsert)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BookRecommendForm::*_t)(ShoppingCart );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookRecommendForm::shoppingCartUpdate)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BookRecommendForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BookRecommendForm.data,
      qt_meta_data_BookRecommendForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BookRecommendForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookRecommendForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookRecommendForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BookRecommendForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void BookRecommendForm::pb_F5_ClickedSignals()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BookRecommendForm::shoppingCartInsert(ShoppingCart _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookRecommendForm::shoppingCartUpdate(ShoppingCart _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
