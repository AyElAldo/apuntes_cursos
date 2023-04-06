# **Operadores lógicos, ariméticos y relacionales**

Para relizar operaciones en ***C++***, y en otros lenguajes de programación, se usan símbolos específicos que entienden cada uno de estos.

A continuación, se presentan los símbolos usados para realizar operaciones con la sitaxis de **C++**.


## **Operadores Aritméticos**
En **C++**, las operaciones aritméticas respetan los mismas leyes y jerarquías que usamos en la vida cotidiana.
- **Suma ( + )**
```cpp
suma = 2 + 3.5; // suma = 5.5
```
- **Resta ( - )**
```cpp
resta = 9 - 1.4; // resta = 7.6
```
- **Multiplicación ( * )**
```cpp
multi = 5 * 20; // multi = 100
```
- **División ( / )**
```cpp
division = 200 / 4; // division = 50
```
- **Módulo ( % )**
```cpp
// Recordar que módulo es el residuo de un división
```
### **Potencias y raíces**
Para el uso de las potencias y raíces dentro de **C++**, es necesario importar una biblioteca que contenga estas funciones. La biblioteca se llama **math.h** y se importa de la siguiente forma:
```cpp
#include <iostream> // Biblioteca entrada y salida
#include <math.h> // Biblioteca que contienen funciones matemáticas
```
- **Potencia ( pow() )**
```cpp
potencia = pow(2,4); // potencia = 2^4 = 16
```
- **Raiz Cuadrada ( sqrt() )**
```cpp
raiz = sqrt(25);
```

## **Operadores Relacionales**
- **Mayor que ( > )**
```cpp
res = 2 > 9; // res = false
```
- **Mayor o igual que ( >= )**
```cpp
res = 10 >= 5; // res = true
```
- **Menor que ( < )**
```cpp
res = -19 < 9; // true
```
- **Menor o igual que ( <= )**
```cpp
res = 14 <= -10; // false
```
- **Diferente que ( != )**
```cpp
res = 15 != 10; // res = true
```
- **Igual que ( == )**
```cpp
// Usando operadores aritméticos
res = 10 == (2*5); // res = (10 == 10) = true
```
**Nota: No confundir ( = ) con ( == ). El primero es un operador de asignación y el segundo un operador relacional.**

## **Operadores Lógicos**
Son operaciones que llevan a cabo operaciones **lógicas** con **entradas boolenadas**, entregando como resultado un valor **booleano**.

- **AND o conjunción lógica ( && )**  
Retorna ***true*** si todas las proposiciones son verdaderas. De lo contrario retorna ***false***.
```cpp
res = (1 < 3) && (10 != 1) && (3 == 1) // res = false
// DESARROLANDO LA OPERACIÓN
// res = true && true && false
// res = false
```
- **OR ( || ) o disyunción lógico**  
Retorna ***true*** si al menos una proposición es verdadera. De lo contrario retorna ***false***.
```cpp
res = (7 > 3) || (4 == 2) // res = true
// DESARROLANDO LA OPERACIÓN
// res = true || false
// res = true
```
- **NOT ( ! )**  
Niega el valor booleano
```cpp
res = !(5 > 3); // res = false
// DESARROLANDO LA OPERACION
// res = !(true)
// res = false
```


