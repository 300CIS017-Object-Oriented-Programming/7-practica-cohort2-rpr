```mermaid
graph TD;
classDiagram
    class Producto {
        -string nombre
        -int codigo
        -int precio
        -int cantidad

        +Producto(string nombre, int codigo, float precio, int cantidad)
        +bool descontarStock(int cantidad)
        +void agregarStock(int cantidad)
    }

    class Venta {
        -int id
        -Cliente cliente
        -List<Producto> productosVendidos

        +Venta(Cliente* cliente)
        +void agregarProductoVendido(Producto* producto, int cantidad)
        +float calcularTotal()
        +void mostrarDetalleVenta()
    }

    class Cliente {
        -int id
        -string nombre
        -List<Venta> compras

        +void agregarCompra(Venta* venta)
        +void mostrarHistorialCompras()
    }

    class Tienda {
        -List<Producto> productos
        -List<Venta> ventas
        -List<Cliente> clientes

        +void agregarProducto(int codigo, string nombre, float precio, int stockInicial)
        +void registrarVenta(int idCliente)
        +void reabastecerProducto(int codigoProducto, int cantidad)
        +Producto* buscarProducto(int codigo)
        +Cliente* buscarCliente(int idCliente)
        +void listarProductos()
        +void mostrarVentas()
        +float calcularValorInventario()
    }

    Tienda o-- Producto
    Tienda o-- Venta
    Tienda o-- Cliente
    Venta *-- Producto
    Cliente *-- Venta


```