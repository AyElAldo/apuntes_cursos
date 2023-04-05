# **Introducción a C++**

 C++ mejora muchas de las características de C. Una de las principaples diferencias es que proporciona capacidades para la ***programacion orientada a objetos (POO)***.

 Este lenguaje fue desarrollado por **Bjarne Stroustrup** en los laboratorios Bell.

Originalmente se le adoptó el nombre C++ haciendo referencia a que es la versión C pero mejorada. 

***NOTA: C++ es un superconjunto de C, por lo que los mismos compiladores de C++ pueden ser utilizados para compilar programas de C.***

---------

## **Sintaxis básica de C++**

Antes de comenzar, es necesario que entiendas lo siguiente:

- Como en todo lenguaje, existen bloques llamados **comentarios**. Los **comentarios** son una herramienta proporcionada por el lenguaje de programación que nos ayuda a documentar los programas. Por esta razón, los comentarios son ignorados por el *compilador (a grandes rasgos, traductor)* de C++.

En C++ existen dos tipos de comentarios. 

El primero con dos barras diagonales ***( // )*** seguido de caracteres, los cuales seran comentarios de una sola línea.
```cpp
// Ejemplo de la impresión de un HOLA MUNDO

cout<<"Hola Mundo"; // A partir de las dos diagonales empieza este comentario.
```
El segundo tipo de comentario abarca varias líneas y tiene caracteres de inicio y de cierre que son **/\* y \*/** respectivamente.
```cpp
/* En esta línea empiesza el primer comentario
Segunda línea comentada
Tercera...
Ultima línea comentada 
*/
```
- Para cualquier programa de entrada y salida en C++ se necesita la inclusión de la biblioteca estándar de entrada y salida **\<iostream>**. 
```cpp
#include <iostream> 
```    
- Todo el flujo del programa a implementar es llamado **main** y debe estar contenida dentro de un bloque llamada ***función principal***.
Sintaxis
```cpp
// Se declara la función principal
int main(){
    // Aqui va todo el flujo del programa a realizar
}
```
## **Imprimir por pantalla**
En **C++** existe la función **cout** para imprimir por pantalla.
Imprimir por pantalla es necesario para que el usuario y el programador sepan el comportamiento del programa, de esta forma, es una de las  funciones más importantes que existen en todo lenguaje.

**Ejemplo: Usando *cout* para imprimir el nombre de una persona**

```cpp
#include <iostream>

using namespace std;

int main(){
    cout<<"Mi nombre es Aldo Santiago";
}
```
Salida:
```
Mi nombre es Aldo Santiago
```

## **Palabras reservadas**
Dentro de los lenguajes de programaci   ón, existen palabras que no debemos utilizar para nombrar ni variables, ni funciones. Ya que, el mismo lenguaje entiende que esas palabras tienen un significado.
Aqui hay una lista de algunas palabras reservadas de C++:
- int
- float
- auto
- if
- enum
- continue
- bool
- break
- case
- true
- false
- friend
- goto
- this

## **Using namespace std**

Más a futuro, cuando vamos a hacer uso de funciones es necesario usar el **std** para tener el alcance a esas funciones. El inconveniente con esto es que es muy molesto y repetitivo. 

***Ejemplo:***
```cpp
#include<iostream>

int main(){
    std::cout<<"Hola mundo";
    std::endl; // Salto de linea
    std::cout<<"Adios Mundo";
}
```
Salida:
```
Hola Mundo

Adios Mundo
```
A continuación, se codifica un programa con la misma salida pero usando el ***namespace std***.

Quedaría de la siguiente manera:
```cpp
#include<iostream>

using namespace std;

int main(){
    cout<<"Hola Mundo";
    endl; // Salto de linea
    cout<<"Adios Mundo";
}
```


