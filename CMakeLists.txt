cmake_minimum_required(VERSION 3.19)
project(POOSistemaGestionVentas)

set(CMAKE_CXX_STANDARD 20)

add_executable(POOSistemaGestionVentas GVI/main.cpp
        GVI/ProductoVendido.cpp
        GVI/Cliente.cpp
        GVI/Producto.cpp
        GVI/Venta.cpp
        GVI/Tienda.cpp)