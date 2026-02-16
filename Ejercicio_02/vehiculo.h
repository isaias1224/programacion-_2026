#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using std::string;

class Vehiculo{
protected:
    string tipo;
    string color;
    float velocidad;
    bool encendido;

    public:
    Vehiculo();
    Vehiculo(string tipo, string color, float velocidad, bool encendido);

    void actualizarTipo(string tipo);
    void actualizarColor(string color);
    void actualizarVelocidad(float velocidad);
    void actualizarEncendido(bool encendido);

    void mostrarInformacion();

    string obtenerTipo();
    string obtenerColor();
    float obtenerVelocidad();
    bool obtenerEncendido();

};

#endif