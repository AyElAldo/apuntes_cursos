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

## **Uso de cin.getline** (Intermedio)

A continuación, se presenta un ejemplo de un programa que le pide su nombre al usuario y después lo imprime por pantalla.

Ejemplo:
```cpp
#include<iostream>

using namespace std;

int main(){

    // Declaramos una cadena de tamanio 10
    char nombre[10];
    // Pedimos nombre
    cout<<"Ingresa tu nombre: ";
    cin>>nombre;
    // Imprimimos su nombre
    cout<<"Buenos dias "<<nombre;

    return 0;
}
```
Salida:
```
Ingresa tu nombre: Mariela
Buenos dias Mariela
```
Al parecer, todo sale bien hasta ahí. Sin emabrgo, cuando tienes más experiencia usando la función **cin** para pedir datos, te darás cuenta que no funciona muy bien para cadenas de caracteres con espacios.

**Ejemplo:**
```cpp
// EJEMPLO USANDO MAL LA FUNCION CIN

#include<iostream>

using namespace std;

int main(){

    // Declaramos una cadena de tamanio 25
    char nombre[25];
    // Pedimos nombre
    cout<<"Ingresa tu nombre completo: ";
    cin>>nombre;
    // Imprimimos su nombre completo
    cout<<"Buenos dias "<<nombre;

    return 0;
}
```
**Salida:**
```
Ingresa tu nombre completo: Melissa Leon Lopez
Buenos dias Melissa
```
Y aquí es cuando notamos que la función **cin** no siempre es funcional. Es por eso, que para este tipo de casos se usa la función ``cin.getline()`` que es capaz de leer una cadena completa.

Esta función requiere de tres parámetros.
- **Nombre:** Nombre de la varaible donde se guardará la cadena ingresada
- **Longitud:** Cantidad de caracteres máxima a introducir
- **Caracter fin:** Caracter que el usuario usará al final de la cadena. Genralmente se usa el salto de línea (*\n*).

Sintaxis:
```cpp
cin.getline(nombre, longitud, '\n');
```

**Ejemplo pidiendo el nombre completo:**
```cpp
#include<iostream>

using namespace std;

int main(){

    // Declaramos una cadena de tamanio 30
    char nombre[30];
    // Pedimos nombre
    cout<<"Ingresa tu nombre completo: ";
    cin.getline(nombre, 30, '\n');
    // Imprimimos su nombre completo
    cout<<"Buenos dias "<<nombre<<", que tengas en un buen dia.";

    return 0;
}
```
Salida:
```
Ingresa tu nombre completo: Cinthya Santiago Perez
Buenos dias Cinthya Santiago Perez, que tengas en un buen dia.
```
