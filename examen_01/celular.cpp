#include "celular.h"
#include <iostream> 

using namespace std;

celular::celular(string marca, string modelo, int bateria) {
    this->marca = marca;
    this->modelo = modelo;
    this->bateria = bateria;
}

void celular::MostrarBateria(){
    cout << "La bateria del celulara es de: " << bateria << "mAh" << endl;
}

void celular::Llamarnumero(){
    string numero;
    cout << "ingrese el numero a llamar: " << endl;
    cin >> numero;
    cout << "Llamado al numnero: " << numero << endl;
}

void celular::MostrarInformacion(){
    cout << "marca: " << marca << endl;
    cout << "modelo: " << modelo << endl;
    cout << "bateria: " << bateria << "mAh" <<  endl;
}