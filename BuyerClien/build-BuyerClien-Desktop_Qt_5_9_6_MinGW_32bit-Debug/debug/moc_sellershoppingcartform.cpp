/****************************************************************************
** Meta object code from reading C++ file 'sellershoppingcartform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget/sellershoppingcartform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sellershoppingcartform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SellerShoppingCartForm_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SellerShoppingCartForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SellerShoppingCartForm_t qt_meta_stringdata_SellerShoppingCartForm = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SellerShoppingCartForm"
QT_MOC_LITERAL(1, 23, 25), // "shoppingCartDeliverSignal"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "index"
QT_MOC_LITERAL(4, 56, 23), // "shoppingCartGoodsSignal"
QT_MOC_LITERAL(5, 80, 9), // "show_menu"
QT_MOC_LITERAL(6, 90, 3) // "pos"

    },
    "SellerShoppingCartForm\0shoppingCartDeliverSignal\0"
    "\0index\0shoppingCartGoodsSignal\0show_menu\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SellerShoppingCartForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    6,

       0        // eod
};

void SellerShoppingCartForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SellerShoppingCartForm *_t = static_cast<SellerShoppingCartForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shoppingCartDeliverSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->shoppingCartGoodsSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->show_menu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SellerShoppingCartForm::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SellerShoppingCartForm::shoppingCartDeliverSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SellerShoppingCartForm::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SellerShoppingCartForm::shoppingCartGoodsSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SellerShoppingCartForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SellerShoppingCartForm.data,
      qt_meta_data_SellerShoppingCartForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SellerShoppingCartForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SellerShoppingCartForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SellerShoppingCartForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SellerShoppingCartForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SellerShoppingCartForm::shoppingCartDeliverSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SellerShoppingCartForm::shoppingCartGoodsSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
