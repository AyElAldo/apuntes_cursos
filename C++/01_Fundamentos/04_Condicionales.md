# **Condiciones**
Cuando estamos creando un programa más complejo, es seguro que tenemos que usar **estructuras de control** 

### **Condiciones IF y ELSE**
Existen partes en la lógica del programa en donde es necesaria la toma de decisiones, como ejecutar una parte del código si se cumple una condición o no. 

A continuación, se presenta un ejemplo del uso de la sentencia ***if*** y ***else***. Estas sentencias nos ayudan a verificar si una condición se cumple o no.

- **Ejemplo: Verificar si un número es mayor que cero**
```cpp
// Verificar si un numero es mayor que cero
int numero = 1;
// 1 > 0 (true)
if(numero > 0){
    cout<<"El número es mayor que 0.";
}
cout<<"Fin del programa.";
```
En este caso la variable ***numero*** es igual a 1.  
Al hacer la comparación dentro del *if(numero > 0)* devuelve un ***true***. Por lo tanto, el código que se encuentra dentro de las llaves se ejecuta.

Salida:
```
El número es mayor que 0.
Fin del programa.
```

En caso de que no se cumple la condición que se encuentra dentro de los paréntesis, el programa ignora todo el bloque de código dentro de las llaves. 

- **Ejemplo: Condición que no se cumple**
```cpp
// Ahora el número es negativo
int numero = -4;
// -4 > 0 (false)
if(numero > 0){
    // Se ignora este bloque de codigo
    cout<<"El número es mayor que 0.";
}
// Al no estar dentro de ninguna sentencia IF o ELSE, siempre se ejecuta esta linea.
cout<<"Fin del programa.";
```
Salida:
```
Fin del programa.
```

### **ELSE**
La sentencia ***ELSE*** se usa para introducir un bloque de código en caso de que la condición no se cumpla.  
De esta manera, tenemos cubiertos diferentes bloques de código para casos en los que nuestra condición se cumpla y para cuando no.
- **Ejemplo: Uso de la sentencia *ELSE*.**
```cpp
int numero = -1;
// -1 > 0 (false)
if(numero > 0){
    // Se ignora este bloque de codigo
    cout<<"El número es mayor que 0."<<endl>;
}else{
    // Se ejectuta este bloque
    cout<<"El número no es mayor que 0."<<endl>;
}
// Al no estar dentro de ninguna sentencia IF o ELSE, siempre se ejecuta esta linea.
cout<<"Fin del programa."<<endl>;
```
Salida:
```
El número no es mayor que 0.
Fin del programa.
```

## **Switch**
Evalúa una expresión y compara el valor de dicha expresión con otra sentencia llamada ***case***. En caso de ser igual, ejecuta el código que se encuentra en esa sentencia y las que siguen. En caso de querer romper la lectura de las demás sentencias, se usa la palabra reservada ***break***.

**Ejemplo: Uso de SWITCH para saber el dia de la semana de acuerdo a una variable inicializada.**
```cpp
#include <iostream>

using namespace std;

int main()
{
    /*
    DOMINGO = 0
    LUNES = 1
    MARTES = 2
    MIERCOLES = 3
    JIEVES = 4
    VIERNES = 5
    SABADO = 6
    */

    int dia = 2; // MARTES

    switch(dia)
    {
    case 0:
        cout << "Domingo" << endl;
        break; // Sale del SWITCH
    case 1:
        cout << "Lunes" << endl;
        break; // Sale del SWITCH
    case 2:
        cout << "Martes" << endl;
        break; // Sale del SWITCH
    case 3:
        cout << "Miercoles" << endl;
        break; // Sale del SWITCH
    case 4:
        cout << "Jueves" << endl;
        break; // Sale del SWITCH
    case 5:
        cout << "Viernes" << endl;
        break; // Sale del SWITCH
    case 6:
        cout << "Sábado" << endl;
        break; // Sale del SWITCH
    default:
        cout<<"No es valido.";
    }
}
```
Salida:
```
Martes
```

