// Clase FAMILIAR que hereda de PERSONA

#include "Persona.cpp"

class Familiar: public Persona{

    public:
        int numHijos, numHermanos;
        bool estaVivo;

    public:
        // Metodo Constructor
        Familiar(){
            cout<<"Se ha creado un familiar.";
            estaVivo = true;
        }

        Familiar(bool vivo){
            this->estaVivo = vivo;
        }

        void llegarACasa(){
            cout<<"Estoy en casa."<<endl;
        }

        void morir(){
            cout<<"He muerto."<<endl;
            this->estaVivo = false;
        }

};

int main(){

    Familiar padre;
    
    cout<<padre.estaVivo<<endl;

    padre.morir();

    cout<<padre.estaVivo<<endl;
}