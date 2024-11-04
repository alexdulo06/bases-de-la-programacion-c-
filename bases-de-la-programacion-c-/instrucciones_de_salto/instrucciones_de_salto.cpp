#include <iostream>
#include "instrucciones_de_salto.h"

void imprimirConBreak() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            std::cout << "Bucle interrumpido en el número: " << i << "\n";
            break;
        }
        std::cout << i << "\n";
    }
}

int main() {
    imprimirConBreak();
    return 0;
}
