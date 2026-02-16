#include "coche.h"
#include <iostream>

Coche::Coche() : Vehiculo() {
    capacidadPasajeros = 0;
    tipoCombustible = "";
    tieneAireAcondicionado = false;
    tipoCoche = "";
}

Coche::Coche(string tipo, string color, float velocidad, bool encendido, int capacidadPasajeros, string tipoCombustible, bool tieneAireAcondicionado, string tipoCoche)
: Vehiculo(tipo, color, velocidad, encendido) {
    this->capacidadPasajeros = capacidadPasajeros;
    this->tipoCombustible = tipoCombustible;
    this->tieneAireAcondicionado = tieneAireAcondicionado;
    this->tipoCoche = tipoCoche;
}

void Coche::actualizarCapacidadPasajeros(int nuevaCapacidadPasajeros) {
    capacidadPasajeros = nuevaCapacidadPasajeros;
}

void Coche::actualizarTipoCombustible(string nuevoTipoCombustible) {
    tipoCombustible = nuevoTipoCombustible;
}

void Coche::actualizarTieneAireAcondicionado(bool nuevoTieneAireAcondicionado) {
    tieneAireAcondicionado = nuevoTieneAireAcondicionado;
}

void Coche::actualizarTipoCoche(string nuevoTipoCoche) {
    tipoCoche = nuevoTipoCoche;
}

void Coche::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    std::cout << "CapacidadPasajeros: " << capacidadPasajeros << std::endl;
    std::cout << "Tipocombustible: " << tipoCombustible << std::endl;
    std::cout << "TieneAireAcondicionado: " << (tieneAireAcondicionado ? "Si" : "No") << std::endl;
    std::cout << "TipoCoche: " << tipoCoche << std::endl;
}

int Coche::obtenerCapacidadPasajeros() {
    return capacidadPasajeros;
}

string Coche::obtenerTipoCombustible() {
    return tipoCombustible;
}

bool Coche::obtenerTieneAireAcondicionado() {
    return tieneAireAcondicionado;
}

string Coche::obtenerTipoCoche() {
    return tipoCoche;
}
