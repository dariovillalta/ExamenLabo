#include "historial.h"
#include "ui_historial.h"
#include <vector>
#include "productos.h"

#include <iostream>
using namespace std;

Historial::Historial(QWidget *parent, vector<Productos*>* p) :
    QDialog(parent),
    ui(new Ui::Historial)
{
    ui->setupUi(this);
    QStringList columnas;
    ui->tableWidget->setColumnCount(1);
    columnas << "Producto";
    ui->tableWidget->setHorizontalHeaderLabels(columnas);
    productos = p;
    cargar();
}

Historial::~Historial()
{
    delete ui;
}

void Historial::cargar(){
    while(ui->tableWidget->rowCount() > 0){
        ui->tableWidget->removeRow(0);
    }
    QString linea;
    for(unsigned int i = 0; i < productos->size(); i++){
        linea = QString::fromStdString( productos->at(i)->toString() );
        ui->tableWidget->insertRow( i );
        int fila = ui->tableWidget->rowCount() - 1;
        ui->tableWidget->setItem(fila, 0, new QTableWidgetItem( linea ));
        ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    }
}
