// Funciones
#include <iostream>

// Declarar prototipo de funciones
void suma();
int suma2();
// funciones con parametros (argumentos)
float suma3(float n1, float n2);

using namespace std;

int main(){

    // Llamar a la funcion
    //suma();

    //int numero;
    //numero = suma2(); // numero = 8
    //cout<<numero<<endl;

    cout<<suma3(3, 5)<<endl; 
    cout<<suma3(1, 2)<<endl; 
    cout<<suma3(4, 5)<<endl; 
    cout<<suma3(2.5, 6.2)<<endl; 
    cout<<suma3(-6.9, -12)<<endl; 
}

void suma(){
    // Variables locales
    //int suma;
    //suma = 3 + 5;
    cout<<"El resultado es "<<3 + 5<<endl;
}

int suma2(){
    return 3+5;
}

float suma3(float n1, float n2){
    return n1 + n2;
}
