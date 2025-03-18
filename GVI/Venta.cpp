#include <iostream>
#include <iomanip>
#include "Venta.h"

using namespace std;

Venta::Venta(){
  id = 0;
  cliente = nullptr;
}

Venta::Venta(Cliente *cliente):cliente(cliente){}

void Venta::agregarProductoVendido(Producto* producto, int cantidad){

}

float Venta::calcularTotal(){

}

void Venta::mostrarDetalleVenta(){

}
