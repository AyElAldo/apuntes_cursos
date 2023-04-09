# **Arreglos**

Los **arreglos (arrays)** son estructuras de datos que consisten en un **conjunto de datos del mismo tipo**. Es decir, cuando hablamos de un arreglo de enteros, se refiere a que tenemos un conjuntos de números enteros de determinados elementos.

En **C++**, los arreglos se declaran con la siguiente sintaxis:
```
tipo_dato nombre_variable[numero_elementos];
```

Aquí un ejemplo de la declaración de un arreglo de números flotantes en **C++**.
```cpp
float precios[5] = {34.20, 76.99, 99.99, 12, 59.99};
```
*Cuando declaramos a un arreglo, normalmente se usa un nombre en **plural**, ya que un arreglo contiene varios elementos.*

**Dato importante: Cuando declaramos un arreglo, cada uno de los elementos del arreglo son almacenados en la memoria de manera contigua.** 

A continuación, se presenta gráficamente como se almacenan en memoria los datos del arreglo.

```cpp
int numeros[5] = {10, 20, 30, 40 ,50};
```

![Imagen 1. Arreglo en Memoria](Imagenes/Imagen01.jpg)

Si nos ponemos mas estrictos, se muestra el índice y la posición en memoria.

![Imagen 2. Arreglo en Memoria](Imagenes/Imagen02.jpg)


## **Uso de ciclos para recorrer arreglos**

Como sabemos, los arreglos son un conjunto de datos del mismo tipo. Cada elemento del arreglo tiene un determinado valor y una posición. En programación, cuando contamos las posiciones de un arreglo **siempre** se inicia contando a partir de **cero**.

Por ejemplo, declaremos el siguiente arreglo con las vocales.
```cpp
char vocales[] = {'a', 'e', 'i', 'o', 'u'};
```
La variable llamada ``vocales``, cuenta con cinco elementos. Cada uno de esos elementos tienen asignados posiciones.

Por ejemplo, el caracter **'a'** se encuentra en la posición 0. Después, el caracter **'e'**, en la posicion 1. Seguimos de esta manera hasta llegar al último caracter, en este caso, el caracter **'u'** está en la posición 4.

En C++ y en la mayoría de los lenguajes, el programador puede acceder a una determinada posición con el uso de corchetes **'[ ]'**.

Por ejemplo, si queremos imprimir solamente la vocal ``'o'``, hacemos los siguiente.
```cpp
cout<<"Imprimiendo la vocal contenida en la posicion 3: ";
// Se imprime la vocal 'o' contenida en la posicion 3 del arreglo
cout<<vocales[3]<<endl;
```
Salida:
```
Imprimiendo la vocal contenida en la posicion 3: o
```

Ahora bien, queremos imprimir cada uno de los elementos del arreglo ``vocales``.
A primera vista, sin usar ciclos, usaríamos los siguiente:
```cpp
cout<<"Imprimiendo todo el arreglo\n";
cout<<vocales[0]<<endl;
cout<<vocales[1]<<endl;
cout<<vocales[2]<<endl;
cout<<vocales[3]<<endl;
cout<<vocales[4]<<endl;
```
Salida:
```
Imprimiendo todo el arreglo
a
e
i
o
u
```
Si observamos con detenimiento, el código es casi igual en cada línea. Lo único que cambia es la posición **(índice)** del arreglo a imprimir. Es por eso, que los **ciclos** son fundamentales para 'automatizar' la impresión de arreglos.

**Ejemplo: Imprimiendo un arreglo, usando ciclos (for).**
```cpp
#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};

    cout<<"Imprimiendo el arreglo\n";
    // Ciclo que se repite 5 veces
    for(int i = 0; i<5; i++){
        /* 
        Se imprime el elemento del arreglo en la posicion 'i'.La variable 'i' comienza en 0 e incrementa de uno en uno hasta llegar a 4
        */
        cout<<numeros[i]<<endl;
    }
}
```
Salida:
```
Imprimiendo el arreglo
1
2
3
4
5
```
