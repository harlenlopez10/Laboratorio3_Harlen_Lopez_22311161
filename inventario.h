#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>
#include <string>
#include "Producto.h"

class inventario
{
public:
        // Método para agregar un producto al inventario
    void agregarProducto(Producto* producto);

    // Método para eliminar un producto por nombre
    void eliminarProducto(const std::string& nombre);

    // Método para mostrar la información de todos los productos
    void mostrarInventario() const;

    // Método para calcular el valor total del inventario
    double calcularValorInventario() const;

private:
    std::vector<std::unique_ptr<Producto>> productos;  // Vector de punteros a Producto
};

#endif // INVENTARIO_H
