// Suma de matrices
#include <iostream>

using namespace std;

int main(){

    /*
    1 2 3
    4 5 6
    7 8 9
    */
    
    int i, j; // Nos serviran como indices
    int filas, columnas; // Guardaran las dimensiones de la matriz

    // Pedimos dimensiones
    cout<<"Ingresa el numero de filas: ";
    cin>>filas;
    cout<<"Ingresa el numero de columnas: ";
    cin>>columnas;

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int resultado[filas][columnas];

    // Pedimos elementos de las matrices
    cout<<"------------ MATRIZ 1 --------------\n";
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            cout<<"Ingresa el valor de la matriz 1 que corresponde a la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }
    // Pedimos los elementos de la segunda matriz
    cout<<"------------ MATRIZ 2 --------------\n";
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            cout<<"Ingresa el valor de la matriz 2 que corresponde a la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>matriz2[i][j];
        }
    }
    // Haciendo la suma
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout<<"El resultado de la suma de las matrices es:\n";

    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            cout<<resultado[i][j]<<"\t";
        }
        cout<<endl;
    }

}