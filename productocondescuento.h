#ifndef PRODUCTOCONDESCUENTO_H
#define PRODUCTOCONDESCUENTO_H

#include "Producto.h"

class productocondescuento : public Producto
{
public:
    productocondescuento(const QString& nombre, double precio, double descuento);

    // Implementación del método calcularValorTotal() considerando el descuento
    double calcularValorTotal() const override;

    // Implementación del método mostrarInformacion() que muestra el descuento
    void mostrarInformacion() const override;

private:
    double descuento;  // Porcentaje de descuento aplicado al producto
};

#endif // PRODUCTOCONDESCUENTO_H
