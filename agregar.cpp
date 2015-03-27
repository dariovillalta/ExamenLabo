#include "agregar.h"
#include "ui_agregar.h"

agregar::agregar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar)
{
    ui->setupUi(this);
}

agregar::~agregar()
{
    delete ui;
}
