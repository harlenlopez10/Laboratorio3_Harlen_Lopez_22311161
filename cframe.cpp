#include "cframe.h"
#include "ui_cframe.h"

#include "inventario.h"
#include "productocondescuento.h"
#include "productoconstock.h"

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
}
inventario INVENTARIO;

int Tipo = 0;
void cframe::on_AggBtn_clicked()
{
    QString ProductoVar = ui->nombreProducto->text();
    QString Descripcion = ui->descripcion->text();
    int Descuento = ui->SB_DESCUENTO->value();
    int Precio = ui->DSB_PRECIO->value();

    if(Tipo == 0){
        INVENTARIO.agregarProducto(new productocondescuento(ProductoVar, Precio, Descuento));

    }else if(Tipo == 1){
        INVENTARIO.agregarProducto(new productoconstock(ProductoVar, Precio, Descuento));

    }

}


void cframe::on_CB_DESCUENTO_currentIndexChanged(int index)
{
    Tipo = index;

}


void cframe::on_btnMostrar_clicked()
{

}

