#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::input_num(int input)
{
    if(end)
    {
        num = input;
        end = false;
    }
    else
        num = num*10 + input;
    ui->lcdNumber->display(num);
}

void MainWindow::on_buttonAnswer_clicked()
{
    ui->lcdNumber->display(42.0);
    num = 42;
    end = true;
    op = no_op;
}

void MainWindow::compute()
{
    switch(op)
    {
    case add:
        num += prev;
        break;
    case minus:
        num = prev - num;
        break;
    case multiply:
        num *= prev;
        break;
    case divide:
        num = prev / num;
        break;
    case no_op:
        break;
    }
    ui->lcdNumber->display(num);
}

void MainWindow::on_buttonNum1_clicked()
{
    input_num(1);
}

void MainWindow::on_buttonNum2_clicked()
{
    input_num(2);
}

void MainWindow::on_buttonNum3_clicked()
{
    input_num(3);
}

void MainWindow::on_buttonNum4_clicked()
{
    input_num(4);
}

void MainWindow::on_buttonNum5_clicked()
{
    input_num(5);
}

void MainWindow::on_buttonNum6_clicked()
{
    input_num(6);
}

void MainWindow::on_buttonNum7_clicked()
{
    input_num(7);
}

void MainWindow::on_buttonNum8_clicked()
{
    input_num(8);
}

void MainWindow::on_buttonNum9_clicked()
{
    input_num(9);
}

void MainWindow::on_ButtonNumo_clicked()
{
    input_num(0);
}

void MainWindow::on_buttonEqual_clicked()
{
    if(op!=no_op)
    {
        compute();
    }
    ui->lcdNumber->display(num);
    end = true;
    op = no_op;
}

void MainWindow::on_buttonAdd_clicked()
{
    compute();
    prev = num;
    op = add;
    end = true;
}

void MainWindow::on_buttonMinus_clicked()
{
    compute();
    prev = num;
    op = minus;
    end = true;
}

void MainWindow::on_buttonMultiply_clicked()
{
    compute();
    prev = num;
    op = multiply;
    end = true;
}

void MainWindow::on_buttonDivide_clicked()
{
    compute();
    prev = num;
    op = divide;
    end = true;
}
