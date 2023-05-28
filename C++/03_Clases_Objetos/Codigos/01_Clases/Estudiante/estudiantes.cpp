#include <iostream>

using namespace std;

/**
 * Clase ESTUDIANTE
 * Atributos
    - nombre  
    - edad
    - numMaterias
    - grupo
    - calificacion
 
 * 
 * Metodos
    - reprobar()
    - cambiarGrupo()
    - correr()
    - aprobar()
  
*/

class Estudiante{
    // PRIVADO: Solo puedes acceder estando dentro de la clase
    private:
        string nombre, grupo;
        int edad, numMaterias;
        float calificacion;

    // PUBLICO: Puedes accerder en cualquier parte del codigo
    public:
        // Metodo Constructor
        Estudiante(){
            cout << "Se ha creado un Estudiante.\n";
        }

        void aprobar(float _calificacion){
            if(_calificacion >= 6){
                calificacion = _calificacion;
                cout << "He aprobado con "<< calificacion <<endl;
            }else{
                reprobar(_calificacion);
            }
        }

        void reprobar(float _calificacion){
            if(_calificacion < 6){
                calificacion = _calificacion;
                cout << "El alumno ha reprobado con "<<calificacion<<endl;
            }else{
                aprobar(_calificacion);
            }
        }

        void cambiarGrupo(string _grupo){
            grupo = _grupo;
        }
        
        void correr(){
            cout<<"Estoy corriendo..."<<endl;
        }

        
        // Getters y Setters
        string getNombre(){
            return nombre;
        }

        void setNombre(string _nombre){
            nombre = _nombre;
        }

        string getGrupo(){
            return grupo;
        }

        void setGrupo(string grupo){
            this->grupo = grupo;
        }

        int getNumMaterias(){
            return this->numMaterias;
        }

        void setNumMaterias(int numMaterias){
            this->numMaterias = numMaterias;
        }
        
        int getEdad(){
            return this->edad;
        }

        void setEdad(int edad){
            this->edad = edad;
        }

        float getCalificacion(){
            return this->calificacion;
        }

        void setCalificion(float calificacion){
            this->calificacion = calificacion;
        }
   
};

// void calcularCalificaciones(Estudiante){



// }

int main(){

    Estudiante *e1 = new Estudiante;
    Estudiante estudiantes[3];

    for(int i = 0; i < 3; i++){
        cout<<"-------- ESTUDIANTE "<<i+1<<" ----------"<<endl;
        /* Atributos
            - nombre  
            - edad
            - numMaterias
            - grupo
            - calificacion
        */ 
        string aux, aux2;
        int auxInt, auxInt2;
        float auxFloat;

        cout<<"Ingresa el nombre del estudiante: ";
        cin>>aux;
        estudiantes[i].setNombre(aux);
        cout<<"Ingresa la edad del estudiante: ";
        cin>>auxInt;
        estudiantes[i].setEdad(auxInt);
        cout<<"Ingresa el numero de materias que lleva el estudiante: ";
        cin>>auxInt2;
        estudiantes[i].setNumMaterias(auxInt2);
        cout<<"Ingresa el grupo del estudiante: ";
        cin>>aux2;
        estudiantes[i].setGrupo(aux2);
        cout<<"Ingresa la calificacion del estudiante: ";
        cin>>auxFloat;
        estudiantes[i].setCalificion(auxFloat);

        cout<<endl;
    }

    for(int i = 0; i < 3; i++){
        cout<<"-------- ESTUDIANTE "<<i+1<<" ----------"<<endl;
        
        cout<<"Nombre: "<<estudiantes[i].getNombre()<<endl;
        cout<<"Edad: "<<estudiantes[i].getEdad()<<endl;
        cout<<"Numero de materias: "<<estudiantes[i].getNumMaterias()<<endl;
        cout<<"Grupo: "<<estudiantes[i].getGrupo()<<endl;
        cout<<"Calificacion: "<<estudiantes[i].getCalificacion()<<endl;

        cout<<endl;
    }



}

