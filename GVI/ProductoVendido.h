#ifndef PRODUCTOVENDIDO_H
#define PRODUCTOVENDIDO_H
#include "Producto.h"

using namespace std;

class ProductoVendido {
    private:
      Producto *producto;
      int cantidad;
    public:
      ProductoVendido();
      ProductoVendido(Producto producto, int cantidad);
      Producto getProducto();
      int getCantidad();
      float calcularValor();
};



#endif //PRODUCTOVENDIDO_H
