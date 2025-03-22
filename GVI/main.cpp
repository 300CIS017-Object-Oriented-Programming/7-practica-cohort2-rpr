#include <iostream>
#include "Tienda.h"

using namespace std;

void menu(Tienda &tienda) {
    string nom;
    int cod, stock, id, opc = 0;
    float precio, valor;
    Producto *p;
    Cliente *c;
    do {
        cout<<"---Bienvenidos a nuestra Tienda---"<<endl;
        cout<<"1-Agregar Productos"<<endl;
        cout<<"2-Agregar Cliente(Solo poner primer nombre)"<<endl;
        cout<<"3-Registrar Venta"<<endl;
        cout<<"4-Rebastecer Producto"<<endl;
        cout<<"5-Buscar Producto"<<endl;
        cout<<"6-Buscar Cliente"<<endl;
        cout<<"7-Listar Productos"<<endl;
        cout<<"8-Mostar Ventas"<<endl;
        cout<<"9-Calcular Valor Inventario"<<endl;
        cout<<"Ponga -1 para salir"<<endl;
        cout<<"¿Que deseas hacer?"<<endl;
        cin>>opc;
        switch (opc) {
            case 1:
                cout<<"Ingrese los datos del producto"<<endl<<"Nombre: ";
                cin>>nom;
                cout<<"Codigo: ";
                cin>>cod;
                cout<<"Precio: ";
                cin>>precio;
                cout<<"Stock: ";
                cin>>stock;
                tienda.agregarProducto(nom, cod, precio, stock);
                cout<<"Producto agregado"<<endl;
                break;
            case 2:
                cout<<"Ingrese los datos del cliente"<<endl<<"Nombre: ";
                cin>>nom;
                cout<<"ID: ";
                cin>>id;
                tienda.agregarCliente(nom, id);
                cout<<"Cliente agregado"<<endl;
                break;
            case 3:
                cout<<"Ingrese el ID del cliente"<<endl;
                cin>>id;
                tienda.registrarVenta(id);
                break;
            case 4:
                cout<<"Ingrese el codigo del producto: ";
                cin>>cod;
                cout<<"Cantidad a rebastecer: ";
                cin>>stock;
                tienda.reabastecerProducto(cod, stock);
                break;
            case 5:
                cout<<"Ingrese el codigo del producto a buscar: ";
                cin>>cod;
                p = tienda.buscarProducto(cod);
                if (p != nullptr) {
                    cout<<"El producto es: "<< p->getNombre()<<endl;
                }
                else {
                    cout<<"No se encontro el producto"<<endl;
                }
                break;
            case 6:
                cout<<"Ingrese el ID del cliente a registrar: ";
                cin>>id;
                c = tienda.buscarCliente(id);
                if (c != nullptr) {
                    cout<<"El cliente es: "<< c->getNombre()<<endl;
                }
                else {
                    cout<<"No se encontro al cliente"<<endl;
                }
                break;
            case 7:
                tienda.listarProductos();
                break;
            case 8:
                tienda.mostrarVentas();
                break;
            case 9:
                valor = tienda.calcularValorInventario();
                cout<<"El valor total del inventario es: "<<valor<<endl;
                break;
            default:
                break;
        }
    }while (opc != -1);
}
int main() {
    Tienda tienda;
    menu(tienda);

    return 0;
}