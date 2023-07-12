# 1. Clases y objetos

## 1.1 Clases

Una clase en C++ se puede definir como una estructura que colecciona **variables (atributos)** y **funciones (métodos)** con el fin de definir un tipo de datos personalizado.


**Características importantes de una clase:**
- Se puede pensar en una clase como un molde o plantilla para crear objetos.
- Una clase define la estructura y el comportamiento de los objetos creados a partir de esta.
- Puedes crear múltiples objetos de una clase, cada uno con su propio conjuntos de datos.

*Ejemplo básico de la definición de una clase en C++:*

```cpp
class Hora{
    // Atributos (características)
    private:
        int hora;
        int minuto;
        int segundo;
    // Métodos (acciones)
    public:
        void establecerHora(int, int, int);
        void imprimeHora();
}; // Fin de la clase Hora
```

Del código anterior podemos resaltar los siguiente:
- **Atributos (características):** hora, minuto, segundo.
- **Métodos (acciones):** establecerHora(), imprimeHora().
- **Modificadores de acceso:** private, public.

## 1.2 Modificadores de acceso (Public y private)

Las etiquetas ***public:*** y ***private:*** son llamados ***modificadores de acceso***.

Cualquier dato o función miembro declarado después de ***public:*** será accesible desde cualquier parte del programa que tenga acceso al objeto **Hora**.

Mientras que, cualquier dato o función miembro que sea declarado después de ***private:*** solamente serán accesibles a funciones miembro de la misma clase.

## 1.3 Mas ejemplos de definición de clases:

Clase ***Persona***:

```cpp
class Persona {
    private:
        // Variables miembro (atributos)
        string nombre;
        int edad;
    public:
        // Método miembro 
        void saludar(){}
};
```

Clase ***Rectangulo***:
```cpp
class Rectangulo {
    private:
        // Atributos
        float largo;
        float ancho;

    public:
        // Constructor
        Rectangulo(float l, float a){
            largo = l;
            ancho = a;
        }

        // Métodos miembro
        float calcularArea() {
            return largo * ancho;
        }

        float calcularPerimetro() {
            return 2 * (largo + ancho);
        }
};
```

Clase ***Círculo***:
```cpp
class Circulo {
    private:
        // Atributos
        float radio;

    public:
        // Constructor
        Circulo(float r) : radio(r) {}

        // Método miembro
        float calcularArea() {
            return 3.14159 * radio * radio;
        }
};
```

### Notas (Clases y Modificadores de acceso):
- Nótese que existen diferentes formas de declarar los métodos de una clase. 
    
    El código correspondiente a los métodos se puede definir en el mismo bloque donde se define la clase (clase ***Rectángulo*** y ***Círculo***) o en otro apartado.

- No es obligatorio que todos los atributos sean **privados** y los métodos **públicos**. 

    Esto se hace como una buena práctica de programación, ya que hacer referencia a que estamos usando ***Encapsulación*** (se explica mas adelante).

## 1.4 Objetos

Una vez que ya aprendimos a definir una clase, podemos usar esas clases como **moldes** o **plantillas** para crear objetos. Al proceso de crear un objeto único basado en una plantilla o definición de clase se le llama **instanciar un objeto**.

A continuación, se muestra el ejemplo cómo se instancia un objeto de la clase ***Persona*** (definida anteriormente).

```cpp
// Se crea un objeto de tipo Persona
Persona miPersona;
```

O bien, usando ***punteros:***
```cpp
Persona *miPersona = new Persona(); 
```

**Importante:** Para poder usar el operador ``new`` se necesita la biblioteca ``stdlib.h``.

### Nota (Objetos):
- Para el segundo ejemplo, se utiliza el operador **'new'** para crear dinámicamente un objeto de la clase ***Persona***. La expresión ``new Persona()`` solicita memoria para almacenar el objeto en tiempo de ejecución y devuelve un puntero al objeto creado. 
- Al instanciar el objeto de la clase ***Persona***, en ninguno de los dos casos, les hemos asignado valores a sus atributos (***nombre*** y ***edad***). Sin embargo, el objeto único ***miPersona*** ya tiene todos los atributos y métodos definidos en la clase **Persona**.

### **1.4.1 Acceso a Atributos y metodos**

Hagamos de cuenta que tenemos la siguiente clase que representa un ***Punto*** en un plano cartesiano:

***Nota: Para este caso, tanto los atributos como los métodos serán públicos.***
```cpp
class Punto {
    public:
        double x;
        double y;

        void imprimirCoordenadas() {
            cout<<"Coordenadas: ("<<x<< ", "<<y<< ")"<<endl;
        }
};
```

Luego, dentro de la función ***main***, instanciamos un objeto de la clase ***Punto*** y posteriormente, modificamos los atributos del objeto, accediendo mediante el operador ***->***. Finalmente, llamamos al método **imprimirCoordenadas()**.

```cpp
int main(){
    Punto *p1 = new Punto();

    // Asignamos valores a sus coordenadas X y Y
    p1->x = 2;
    p1->y = -3;

    // Accedemos al metodo
    p1->imprimirCoordenadas();
}
```
**Nota: Podemos acceder a los atributos y métodos debido a que todos estos se definieron en la clase como elementos públicos.**

***Salida:***
```
Coordenadas: (2, -3)
```

## 1.5 Más ejemplos de acceso a atributos y métodos

Ejemplo usando una clase **Persona**:
```cpp
#include <iostream>
#include <string>

// Clase
class Persona {
    public:
        // Atributos públicos
        string nombre;
        int edad;

        // Métodos públicos
        void saludar() {
            cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << std::endl;
        }

        void cumplirAnio() {
            edad++;
            cout << "¡Feliz cumpleaños! Ahora tengo " << edad << " años." << endl;
        }
};

// main
int main() {
    // Crear objeto de la clase Persona
    Persona *persona1 = new Persona();
    
    // Acceder y modificar atributos públicos
    persona1->nombre = "Juan";
    persona1->edad = 25;

    // Acceder a métodos públicos
    persona1->saludar();      // Salida: Hola, mi nombre es Juan y tengo 25 años.
    persona1->cumplirAnio();  // Salida: ¡Feliz cumpleaños! Ahora tengo 26 años.

    return 0;
}
```

Ejemplo usando una clase **Libro**:
```cpp
#include <iostream>
#include <string>

class Libro {
    public:
        // Atributos públicos
        string titulo;
        string autor;
        int anioPublicacion;

        // Métodos públicos
        void mostrarInformacion() {
            cout << "Título: " << titulo << endl;
            cout << "Autor: " << autor << endl;
            cout << "Año de publicación: " << anioPublicacion << endl;
        }

        void establecerAnioPublicacion(int anio) {
            anioPublicacion = anio;
        }
};

int main() {
    // Crear objeto de la clase Libro
    Libro libro1;
    
    // Acceder y modificar atributos públicos
    libro1.titulo = "Cien años de soledad";
    libro1.autor = "Gabriel García Márquez";
    libro1.anioPublicacion = 1967;

    // Acceder a métodos públicos
    libro1.mostrarInformacion();
    // Salida:
    // Título: Cien años de soledad
    // Autor: Gabriel García Márquez
    // Año de publicación: 1967

    libro1.establecerAnioPublicacion(1970);
    libro1.mostrarInformacion();
    // Salida (actualización del año de publicación):
    // Título: Cien años de soledad
    // Autor: Gabriel García Márquez
    // Año de publicación: 1970

    return 0;
}
```

## Notas (Ejemplos):
- Se usa el operador ``->`` cuando los objetos son instanciados de la forma ``Objeto miObjeto = new Objeto();``, de lo contrario se usa el operador punto '``.``' (Ejemplo usando la clase ***Libro***). 

## 1.5 Encapsulación

La encapsulación es un principio fundamental de la programación orientada a objetos que consiste en ocultar los detalles internos de una clase y proporcionar una interfaz controlada para acceder y manipular los datos y métodos de la clase.

La encapsulación se logra mediante la combinación de modificadores de acceso (**public, private y protected**) y el uso de métodos de acceso (**getters y setters**) para interactuar con los atributos privados de la clase.

En muy pocas palabras, se usan métodos públicos (**getters y setters**) para acceder a los atributos de la clase.

**Para mejor explicación, te dejo un ejemplo paso a paso:**

1. Se define la clase con atributos privados y métodos públicos.

Para este caso, yo usaré la clase ***Círculo***:

```cpp
class Circulo{
    private:
        float radio;

    public:
        // Getter
        float getRadio(){
            return radio;
        }

        // Setter
        void setRadio(float _radio){
            radio = _radio;
        }

        void obtenerPerimetro(){
            cout<<"El perimetro es: "<<3.14159 * radio * 2;
        }
        void obtenerArea(){
            cout<<"El area es: "<<3.14159 * radio*radio;
        }
};
```


