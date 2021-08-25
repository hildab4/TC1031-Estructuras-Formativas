#include <iostream>
using namespace std;

class Funciones {
    public:
        int sumaIterativa(int n);
        int sumaRecursiva(int n);
        int sumaDirecta(int n);
};

int Funciones :: sumaIterativa(int n){
    int total = 0, i = 1;
    while (i <= n){ //Ciclo while para calcular sumatoria
        total = total + i;
        i ++; 
    }
    return total;
}

int Funciones :: sumaRecursiva(int n){
    if (n == 0){ return 0;} //Caso base
    else{
        n = n + sumaRecursiva(n - 1); //Caso general
    }
    return n;
}

int Funciones :: sumaDirecta(int n){
    return n * 0.5 * (1 + n); //Cálculo directo
}