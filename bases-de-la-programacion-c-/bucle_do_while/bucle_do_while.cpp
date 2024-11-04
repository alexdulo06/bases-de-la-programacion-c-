#include <iostream>
#include "bucle_do_while.h"

void imprimirTablaDoWhile(int numero) {
    int i = 1;
    do {
        std::cout << numero << " x " << i << " = " << numero * i << "\n";
        i++;
    } while (i <= 10);
}

int main() {
    imprimirTablaDoWhile(5);
    return 0;
}
