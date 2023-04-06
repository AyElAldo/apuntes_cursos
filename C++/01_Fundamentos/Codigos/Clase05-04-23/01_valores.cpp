#include<iostream>

using namespace std;

int main(){

    int a = 5; // b = 5
    int b = 10; // a = 10

    //b = a; // b = a = 5
    int aux;
    aux = a; // 5
    a = b; // a = 10
    b = aux;

    int aux2;

    // Ejemplo de como no nombrar variables:     int -aux; 

    // Notacion Camel Case
    int edadPersonaPais;
    float precioCasa;

    // 
    int edad_persona;
    int precio_casa;
    

    return 0;
}