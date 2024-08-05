#include <iostream>
#include <fstream>
#include "Configuracion.h"
using namespace std;

int Configuracion::getDato(){
    int a;
    ifstream ficheroEntrada("dato.dat");
    ficheroEntrada >> a;
    ficheroEntrada.close();
    return a;
}

void Configuracion::setDato(int x){
    ofstream ficheroSalida("dato.dat");
    ficheroSalida << x;
    ficheroSalida.close();
}



