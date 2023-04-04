# **Introducción a C++**

 C++ mejora muchas de las características de C. Una de las principaples diferencias es que proporciona capacidades para la ***programacion orientada a objetos (POO)***.

 Este lenguaje fue desarrollado por **Bjarne Stroustrup** en los laboratorios Bell.

Originalmente se le adoptó el nombre C++ haciendo referencia a que es la versión C pero mejorada. 

***NOTA: C++ es un superconjunto de C, por lo que los mismos compiladores de C++ pueden ser utilizados para compilar programas de C.***

---------

## **Sintaxis básica de C++**

Antes de comenzar, es necesario que entiendas lo siguiente:

- Como en todos lenguaje, existen bloques llamados **comentarios**. En C++ existen dos tipos de comentarios. 

El primero con dos barras diagonales ***( // )*** seguido de caracteres, los cuales seran comentarios de una sola línea.
```cpp
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
#include <iostream> //
```    
- Todo el flujo del programa a implementar es llamada **main** y debe estar contenida dentro de un bloque llamada ***función principal***.
Sintaxis
```cpp
// Se declara la función principal
int main(){
    // Aqui va todo el flujo del programa a realizar
}
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