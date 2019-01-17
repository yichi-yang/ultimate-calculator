#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

enum Operators { add, minus, multiply, divide , no_op };

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonAnswer_clicked();

    void on_buttonNum1_clicked();

    void on_buttonNum2_clicked();

    void on_buttonNum3_clicked();

    void on_buttonNum4_clicked();

    void on_buttonNum5_clicked();

    void on_buttonNum6_clicked();

    void on_buttonNum7_clicked();

    void on_buttonNum8_clicked();

    void on_buttonNum9_clicked();

    void on_ButtonNumo_clicked();

    void on_buttonEqual_clicked();

    void on_buttonAdd_clicked();

    void on_buttonMinus_clicked();

    void on_buttonMultiply_clicked();

    void on_buttonDivide_clicked();

private:
    Ui::MainWindow *ui;
    double num = 0, prev = 0;
    Operators op = no_op;
    bool end = false;
    void compute();
    void input_num(int num);
};

#endif // MAINWINDOW_H
