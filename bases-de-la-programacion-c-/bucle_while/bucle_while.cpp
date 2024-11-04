#include <iostream>
#include "bucle_while.h"

void imprimirTablaWhile(int numero) {
    int i = 1;
    while (i <= 10) {
        std::cout << numero << " x " << i << " = " << numero * i << "\n";
        i++;
    }
}

int main() {
    imprimirTablaWhile(7);
    return 0;
}
