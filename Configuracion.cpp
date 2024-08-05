#include <iostream>
#include <fstream>
using namespace std;

class Configuracion{
    public:
        int getDato(){
            int a;
            ifstream ficheroEntrada("dato.dat");
            ficheroEntrada >> a;
            ficheroEntrada.close();
            return a;
        }
};

int getDato(){
    int a;
    ifstream ficheroEntrada("dato.dat");
    ficheroEntrada >> a;
    ficheroEntrada.close();
    return a;
}
void setDato(int x){
    ofstream ficheroSalida("dato.dat");
    ficheroSalida << x;
    ficheroSalida.close();
}
