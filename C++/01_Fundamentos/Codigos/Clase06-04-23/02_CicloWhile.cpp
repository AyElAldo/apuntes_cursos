// While, Do While, For || Ciclos o bucles (loop)
// Estructuras Iterativas
#include<iostream>

using namespace std;

int main(){

    int auxiliar = 0;
    int repeticiones;
    cout<<"Ingresa el numero de veces que se tiene que repetir: ";
    cin>>repeticiones; // 2

    // While
    while(auxiliar < repeticiones){
        cout<<"Hola"<<auxiliar++<<endl; // auxiliar = auxiliar + 1
        // Auxiliar = 0
        //auxiliar++;
    }

    cout<<"Fin del programa";
}