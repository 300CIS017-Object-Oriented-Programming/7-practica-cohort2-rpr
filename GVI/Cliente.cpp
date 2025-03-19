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
  compras.push_back(venta);
}

void Cliente::mostrarHistorialCompras(){
  int i;
  cout<<"Historial compras"<<endl;
  for(i = 0; i <= compras.size(); i++){
    cout<<"-------------------------------"<<endl;
      compras[i]->mostrarDetalleVenta();
  }
}

string Cliente::getNombre(){return nombre;}
