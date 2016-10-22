#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    operation = 0;

    QGridLayout* layout = new QGridLayout(this);
    setLayout(layout);

    ui->setupUi(this);
    ui->lcdNumber->display(QString("0"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lcdNumber_overflow()
{
    ui->lcdNumber->display(QString("123"));
}

void MainWindow::on_pushButton_addition_clicked()
{
    mode++;
    operation = 1;

    vec_numbers.push_back(std::atoi(current_num.c_str()));
    vec_operations.push_back(1);

    current_num = "";
}

void MainWindow::on_pushButton_subtract_clicked()
{
    mode++;
    operation = 2;

    vec_numbers.push_back(std::atoi(current_num.c_str()));
    vec_operations.push_back(2);

    current_num = "";
}

void MainWindow::on_pushButton_multiply_clicked()
{
    mode++;
    operation = 3;

    vec_numbers.push_back(std::atoi(current_num.c_str()));
    vec_operations.push_back(3);

    current_num = "";
}

void MainWindow::on_pushButton_devide_clicked()
{
    mode++;
    operation = 4;

    vec_numbers.push_back(std::atoi(current_num.c_str()));
    vec_operations.push_back(4);

    current_num = "";
}

void MainWindow::on_pushButton_0_clicked()
{
    /*if(first_number==""){
        first_number = "";
    }
    else{
        if(mode==0){
            first_number = first_number + "0";
            ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
        }
        else{
            second_number = second_number + "0";
            ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
        }
    }*/
    if(current_num==""){
        current_num = "";
    }
    else{
        current_num = current_num + "0";
        ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    /*if(mode==0){
        first_number = first_number + "1";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "1";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "1";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_2_clicked()
{
    /*if(mode==0){
        first_number = first_number + "2";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "2";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "2";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_3_clicked()
{
    /*if(mode==0){
        first_number = first_number + "3";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "3";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "3";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_4_clicked()
{
    /*if(mode==0){
        first_number = first_number + "4";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "4";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "4";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_5_clicked()
{
    /*if(mode==0){
        first_number = first_number + "5";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "5";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "5";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_6_clicked()
{
    /*if(mode==0){
        first_number = first_number + "6";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "6";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "6";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_7_clicked()
{
    /*if(mode==0){
        first_number = first_number + "7";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "7";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "7";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_8_clicked()
{
    /*if(mode==0){
        first_number = first_number + "8";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "8";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "8";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_9_clicked()
{
    /*if(mode==0){
        first_number = first_number + "9";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
    }
    else{
        second_number = second_number + "9";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
    }*/
    current_num = current_num + "9";
    ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_equal_clicked()
{
    vec_numbers.push_back(std::atoi(current_num.c_str()));
    //double a=0;
    //double b=0;
    double res = 0;

    /*a = std::atoi(first_number.c_str());
    b = std::atoi(second_number.c_str());

    if(operation==1){
        res = a + b;
    }
    else if(operation==2){
        res = a - b;
    }
    else if(operation==3){
        res = a*b;
    }
    else if(operation==4){
        res = a/b;
    }*/
    res = vec_numbers[0];
    for(int i=1; i<vec_numbers.capacity(); i++){
        //a = vec_numbers[i];
        //b = vec_numbers[i+1];
        if(vec_operations[i-1]==1){
            res = res + vec_numbers[i];
        }
        else if(vec_operations[i-1]==2){
            res = res - vec_numbers[i];
        }
        else if(vec_operations[i-1]==3){
            res = res * vec_numbers[i];
        }
        else if(vec_operations[i-1]==4){
            res = res/vec_numbers[i];
        }
    }

    //std::string res1 = std::to_string(res);
    //QString s1 = QString::fromStdString(res1);

    ui->lcdNumber->display(QString(QString::number(res, 'f', 1)));
}

void MainWindow::on_pushButton_CE_delete_clicked()
{
    if(mode==0){
        first_number = "0";
        ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
        first_number = "";
        //mode = 0;
    }
    else{
        second_number = "0";
        ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
        second_number = "";
        //mode = 1;
    }
}

void MainWindow::on_pushButton_AC_delete_clicked()
{
    ui->lcdNumber->display(QString(QString::fromStdString("0")));
    first_number = "";
    second_number = "";
    mode = 0;
}

void MainWindow::on_pushButton_C_delete_clicked()
{
    if(mode==0){
        //first_number.pop_back();
        first_number.erase(first_number.end()-1);
        if(first_number.length()!=0){
            ui->lcdNumber->display(QString(QString::fromStdString(first_number)));
        }
        else{
            ui->lcdNumber->display(QString(QString::fromStdString("0")));
        }
    }
    else{
        //second_number.pop_back();
        second_number.erase(second_number.end()-1);
        if(second_number.length()!=0){
            ui->lcdNumber->display(QString(QString::fromStdString(second_number)));
        }
        else{
            ui->lcdNumber->display(QString(QString::fromStdString("0")));
        }
    }
}
