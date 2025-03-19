#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <string>
#include <vector>
#include "Cliente.h"
#include "ProductoVendido.h"

using namespace std;

class Venta {
    private:
      int id;
      Cliente *cliente;
      vector<ProductoVendido> productosVendidos;
    public:
      Venta();
      Venta(Cliente *cliente);
      void agregarProductoVendido(Producto* producto, int cantidad);
      float calcularTotal();
      void mostrarDetalleVenta();

};



#endif //VENTA_H
