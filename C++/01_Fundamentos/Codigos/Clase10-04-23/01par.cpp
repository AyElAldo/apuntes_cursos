// Imprimir desde el numero para hasate el numero 0

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int i;
    cout<<"Ingresa un numero par: ";
    cin>>num; // num = 4

    if(num % 2 == 0){
        if(num >= 0){
            for(i = num; i >= 0; i -= 2){
                cout<<i<<endl; // i = 4, 2,
            }  
            // 4
        }else{
            for(i = num; i <= 0; i += 2) cout<<i<<endl;

        }
    }else{
        cout<<"El numero ingresado es incorrecto.\n";
    }

}