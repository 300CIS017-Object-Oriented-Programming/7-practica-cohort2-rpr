#include "Tienda.h"
#include <iostream>
#include <string>


Tienda::Tienda(){
    inicializarDatos();
}

void Tienda::inicializarDatos(){
  Cliente *persona1 = new Cliente();
  Cliente *persona2 = new Cliente();
  Cliente *persona3 = new Cliente();
  Producto *producto1 = new Producto();
  Producto *producto2 = new Producto();
  Producto *producto3 = new Producto();
  Venta *venta1 = new Venta();
  Venta *venta2 = new Venta();
  Venta *venta3 = new Venta();

  persona1->setNombre("Jesus N");
  persona1->setId(1234);

  persona2->setNombre("Rosario M");
  persona2->setId(3465);

  persona3->setNombre("Ambar R");
  persona3->setId(2231);

  clientes.push_back(persona1);
  clientes.push_back(persona2);
  clientes.push_back(persona3);

  producto1->setNombre("Manzana");
  producto1->setCodigo(123);
  producto1->setPrecio(2000);
  producto1->setCantidad(50);

  producto2->setNombre("Lechuga");
  producto2->setCodigo(312);
  producto2->setPrecio(2500);
  producto2->setCantidad(25);

  producto3->setNombre("coca cola");
  producto3->setCodigo(213);
  producto3->setPrecio(3000);
  producto3->setCantidad(20);

  productos.push_back(producto1);
  productos.push_back(producto2);
  productos.push_back(producto3);

  venta1->setId(4678);
  venta1->setCliente(persona1);
  venta1->agregarProductoVendido(producto1, 2);
  venta1->agregarProductoVendido(producto3, 1);

  venta2->setId(9149);
  venta2->setCliente(persona2);
  venta2->agregarProductoVendido(producto2, 4);

  venta3->setId(7763);
  venta3->setCliente(persona3);
  venta3->agregarProductoVendido(producto1, 1);
  venta3->agregarProductoVendido(producto2, 2);
  venta3->agregarProductoVendido(producto3, 3);

  ventas.push_back(venta1);
  ventas.push_back(venta2);
  ventas.push_back(venta3);

  std::cout << "Datos iniciales cargados correctamente" << endl;
}

void Tienda::agregarProducto (string nombre, int codigo, float precio, int cantidad){
    productos.push_back(new Producto(nombre, codigo, precio, cantidad));
}

void Tienda::agregarCliente(string nombre, int id){
  clientes.push_back(new Cliente(id, nombre));
}

void Tienda::registrarVenta(int idCliente){
  Cliente *cliente = buscarCliente(idCliente);
  int cod = 1;
  int cantidad;
  if(!cliente){
    cout<<"No se encontro a este cliente"<<endl;
  }
  else{
    Venta* ventaNueva = new Venta(cliente);

	while(cod!=0){
          cout << "Ingrese el codigo del producto (0 cuando pasen todos los productos): )"<<endl;
          cin >> cod;
          Producto *producto = buscarProducto(cod);
          if(!producto){
            cout<<"No se encontro el producto"<<endl;
          }
          else{
            cout<<"Cantidad a llevar: "<<endl;
            cin>>cantidad;

            ventaNueva->agregarProductoVendido(producto, cantidad);
          }
	}
    ventas.push_back(ventaNueva);
    cliente->agregarCompra(ventaNueva);

    cout<<"¡Venta registrada correctamente!"<<endl;
  }
}

void Tienda::reabastecerProducto(int codigoProducto, int cantidad){
  Producto *producto = buscarProducto(codigoProducto);
  if(producto){
    producto->agregarStock(cantidad);
    cout<<"Producto reabastecido correctamente"<<endl;
  }
  else{
    cout<<"No se encontro el producto"<<endl;
  }
}

Producto* Tienda:: buscarProducto(int codigo){
  Producto *producto = nullptr;
  for(int i = 0; i < productos.size(); i++){
    if(productos[i]->getCodigo() == codigo){
      producto = productos[i];
    }
  }
  return producto;
}

Cliente* Tienda::buscarCliente(int idCliente){
  Cliente *cliente = nullptr;
  for(int i = 0; i < clientes.size(); i++){
    if(clientes[i]->getId() == idCliente){
      cliente = clientes[i];
    }
  }
  return cliente;
}

void Tienda::listarProductos(){
  for(int i = 0; i < productos.size(); i++){
    cout << productos[i]->getNombre() << " Stock:"<< productos[i]->getCantidad()<<endl;
  }
}

void Tienda::mostrarVentas(){
  for(int i = 0; i < ventas.size(); i++){
    ventas[i]->mostrarDetalleVenta();
  }
}

float Tienda::calcularValorInventario(){
  float total;
  for(int i = 0; i < productos.size(); i++){
    total += productos[i]->getPrecio() * productos[i]->getCantidad();
  }
  return total;
}

Tienda::~Tienda(){
	for(int i = 0; i < productos.size(); i++){
          delete productos[i];
	}
    productos.clear();
    for(int i = 0; i < ventas.size(); i++){
      delete ventas[i];
    }
    ventas.clear();
    for(int i = 0; i < clientes.size(); i++){
      delete clientes[i];
    }
    clientes.clear();

    cout<<"LLame al destructor y elimine todo"<<endl;
}
