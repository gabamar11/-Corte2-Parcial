#ifndef ACTUADOR_H
#define ACTUADOR_H
#include <string>

/**
 * @class Actuador
 * @brief Representa un dispositivo actuador.
 */
class Actuador {
private:
    std::string nombre;
    bool estado;
    int nivelPotencia;
public:
    /** @brief Constructor @param _nombre Nombre del actuador */
    Actuador(std::string _nombre);
    /** @brief Enciende el actuador */
    void encender();
    /** @brief Apaga el actuador */
    void apagar();
    /** @brief Ajusta potencia @param nuevoNivel Nivel de 0 a 100 */
    void ajustarPotencia(int nuevoNivel);
    /** @brief Obtiene el estado @return Cadena de texto con el estado */
    std::string obtenerEstado() const;
    std::string getNombre() const;
};
#endif
