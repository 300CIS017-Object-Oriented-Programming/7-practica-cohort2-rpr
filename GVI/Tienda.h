#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <vector>
#include <string>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"

using namespace std;

class Tienda {
    private:
      vector<Cliente*> clientes;
      vector<Venta*> ventas;
      vector<Producto*> productos;

      void inicializarDatos();
    public:
      Tienda();
      ~Tienda();
      void agregarProducto(string nombre, int codigo, float precio, int stockInicial);
      void agregarCliente(string nombre, int id);
      void registrarVenta(int idCliente);
      void reabastecerProducto(int codigoProducto, int cantidad);
      Producto* buscarProducto(int codigo);
      Cliente* buscarCliente(int idCliente);
      void listarProductos();
      void mostrarVentas();
      float calcularValorInventario();
};



#endif //TIENDA_H
