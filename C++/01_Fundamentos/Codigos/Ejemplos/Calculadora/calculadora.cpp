/*
                *    CALCULADORA     *
    Este programa despliega un menu para que el usario
    elija la operacion que quiere hacer. 

    TEMAS QUE SE UTILIZAN
    - OPERACIONES LOGICAS, ARITMETICAS Y RELACIONALES
    - CICLOS (DO-WHILE)
    - ESTRUCTURA CONDICIONAL (SWITCH)
    - USO DE LA BIBLIOTECA MATH.H
    - USO DE SYSTEM() (Limpiar pantalla y Hacer pausas)
*/
#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int opcion; // En esta variable se guarda la opcion que el usuario ingrese
    double numero1, numero2; // Numeros que el usuario ingresara para hacer las operaciones
    double resultado; // En esta variable se guardara el resultado de la operacion seleccionada
    
    // Inicio del ciclo
    do{
        // Antes de imprimir el menu, limpiamos la pantalla
        system("cls");
        // Imprimimos el menu
        cout<<"--------------- MENU OPERACIONES --------------\n";
        cout<<"\n1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n5) Raiz Cuadrada\n6) Potencia\n7) Salir";
        cout<<"\n\nSelecciona la opcion deseada: ";
        cin>>opcion;
        cout<<endl; 

        // Estructura Switch
        switch(opcion){
            case 1:
                cout<<"Ingresa el primer numero a sumar: ";
                cin>>numero1;
                cout<<"Ingresa el segundo numero a sumar: ";
                cin>>numero2;
                resultado = numero1 + numero2;
                break;
            case 2:
                cout<<"Ingresa el primer numero a restar: ";
                cin>>numero1;
                cout<<"Ingresa el segundo numero a restar: ";
                cin>>numero2;
                resultado = numero1 - numero2;
                break;
            case 3:
                cout<<"Ingresa el primer numero a multiplicar: ";
                cin>>numero1;
                cout<<"Ingresa el segundo numero a multiplicar: ";
                cin>>numero2;
                resultado = numero1 * numero2;
                break;
            case 4:
                cout<<"Ingresa el primer numero a dividir: ";
                cin>>numero1;
                cout<<"Ingresa el segundo numero a dividir: ";
                cin>>numero2;
                if(numero2 != 0){
                    resultado = numero1 / numero2;
                }
                else {
                    cout<<"No es posible hacer la division entre 0";
                    system("pause");
                }
                break;
            case 5:
                cout<<"Ingresa el numero al que le quieres calcular su raiz cuadrada: ";
                cin>>numero1;
                resultado = sqrt(numero1);
                break;
            case 6:
                cout<<"Ingresa la base: ";
                cin>>numero1; // Base
                cout<<"Ingresa la potencia a la que quieras elevar el numero "<<numero1<<": ";
                cin>>numero2; // Potencia
                resultado = pow(numero1, numero2);
                break;
            case 7:
                cout<<"Gracias por usar mi calculadora. Hasta la proxima.\n";
                break;
            default:
                cout<<"La opcion no es valida. Intenta de nuevo\n";
        }

        /*
        Solo se ejecuta el bloque de codigo dentro de la
        estructura IF si se cumplen las siguientes condiciones:
        - La opcion elegida es valida
        - En caso de que el usuario haya elegido division, el divisor debe ser diferente de 0

        En cualquier otro caso, no tendria sentido imprimir el resultado
        */
        if((opcion > 0) && (opcion < 7) || (opcion == 4 && numero2 != 0)){
            cout<<"El resultado de la operacion es: "<<resultado<<endl<<endl;
            system("pause");
        }

    }while(opcion != 7); // Mientras el usuario no elija la opcion 7) (SALIR), el menu se imprimira de nuevo

}
