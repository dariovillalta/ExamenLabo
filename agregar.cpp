#include "agregar.h"
#include "ui_agregar.h"

#include "p_alcoholicos.h"
#include "p_educativos.h"
#include "deLujo.h"
#include "cliente.h"
#include "productos.h"

void agregar::agregarp(Productos* nuevoProducto){
    this->productos->push_back(nuevoProducto);

}

agregar::agregar(vector<Productos*>* p,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar)
{
    this->productos = p;
    ui->setupUi(this);
}

agregar::~agregar()
{
    delete ui;
}

void agregar::on_pushButton_clicked()
{
//double volumen,double peso,double precio, double tasa, cliente miCliente)
    if()
    double volumen,peso,precio,tasa;
    volumen= ui->sp_volumen->value();
    peso= ui->sp_peso->value();
    precio= ui->sp_precio->value();
    tasa= ui->sp_tasa->value();
    //combo box

    cliente miCliente("edilson");

    if(ui->rd_educativo->isChecked()){
         p_educativos* nuevo= new p_educativos(volumen,peso,precio,tasa,miCliente);
        agregarp(nuevo);

    }
    if(ui->rd_alcohol->isChecked()){
         p_alcoholicos* nuevo= new p_alcoholicos(volumen,peso,precio,tasa,miCliente);
        agregarp(nuevo);

    }
    if(ui->rd_lujo->isChecked()){
         ProductoDeLujo* nuevo= new ProductoDeLujo(volumen,peso,precio,tasa,miCliente);
        agregarp(nuevo);

    }



}
