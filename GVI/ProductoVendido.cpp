#include <iostream>
#include <iomanip>
#include "ProductoVendido.h"

using namespace std;

ProductoVendido::ProductoVendido(Producto* prod, int cantidad):producto(prod), cantidad(cantidad){}

Producto ProductoVendido::getProducto(){return *producto;}

int ProductoVendido::getCantidad(){return cantidad;}

float ProductoVendido::calcularValor(){
  float total;
  total = producto->getPrecio() * cantidad;
  return total;
}

void ProductoVendido::setProducto(Producto *producto){
  ProductoVendido::producto = producto;
}

void ProductoVendido::setCantidad(int cantidad){
  ProductoVendido::cantidad = cantidad;
}