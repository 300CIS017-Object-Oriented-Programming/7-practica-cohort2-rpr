```mermaid
graph TD;
classDiagram
class Producto {
    -string nombre
    -int codigo
    -int precio
    -int cantidad

    +Producto(nombre, codigo, precio, cantidad)
    +bool descontarStock(int cantidad)
    +void agregarStock(int cantidad)
    

} 
class Venta {
    -int id
    - Cliente cliente
    -List <Producto> productosVendidos

    +Venta(Cliente* cliente)
    +void agregarProductoVendido(Producto* producto, int cantidad)
    +float calcularTotal()
    +void mostrarDetalleVenta()
}
class Cliente {
    -int id
    -string nombre
    -List <Venta> compras

    +void agregarCompra(Venta* venta)
    +void mostrarHistorialCompras()
} 

class Tienda {
    -List<Producto> productos
    -List<Venta> ventas
    -List<Cliente> clientes

    +void agregarProducto(string codigo, string nombre, float precio, int stockInicial)
    +void registrarVenta(int idCliente)
    +void reabastecerProducto(string codigoProducto, int cantidad)
    +Producto* buscarProducto(string codigo)
    +Cliente* buscarCliente(int idCliente)
    +void listarProductos()
    +void mostrarVentas()
    +float calcularValorInventario()
}

Tienda o-- Producto
Tienda o-- Venta
Venta --> Producto
Tienda  o-- Cliente
Cliente --> Venta
```