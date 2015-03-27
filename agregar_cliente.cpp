#include "agregar_cliente.h"
#include "ui_agregar_cliente.h"
#include "cliente.h"
#include <QMessageBox>


agregar_cliente::agregar_cliente(QWidget *parent, vector<Cliente*>* c) :
    QDialog(parent),
    ui(new Ui::agregar_cliente)
{
    ui->setupUi(this);
    clientes = c;
}

agregar_cliente::~agregar_cliente()
{
    delete ui;
}

void agregar_cliente::on_pushButton_clicked()
{
    try{
        string nombre = ui->tf_nombre->text().toStdString();
        clientes->push_back(new Cliente (nombre) );
        QMessageBox::about(this, "title", "Agregado con exito.");
    }catch(...){
        QMessageBox::critical(this, "title", "Error.");
    }
}
