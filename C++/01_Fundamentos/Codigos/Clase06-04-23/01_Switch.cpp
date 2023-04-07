// Realizar un programa que elija la vocal que corresponde

/*
    'a' = 0
    'e' = 1
    'i' = 2
    'o' = 3
    'u' = 4
*/

#include <iostream>

using namespace std;

int main(){

    int vocal;

    cout<<"Ingresa un numero: "<<endl;
    cin>>vocal;

    switch(vocal){
        case 0:
            cout<<"a"<<endl;
            break;
        case 1:
            cout<<"e"<<endl;
            break;
        case 2:
            cout<<"i"<<endl;
            break;
        case 3:
            cout<<"o"<<endl;
            break;
        case 4:
            cout<<"u"<<endl;
            break;
        default:
            cout<<"No es valido."<<endl;
    }

}