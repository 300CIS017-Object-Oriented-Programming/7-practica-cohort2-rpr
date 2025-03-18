```mermaid
graph TD;
classDiagram
    class Producto {
        string codigo
        string nombre
        float precio
        int stock
        +bool descontarStock(int cantidad)
        +void agregarStock(int cantidad)
    }

    class Cliente {
        int id
        string nombre
        Venta* compras
        +void agregarCompra(Venta* venta)
        +void mostrarHistorialCompras()
    }

    class Venta {
        int id
        Cliente* cliente
        map<Producto*, int> productosVendidos
        +Venta(Cliente* cliente)
        +void agregarProductoVendido(Producto* producto, int cantidad)
        +float calcularTotal()
        +void mostrarDetalleVenta()
    }

    class Tienda {
        list<Producto*> productos
        list<Cliente*> clientes
        list<Venta*> ventas
        +void agregarProducto(string codigo, string nombre, float precio, int stockInicial)
        +void registrarVenta(int idCliente)
        +void reabastecerProducto(string codigoProducto, int cantidad)
        +Producto* buscarProducto(string codigo)
        +Cliente* buscarCliente(int idCliente)
        +void listarProductos()
        +void mostrarVentas()
        +float calcularValorInventario()
    }

    Cliente "1" --> "*" Venta : realiza
    Venta "1" --> "*" Producto : incluye
    Tienda "1" --> "*" Producto : gestiona
    Tienda "1" --> "*" Cliente : registra
    Tienda "1" --> "*" Venta : controla



```