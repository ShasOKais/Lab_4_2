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
    data.setValue(arg1);
    update();
}

void MainWindow::on_pushButton_clicked()
{
    msg.about(this, "Окно95", QString::number(data.getValue()));
    update();
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    data.setValue(ui->lineEdit->text().toInt());
    update();
}

void MainWindow::update()
{
    ui->spinBox->setValue(data.getValue());
    ui->lineEdit->setText(QString::number(data.getValue()));
    ui->progressBar->setValue(data.getValue());
}

