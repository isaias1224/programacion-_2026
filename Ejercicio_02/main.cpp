#include <iostream>
#include "vehiculo.h"
#include "coche.h"

int main() {
    std::cout << "=== Herencia: Vehiculo y Coche ===" << std::endl;
    std::cout << std::endl;

    Vehiculo vehiculo1("Camioneta", "Negro", 170, true);
    std::cout << "Vehiculo 1 (Clase Vehiculo): " << std::endl;
    vehiculo1.mostrarInformacion();
    std::cout << std::endl;

    Vehiculo vehiculo2("motocicleta", "Rojo", 120, false);
    std::cout << "Vehiculo 2 (Clase Vehiculo): " << std::endl;
    vehiculo2.mostrarInformacion();
    std::cout << std::endl;

    Vehiculo vehiculo3("Bicicleta", "Azul", 150, true);
    std::cout << "vehiculo 3 (Clase Vehiculo): " << std::endl;
    vehiculo3.mostrarInformacion();

    Coche coche1("Pick-up", "Negro", 170, true, 4, "Gasolina", true, "Deportivo");
    std::cout << "Coche 1 (Clase Coche): " << std::endl;
    coche1.mostrarInformacion();
    std::cout << std::endl;

    std::cout << "Coche 1 despues de actualizar: " << std::endl;
    coche1.mostrarInformacion();
    std::cout << std::endl;

    Coche coche2("Sedan", "Blanco", 120, false, 5, "Diesel", false, "Familiar");
    std::cout << "Coche 2 (Clase coche): " << std::endl;
    coche2.mostrarInformacion();
    std::cout << std::endl;

    Coche coche3("Suv", "Azul", 150, true, 7, "Hibrido", true, "Deportivo");
    std::cout << "Coche 3 (Clase coche): " << std::endl;
    coche3.mostrarInformacion();
    std::cout << std::endl;

    std::cout << "Acceso a miembros heredados (coche1): " << std::endl;
    std::cout << "Tipo: " << coche1.obtenerTipo() << std::endl;
    std::cout << "Color: " << coche1.obtenerColor() << std::endl;
    std::cout << "Velocidad: " << coche1.obtenerVelocidad() << " km/h" << std::endl;
    std::cout << "Encendido: " << (coche1.obtenerEncendido() ? "Si" : "No") << std::endl;
    std::cout << std::endl;

    coche1.actualizarTipo("Pick-up Modificada");
    coche1.actualizarColor("Negro");
    coche1.actualizarVelocidad(220);
    coche1.actualizarEncendido(true);
    coche1.actualizarCapacidadPasajeros(2);
    coche1.actualizarTipoCombustible("Disel");
    coche1.actualizarTieneAireAcondicionado(true);
    coche1.actualizarTipoCoche("Deportivo");
    std::cout << "Coche 1 despues de Actualizar: " << std::endl;
    coche1.mostrarInformacion();
    std::cout << std::endl;

    return 0;
}