#include "sellershoppingcartform.h"
#include "ui_sellershoppingcartform.h"

#include "global.h"
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include "sellershoppingitemform.h"
SellerShoppingCartForm::SellerShoppingCartForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerShoppingCartForm)
{
    ui->setupUi(this);
    updataSellerShoppingCartForm();
    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->tableWidget,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(show_menu(QPoint)));
}

SellerShoppingCartForm::~SellerShoppingCartForm()
{
    delete ui;
}

void SellerShoppingCartForm::updataSellerShoppingCartForm(){

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->verticalHeader()->setVisible(false);  ///隐藏行号
    ui->tableWidget->horizontalHeader()->setVisible(false);///隐藏表头
    ui->tableWidget->setRowCount(Global::m_shoppingCartInfoList_g.length());

    for(int i = 0; i < Global::m_shoppingCartInfoList_g.length(); i++){
          SellerShoppingitemForm *item = new SellerShoppingitemForm(Global::m_shoppingCartInfoList_g.at(i));
          ui->tableWidget->setCellWidget(i,0,item);
    }

}
void SellerShoppingCartForm::show_menu(QPoint pos){
    //设置菜单选项
    QMenu *menu = new QMenu(ui->tableWidget);

    QAction *pnew = new QAction("发货",ui->tableWidget);
    QAction *pnew1 = new QAction("确定",ui->tableWidget);

    connect(pnew,&QAction::triggered,this,[=](){

        QString bookId = Global::m_shoppingCartInfoList_g.at(in).getBookId();
        if(Global::m_shoppingCartInfoList_g.at(in).getCondition() != "已提交"){
            QString text = QString("不可对《%1》 进行操作！").arg(Global::m_bookMap_g[bookId]);
            QMessageBox::information(NULL,"确认",text,QMessageBox::Yes);
            return ;
        }else if(Global::m_shoppingCartInfoList_g.at(in).getCondition() == "已提交"){
            emit shoppingCartDeliverSignal(in);
            updataSellerShoppingCartForm();
        }
    });
    connect(pnew1,&QAction::triggered,this,[=](){

        QString bookId = Global::m_shoppingCartInfoList_g.at(in).getBookId();
        if(Global::m_shoppingCartInfoList_g.at(in).getCondition() != "已收货"){
            QString text = QString("不可对《%1》进行此操作！").arg(Global::m_bookMap_g[bookId]);
            QMessageBox::information(NULL,"确认",text,QMessageBox::Yes);
            return ;
        }else if(Global::m_shoppingCartInfoList_g.at(in).getCondition() == "已收货"){

            emit shoppingCartGoodsSignal(in);
            updataSellerShoppingCartForm();
        }
    });

    menu->addAction(pnew);
    menu->addAction(pnew1);

    menu->move(cursor().pos());
    menu->show();
    //获得鼠标点击的x，y坐标点
    int x = pos.x ();
    int y = pos.y ();
    QModelIndex index = ui->tableWidget->indexAt (QPoint(x,y));
    int row = index.row ();//获得QTableWidget列表点击的行数
    in = row;


}
