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

- No es obligatorio que los atributos sean **privados** y los métodos **públicos**. 

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

### Nota (Objetos):
- Para el segundo ejemplo, se utiliza el operador **'new'** para crear dinámicamente un objeto de la clase ***Persona***. La expresión ``new Persona()`` solicita memoria para almacenar el objeto en tiempo de ejecución y devuelve un puntero al objeto creado. 
- Al instanciar el objeto de la clase ***Persona***, en ninguno de los dos casos, les hemos asignado valores a sus atributos (***nombre*** y ***edad***). Sin embargo, el objeto único ***miPersona*** ya tiene todos los atributos y métodos definidos en la clase **Persona**.
