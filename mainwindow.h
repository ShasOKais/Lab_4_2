#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "Data.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();
    void on_spinBox_valueChanged(int arg1);
    void on_lineEdit_textChanged(const QString &arg1);
    void update();

private:
    Ui::MainWindow *ui;
    Data data;
    QMessageBox msg;
};
#endif // MAINWINDOW_H
