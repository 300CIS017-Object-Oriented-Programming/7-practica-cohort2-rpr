#include "Cliente.h"
#include "Venta.h"

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

int Cliente::getId(){return id;}

void Cliente::setNombre(string nombre){
  Cliente::nombre = nombre;
}

void Cliente::setId(int id){
  Cliente::id = id;
}

Cliente::~Cliente(){
  for(int i = 0; i < compras.size(); i++){
    delete compras[i];
  }
  compras.clear();
}
