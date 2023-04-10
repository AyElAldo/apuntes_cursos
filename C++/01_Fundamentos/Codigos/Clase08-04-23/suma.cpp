// Ciclos

/* 
Realizar un programa que sume 1+2+3...n
n = Numero ingresado por el usuario

EJEMPLO
n = 4
1+2+3+4 = 10
*/

#include <iostream>

using namespace std;

int main(){

    int num;
    int resultado = 0;
    int i = 1;
    
    cout<<"Ingresa un numero: ";
    cin>>num; // 4

    while(i <= num){// 0
        resultado = resultado + i; // resultado = 1 + 2 + 3 + 4
        //if(i == 3) break;
        //cout<<"Variable i: "<<i<<endl;
        i += 1; // 1  2  3  4  5
        //cout<<"resultado: "<<resultado<<endl;   
    }

    // resultado = 10
    // i = 5
    // num = 4
    cout<<"Resultado Final: "<<resultado<<endl;

}