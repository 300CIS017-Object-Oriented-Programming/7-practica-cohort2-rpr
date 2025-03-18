#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"
#include "Cliente.h"

using namespace std;

class Venta {
    private:
      int id;
      Cliente *cliente;
      vector<Producto> productosVendidos;
    public:
      Venta();
      Venta(Cliente *cliente);
      void agregarProductoVendido(Producto* producto, int cantidad);
      float calcularTotal();
      void mostrarDetalleVenta();

};



#endif //VENTA_H
