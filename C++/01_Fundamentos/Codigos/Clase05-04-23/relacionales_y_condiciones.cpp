#include<iostream>
// locale.h
using namespace std;

int main(){

    float numero = 32.4; // =
    float numero2 = 51.1;

    /**
     * Operadores relacionales
     * Ejemplo de lo que devuelve cada operacion <, >, <=, >=, ==, !=
     */
    cout<<(10<10)<<endl; // 0
    cout<<(10<=10)<<endl; // 1

    // Diferente que
    cout<<(2 != 5)<<endl; // 1
    // Igual que
    cout<<(3 == 7)<<endl; // 0 == 
    
    if(0){
        // Bloque de codigo
        cout<<"Son iguales"<<endl;
    }

    int edadFernando = 21;
    int edadAldo = 22;

    if(!(edadFernando == 21 && edadAldo == 20)){
        cout<<"Las edades son correctas\n";
    }else{
        cout<<"Las edades son incorrectas\n";
    }

    cout<<"Fin del programa.";
    return 0;
}