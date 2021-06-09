/****************************************************************************
** Meta object code from reading C++ file 'detailedinfoform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget/detailedinfoform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detailedinfoform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DetailedInfoForm_t {
    QByteArrayData data[8];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DetailedInfoForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DetailedInfoForm_t qt_meta_stringdata_DetailedInfoForm = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DetailedInfoForm"
QT_MOC_LITERAL(1, 17, 18), // "shoppingCartInsert"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "ShoppingCart"
QT_MOC_LITERAL(4, 50, 4), // "info"
QT_MOC_LITERAL(5, 55, 18), // "shoppingCartUpdate"
QT_MOC_LITERAL(6, 74, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 96, 26) // "on_pb_shoppingcart_clicked"

    },
    "DetailedInfoForm\0shoppingCartInsert\0"
    "\0ShoppingCart\0info\0shoppingCartUpdate\0"
    "on_pushButton_clicked\0on_pb_shoppingcart_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DetailedInfoForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DetailedInfoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DetailedInfoForm *_t = static_cast<DetailedInfoForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shoppingCartInsert((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 1: _t->shoppingCartUpdate((*reinterpret_cast< ShoppingCart(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pb_shoppingcart_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DetailedInfoForm::*_t)(ShoppingCart );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DetailedInfoForm::shoppingCartInsert)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DetailedInfoForm::*_t)(ShoppingCart );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DetailedInfoForm::shoppingCartUpdate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DetailedInfoForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DetailedInfoForm.data,
      qt_meta_data_DetailedInfoForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DetailedInfoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DetailedInfoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DetailedInfoForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DetailedInfoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DetailedInfoForm::shoppingCartInsert(ShoppingCart _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DetailedInfoForm::shoppingCartUpdate(ShoppingCart _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
