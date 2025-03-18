#include <iostream>
#include <string>
#include "Producto.h"

Producto::Producto(){
    nombre = "";
    codigo = 0;
    precio = 0;
    cantidad = 0;
}

Producto::Producto(string nombre, int codigo, int precio, int cantidad) : nombre(nombre), codigo(codigo), precio(precio), cantidad(cantidad){}

bool Producto::descontarStock(int cantidad){
  bool retorno;
    if(Producto::cantidad>=cantidad){
      Producto::cantidad-=cantidad;
      retorno = true;
    }
    else{
      retorno = false;
    }
    return retorno;
}

void Producto::agregarStock(int cantidad){
  Producto::cantidad+=cantidad;
}