#include "estudiante.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante() {
    nombre = "Isaias Ezequiel Canul May";
    codigo = "EST-2026-000";
    edad = 18;
    promedio = 7.0;
    activo = false;
}

Estudiante::Estudiante(string nombre, string codigo, int edad, float promedio, bool activo) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->edad = edad;
    this->promedio = promedio;
    this->activo = activo;
}

void Estudiante::actualizarNombre(string nuevoNombre) { nombre = nuevoNombre; }
void Estudiante::actualizarCodigo(string nuevoCodigo) { codigo = nuevoCodigo; }
void Estudiante::actualizarEdad(int nuevaEdad) { edad = nuevaEdad; }

void Estudiante::actualizarPromedio(float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        promedio = nuevoPromedio;
    } else {
        cout << "Error: el promedio debe estar entre 0.0 y 10.0" << endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado) { activo = nuevoEstado; }

string Estudiante::obtenerNombre() { return nombre; }
string Estudiante::obtenerCodigo() { return codigo; }
int Estudiante::obtenerEdad() { return edad; }
float Estudiante::obtenerPromedio() { return promedio; }
bool Estudiante::obtenerActivo() { return activo; }

void Estudiante::mostrarNombre() { cout << "Nombre: " << nombre << endl; }
void Estudiante::mostrarCodigo() { cout << "Codigo: " << codigo << endl; }
void Estudiante::mostrarEdad() { cout << "Edad: " << edad << " años" << endl; }
void Estudiante::mostrarPromedio() { cout << "Promedio: " << promedio << endl; }

void Estudiante::mostrarActivo() {
    cout << "Estado: " << (activo ? "Activo" : "Inactivo") << endl;
}

void Estudiante::mostrarInformacionCompleta() {
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
}

void Estudiante::incrementarEdad() {
    edad++;
}

void Estudiante::calcularEstadoAcademico() {
    cout << "Estado academico: ";

    if (promedio >= 9.0) cout << "Excelente";
    else if (promedio >= 8.0) cout << "Muy Bueno";
    else if (promedio >= 7.0) cout << "Bueno";
    else if (promedio >= 6.0) cout << "Regular";
    else cout << "Necesita Mejorar";

    cout << endl;
}
