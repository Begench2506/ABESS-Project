#include "stat.h"
#include "ui_stat.h"
#include "client_sing.h"

Stat::Stat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Stat)
{
    connect(SingletonClient::getInstance(),&SingletonClient::stat, this, &Stat::update_stat);
    connect(SingletonClient::getInstance(),&SingletonClient::stat_all, this, &Stat::on_stat_all);
    ui->setupUi(this);
}

Stat::~Stat()
{
    delete ui;
}

void Stat::update_stat(QString stat)
{
    QStringList list = stat.split(" ");
    qDebug() << stat;
    qDebug() << "TUT " << list[1] << " " << list[2] << " " << list[3];
    ui->result_1->setText(list[1]);
    ui->result_2->setText(list[2]);
    ui->result_3->setText(list[3]);
    ui->result_4->setText(list[4]);
    ui->result_5->setText(list[5]);

    ui->result_1_cor->setText(list[6]);
    ui->result_2_cor->setText(list[7]);
    ui->result_3_cor->setText(list[8]);
    ui->result_4_cor->setText(list[9]);
    ui->result_5_cor->setText(list[10]);

    ui->result_1_incor->setText(list[11]);
    ui->result_2_incor->setText(list[12]);
    ui->result_3_incor->setText(list[13]);
    ui->result_4_incor->setText(list[14]);
    ui->result_5_incor->setText(list[15]);
}

void Stat::on_Back_clicked()
{
    close();
    emit on_closed();
}


void Stat::on_stat_all(QString stat)
{
    QStringList mylist = stat.split(" ");
    mylist.pop_front();
//    QString task1 = "";
//    QString task2 = "";
//    while (mylist.size()>2) {
//        task1.append(mylist[0]+ " ");
//        task2.append(mylist[1]+ " ");
//        mylist.pop_back();
//        mylist.pop_back();
//    }
    qint8 task11 = 0;
    qint8 task22 = 0;
    while (mylist.size()>2) {
        task11 += mylist[0].toInt();
        task22 += mylist[1].toInt();
        mylist.pop_front();
        mylist.pop_front();
    }

    ui->result_1_cor->setText(QString::number(task11));
    ui->result_2_cor->setText(QString::number(task22));

}

void Stat::qwerty(){
    SingletonClient::getInstance()->send_to_server("check_stat_all");
}


void Stat::on_stat_all_clicked()
{
   SingletonClient::getInstance()->send_to_server("check_stat_all");


}

