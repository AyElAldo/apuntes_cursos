// Uso de cin.geline

#include <iostream>

using namespace std;

int main(){

    char nombre[30];

    cout<<"Ingresa tu nombre completo: ";
    //cin>>nombre;
    cin.getline(nombre, 30, '\n');

    cout<<"Tu nombre es: "<<nombre;

}