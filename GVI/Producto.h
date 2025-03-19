#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class Producto {
    private:
      string nombre;
      int codigo;
      float precio;
      int cantidad;
    public:
      Producto();
      Producto(string nombre, int codigo, float precio, int cantidad);
      bool descontarStock(int cantidad);
      void agregarStock(int cantidad);
      string getNombre();
      float getPrecio();
      int getCantidad();
};



#endif //PRODUCTO_H
