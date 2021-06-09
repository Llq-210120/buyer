/****************************************************************************
** Meta object code from reading C++ file 'shoppingcartitemform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget/shoppingcartitemform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shoppingcartitemform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShoppingCartItemForm_t {
    QByteArrayData data[11];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShoppingCartItemForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShoppingCartItemForm_t qt_meta_stringdata_ShoppingCartItemForm = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ShoppingCartItemForm"
QT_MOC_LITERAL(1, 21, 24), // "signalsCheckShoppingCart"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "ShoppingCart"
QT_MOC_LITERAL(4, 60, 4), // "info"
QT_MOC_LITERAL(5, 65, 27), // "signalsCheckShoppingCartDel"
QT_MOC_LITERAL(6, 93, 29), // "signalsCheckShoppingCartDel_1"
QT_MOC_LITERAL(7, 123, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 145, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 169, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(10, 189, 7) // "checked"

    },
    "ShoppingCartItemForm\0signalsCheckShoppingCart\0"
    "\0ShoppingCart\0info\0signalsCheckShoppingCartDel\0"
    "signalsCheckShoppingCartDel_1\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_checkBox_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShoppingCartItemForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   53,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void ShoppingCartItemForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShoppingCartItemForm *_t = static_cast<ShoppingCartItemForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalsCheckShoppingCart((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 1: _t->signalsCheckShoppingCartDel((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 2: _t->signalsCheckShoppingCartDel_1((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ShoppingCartItemForm::*_t)(ShoppingCart );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShoppingCartItemForm::signalsCheckShoppingCart)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ShoppingCartItemForm::*_t)(ShoppingCart );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShoppingCartItemForm::signalsCheckShoppingCartDel)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ShoppingCartItemForm::*_t)(ShoppingCart );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShoppingCartItemForm::signalsCheckShoppingCartDel_1)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ShoppingCartItemForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ShoppingCartItemForm.data,
      qt_meta_data_ShoppingCartItemForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ShoppingCartItemForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShoppingCartItemForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShoppingCartItemForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ShoppingCartItemForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ShoppingCartItemForm::signalsCheckShoppingCart(ShoppingCart _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShoppingCartItemForm::signalsCheckShoppingCartDel(ShoppingCart _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ShoppingCartItemForm::signalsCheckShoppingCartDel_1(ShoppingCart _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
