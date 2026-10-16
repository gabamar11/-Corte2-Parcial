#include "Actuador.h"
Actuador::Actuador(std::string _nombre) : nombre(_nombre), estado(false), nivelPotencia(0) {}
void Actuador::encender() { estado = true; }
void Actuador::apagar() { estado = false; nivelPotencia = 0; }
void Actuador::ajustarPotencia(int nuevoNivel) {
    if (nuevoNivel < 0) nivelPotencia = 0;
    else if (nuevoNivel > 100) nivelPotencia = 100;
    else nivelPotencia = nuevoNivel;
}
std::string Actuador::obtenerEstado() const {
    std::string est = estado ? "ON" : "OFF";
    return "Actuador: " + nombre + " | Estado: " + est + " | Potencia: " + std::to_string(nivelPotencia) + "%";
}
std::string Actuador::getNombre() const { return nombre; }
