# **Pedir datos en C++ (interacción con usuario)**

Pedir datos es fundamental para la interacción con el usuario.

Una vez que ya hemos visto los tipos de datos, podemos guardar valores ingresados por teclado a nuestras variables.

Para pedir datos al usuario se usa la función **cin** contenida dentro de la biblioteca **iostream**.

**Ejemplo: Usando la función **cin** para pedir la edad de un usuario. Después se imprime la edad.**

```cpp
#include <iostream>

using namespace std;

int main(){
    // Declaramos una variable de tipo ENTERO llamada edad
    int edad;

    cout<<"Escribe tu edad: ";
    // Guardamos la edad ingresada en la variable EDAD
    cin>>edad;

    cout<<"Tu edad es "<<edad<<" años.";
}
```
Salida EJEMPLO:
```
Escribe tu edad: 20
Tu edad es 20 años.
```