#include <iostream>

using namespace std;

class Automovil{

    private:
    // Atributos
        string modelo;
        int numRuedas;
        string motor;
        bool isOn; // Si esta prendido o esta apagado


    public:
        // Metodos
        void encender();
        void apagar();

        // Setters y Getters
        // Getters
        string getModelo(){
            return modelo;
        }
        int getNumRuedas(){
            return numRuedas;
        }
        string getMotor(){
            return motor;
        }
        bool getIsOn(){
            return isOn;
        }

        // Setters
        void setModelo(string _modelo){
            modelo = _modelo;
        }

        void set(int _numRuedas){
            numRuedas = _numRuedas;
        }        
        void set(string _motor){
            motor = _motor;
        }
        void set(bool _isOn){
            isOn = _isOn;
        }

};

void Automovil::encender(){
    isOn = true;
    cout<<"El automovil esta arrancando.\n";
}

void Automovil::apagar(){
    isOn = false;
    cout<<"El automovil esta apagandose.\n";
}

int main(){

    Automovil a1;

    //a1.modelo = "Aveo";
    a1.setModelo("Aveo");

    cout << a1.getModelo() <<endl;

    //a1.modelo = "Urus";
    a1.setModelo("Urus");
    //cout << a1.modelo<<endl;
    cout << a1.getModelo() << endl;
}