# Fundamentos de JavaScript (By AyElAldo)


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
Son palabras que ya están definidas por el lenguaje y cada una tiene un uso en específico. Por esta razón, éstas no se pueden usar para nombrar variables.

*****************************

## **Arreglos**
Es un tipo de colección de datos que contienen un grupo de datos del mismo tipo.

En **JavaScript**, los arreglos se definen de la siguiente forma:
```js
// Inicializando arreglo con cuatro elementos
let amigxs = ['Mariana', 'Cinthya', 'Haid', 'Ivan'];    
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

