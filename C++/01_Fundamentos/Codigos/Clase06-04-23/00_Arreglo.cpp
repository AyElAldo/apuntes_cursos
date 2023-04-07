#include <iostream>

using namespace std;

int main()
{
    /*
    DOMINGO = 0
    LUNES = 1
    MARTES = 2
    MIERCOLES = 3
    JIEVES = 4
    VIERNES = 5
    SABADO = 6
    */

    int dia; 
    char diaSemana[7] = {'S', 'M', 'T', 'W', 'J', 'F', 'X'};

    cout<<"Ingresa el numero de dia que corresponde: ";
    cin>>dia;


    cout<<"El dia seleccionado es "<<diaSemana[dia]<<endl;
}