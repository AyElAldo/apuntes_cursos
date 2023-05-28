/* CLASE BASE: PERSONA */

#include <iostream>

using namespace std;

class Persona{

    private:
        int edad;
        string nombre;
        string genero;

    public:

    // Metodo Constructor
        Persona(){
            cout << "Se ha crado una persona."<<endl;
        }

        Persona(int edad){
            this->edad = edad;
            cout << "Se ha crado una persona con "<<this->edad<<" ."<<endl;
        }

        Persona(string nombre, int edad){
            this->nombre = nombre;
            this->edad = edad;
            cout<<"Se ha creado a "<<this->nombre<<" ( "<<this->edad<<" anios )."<<endl;
        }

    // Getters & Setters
        int getEdad();
        void setEdad(int edad);

        string getNombre(){
            return this->nombre;
        }

        void setNombre(string nombre){
            this->nombre = nombre;
        }

        string getGenero(){
            return this->genero;
        }

        void setGenero(string genero){
            this->genero = genero;
        }

};

int Persona::getEdad(){
    return this->edad;
}

void Persona::setEdad(int edad){
    this->edad = edad;
}

// int main(){
//     //Persona persona;
//     //persona.setEdad(20);
//     //cout<<persona.getEdad();

//     //Persona persona2(30);
//     //cout<<persona2.getEdad();
    
//     Persona persona3("Fernando", 21);
//     cout<<persona3.getNombre();
//     cout<<persona3.getEdad();

// }

