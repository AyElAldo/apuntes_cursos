#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int i;
    cout<<"Ingresa un numero par: ";
    cin>>num; // -4

    if(num % 2 == 0){
        if(num >= 0){
            for(i = 0; i <= num; i += 2) cout<<i<<endl;
            
        }else{
            for(i = 0; i >= num; i -= 2) cout<<i<<endl;

        }
    }else{
        cout<<"El numero ingresado es incorrecto.\n";
    }

}