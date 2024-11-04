#include <iostream>
#include "tipos_de_datos.h"

void mostrarTiposDeDatos() {
    int numero = 42;
    double decimal = 3.14159;
    char letra = 'A';
    bool esVerdadero = true;

    std::cout << "Número entero: " << numero << "\n";
    std::cout << "Número decimal: " << decimal << "\n";
    std::cout << "Carácter: " << letra << "\n";
    std::cout << "Booleano: " << (esVerdadero ? "true" : "false") << "\n";
}

int main() {
    mostrarTiposDeDatos();
    return 0;
}
