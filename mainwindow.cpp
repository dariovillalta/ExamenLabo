#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregar.h"
#include "agregar_cliente.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    vector<Productos*>* productos=new vector<Productos*>;
    vector<Cliente*>* clientes=new vector<Cliente*>;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    agregar a(productos,clientes);
    a.exec();
}
