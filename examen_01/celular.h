#ifndef CELULAR_H
#define CELULAR_H
#include <string>
using std::string;
class celular {
private:
string marca;
string modelo;
int bateria;
int ram;
int almacenamiento;

public:
celular(string marca, string modelo, int bateria);
void MostrarBateria();
void Llamarnumero();
void MostrarInformacion();
};

#endif