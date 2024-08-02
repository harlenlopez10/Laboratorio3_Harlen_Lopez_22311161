#include "productocondescuento.h"

// Constructor
productocondescuento::productocondescuento(const QString& nombre, double precio, double descuento)
    : Producto(nombre, precio), descuento(descuento) {}

// Implementación del método calcularValorTotal() considerando el descuento
double productocondescuento::calcularValorTotal() const {
    return precio - (precio * descuento / 100);
}

// Implementación del método mostrarInformacion() que muestra el descuento
void productocondescuento::mostrarInformacion() const {
    Producto::mostrarInformacion();
    std::cout << "Descuento: " << descuento << "%" << std::endl;
}
