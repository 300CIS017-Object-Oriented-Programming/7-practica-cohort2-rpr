#ifndef PRODUCTOVENDIDO_H
#define PRODUCTOVENDIDO_H
#include "Producto.h"

using namespace std;

class ProductoVendido {
    private:
      Producto* producto;
      int cantidad;
    public:
      ProductoVendido();
      ProductoVendido(Producto* producto, int cantidad);
      Producto getProducto();
      int getCantidad();
      float calcularValor();
      void setProducto(Producto *producto);
      void setCantidad(int cantidad);
};



#endif //PRODUCTOVENDIDO_H
