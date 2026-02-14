#include <iostream>
#include "estudiante.h"

using namespace std;


int main(){

    cout << "=== Sistema de Gestion de Estudiante ===\n\n";

    Estudiante estudiante1;
    cout << "Estudiante 1 (constructor por defecto):\n";
    estudiante1.mostrarInformacionCompleta();
    cout << endl;

    estudiante1.actualizarNombre("Maria Garcia Lopez");
    estudiante1.actualizarCodigo("EST-2024-001");
    estudiante1.actualizarEdad(20);
    estudiante1.actualizarPromedio(9.5);
    estudiante1.actualizarActivo(true);

    cout << "Estudiante 1 despues de actualizar:\n";
    estudiante1.mostrarInformacionCompleta();
    estudiante1.calcularEstadoAcademico();
    cout << endl;

    Estudiante estudiante2("Juan Perez Martinez", "EST-2024-002", 22, 7.5, true);
    cout << "Estudiante 2 (constructor con parámetros):\n";
    estudiante2.mostrarInformacionCompleta();
    estudiante2.calcularEstadoAcademico();
    cout << endl;

    cout << "Incrementando edad del estudiante 2:\n";
    estudiante2.incrementarEdad();
    estudiante2.mostrarEdad();
    cout << endl;

    cout << "Intentando actualizar promedio con valor invalido:\n";
    estudiante2.actualizarPromedio(15.0);
    estudiante2.mostrarPromedio();


    return 0;
}
