#include <iostream>
#include <string>
#include "Producto.h"

Producto::Producto(){
    nombre = "";
    codigo = 0;
    precio = 0;
    cantidad = 0;
}

Producto::Producto(string nombre, int codigo, float precio, int cantidad) : nombre(nombre), codigo(codigo), precio(precio), cantidad(cantidad){}

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

int Producto::getCodigo(){return codigo;}

string Producto::getNombre(){return nombre;}

float Producto::getPrecio(){return precio;}

int Producto::getCantidad(){return cantidad;}

void Producto::setNombre(string nombre){
  Producto::nombre=nombre;
}

void Producto::setPrecio(float precio){
  Producto::precio=precio;
}

void Producto::setCantidad(int cantidad){
  Producto::cantidad=cantidad;
}

void Producto::setCodigo(int codigo){
  Producto::codigo=codigo;
}