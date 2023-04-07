// For
#include<iostream>

using namespace std;

int main(){
    int auxiliar;
    int repeticiones;
    // Sintaxis
    cout<<"Ingresa el numero de veces que se tiene que repetir: ";
    cin>>repeticiones;

    for(auxiliar = 0; auxiliar < repeticiones; auxiliar++){
        cout<<"Adios"<<auxiliar<<endl;
    }

    cout<<"Fin del programa";
}