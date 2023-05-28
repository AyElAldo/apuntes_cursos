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
    public:
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
   
};


// void calcularCalificaciones(Estudiante){



// }

int main(){

    Estudiante *e1 = new Estudiante;
    Estudiante estudiantes[3];

    // for(int i = 0; i < 3; i++){
    //     cout<<"-------- ESTUDIANTE "<<i+1<<" ----------"<<endl;
    //     /* Atributos
    //         - nombre  
    //         - edad
    //         - numMaterias
    //         - grupo
    //         - calificacion
    //     */ 
    //     cout<<"Ingresa el nombre del estudiante: ";
    //     cin>>estudiantes[i].nombre;
    //     cout<<"Ingresa la edad del estudiante: ";
    //     cin>>estudiantes[i].edad;
    //     cout<<"Ingresa el numero de materias que lleva el estudiante: ";
    //     cin>>estudiantes[i].numMaterias;
    //     cout<<"Ingresa el grupo del estudiante: ";
    //     cin>>estudiantes[i].grupo;
    //     cout<<"Ingresa la calificacion del estudiante: ";
    //     cin>>estudiantes[i].calificacion;

    //     cout<<endl;
    // }

    // for(int i = 0; i < 3; i++){
    //     cout<<"-------- ESTUDIANTE "<<i+1<<" ----------"<<endl;
        
    //     cout<<"Nombre: "<<estudiantes[i].nombre<<endl;
    //     cout<<"Edad: "<<estudiantes[i].edad<<endl;
    //     cout<<"Numero de materias: "<<estudiantes[i].numMaterias<<endl;
    //     cout<<"Grupo: "<<estudiantes[i].grupo<<endl;
    //     cout<<"Calificacion: "<<estudiantes[i].calificacion<<endl;

    //     cout<<endl;
    // }


    //estudiantes[2].correr();
    // estudiantes[0].calificacion = 10;
    // cout<<estudiantes[0].calificacion<<endl;

    // estudiantes[0].reprobar(.99);
    // cout<<estudiantes[0].calificacion<<endl;


}

