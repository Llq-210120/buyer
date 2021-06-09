#include "shoppingcartform.h"
#include "ui_shoppingcartform.h"
#include "global.h"
#include "shoppingcartitemform.h"
#include <QPixmap>
#include <QLabel>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"


ShoppingCartForm::ShoppingCartForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShoppingCartForm)
{


    ui->setupUi(this);
    updateShoppingCartForm();
    tabUpdate();


    m_checkShoppingList.clear();
    ui->checkBox->hide();
    ui->tableWidget->hide();
    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->tableWidget_0->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->tableWidget_2->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->pb_submit->setEnabled(false);


    connect(ui->tableWidget,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(show_menu(QPoint)));

    connect(ui->tableWidget_2,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(show_menu_2(QPoint)));
}

ShoppingCartForm::~ShoppingCartForm()
{
    delete ui;
}

void ShoppingCartForm::tabUpdate(){



    ui->lb_checkNum->setText("0");
    ui->lb_sum->setText("0");
    ///未支付界面
    tab_notSub.clear();
    ui->tableWidget_0->clear();
    ui->tableWidget_0->setColumnCount(1);
    ui->tableWidget_0->verticalHeader()->setVisible(false);  ///隐藏行号
    ui->tableWidget_0->horizontalHeader()->setVisible(false);///隐藏表头
    ui->tableWidget_0->setRowCount(0);
    ///已支付界面
    ui->tableWidget_1->clear();
    ui->tableWidget_1->setColumnCount(1);
    ui->tableWidget_1->verticalHeader()->setVisible(false);  ///隐藏行号
    ui->tableWidget_1->horizontalHeader()->setVisible(false);///隐藏表头
    ui->tableWidget_1->setRowCount(0);
    ///已发货界面
    tab_con.clear();
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setColumnCount(1);
    ui->tableWidget_2->verticalHeader()->setVisible(false);  ///隐藏行号
    ui->tableWidget_2->horizontalHeader()->setVisible(false);///隐藏表头
    ui->tableWidget_2->setRowCount(0);
    ///已收货界面
    ui->tableWidget_3->clear();
    ui->tableWidget_3->setColumnCount(1);
    ui->tableWidget_3->verticalHeader()->setVisible(false);  ///隐藏行号
    ui->tableWidget_3->horizontalHeader()->setVisible(false);///隐藏表头
    ui->tableWidget_3->setRowCount(0);
    int notSub = 0;
    int pay = 0;
    int der = 0 ;
    int rec = 0;
    for(int i = 0; i < Global::m_shoppingCartInfoList_g.length(); i++){

          ShoppingCartItemForm *item = new ShoppingCartItemForm(Global::m_shoppingCartInfoList_g.at(i));
          connect(item,&ShoppingCartItemForm::signalsCheckShoppingCart,this,&ShoppingCartForm::slotCheckShoppingCart);
          connect(item,&ShoppingCartItemForm::signalsCheckShoppingCartDel,this,&ShoppingCartForm::slotCheckShoppingCartDel);
          connect(item,&ShoppingCartItemForm::signalsCheckShoppingCartDel_1,this,&ShoppingCartForm::slotCheckShoppingCartDel_1);
          if(Global::m_shoppingCartInfoList_g.at(i).getCondition() == "未提交"){

              ui->tableWidget_0->setRowCount(notSub+1);
              ui->tableWidget_0->setCellWidget(notSub++,0,item);
              tab_notSub.push_back(i);

          }else if(Global::m_shoppingCartInfoList_g.at(i).getCondition() == "已提交"){
              ui->tableWidget_1->setRowCount(pay+1);
              ui->tableWidget_1->setCellWidget(pay++,0,item);
          }else if(Global::m_shoppingCartInfoList_g.at(i).getCondition() == "已发货"){

              ui->tableWidget_2->setRowCount(der+1);
              ui->tableWidget_2->setCellWidget(der++,0,item);
              tab_con.push_back(i);
          }else {
              ui->tableWidget_3->setRowCount(rec+1);
              ui->tableWidget_3->setCellWidget(rec++,0,item);
          }
    }
}

void ShoppingCartForm::slotCheckShoppingCart(ShoppingCart info){ ///加号 减号 对应槽函数
    bool flag = false;
    for(int i = 0 ; i <  m_checkShoppingList.length() ; i++){
        if(m_checkShoppingList.at(i).getBookId() == info.getBookId()){
             m_checkShoppingList.replace(i,info);
             flag = true;
             break;
        }
    }
    if(flag == false)
    m_checkShoppingList.append(info);

    int bookNum = 0;
    double bookPrice = 0.0;
    for(int i = 0 ; i < m_checkShoppingList.length(); i++){
        bookNum += m_checkShoppingList.at(i).getNumber().toInt();
        bookPrice += m_checkShoppingList.at(i).getPrice().toDouble() * m_checkShoppingList.at(i).getNumber().toInt();
    }

    ui->lb_checkNum->setText(QString("%1").arg(bookNum));
    ui->lb_sum->setText(QString("%1").arg(bookPrice));

    if(ui->lb_sum->text() == "0" ){

             ui->pb_submit->setEnabled(false);
    }else {
        ui->pb_submit->setEnabled(true);
    }


}
void ShoppingCartForm::slotCheckShoppingCartDel(ShoppingCart info){ ///删除购物车项


    m_checkShoppingList.removeOne(info);

    int bookNum = 0;
    double bookPrice = 0.0;
    for(int i = 0 ; i < m_checkShoppingList.length(); i++){
        bookNum += m_checkShoppingList.at(i).getNumber().toInt();
        bookPrice += m_checkShoppingList.at(i).getPrice().toDouble() * m_checkShoppingList.at(i).getNumber().toInt();
    }

    ui->lb_checkNum->setText(QString("%1").arg(bookNum));
    ui->lb_sum->setText(QString("%1").arg(bookPrice));

    if(ui->lb_sum->text() == "0" ){

             ui->pb_submit->setEnabled(false);
    }else {
        ui->pb_submit->setEnabled(true);
    }
    emit signalsShoppingCartDel(info);
}
void ShoppingCartForm::slotCheckShoppingCartDel_1(ShoppingCart info){

    m_checkShoppingList.removeOne(info);

    int bookNum = 0;
    double bookPrice = 0.0;
    for(int i = 0 ; i < m_checkShoppingList.length(); i++){
        bookNum += m_checkShoppingList.at(i).getNumber().toInt();
        bookPrice += m_checkShoppingList.at(i).getPrice().toDouble() * m_checkShoppingList.at(i).getNumber().toInt();
    }

    ui->lb_checkNum->setText(QString("%1").arg(bookNum));
    ui->lb_sum->setText(QString("%1").arg(bookPrice));

    if(ui->lb_sum->text() == "0" ){

             ui->pb_submit->setEnabled(false);
    }else {
        ui->pb_submit->setEnabled(true);
    }


}
void ShoppingCartForm::updateShoppingCartForm(){
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->verticalHeader()->setVisible(false);  ///隐藏行号
    ui->tableWidget->horizontalHeader()->setVisible(false);///隐藏表头
    ui->tableWidget->setRowCount(Global::m_shoppingCartInfoList_g.length());

    for(int i = 0; i < Global::m_shoppingCartInfoList_g.length(); i++){
          ShoppingCartItemForm *item = new ShoppingCartItemForm(Global::m_shoppingCartInfoList_g.at(i));
          ui->tableWidget->setCellWidget(i,0,item);
    }
}
void ShoppingCartForm::on_tableWidget_clicked(const QModelIndex &index)
{
    cout << index ;
}

void ShoppingCartForm::on_tableWidget_doubleClicked(const QModelIndex &index)
{
    cout << index.row() ;


    QString bookId = Global::m_shoppingCartInfoList_g.at(index.row()).getBookId();



    if(Global::m_shoppingCartInfoList_g.at(index.row()).getCondition() == "已提交"  ){
         QString text = QString("你已经提交了《%1》，不可以重复提交哦！").arg(Global::m_bookMap_g[bookId]);
            QMessageBox::information(NULL,"确认",text,QMessageBox::Yes);
            return ;
    }

    QString text = QString("你确定要提交《%1》吗？").arg(Global::m_bookMap_g[bookId]);
    int  r = QMessageBox::information(NULL,"确认",text,QMessageBox::Yes,QMessageBox::No);
        if(r == QMessageBox::No) return ;
        else {

            emit shoppingCartSubSignal(index.row());
        }

}

void ShoppingCartForm::show_menu(QPoint pos){
    //设置菜单选项
    QMenu *menu = new QMenu(ui->tableWidget);

    QAction *pnew = new QAction("保存",ui->tableWidget);
    QAction *pnew1 = new QAction("提交",ui->tableWidget);
    QAction *pnew2 = new QAction("确认收货",ui->tableWidget);
    QAction *pnew3 = new QAction("删除",ui->tableWidget);

    connect(pnew, &QAction::triggered,this,
        [=]() {
                QString bookId = Global::m_shoppingCartInfoList_g.at(in).getBookId();
                if(Global::m_shoppingCartInfoList_g.at(in).getCondition() != "未提交"){
                    QString text = QString("你已经保存了《%1》，不可以重复保存哦！").arg(Global::m_bookMap_g[bookId]);
                    QMessageBox::information(NULL,"确认",text,QMessageBox::Yes);
                    return ;
                }else if(Global::m_shoppingCartInfoList_g.at(in).getCondition() == "未提交"){
                    cout << "保存";
                    emit shoppingCartSaveSignal(in);
                }

    });
    connect(pnew1,&QAction::triggered,this,
            [=](){
        QString bookId = Global::m_shoppingCartInfoList_g.at(in).getBookId();
        if(Global::m_shoppingCartInfoList_g.at(in).getCondition() != "未提交"){
            QString text = QString("你已经提交了《%1》，不可以重复提交哦！").arg(Global::m_bookMap_g[bookId]);
            QMessageBox::information(NULL,"确认",text,QMessageBox::Yes);
            return ;
        }else if(Global::m_shoppingCartInfoList_g.at(in).getCondition() == "未提交"){
            cout << "提交";
            emit shoppingCartSubSignal(in);
        }


    });
    connect(pnew2,&QAction::triggered,this,
            [=](){
        QString bookId = Global::m_shoppingCartInfoList_g.at(in).getBookId();
        if(Global::m_shoppingCartInfoList_g.at(in).getCondition() != "已发货"){
            QString text = QString("不可对《%1》进行此次操作！").arg(Global::m_bookMap_g[bookId]);
            QMessageBox::information(NULL,"确认",text,QMessageBox::Yes);
            return ;
        }else if(Global::m_shoppingCartInfoList_g.at(in).getCondition() == "已发货"){
            cout << "确认收货";
            emit shoppingCartConSignal(in);
        }


    });
    connect(pnew3,&QAction::triggered,this,
            [=](){
        QString bookId = Global::m_shoppingCartInfoList_g.at(in).getBookId();

        if(Global::m_shoppingCartInfoList_g.at(in).getCondition() != "未提交"){
            QString text = QString("不可对《%1》进行删除操作！").arg(Global::m_bookMap_g[bookId]);
            QMessageBox::information(NULL,"确认",text,QMessageBox::Yes);
            return ;
        }else if(Global::m_shoppingCartInfoList_g.at(in).getCondition() == "未提交"){
            emit shoppingCartDelSignal(in);
        }


    });

    menu->addAction(pnew);
    menu->addAction(pnew1);
    menu->addAction(pnew2);
    menu->addAction(pnew3);
    menu->move(cursor().pos());
    menu->show();
    //获得鼠标点击的x，y坐标点
    int x = pos.x ();
    int y = pos.y ();
    QModelIndex index = ui->tableWidget->indexAt (QPoint(x,y));
    int row = index.row ();//获得QTableWidget列表点击的行数
    in = row;



}


void ShoppingCartForm::show_menu_2(QPoint pos){
    QMenu *menu = new QMenu(ui->tableWidget);

    QAction *pnew = new QAction("确认收货",ui->tableWidget);

    connect(pnew, &QAction::triggered,this,
        [=]() {
        if(tab_con.isEmpty()) return;
        cout << in ;

        cout <<Global::m_bookMap_g[Global::m_shoppingCartInfoList_g.at(tab_con.at(in)).getBookId()];

        emit signalsShoppingCartCon(Global::m_shoppingCartInfoList_g.at(tab_con.at(in)));

    });

    menu->addAction(pnew);

    menu->move(cursor().pos());
    menu->show();
    //获得鼠标点击的x，y坐标点
    int x = pos.x ();
    int y = pos.y ();
    QModelIndex index = ui->tableWidget_2->indexAt (QPoint(x,y));
    int row = index.row ();//获得QTableWidget列表点击的行数
    in = row;

}
void ShoppingCartForm::on_pb_submit_clicked()
{
    QString bookName("");
    for(int i = 0 ; i < m_checkShoppingList.length(); i++){
            bookName +=  Global::m_bookMap_g[ m_checkShoppingList.at(i).getBookId()] + QString("  ");
           cout << Global::m_bookMap_g[ m_checkShoppingList.at(i).getBookId()];
           emit  signalsSubShoppingCart(m_checkShoppingList.at(i));
           m_checkShoppingList.removeOne(m_checkShoppingList.at(i));
    }

    updateShoppingCartForm();
    tabUpdate();
    QMessageBox::information(NULL,"支付成功",QString("%1支付成功").arg(bookName),QMessageBox::Yes);

}
