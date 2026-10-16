#include <iostream>
#include <vector>
#include "Actuador.h"

int main() {
    std::vector<Actuador> sistema;
    int cant;
    std::cout << "Cantidad de actuadores (min 2): ";
    std::cin >> cant;
    if(cant < 2) cant = 2;
    std::cin.ignore();

    for (int i = 0; i < cant; ++i) {
        std::string n;
        std::cout << "Nombre actuador " << i+1 << ": ";
        std::getline(std::cin, n);
        sistema.push_back(Actuador(n));
    }

    for (auto& a : sistema) {
        int p;
        std::cout << "Potencia para " << a.getNombre() << ": ";
        std::cin >> p;
        a.encender();
        a.ajustarPotencia(p);
    }

    std::cout << "\n--- Resultados ---\n";
    for (const auto& a : sistema) {
        std::cout << a.obtenerEstado() << "\n";
    }
    return 0;
}
