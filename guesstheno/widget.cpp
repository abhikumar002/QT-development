#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>
#include <time.h>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    srand(time(NULL));

    secret =rand () % 10 +1;
    qDebug() <<"Secret Number generated : " << QString::number(secret);


     ui->start->setDisabled(true);
     ui->label->setText("");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guess_clicked()
{
    guess =ui->spinBox->value();

    if(guess==secret)
    {
        //Congo.
        ui->label->setText("Congratulations, number is : " +QString::number(secret));

        //Disable guess button
        ui->guess->setDisabled(true);
        ui->start->setDisabled(false);
    }
    else
    {
        if(secret>guess)
        {
            ui->label->setText("This Number is lower than that");
        }
        else
        {
            ui->label->setText("This Number is higher than that");
        }
    }
}

void Widget::on_start_clicked()
{
    ui->guess->setDisabled(false);
    ui->start->setDisabled(true);
    ui->spinBox->setValue(1);
    ui->label->setText("");
    secret =rand () % 10 +1;
    qDebug() <<"Secret Number generated : " << QString::number(secret);
}
