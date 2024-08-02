#include "Producto.h"

Producto::Producto(const QString& nombre, double precio)
    : nombre(nombre), precio(precio) {}

// Método virtual para mostrar la información
void Producto::mostrarInformacion() const {
    std::cout << "Nombre: " << nombre.toStdString() << std::endl;
    std::cout << "Precio: " << precio << std::endl;
}

// Método para obtener el nombre del producto
QString Producto::getNombre()  {
    return nombre;
}

// Destructor virtual
Producto::~Producto() {}
