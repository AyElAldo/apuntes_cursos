# **Fundamentos de JavaScript (JS)**


**JavaScript** es un lenguaje débilmente tipado. Es decir, no le decimos explícitamente que tipo de variable estamos usando ya que él mismo lo interpreta.

## **Tipos de datos**
Un tipo de dato describe el contenido que va a almacenar la variable.

### Tipo de datos primitivos
En **JavaScript**, los datos primitivos son aquellos que no son objetos y además, son inmutables.

* Boolean - (Verdadero/Falso)
```js
let isMonday = true;
```
* Null - Sin valor 
```js
let sinValor = null;
```
* Undefined - No tiene ningún valor asignado
```js
let isMonday;
```
* Number - Datos numéricos (int, float, etc)
```js
let edad = 20;
```
* String - Cadenas de caracteres
```js
let isMonday = true;
```
* Symbol - Es un valor único que no es igual a otro valor

## **Palabras reservadas**
Son palabras que ya están definidas por el lenguaje y cada una tiene un uso en específico. Por esta razón, éstas no se pueden usar nombrar variables.

********************************************
## **Operadores Aritméticos, lógicos y Relacionales en JS**
Para relizar operaciones en ***JavaScript***, y en otros lenguajes de programación, se usan símbolos específicos que entiende cada uno de estos.

A continuación, se presentan los símbolos usados para reealizar este tipo de operaciones con la sitaxis de JavaScript.

***Nota: Solo se revisarán los símbolos. No se explicarán las resolución de operaciones, a menos que sean propias de JavaScript.***

### **Operadores Aritméticos**
En JavaScript, las operaciones aritméticas respetan los mismas leyes y jerarquías que usamos en la vida cotidiana.
- **Suma ( + )**
```js
suma = 2 + 3.5; // suma = 5.5
```
- **Resta ( - )**
```js
resta = 9 - 1.4; // resta = 7.6
```
- **Multiplicación ( * )**
```js
multi = 5 * 20; // multi = 100
```
- **División ( / )**
```js
division = 200 / 4; // division = 50
```
- **Potencia ( ** )**
```js
potencia = 2 ** 4; // potencia = 16
```
- **Módulo ( % )**
```js
// Recordar que módulo es el residuo de un división

modulo = 20 % 3; // modulo = 2
```

Para poder implementar más operaciones se utiliza el método ***Math***.

***Ejemplo: Calcular una raiz cuadrada***
```js
raizCuadrada = Math.sqrt(9); // raizCuadrada = 3
```

### **Operadores Relacionales**
- **Mayor que ( > )**
```js
res = 2 > 9; // res = false
```
- **Mayor o igual que ( >= )**
```js
res = 10 >= 5; // res = true
```
- **Menor que ( < )**
```js
res = -19 < 9; // true
```
- **Menor o igual que ( <= )**
```js
res = 14 <= -10; // false
```
- **Igual que ( == )**
```js
// Usando operadores aritméticos
res = 10 == (2*5); // res = (10 == 10) = true
```
**Nota: No confundir ( = ) con ( == ). El primero es un operador de asignación y el segundo un operador relacional.**
- **Diferente que ( != )**
```js
res = 15 != 10; // res = true
```

### **Operadores Lógicos**
- **AND o conjunción lógica ( && )**  
Retorna ***true*** si todas las proposiciones son verdaderas. De lo contrario retorna ***false***.
```js
res = (1 < 3) && (10 != 1) && (3 == 1) // res = false
// DESARROLANDO LA OPERACIÓN
// res = true && true && false
// res = false
```
- **OR ( || )**  
Retorna ***true*** si al menos una proposición es verdadera. De lo contrario retorna ***false***.
```js
res = (7 > 3) || (4 == 2) // res = true
// DESARROLANDO LA OPERACIÓN
// res = true || false
// res = true
```
- **NOT ( ! )**  
Niega el valor booleano
```js
res = !(5 > 3); // res = false
// DESARROLANDO LA OPERACION
// res = !(true)
// res = false
```


********************************************

## **Arreglos**
Es un tipo de colección de datos que contienen un grupo de datos del mismo tipo.

En **JavaScript**, los arreglos se definen de la siguiente forma:
```js
// Inicializando arreglo con cuatro elementos
let amigxs = ['Mariana', 'Cinthya', 'Haid', 'Ivan', 'Chrispo', 'Garbiela'];    
```
O también:
```js
// El parámetro es la longitud del arreglo
const arreglo = new Array(10);
```
- **Nota: Las posiciones, en la mayoría de los lenguajes de programación, inician desde cero.**

## **Objetos literales**
Son objetos que tienen pares de valores. Tienen elementos llamdos ***llaves*** que corresponden a un valor.
- **Las llaves, en cada objeto literal, son únicas.**
Los objetos literales se definen de la siguiente forma:
```js
let persona = {
    nombre: 'Aldo',
    apodo: 'AyElAldo',
    edad: 20,
    roomies: ['Padre', 'Madre', 'Hermanas'],
    hobbies: ['Futbol','Programar']
};
```

Existen varias formas de acceder a las propiedades. 
Por ejemplo, en este caso vamos a acceder a ***Padre*** de dos formas distintas:

### Primera forma:
```js
// Imprimiendo PADRE
console.log(persona.roomies[0]);
```
### Segunda forma:
```js
// Imprimiendo PADRE
console.log(persona['roomies'][0]);
```

## **Uso de DELETE**
***DELETE*** es una palabra reservada que se encarga de eliminar la propiedad de algún objeto.

```js
// Eliminando la propiedad EDAD
delete persona.edad
```
*************************************************
## Métodos adicionales de los objetos
[Leer Documentación Aquí](https://developer.mozilla.org/es/docs/Web/JavaScript/Reference/Global_Objects/Object)

- **Freeze:** No permite que se modifiquen las propiedades directas de un objeto. 

```js
// Haciendo un freeze a PERSONA
Object.freeze(persona);

// Ya no es posible hacer lo siguiente:
persona.nombre = 'Aldo';
```

- **getOwnPropertyNames:** Lista solamente las propiedades de un objeto.
- **Values:** Lista solamente los valores que corresponden a cada propiedad de un objeto.
```js
// Obteniendo PROPIEDADES
let propiedades = Object.getOwnPropertyNames(personaje);
// Obteniendo valores
let valores = Object.values(personaje);

// Imprimiendo propiedades y valores
console.log(propiedades, valores);
```
********************************************

## **Condiciones y Ciclos**
Cuando estamos creando un programa más complejo, es seguro que tenemos que usar **estructuras de control** e **iteradoración**, o también llamadas *condicionales* y *ciclos* respectivamente.

### **Condiciones IF y ELSE**
Existen partes en la lógica del programa en donde es necesaria la toma de decisiones, como ejecutar una parte del código si se cumple una condición o no. 

A continuación, se presenta un ejemplo del uso de la sentencia ***if*** y ***else***. Estas sentencias nos ayudan a verificar si una condición se cumple o no.

- **Ejemplo: Verificar si un número es positivo o negativo**
```js
// Verificar si un numero es positivo o negativo
let numero = 1;
// 1 > 0 (true)
if(numero > 0){
    console.log('El número es mayor que 0.');
}
console.log("Fin del programa.");
```
En este caso la variable ***numero*** es igual a 1.  
Al hacer la comparación dentro del *if(numero > 0)* devuelve un ***true***. Por lo tanto, la código que se encuentra dentro de las llaves se ejecuta.

Salida:
```
El número es mayor que 0.
Fin del programa.
```

En caso de que no se cumple la condición que se encuentra dentro de los paréntesis, el programa ignora todo el bloque de código dentro de las llaves. 

- **Ejemplo: Condición que no se cumple**
```js
// Ahora el número es negativo
let numero = -4;
// -4 > 0 (false)
if(numero > 0){
    // Se ignora este bloque de codigo
    console.log('El número es mayor que 0.');
}
// Al no estar dentro de ninguna sentencia IF o ELSE, siempre se ejecuta esta linea.
console.log("Fin del programa.");
```
Salida:
```
Fin del programa.
```

### **ELSE**
La sentencia ***ELSE*** se usa para introducir un bloque de código en caso de que la condición no se cumpla.  
De esta manera, tenemos cubiertos diferentes bloques de código para casos en los que nuestra condición se cumpla y para cuando no.
- **Ejemplo: Uso de la sentencia *ELSE*.**
```js
let numero = -1;
// -1 > 0 (false)
if(numero > 0){
    // Se ignora este bloque de codigo
    console.log('El número es mayor que 0.');
}else{
    // Se ejectuta este bloque
    console.log("El número no es mayor que 0.");
}
// Al no estar dentro de ninguna sentencia IF o ELSE, siempre se ejecuta esta linea.
console.log("Fin del programa.");
```
Salida:
```
El número no es mayor que 0.
Fin del programa.
```

## **Operador condicional ternario**
Es una forma abreviada de hacer estructuras con **IF** y **ELSE**.
```js
// Usando operador ternario
let n = 2;
let resultado2 = (n < 0) ? "negativo" : "positivo";
console.log(`El numero es ${resultado2}.`);
```
Salida para el caso de ***n*** = 2:
```
El numero es positivo.
```

## **Switch**
Evalúa una expresión y compara el valor de dicha expresión con otra sentencia llamada ***case***. En caso de ser igual, ejecuta el código que se encuentra en esa sentencia y las que siguen. En caso de querer romper la lectura de las demás sentencias, se usa la palabra reservada ***break***.

**Ejemplo: Uso de SWITCH para saber el dia de la semana de acuerdo a una variable inicializada.**
```js
/*
DOMINGO = 0
LUNES = 1
MARTES = 2
MIERCOLES = 3
JIEVES = 4
VIERNES = 5
SABADO = 6
*/

const dia = 2 // MARTES

switch(dia){
    case 0:
        console.log("Domingo");
        break; // Sale del SWITCH
    case 1:
        console.log("Lunes");
        break; // Sale del SWITCH
    case 2:
        console.log("Martes");
        break; // Sale del SWITCH
    case 3:
        console.log("Miercoles");
        break; // Sale del SWITCH
    case 4:
        console.log("Jueves");
        break; // Sale del SWITCH
    case 5:
        console.log("Viernes");
        break; // Sale del SWITCH
    case 6:
        console.log("Sábado");
        break; // Sale del SWITCH
    default:
        console.log("No es valido.");
}
```
Salida:
```
Martes
```

## **Ciclos**
Uno de los temas más importantes y poderosos, en fundamentos de programación, son los ***bucles*** o ***ciclos***.

Los ciclos son sentencias que sirven para ejecutar código que se puede repetir o iterar. 

Por ejemplo, si queremos imprimir la palabra **HOLA** 5 veces sin usar ciclos, haríamos lo siguiente:
```js
console.log("Hola");
console.log("Hola");
console.log("Hola");
console.log("Hola");
console.log("Hola");
```
Salida:
```
Hola
Hola
Hola
Hola
Hola
```
Sin embargo, los ciclos se de bastante ayuda si queremos ejecutar lo mismo en una menor cantidad de instrucciones. Para esto, existen diferentes sentencias en ***JS*** que nos ayudan a resolver esto **(WHILE, DO-WHILE, FOR, ETC)**.

**Ejemplo: Imprimiendo *HOLA* 5 VECES**
```js
for (let i = 0; i < 5; i++) {
    console.log("Hola");
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
### **USO DE WHILE**
Sintaxis:
```js
while(condicion){
    // Codigo que se ejecuta siempre y cuando se cumpla la condición  
}
```
Implementación:
```js
const diasSemana = [
    "Domingo",
    "Lunes",
    "Martes",
    "Miercoles",
    "Jueves",
    "Viernes",
    "Sabado"
]

let i = 0; /* En programación, la variable 'i' es usada como la variable auxiliar iteradora en los bucles. */

while(i < 7){
    console.log(diasSemana[i]);
}
```
Salida:
```
Domingo
Lunes
Martes
Miercoles
Jueves
Viernes
Sabado
```
***************************************
## **Funciones básicas y flecha**

Las funciones son bloques de código que elaboran una tarea en específico. Una vez definidas, pueden ser llamadas las veces que sean necesarias. El programador considera si dicha función recibe ***parámetros*** o ***devuelve*** un valor de salida.

*Generalmente se usan para reutilizar código y  permite crear programas mejor estructurados.*

En ***JavaScript*** se definen de la siguiente forma:
```js
// Creando función para saludar (sin parámetros)
function saludar(){
    console.log('Hola');
}

// Llamar a la función
saludar();
```
Salida:
```
Hola
```

### **Parámetros**
Los parámetros son los valores que una función espera recibir para su correcta implementación.

*Ejemplo: Se realiza una función que salude a una persona dependiendo el nombre (parámetro).*
```js
// Creando funcion (con un parámetro)
function saludar(nombre){
    console.log("Hola ", nombre);
}

// Llamando la función pasandole un parámetro
saludar("Cinthya");
```
Salida:
```
Hola Cinthya
```

### **Funciones Flecha**
Se usan de forma similar a las funciones. La diferencia es que es una forma compacta de escrbir funciones, sin embargo, tiene sus limitantes.
- *Las funciones flecha no puede ser usadas como métodos.*
```js
// Creando función flecha
const saludarFlecha = (nombre) => {
    console.log('Hola ' + nombre);
}

// Llamando la función flecha
saludarFlecha("Aldo");
```
Salida:
```
Hola Aldo
```

**Otro ejemplo usando operador condicional ternario en función flecha:**
```js
// Calculando el mayor de dos numeros
const numMayor = (a, b) => (a > b) ? a : b;
// Comparando numero mayor entre 10 y 15
console.log(`El numero mayor es ${numMayor(10, 15)}`);
```
*************************************************

### **Retorno de valores** 
Se le llama ***retorno*** al valor o los valores que resultan de una función al ser llamada. 
- *Ejemplo: Función que recibe dos números como parámetros y retorna la suma de ambos números.*

```js
// Funcion que reliza SUMA
function suma(a,b){
    return a+b;
}

// Se llama a la función
let resultado; // Recupera el retorno de la funcion
resultado = suma(1,2); // Devuelve la suma 1+2 ||| resultado = 3
console.log("El resultado es: " + resultado); // Imprime el 3
```
Salida:
```
El resultado es: 3
```
**Nota: Importante notar que la función no está imprimiendo nada, solamente devuelve la suma y nosotros recuperamos ese valor asignandosela a la variable *RESULTADO.***

O, el mismo ejemplo pero usando una función flecha.
```js
// Función flecha de la suma de dos números
const sumaFlecha = (a, b) => a + b;
// Imprimiendo el resultado de la suma
console.log("El resultado de la suma es: " + sumaFlecha(5,4));
```
Salida:
```
El resultado de la suma es 9
```
****************************************************

Es importante saber que las funciones pueden retornar cualquier tipo de dato. 

*Ejemplo: Función que recibe como parámetros nombre de estudiantes y devuelve una lista con cada uno de sus nombres.*

```js
// Funcion que lista los 5 nombres que fueron pasados como parámetros
function listarNombres(n1, n2, n3){
    return [n1,n2,n3];
}

// Imprime la lista
console.log("Lista: " + listarNombres("Aldo","Cinthya", "Mariana"))
```

********************************************

## **Pasos por valor y referencia**
En ***JavaScript***, todos los primitivos son pasados por *valor* y los objetos literales por *referencia*. 

Por ***valor*** nos referimos a que al momento de asignarle a una variable alguna otra (primitivo), solamente se copia el valor de esa variable y se pasa a otra. De esta manera, si modificamos alguna de las variables, no se cambian ambas.

Para más claridad, tenemos el siguiente ejemplo:
```js
// Se asigna un valor para X
let x = 10; // x = 10
// Se asigna el valor que tiene actualmente X a Y 
let y = x; // y = 10

console.log("--- Valores antes del cambio --- ");
// Corroboramos que son iguales
console.log("x: " + x + "  --  y: " + y);


// Cambiamos el valor de Y
y = 5;
console.log("--- Valores después del cambio --- ");
// Corroboramos que cambia solamente el valor de Y
console.log("x: " + x + "  --  y: " + y);
``` 
Salida:
```
--- Valores antes del cambio ---
x: 10 -- y: 10

--- Valores después del cambio ---
x: 10 -- y: 5
```

Sin embargo, cuando hablamos de objetos literales, al cambiar algun valor en algun objeto que está siendo apuntado por otro, éste también cambia su contenido. Esto se debe a que al hacer algo como:
```js
persona1 = persona2;
```
Lo que sucede es que ***persona1*** apunta en memoria a donde está el valor de ***persona2***. 

- **Ejemplo: Cambiamos el nombre de una persona.**
```js
// Creando persona
let persona1 = {
    nombre: 'Aldo';
    edad = 20;
};

let persona2 = persona1;
console.log(persona1.nombre, persona2.nombre);

// Cambiamos el nombre de la persona1
persona1.nombre = 'Daniela';
// Verificamos el resultado
console.log(persona1.nombre, persona2.nombre);
```
Salida:
```
Aldo Aldo
Daniela Daniela
```

Para evitar esto y romper las referencias se usa tres puntos **'...'**. A esto se le llama operados ***spread***.

- **Ejemplo: Cambiando nombres (continuación del código anterior)**.
```js
// Usando spread
let persona3 = {...persona1};
persona3.nombre = 'Garbiela';
console.log(persona1.nombre, persona2.nombre, persona3.nombre);
```
Salida:
```
Chrispo Chrispo Garbiela
```

- **Ejemplo: Usando SPREAD para modificar una lista de compras.**
```js
// Ejemplo SPREAD usando listas
let frutas = ['peras', 'manzanas', 'naranjas'];
let productos = [...frutas];

productos.push('arroz', 'maiz');
console.table([frutas, productos]);
```

****************************************************
# **Autor :  Aldo Santiago**
**Enero 2023**  
*Fundamentos de JavaScript*
