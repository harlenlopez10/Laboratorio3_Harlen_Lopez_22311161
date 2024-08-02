#include "inventario.h"

// Método para agregar un producto al inventario
void inventario::agregarProducto(Producto* producto) {
    productos.push_back(std::unique_ptr<Producto>(producto));
}

// Método para eliminar un producto por nombre
void inventario::eliminarProducto(const std::string& nombre) {
    auto it = std::remove_if(productos.begin(), productos.end(),
                             [&nombre](const std::unique_ptr<Producto>& producto) {
                                 return producto->getNombre().toStdString() == nombre;
                             });
    productos.erase(it, productos.end());
}

// Método para mostrar la información de todos los productos
void inventario::mostrarInventario() const {
    for (const auto& producto : productos) {
        producto->mostrarInformacion();
        std::cout << "---------------------" << std::endl;
    }
}

// Método para calcular el valor total del inventario
double inventario::calcularValorInventario() const {
    double total = 0.0;
    for (const auto& producto : productos) {
        total += producto->calcularValorTotal();
    }
    return total;
}
