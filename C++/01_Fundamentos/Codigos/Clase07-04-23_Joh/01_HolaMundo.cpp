
#include<iostream>
#include<math.h> // Nos permitira realizar funciones matematicas

using namespace std;

int main(){
	
	int numero; // Declaracion
	float numero2 = 2.5; // Declaracion e inicializacion
	char nombre[15] = "Johann";
	char letra = 'a';
	
	cout<<"\t Hola mundo.\n"<<endl;
	// cout<<"Johann";
	
	cout<<nombre<<endl; //
	
	
	// Potencia y raiz cuadrada
	// pow() -> potencia
	// sqrt() -> raiz cuadrada
	float resultado;
	
	resultado = pow(3, 2);
	cout<<resultado<<endl;
	
	// Raiz cuadrada
	resultado = sqrt(9);
	cout<<resultado<<endl;
	
	bool res;
	res = (1 < 3) && (10 != 1) && (3 == 1);
	cout<<res<<endl;
	
}
