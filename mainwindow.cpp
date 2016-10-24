#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    operation = 0;
    flag_comma = 0;
    flag_sign = 1;

    QGridLayout* layout = new QGridLayout(this);
    setLayout(layout);

    ui->setupUi(this);
    //ui->lcdNumber->display(QString("0"));
    ui->label_main->setText((QString("0")));
    ui->label->setText(QString(""));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_addition_clicked()
{
    //mode++;
    if(flag_sign!=1){
        operation = 1;

        if(current_num!=""){
            vec_numbers.push_back(std::atof(current_num.c_str()));
        }
        vec_operations.push_back(1);

        //ui->label->setText(QString(QString::fromStdString(current_num + "+")));
        all_num_up_label = all_num_up_label + current_num + " + ";
        ui->label->setText(QString(QString::fromStdString(all_num_up_label)));

        current_num = "";
        flag_sign = 1;
    }
}

void MainWindow::on_pushButton_subtract_clicked()
{
    //mode++;
    if(flag_sign!=1){
        operation = 2;

        vec_numbers.push_back(std::atof(current_num.c_str()));
        vec_operations.push_back(2);

        all_num_up_label = all_num_up_label + current_num + " - ";
        ui->label->setText(QString(QString::fromStdString(all_num_up_label)));

        current_num = "";
        flag_sign = 1;
    }
}

void MainWindow::on_pushButton_multiply_clicked()
{
    //mode++;
    if(flag_sign!=1){
        operation = 3;

        vec_numbers.push_back(std::atof(current_num.c_str()));
        vec_operations.push_back(3);

        all_num_up_label = all_num_up_label + current_num + " × ";
        ui->label->setText(QString(QString::fromStdString(all_num_up_label)));

        current_num = "";
        flag_sign = 1;
    }
}

void MainWindow::on_pushButton_devide_clicked()
{
    //mode++;
    if(flag_sign!=1){
        operation = 4;

        vec_numbers.push_back(std::atof(current_num.c_str()));
        vec_operations.push_back(4);

        all_num_up_label = all_num_up_label + current_num + " ÷ ";
        ui->label->setText(QString(QString::fromStdString(all_num_up_label)));

        current_num = "";
        flag_sign = 1;
    }
}

void MainWindow::on_pushButton_0_clicked()
{
    flag_sign = 0;
    if(current_num==""){
        current_num = "";
    }
    else{
        current_num = current_num + "0";
        //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
        ui->label_main->setText(QString(QString::fromStdString(current_num)));
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    flag_sign = 0;
    current_num = current_num + "1";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_2_clicked()
{
    flag_sign = 0;
    current_num = current_num + "2";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_3_clicked()
{
    flag_sign = 0;
    current_num = current_num + "3";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_4_clicked()
{
    flag_sign = 0;
    current_num = current_num + "4";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_5_clicked()
{
    flag_sign = 0;
    current_num = current_num + "5";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_6_clicked()
{
    flag_sign = 0;
    current_num = current_num + "6";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_7_clicked()
{
    flag_sign = 0;
    current_num = current_num + "7";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_8_clicked()
{
    flag_sign = 0;
    current_num = current_num + "8";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_9_clicked()
{
    flag_sign = 0;
    current_num = current_num + "9";
    //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_equal_clicked()
{
    all_num_up_label = all_num_up_label + current_num;
    ui->label->setText(QString(QString::fromStdString(all_num_up_label)));

    vec_numbers.push_back(std::atof(current_num.c_str()));
    double res = 0;

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
    //ui->lcdNumber->display(QString(QString::number(res, 'f', 2)));
    ui->label_main->setText(QString(QString::number(res, 'f', 2)));
    current_num = "";
}

void MainWindow::on_pushButton_CE_delete_clicked()
{
    /*if(mode==0){
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
    }*/
    current_num = "";
    //ui->lcdNumber->display(QString(QString::fromStdString("0")));
    ui->label_main->setText(QString(QString::fromStdString("0")));
}

void MainWindow::on_pushButton_AC_delete_clicked()
{
    /*ui->lcdNumber->display(QString(QString::fromStdString("0")));
    first_number = "";
    second_number = "";
    mode = 0;*/
    vec_numbers.clear();
    vec_operations.clear();
    current_num = "";
    all_num_up_label = "";

    //ui->lcdNumber->display(QString(QString::fromStdString("0")));
    ui->label_main->setText(QString(QString::fromStdString("0")));
    ui->label->setText(QString(QString::fromStdString("")));
}

void MainWindow::on_pushButton_C_delete_clicked()
{
    if(current_num.length()!=0){
        current_num.erase(current_num.end()-1);

        if(current_num.length()!=0){
            //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
            ui->label_main->setText(QString(QString::fromStdString(current_num)));
        }
        else{
            //ui->lcdNumber->display(QString(QString::fromStdString("0")));
            ui->label_main->setText(QString(QString::fromStdString("0")));
        }
    }
}

void MainWindow::on_pushButton_comma_clicked()
{
    if(flag_comma==0){
        if(current_num!=""){
            current_num = current_num + ".";
            //ui->lcdNumber->display(QString(QString::fromStdString(current_num)));
            ui->label_main->setText(QString(QString::fromStdString(current_num)));
            flag_comma = 1;
        }
    }
}

void MainWindow::on_pushButton_sqrt_clicked()
{
    double cur_num = std::atof(current_num.c_str());
    if(cur_num>0){
        cur_num = sqrt(cur_num);
        //доделать это дерьмо! чтобы было всего несколько символов после запятой. Это же просто бл*ять :)
        current_num = std::to_string(cur_num);
        ui->label_main->setText(QString(QString::number(cur_num, 'f', 2)));
    }
    else{
        current_num = "0";
        ui->label_main->setText(QString(QString::fromStdString("ERROR")));
    }
}

void MainWindow::on_pushButton_inverse_devision_clicked()
{
    double cur_num = std::atof(current_num.c_str());
    cur_num = 1/cur_num;
    current_num = std::to_string(cur_num);
    ui->label_main->setText(QString(QString::number(cur_num, 'f', 2)));
}
