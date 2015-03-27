#include "agregar.h"
#include "ui_agregar.h"

#include "p_alcoholicos.h"
#include "p_educativos.h"
#include "deLujo.h"
#include "cliente.h"
#include "productos.h"
#include <QMessageBox>
#include <iostream>
#include <fstream>

using namespace std;

void agregar::agregarp(Productos* nuevoProducto){
    this->productos->push_back(nuevoProducto);

}

agregar::agregar(vector<Productos*>* p, vector<Cliente*>* c,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar)
{
    this->productos = p;
    this->clientes = c;
    ui->setupUi(this);
    cargar();
}

agregar::~agregar()
{
    delete ui;
}

void agregar::on_pushButton_clicked()
{

}

void agregar::cargar(){
    ui->cb_cliente->clear();
    if(this->clientes->size() > 0){
        for(int i = 0; i < clientes->size(); i++){
                    ui->cb_cliente->addItem( QString::fromStdString( this->clientes->at(i)->getNombre() ) );
                }
    } else
        ui->cb_cliente->addItem("No hay Clientes");
}

void agregar::on_pushButton_2_clicked()
{
    if(clientes->size() > 0){
        double volumen,peso,precio,tasa;
        volumen= ui->sp_volumen->value();
        peso= ui->sp_peso->value();
        precio= ui->sp_precio->value();
        tasa= ui->sp_tasa->value();
        int ele = ui->cb_cliente->currentIndex();
        string nombre = clientes->at(ele)->getNombre();
        Cliente miCliente(nombre);
        if(ui->rd_educativo->isChecked()){
             p_educativos* nuevo= new p_educativos(volumen,peso,precio,tasa,miCliente);
            agregarp(nuevo);
            guardar();
            QMessageBox::about(this, "title", "Agregado con exito.");

        }
        if(ui->rd_alcohol->isChecked()){
             p_alcoholicos* nuevo= new p_alcoholicos(volumen,peso,precio,tasa,miCliente);
            agregarp(nuevo);
            guardar();
            QMessageBox::about(this, "title", "Agregado con exito.");

        }
        if(ui->rd_lujo->isChecked()){
             ProductoDeLujo* nuevo= new ProductoDeLujo(volumen,peso,precio,tasa,miCliente);
            agregarp(nuevo);
            guardar();
            QMessageBox::about(this, "title", "Agregado con exito.");

        }
    }
}

void agregar::guardar(){
    //Guardar
    ofstream out;
    out.open("Zorra.txt");

    for (int i = 0; i < productos->size(); ++i){
        out << "hola";
        if(i !=productos->size()-1)
            out << (*productos)[i]->getvolumen() << endl << (*productos)[i]->getpeso() << endl << (*productos)[i]->getprecio() << endl << (*productos)[i]->gettasa() << endl <<
            (*productos)[i]->getNombre() << endl;
        else
            out << (*productos)[i]->getvolumen() << endl << (*productos)[i]->getpeso() << endl << (*productos)[i]->getprecio() << endl << (*productos)[i]->gettasa() << endl <<
            (*productos)[i]->getNombre() << endl;
    }

    out.close();
}
