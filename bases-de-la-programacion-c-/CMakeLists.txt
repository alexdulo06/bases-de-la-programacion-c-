cmake_minimum_required(VERSION 3.29)
project(bases_de_la_programacion_c_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bases_de_la_programacion_c_
        declaracion_de_variables/declaracion_de_variables.cpp
        declaracion_de_variables/declaracion_de_variables.h
        instrucciones_de_prueba/Instrucciones_de_prueba.h
        instrucciones_de_prueba/Instrucciones_de_prueba.cpp
        operadores/operadores.h
        operadores/operadores.cpp
        ambito_variables/ambito_variables.h
        ambito_variables/ambito_variables.cpp
        "tipos de datos/tipos_de_datos.cpp"
        bucle/bucle.h
        bucle/bucle.cpp
        bucle_while/bucle_while.h
        bucle_while/bucle_while.cpp
        bucle_do_while/bucle_do_while.cpp
        instrucciones_de_salto/instrucciones_de_salto.h
        instrucciones_de_salto/instrucciones_de_salto.cpp
        "tipos de datos/tipos_de_datos.h"
        bucle_do_while/bucle_do_while.h
        main.h
        main.cpp)
