// Do While
#include<iostream>

using namespace std;

int main(){

    int auxiliar = 0;
    int repeticiones;

    cout<<"Ingresa el numero de veces que se tiene que repetir: ";
    cin>>repeticiones;

    do{
        // Codigo
        cout<<"Hola"<<auxiliar++<<endl;
    }while(auxiliar < repeticiones);

    cout<<"Fin del programa";
}