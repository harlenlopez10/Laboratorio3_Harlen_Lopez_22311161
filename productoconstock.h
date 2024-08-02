#ifndef PRODUCTOCONSTOCK_H
#define PRODUCTOCONSTOCK_H

#include "Producto.h"

class productoconstock : public Producto
{
public:
    // Constructor
    productoconstock(const QString& nombre, double precio, int cantidad);

    // Implementación del método calcularValorTotal() multiplicando el precio por la cantidad
    double calcularValorTotal() const override;

    // Implementación del método mostrarInformacion() que muestra la cantidad disponible
    void mostrarInformacion() const override;

private:
    int cantidad;  // Cantidad en stock del producto
};

#endif // PRODUCTOCONSTOCK_H
