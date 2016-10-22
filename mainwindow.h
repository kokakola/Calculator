#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QtWidgets>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_lcdNumber_overflow();

    void on_pushButton_addition_clicked();

    void on_pushButton_subtract_clicked();

    void on_pushButton_multiply_clicked();

    void on_pushButton_devide_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_CE_delete_clicked();

    void on_pushButton_AC_delete_clicked();

    void on_pushButton_C_delete_clicked();

    void on_pushButton_comma_clicked();

private:
    Ui::MainWindow *ui;

private:
    QPushButton* button[20];
    QLabel* answer;

private:
    std::vector<double> vec_numbers;
    std::vector<int> vec_operations;
    std::string current_num;
    std::string all_num_up_label;
    int flag_comma;
    int flag_sign;

private:
    int mode = 0;
    int operation;

    std::string first_number;
    std::string second_number;
    std::string result;

    QString str;

    //string first_number;
    //string second_number;

};

#endif // MAINWINDOW_H
