# Arreglos bidimensionales

Una vez visto arreglos unidimensionales, podemos avanzar a arreglos de dos dimensiones o tablas.

El comportamiento de estas nos ayudan a representar matrices o tablas. Para declararlas se usan dos corchetes, el primero refiriendose a las filas y el segundo a las columnas.

A continuación, se presenta la declaración de una matriz de enteros de 3x3 (sin inicializar) en **C++**:

```cpp
int matriz[3][3];
```

Así mismo, para acceder a cualquier elemento de la matriz, es necesario indicar en qué fila y columna se encuentra.

Por ejemplo, tenemos una matriz 3x3 la cual contiene como elementos, números consecutivos del 1 al 9.

Es decir, la siguiente matriz:

                1   2   3
                4   5   6
                7   8   9

En **C++** se define de la siguiente forma:

```cpp
int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
```

Al igual que en los arreglos unidimensionales, se usan ciclos para recorrer la matriz.

Al ser de dos dimensiones se hace uso de **bucles anidados**. La cantidad de bucles requeridos para recorrer una matriz es proporcional a la cantidad de dimensiones.

A continuación, se muestra un ejemplo para imprimir una matriz en **C++**:

```cpp
for (int i=0; i<filas; i++){
    for (int j=0; j<columnas; j++){
        cout<<matriz[filas][columnas]<<"\t";
    }
    cout<<endl;
} 
```
Salida: 
```
1   2   3
4   5   6  
7   8   9
```
- El salto de línea **cout<<endl** se escribe al final del primer bucle para hacer un salto una vez que las columnas sean impresas. De esta forma, se le da formato a la matriz.
