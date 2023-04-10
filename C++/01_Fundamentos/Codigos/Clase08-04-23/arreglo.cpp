#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5,6,7,8,9,10};

    //cout<<"Imprimiendo el arreglo\n";
    
    for(int i = 3; i<8; i++){
        /* 
        Se imprime el elemento del arreglo en la posicion 'i'.La variable 'i' comienza en 0 e incrementa de uno en uno hasta llegar a 4
        */
        //cout<<numeros[i+1]<<endl;
    }

    // Arreglos bidimensionales o matriz
    /*
    1 2 3
    4 5 6
    7 8 9
    */
    int tablero[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //cout<<tablero[2][1];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<tablero[i][j]<<" ";
        }
        cout<<endl;
    }

}