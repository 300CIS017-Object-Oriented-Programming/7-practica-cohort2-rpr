#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Venta;

class Cliente {
    private:
      int id;
      string nombre;
      vector<Venta *> compras;
    public:
      Cliente();
      virtual ~Cliente();
      Cliente(int id, string nombre);
      void agregarCompra(Venta* venta);
      void mostrarHistorialCompras();
      string getNombre();
      int getId();
      void setNombre(string nombre);
      void setId(int id);
};



#endif //CLIENTE_H
