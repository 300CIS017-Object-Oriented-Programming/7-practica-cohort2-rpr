#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <vector>
#include <string>
#include "Cliente.h"
#include "Venta.h"

using namespace std;

class Tienda {
    private:
      vector<Cliente> clientes;
      vector<Venta> ventas;
      vector<Producto> productos;

      void inicializarDatos();
    public:
      Tienda();
      ~Tienda();
      void agregarProducto(string codigo, string nombre, float precio, int stockInicial);
      void registrarVenta(int idCliente);
      void reabastecerProducto(string codigoProducto, int cantidad);
      Producto* buscarProducto(string codigo);
      Cliente* buscarCliente(int idCliente);
      void listarProductos();
      void mostrarVentas();
      float calcularValorInventario();
};



#endif //TIENDA_H
