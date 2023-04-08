// Uso de CIN

#include<iostream>

using namespace std;

int main(){
	
	//char nombre[30];
	//cout<<"Ingresa tu nombre completo: ";
	//cin>>nombre;
	
	//cout<<"Tu nombre es "<<nombre<<endl;
	
	
	// cin.getline
	char nombre[30];
	cout<<"Ingresa tu nombre completo: ";
	cin>>nombre;
	cin.getline(nombre, 10, '\n');
	
	cout<<"Tu nombre es "<<nombre<<endl;
	
	return 0;
}
