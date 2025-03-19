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
  if(producto->descontarStock(cantidad)){
      productosVendidos.push_back(ProductoVendido(*producto, cantidad));
  }
  else{
    cout<<"Stock insuficiente para "<<producto->getNombre()<<endl;
  }
}

float Venta::calcularTotal(){
  float total;
  for(int i = 0; i < productosVendidos.size(); i++){
    total += productosVendidos[i].calcularValor();
  }
  return total;
}

void Venta::mostrarDetalleVenta(){
  cout<<"ID: "<< id << ", Cliente: "<< cliente->getNombre()<<endl;
  for(int i = 0; i < productosVendidos.size(); i++){
    cout<<"-"<<productosVendidos[i].getProducto().getNombre()<<" "<<productosVendidos[i].getProducto().getCantidad()<<" "<<productosVendidos[i].calcularValor()<<endl;
  }
  cout<<"Total: "<<calcularTotal()<<endl;
}
