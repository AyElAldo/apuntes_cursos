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

    int dia = 2; // MARTES

    switch(dia)
    {
    case 0:
        cout << "Domingo" << endl;
        break; // Sale del SWITCH
    case 1:
        cout << "Lunes" << endl;
        break; // Sale del SWITCH
    case 2:
        cout << "Martes" << endl;
        break; // Sale del SWITCH
    case 3:
        cout << "Miercoles" << endl;
        break; // Sale del SWITCH
    case 4:
        cout << "Jueves" << endl;
        break; // Sale del SWITCH
    case 5:
        cout << "Viernes" << endl;
        break; // Sale del SWITCH
    case 6:
        cout << "Sábado" << endl;
        break; // Sale del SWITCH
    default:
        cout<<"No es valido.";
    }
}