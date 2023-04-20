/* DIAGRAMA
Pasar el programa contenido en el diagrada de flujo a C++
*/

#include <iostream>

using namespace std;

int n;
int div2=2;
int aux=0;


int main(){

    cout<<"Escribe el valor de n: \n";
    cin>>n; // n = 3

    for(div2 = 2; div2 < n; div2++){ // div2 = 2, 3
        if(n%div2==0){  // 
            aux = 1; // aux = 1
        }
    }
    if(aux == 0){
        cout<<"SI"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}