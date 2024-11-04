#include <iostream>
#include "main.h"
#include "Declaracion_de_Variables/Declaracion_de_Variables.h"
#include "ambito_variables/ambito_variables.h"
#include "Instrucciones_de_Prueba/Instrucciones_de_Prueba.h"
#include "bucle//Bucle.h"
#include "bucle_while//bucle_while.h"
#include "bucle_do_while/bucle_do_while.h"
#include "Operadores/Operadores.h"

int main() {
    std::string nombre;
    int edad;

    // Solicitar y mostrar datos del usuario
    solicitarDatos(nombre, edad);
    verificarEdad(edad);

    // Mostrar ámbito de variables
    mostrarAmbito();

    // Imprimir números del 1 al 10
    std::cout << "Números del 1 al 10:\n";
    imprimirNumeros();

    // Mostrar tabla de multiplicar usando while
    tablaMultiplicarWhile();

    // Mostrar tabla de multiplicar usando do-while
    tablaMultiplicarDoWhile();

    // Operaciones aritméticas
    int a = 10, b = 5; // Valores fijos para las operaciones
    std::cout << "Operaciones Aritméticas entre " << a << " y " << b << ":\n";
    operacionesAritmeticas(a, b);

    return 0;
}
