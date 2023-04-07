# **Ciclos (loops)**
Uno de los temas más importantes y poderosos, en fundamentos de programación, son los ***bucles*** o ***ciclos***.

Los ciclos son sentencias que sirven para ejecutar código que se puede repetir o iterar. 

Por ejemplo, si queremos imprimir la palabra **HOLA** 5 veces sin usar ciclos, haríamos lo siguiente:
```cpp
#include<iostream>
using namespace std;

int main(){

    cout<<"Hola"<<endl;
    cout<<"Hola"<<endl;
    cout<<"Hola"<<endl;
    cout<<"Hola"<<endl;
    cout<<"Hola"<<endl;

    return 0;
}
```
Salida:
```
Hola
Hola
Hola
Hola
Hola
```
Sin embargo, los ciclos se de bastante ayuda si queremos ejecutar lo mismo en una menor cantidad de instrucciones. Para esto, existen diferentes sentencias en ***C++*** que nos ayudan a resolver esto **(WHILE, DO-WHILE, FOR)**.

**Ejemplo: Imprimiendo *HOLA* 5 VECES**
```cpp
#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++) {
        cout<<"Hola"<<endl>;
    }
    return 0;
}

```
Salida:
```
Hola
Hola
Hola
Hola
Hola
```
## **USO DE WHILE**
Sintaxis:
```js
while(condicion){
    // Codigo que se ejecuta siempre y cuando se cumpla la condición  
}
```
Ejemplo: Repetir una palabra las veces que el usuario lo requiera.
```cpp
#include<iostream>

using namespace std;

int main(){

    int auxiliar = 0;
    int repeticiones;
    cout<<"Ingresa el numero de veces que se tiene que repetir: ";
    cin>>repeticiones; // 2

    // While
    while(auxiliar < repeticiones){
        cout<<"Hola"<<auxiliar++<<endl; // auxiliar = auxiliar + 1
        // Auxiliar = 0
        //auxiliar++;
    }

    cout<<"Fin del programa";
}
```
Salida:
```
Ingresa el numero de veces que se tiene que repetir: 3
Hola0
Hola1
Hola2
```

## **DO WHILE**
Es una sentencia iterativa que funciona de forma similar al ***while***, la única diferencia es que, primeramente, ejecuta el código, y una vez que termina, evalúa la condición.  
Es decir, el código del bucle se ejecuta al menos una vez.

Sintaxis:
```cpp
do{
    // La primera vez que pasa por el DO, siempre se ejecuta
    // Las demás veces el código que se ejecuta si y solo si se cumple la condicion
} while(condicion);
```
Implementación:
```cpp
#include<iostream>

using namespace std;

int main(){

    int auxiliar = 0;
    int repeticiones;

    cout<<"Ingresa el numero de veces que se tiene que repetir: ";
    cin>>repeticiones;

    do{
        // Codigo
        cout<<"Hola"<<auxiliar++<<endl;
    }while(auxiliar < repeticiones);

    cout<<"Fin del programa";
}
```
Salida:
```
Ingresa el numero de veces que se tiene que repetir: 4
Hola0
Hola1
Hola2
Hola3
```

## **FOR**
Sintaxis:
```js
for(inicializa_variable_iteradora; condicion; cambio_variable){
    // Bloque de codigo que se ejecuta mientras la condicion se cumpla
}
```
Implementación:
```cpp
#include<iostream>

using namespace std;

int main(){
    int auxiliar;
    int repeticiones;
    // Sintaxis
    cout<<"Ingresa el numero de veces que se tiene que repetir: ";
    cin>>repeticiones;

    for(auxiliar = 0; auxiliar < repeticiones; auxiliar++){
        cout<<"Adios"<<auxiliar<<endl;
    }

    cout<<"Fin del programa";
}
```
**Nota: Se puede leer como 'Haz un ciclo inicializando la variable *k* en 0 y ejecuta las instrucciones siempre y cuando se cumpla la condición. Por cada iteración que hagas, incrementa *k* en uno.'**
Salida:
```
Ingresa el numero de veces que se tiene que repetir: 5
Adios0
Adios1
Adios2
Adios3
Adios4
```