#include <iostream>
#include "instrucciones_de_prueba.h"

void verificarEdad(int edad) {
    if (edad >= 18) {
        std::cout << "Eres mayor de edad.\n";
    } else {
        std::cout << "Eres menor de edad.\n";
    }
}

int main() {
    int edad = 20;
    verificarEdad(edad);
    return 0;
}
