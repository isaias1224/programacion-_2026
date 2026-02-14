#include <iostream>
#include "celular.h"
using namespace std;

int main() {
    cout << "======= celular =======" << std::endl;
    cout << endl;
    
    celular micelular("samsung", "galaxis s20", 4000);
    cout << "celular creado" << endl;
    micelular.MostrarInformacion();
    cout << endl;

    micelular.MostrarBateria();
    micelular.Llamarnumero();

    return 0;
}