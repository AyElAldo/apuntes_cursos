// Este programa compara dos valores enteros e imprime el numero mayor

#include <iostream>

using namespace std;

// Variables globales: El programa las reconoce en todo el archivo .cpp
int a, b;

int main()
{
    cout << "Dame el primer valor " << endl;
    cin >> a; 
    cout << "Dame el segundo valor " << endl;
    cin >> b; 
    if (a > b)
    {
        cout << "El numero mayor es " << a << endl;
    }
    else if (b > a)
    {
        cout << "El numero mayor es " << b << endl;
    }
    else
    {
        cout << "Los numeros son iguales" << endl;
    }
}