#include <iostream>
#include <iomanip>
#include "ProductoVendido.h"

using namespace std;

ProductoVendido::ProductoVendido(Producto producto, int cantidad):producto(producto), cantidad(cantidad){}

Producto ProductoVendido::getProducto(){return producto;}

int ProductoVendido::getCantidad(){return cantidad;}

float ProductoVendido::calcularValor(){
  float total;
  total = producto.getValor() * cantidad;
  return total;
}