#include <iostream>
#include <iomanip>
#include <vector>
#include "Cliente.h"

Cliente::Cliente(){
  id = 0;
  nombre = "";
}

Cliente::Cliente(int id, string nombre):id(id), nombre(nombre){}

void Cliente::agregarCompra(Venta* venta){

}

void Cliente::mostrarHistorialCompras(){

}
