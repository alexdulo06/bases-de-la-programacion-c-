#include <iostream>
#include "declaracion_de_variables.h"

void imprimirDatosUsuario(const std::string& nombre, int edad) {
    std::cout << "Hola, " << nombre << "! Tienes " << edad << " años.\n";
}

int main() {
    std::string nombre = "Carlos";
    int edad = 25;
    imprimirDatosUsuario(nombre, edad);
    return 0;
}
