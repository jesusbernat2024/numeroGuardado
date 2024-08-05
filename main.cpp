#include <iostream>
#include "Configuracion.h"
using namespace std;

int main() {
    int x;
    Configuracion y;
    
    x = y.getDato();
    
    cout << "Tu número es el " + to_string(x) + ". ¿Quieres cambiarlo?\n";
    cout << "Introduce nuevo número: ";
    cin >> x;

    y.setDato(x);
    
    return 0;
}
