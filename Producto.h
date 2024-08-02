#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>
#include <iostream>

class Producto
{
public:
    Producto(const QString& nombre, double precio);

    // Método virtual puro para calcular el valor total
    virtual double calcularValorTotal() const = 0;

    // Método virtual para mostrar la información
    virtual void mostrarInformacion() const;

    QString getNombre();
    // Destructor virtual
    virtual ~Producto();

protected:
    QString nombre;
    double precio;
};

#endif // PRODUCTO_H
