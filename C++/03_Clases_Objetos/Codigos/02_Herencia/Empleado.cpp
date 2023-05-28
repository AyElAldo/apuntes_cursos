#include "Persona.cpp"

class Empleado: public Persona{

    public:
        string nacionalidad;
        string puesto;
        float sueldo;

    public:
        void trabajar(){
            cout<<"Estoy trabajando."<<endl;
        }

        void comer(){
            cout<<"Estoy comiendo."<<endl;
        }

};

int main(){

    Empleado e1;
    Persona e2("Fernando", 21);

    e1.setEdad(30);
    e1.setNombre("Maria");
    e1.setGenero("Mujer");

    e1.nacionalidad = "Mexicana";
    e1.puesto = "Directora";
    e1.sueldo = 25000;

    cout<<e1.getNombre()<<endl;
    cout<<e1.getEdad()<<endl;
    cout<<e1.getGenero()<<endl;
    cout<<e1.nacionalidad<<endl;
    cout<<e1.puesto<<endl;
    cout<<e1.sueldo<<endl;

}