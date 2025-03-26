#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

float firstNum,secNum,result;

void MainWindow::on_additon_clicked()
{


    firstNum=ui->firstBox->text().toFloat();
    secNum=ui->secBox->text().toFloat();
    result=firstNum+secNum;
    ui->resBox->setText(QString::number(result));

}

void MainWindow::on_substraction_clicked()
{
    firstNum=ui->firstBox->text().toFloat();
    secNum=ui->secBox->text().toFloat();
    result=firstNum-secNum;
    ui->resBox->setText(QString::number(result));

}

void MainWindow::on_multiplication_clicked()
{
    firstNum=ui->firstBox->text().toFloat();
    secNum=ui->secBox->text().toFloat();
    result=firstNum*secNum;
    ui->resBox->setText(QString::number(result));

}

void MainWindow::on_division_clicked()
{
    firstNum=ui->firstBox->text().toFloat();
    secNum=ui->secBox->text().toFloat();

    if(secNum==0){
        ui->resBox->setText("Undefined! ");
    }else{
        result=firstNum/secNum;
        ui->resBox->setText(QString::number(result));
    }
}

