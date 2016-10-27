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
        ui->label_main->setText(QString(QString::fromStdString(current_num)));
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    flag_sign = 0;
    current_num = current_num + "1";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_2_clicked()
{
    flag_sign = 0;
    current_num = current_num + "2";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_3_clicked()
{
    flag_sign = 0;
    current_num = current_num + "3";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_4_clicked()
{
    flag_sign = 0;
    current_num = current_num + "4";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_5_clicked()
{
    flag_sign = 0;
    current_num = current_num + "5";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_6_clicked()
{
    flag_sign = 0;
    current_num = current_num + "6";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_7_clicked()
{
    flag_sign = 0;
    current_num = current_num + "7";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_8_clicked()
{
    flag_sign = 0;
    current_num = current_num + "8";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_9_clicked()
{
    flag_sign = 0;
    current_num = current_num + "9";
    ui->label_main->setText(QString(QString::fromStdString(current_num)));
}

void MainWindow::on_pushButton_equal_clicked()
{
    all_num_up_label = all_num_up_label + current_num;
    ui->label->setText(QString(QString::fromStdString(all_num_up_label)));

    std::vector<double> vec_num_vr;
    std::vector<int> vec_oper_vr;
    double res_vr = 0;

    vec_numbers.push_back(std::atof(current_num.c_str()));
    res = 0;
    int ijk = vec_operations.size();

    for(int i=0; i<vec_operations.size(); i++){
        if(vec_operations[i]==1){   //+
            //vec_num_vr.push_back(vec_numbers[i]);
            //vec_oper_vr.push_back(vec_operations[i-1]);
        }
        else if(vec_operations[i]==2){  //-
            //vec_num_vr.push_back(vec_numbers[i]);
            //vec_oper_vr.push_back(vec_operations[i-1]);
        }
        else if(vec_operations[i]==3){  //*
            //res_vr = vec_numbers[i]*vec_numbers[i+1];
            //vec_num_vr.push_back(res_vr);
            //vec_oper_vr.push_back(vec_operations[i-1]);

            res_vr = vec_numbers[i]*vec_numbers[i+1];
            vec_numbers.erase(vec_numbers.begin() + i);
            vec_numbers.erase(vec_numbers.begin() + i);

            vec_numbers.push_back(res_vr);
            vec_operations.push_back(vec_operations[i-1]);
            vec_operations.erase(vec_operations.begin() + i-1);
            vec_operations.erase(vec_operations.begin() + i-1);
            i--;
        }
        else if(vec_operations[i]==4){  // "/"
            //res_vr = vec_numbers[i]/vec_numbers[i+1];
            //vec_num_vr.push_back(res_vr);
            //vec_oper_vr.push_back(vec_operations[i-1]);

            res_vr = vec_numbers[i]/vec_numbers[i+1];
            vec_numbers.erase(vec_numbers.begin() + i);
            vec_numbers.erase(vec_numbers.begin() + i);

            vec_numbers.push_back(res_vr);
            vec_operations.push_back(vec_operations[i-1]);
            vec_operations.erase(vec_operations.begin() + i-1);
            vec_operations.erase(vec_operations.begin() + i-1);
            i--;
        }
    }
    res = vec_numbers[0];
    for(int i=1; i<vec_numbers.size(); i++)
    {
        if(vec_operations[i-1]==1){
            res = res + vec_numbers[i];
        }
        else if(vec_operations[i-1]==2){
            res = res - vec_numbers[i];
        }
    }

    /*res = vec_numbers[0];
    for(int i=1; i<vec_numbers.size(); i++){
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
    }*/
    ui->label_main->setText(QString(QString::number(res, 'f', 2)));
    current_num = std::to_string(res);
    all_num_up_label = "";
    //all_num_up_label = std::to_string(res);

    vec_numbers.clear();
    vec_operations.clear();
    //current_num = std::to_string(res);
}

void MainWindow::on_pushButton_CE_delete_clicked()
{
    current_num = "";
    ui->label_main->setText(QString(QString::fromStdString("0")));
}

void MainWindow::on_pushButton_AC_delete_clicked()
{
    vec_numbers.clear();
    vec_operations.clear();
    current_num = "";
    all_num_up_label = "";

    ui->label_main->setText(QString(QString::fromStdString("0")));
    ui->label->setText(QString(QString::fromStdString("")));
}

void MainWindow::on_pushButton_C_delete_clicked()
{
    if(current_num.length()!=0){
        current_num.erase(current_num.end()-1);

        if(current_num.length()!=0){
            ui->label_main->setText(QString(QString::fromStdString(current_num)));
        }
        else{
            ui->label_main->setText(QString(QString::fromStdString("0")));
        }
    }
}

void MainWindow::on_pushButton_comma_clicked()
{
    if(flag_comma==0){
        if(current_num!=""){
            current_num = current_num + ".";
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

void MainWindow::on_pushButton_percent_clicked()
{
    double cur_num = 0;
    if(current_num!=""){
        cur_num = std::atof(current_num.c_str());
    }
    else{
        cur_num = res;
    }
    cur_num = cur_num/100;
    current_num = std::to_string(cur_num);
    ui->label_main->setText(QString(QString::number(cur_num, 'f', 2)));
}

void MainWindow::on_pushButton_plus_minus_clicked()
{
    if(current_num==""){
        if(res<0){
            res = -1*res;
        }
        else if(res>0){
            res = -1*res;
        }
        res = std::round(res*100)/100.;
        ui->label_main->setText(QString(QString::number(res, 'f', 2)));
        current_num = std::to_string(res);
    }
    else{
        char *str = new char[current_num.length()+1];
        strcpy(str, current_num.c_str());
        if(str[0]=='-'){
            int t = current_num.length();
            current_num = "";
            for(int i=1; i<t; i++){
                current_num = current_num + str[i];
            }
        }
        else{
            current_num = "-" + current_num;
        }
        ui->label_main->setText(QString(QString::fromStdString(current_num)));
    }
}
