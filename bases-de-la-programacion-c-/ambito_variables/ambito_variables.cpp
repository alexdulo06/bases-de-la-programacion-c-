#include <iostream>
#include "ambito_variables.h"

// Variable global
int contadorGlobal = 10;

void mostrarGlobal() {
    std::cout << "El contador global es: " << contadorGlobal << "\n";
}

int main() {
    int contadorLocal = 5;
    std::cout << "El contador local es: " << contadorLocal << "\n";
    mostrarGlobal();
    return 0;
}
