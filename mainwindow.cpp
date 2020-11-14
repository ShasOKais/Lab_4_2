#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    update();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    //data.setValue(arg1);
    ui->spinBox->setValue(arg1);
    ui->progressBar->setValue(arg1);
    ui->lineEdit->setText(QString::number(arg1));
    //update();
}

void MainWindow::on_pushButton_clicked() // при нажатии кнопки выводит сообщение
{
    //msg.about(this, "Окно95", QString::number(data.getValue()));
    msg.about(this, "NoMVC", QString::number(ui->spinBox->value()));
    //update();
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1) // принимает аргумент и заноси его в Data
{
    //data.setValue(ui->lineEdit->text().toInt());
    int arg = arg1.toInt();
    ui->spinBox->setValue(arg);
    ui->progressBar->setValue(arg);
    ui->lineEdit->setText(arg1);
    //update();
}

void MainWindow::update() // обновляет форму после введенеия данных
{
    ui->spinBox->setValue(data.getValue());
    ui->lineEdit->setText(QString::number(data.getValue()));
    ui->progressBar->setValue(data.getValue());
}

