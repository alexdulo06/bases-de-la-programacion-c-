int variableGlobal = 10; // Variable global

void mostrarAmbito() {
    int variableLocal = 5; // Variable local
    std::cout << "Variable Global: " << variableGlobal << "\n";
    std::cout << "Variable Local: " << variableLocal << "\n";
}