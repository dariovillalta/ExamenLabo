#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregar.h"
#include "agregar_cliente.h"
#include "historial.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    productos=new vector<Productos*>;
    clientes=new vector<Cliente*>;

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

void MainWindow::on_pushButton_2_clicked()
{
    agregar_cliente ag(this, clientes);
    ag.setWindowTitle("Agregar Clientes");
    ag.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    Historial h(this, productos);
    h.setWindowTitle("Historial");
    h.exec();
}
