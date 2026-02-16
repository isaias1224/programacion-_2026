#include "vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo() {
    tipo = "";
    color = "";
    velocidad = 0;
    encendido = false;
}

Vehiculo::Vehiculo(string tipo, string color, float velocidad, bool encendido) {
    this->tipo = tipo;
    this->color = color;
    this->velocidad = velocidad;
    this->encendido = encendido;    
}

void Vehiculo::actualizarTipo(string nuevoTipo) {
    tipo = nuevoTipo;
}

void Vehiculo::actualizarColor(string nuevoColor) {
    color = nuevoColor;
}

void Vehiculo::actualizarVelocidad(float nuevaVelocidad) {
    velocidad = nuevaVelocidad;
}

void Vehiculo::actualizarEncendido(bool nuevoEncendido) {
    encendido = nuevoEncendido;
}

void Vehiculo::mostrarInformacion() {
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Velocidad: " << velocidad << " km/h" << std::endl;
    std::cout << "Encendido: " << (encendido ? "Si" : "No") << std::endl;
}

string Vehiculo::obtenerTipo() {
    return tipo;
}

string Vehiculo::obtenerColor() {
    return color;
}

float Vehiculo::obtenerVelocidad() {
    return velocidad;
}

bool Vehiculo::obtenerEncendido() {
    return encendido;
}


