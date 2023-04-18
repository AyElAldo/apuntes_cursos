/**
 - Archivo .h (headers)
 - Sizeof() 
 - Funciones
 - Arreglos
*/

// Programa que realice suma

#include "polinomio.h" // header

using namespace std;

int main(){

    int n; // Numero de terminos
    n = pedirTam();
    float polinomio[n]; 
    float polinomio2[n];
    float resultado[n];
    pedirValores(n, polinomio, 1);
    pedirValores(n, polinomio2, 2);
    imprimirPolinomio(n, polinomio);
    imprimirPolinomio(n, polinomio2);
    sumarPolinomios(n, polinomio, polinomio2, resultado);
    imprimirPolinomio(n, resultado);

}