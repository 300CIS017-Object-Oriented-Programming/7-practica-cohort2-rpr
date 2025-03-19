#include <iostream>
#include "Tienda.h"

Tienda::Tienda(){
    inicializarDatos();
}

void Tienda::inicializarDatos(){}

void Tienda::agregarProducto(string codigo, string nombre, float precio, int cantidad){

}

void Tienda::registrarVenta(int idCliente){}

void Tienda::reabastecerProducto(string codigoProducto, int cantidad){}

Producto *Tienda:: buscarProducto(string codigo){}

Cliente *Tienda::buscarCliente(int idCliente){}

void Tienda::listarProductos(){}

void Tienda::mostrarVentas(){}

float Tienda::calcularValorInventario(){}
