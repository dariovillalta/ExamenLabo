#include "agregar_cliente.h"
#include "ui_agregar_cliente.h"

agregar_cliente::agregar_cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar_cliente)
{
    ui->setupUi(this);
}

agregar_cliente::~agregar_cliente()
{
    delete ui;
}
