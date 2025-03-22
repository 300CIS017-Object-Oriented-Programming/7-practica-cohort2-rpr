#ifndef VENTA_H
#define VENTA_H

#include "ProductoVendido.h"
#include <vector>

using namespace std;

class Cliente;

class Venta {
    private:
      int id;
      Cliente *cliente;
      vector<ProductoVendido *> productosVendidos;
    public:
      Venta();
      Venta(Cliente *cliente);
      virtual ~Venta();
      void agregarProductoVendido(Producto* producto, int cantidad);
      float calcularTotal();
      void mostrarDetalleVenta();
      void setId(int id);
      void setCliente(Cliente *cliente);

};



#endif //VENTA_H
