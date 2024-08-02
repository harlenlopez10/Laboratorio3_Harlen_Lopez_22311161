#include "productoconstock.h"

// Constructor
productoconstock::productoconstock(const QString& nombre, double precio, int cantidad)
    : Producto(nombre, precio), cantidad(cantidad) {}

// Implementación del método calcularValorTotal() multiplicando el precio por la cantidad
double productoconstock::calcularValorTotal() const {
    return precio * cantidad;
}

// Implementación del método mostrarInformacion() que muestra la cantidad disponible
void productoconstock::mostrarInformacion() const {
    Producto::mostrarInformacion();
    std::cout << "Cantidad disponible: " << cantidad << std::endl;
}
