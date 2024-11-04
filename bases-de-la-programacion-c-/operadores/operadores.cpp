#include <iostream>
#include "operadores.h"

void mostrarOperadores(int a, int b) {
    std::cout << "Suma: " << (a + b) << "\n";
    std::cout << "Resta: " << (a - b) << "\n";
    std::cout << "Multiplicación: " << (a * b) << "\n";
    std::cout << "División: " << (a / b) << "\n";
    std::cout << "Módulo: " << (a % b) << "\n";
    std::cout << "a es igual a b: " << (a == b) << "\n";
    std::cout << "a es diferente de b: " << (a != b) << "\n";
    std::cout << "a es mayor que b: " << (a > b) << "\n";
    std::cout << "a es menor o igual a b: " << (a <= b) << "\n";
    std::cout << "a > 5 y b < 5: " << ((a > 5) && (b < 5)) << "\n";
}

int main() {
    mostrarOperadores(8, 4);
    return 0;
}
