/* MENU DE UN BANCO
Realiza un menú donde el usuario decida si quiere INGRESO, RETIRO y VER SALDO
para una cuenta de banco.

En caso de
INGRESO: Escribir el monto a ingresar e imprimir el saldo total.

RETIRO: Escribir el monto a retirar e imprimir el saldo total.
        - En caso de no contar con el saldo suficiente, imprimir "Saldo insuficiente"

VER SALDO: Imprimir el saldo total

Considerar que el usuario tiene un saldo inicial de $2500.
*/

#include <iostream>

using namespace std;

int main(){

        int opcion;
        float saldoTotal = 2500;
        float dinero;

        do{
                system("CLS");
                cout<<"-------------- MENU DEL BANCO ---------------\n";
                cout<<"1. Ingresar dinero\n";
                cout<<"2. Retirar dinero\n";
                cout<<"3. Ver Saldo Actual\n";
                cout<<"4. Salir\n";
                cout<<"Ingresa la opcion que quieras seleccionar: ";
                cin>>opcion;

                switch (opcion)
                {
                        case 1:
                                cout<<"Ingresa la cantidad que deseas ingresar: ";
                                cin>>dinero;
                                saldoTotal = saldoTotal + dinero;
                                cout<<"Tu cuenta ahora tiene: $"<<saldoTotal<<endl;
                                system("pause");
                                break;  
                        case 2:
                                cout<<"Ingresa la cantidad que deseas retirar: ";
                                cin>>dinero;
                                if(dinero > saldoTotal){
                                        cout<<"\n\t--SALDO INSUFICIENTE--\n";
                                }else{
                                        saldoTotal = saldoTotal - dinero;
                                        cout<<"Tu cuenta ahora tiene: $"<<saldoTotal<<endl;
                                }
                                system("pause");
                                break;
                        case 3: 
                                cout<<"\nEl saldo que tiene tu cuenta es: $"<<saldoTotal<<endl;
                                system("pause");
                                break;
                        case 4:
                                cout<<"Gracias por usar este banco.\n";
                                break;
                        default:
                                cout<<"La opcion no es valida.\nIntenta de nuevo.\n";
                                system("pause");
                                break;
                }

        }while(opcion != 4);

}