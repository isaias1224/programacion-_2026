#ifndef COCHE_H
#define COCHE_H

#include <string>
#include "vehiculo.h"

class Coche : public Vehiculo {
    private:
        int capacidadPasajeros;
        string tipoCombustible;
        bool tieneAireAcondicionado;
        string tipoCoche;

        public:
        Coche();
        Coche(string tipo, string color, float velocidad, bool encendido, int capacidadPasajeros, string tipoCombustible, bool tieneAireAcondicionado, string tipoCoche);

        void actualizarCapacidadPasajeros(int capacidadPasajeros);
        void actualizarTipoCombustible(string tipocombustible);
        void actualizarTieneAireAcondicionado(bool tieneAireAcondicionado);
        void actualizarTipoCoche(string tipoCoche);

        void mostrarInformacion();

        int obtenerCapacidadPasajeros();
        string obtenerTipoCombustible();
        bool obtenerTieneAireAcondicionado();
        string obtenerTipoCoche();

};

#endif

