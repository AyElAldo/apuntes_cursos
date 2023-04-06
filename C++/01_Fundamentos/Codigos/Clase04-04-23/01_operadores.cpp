// Primer programa
#include <iostream>
#include <math.h>
// g++

using namespace std;
// Funcion principal
int main(){
	
    // Inicializacion y Declaracion
    //int numero = 14; // Inicializacion
    //int resultado = 0;
    int numero = 14, resultado = 0;
    float numero2 = -5; // Declaracion
    float resultado2;
    char caracter;

    // Operadores
    resultado2 = numero + numero2; // 14 + (- 5)

    cout<<resultado2<<endl; // 9
    resultado2++; // resultado2 = resultado2 + 1; 10
    // = ASIGNACION
    cout<<resultado2<<endl;

    // Potencia
    resultado2 = pow(2,4);
    cout<<resultado2<<endl;

    // Raiz cuadrada
    resultado2 = sqrt(10);
    cout<<resultado2<<endl;

    numero = 10;
    resultado = 13 - numero; // resultado = 3
    cout<<resultado<<endl;
    resultado--; // resultado = resultado - 1;
    cout<<"Resultado decrementado en uno: "<<resultado<<endl; // resultado = 2

    resultado -= 2; // resultado = resultado - 2;
    cout<<"Resultado decrementado en dos: "<<resultado<<endl;
    resultado += 10;
    cout<<"Resultado incrementado en diez: "<<resultado<<endl;

    numero = 100;
    numero = numero / 10; // numero /= 10

    // Uso de modulo
    numero = 20;
    int divisor = 4;
    resultado2 = numero % divisor;
    cout<<"Imprimiendo el residuo de "<<numero<<" entre "<<divisor<<" es: "<< resultado2;


    return 0;
}