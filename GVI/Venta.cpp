#include "Venta.h"
#include "Cliente.h"

using namespace std;

Venta::Venta(){
  id = 0;
  cliente = nullptr;
}

Venta::Venta(Cliente *cliente) : cliente(cliente){
  static int contador = 1000;
  id = contador++;
}

void Venta::agregarProductoVendido(Producto* producto, int cantidad){
  if(producto->descontarStock(cantidad)){
      productosVendidos.push_back(new ProductoVendido(producto, cantidad));
      cout<<"Producto: " << producto->getNombre() << " agregado"<<endl;
  }
  else{
    cout<<"Stock insuficiente para "<<producto->getNombre()<<endl;
  }
}

float Venta::calcularTotal(){
  float total;
  for(int i = 0; i < productosVendidos.size(); i++){
    total += productosVendidos[i]->calcularValor();
  }
  return total;
}

void Venta::mostrarDetalleVenta(){
  cout<<"ID: "<< id << ", Cliente: "<< cliente->getNombre()<<endl;
  for(int i = 0; i < productosVendidos.size(); i++){
    cout<<"-"<<productosVendidos[i]->getProducto().getNombre()<<" "<<productosVendidos[i]->getCantidad()<<" "<<productosVendidos[i]->calcularValor()<<endl;
  }
  cout<<"Total: "<<calcularTotal()<<endl;
}

void Venta::setId(int id){
  Venta::id = id;
}

void Venta::setCliente(Cliente *cliente){
  Venta::cliente = cliente;
}

Venta::~Venta(){
  for(int i = 0; i < productosVendidos.size(); i++){
    delete productosVendidos[i];
  }
  productosVendidos.clear();
}
