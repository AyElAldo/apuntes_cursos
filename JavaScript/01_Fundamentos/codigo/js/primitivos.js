// Tipos de datos primitivos

/**
 * typeof
 * redefinir variables
 */

// Usando STRING
let nombre = 'Aldo Santiago';
console.log(nombre);

// Cambiando el nombre
nombre = 'Cinthya Pineda';
console.log(nombre);

console.log(typeof(nombre));

nombre = 10;
console.log(nombre);
console.log(typeof(nombre));


// Usando BOOLEANOS - con minuscula false/true
let isUgly = true;
console.log(isUgly);
console.log(typeof(isUgly));

// Usando NUMBER
let pin = 3312;
console.log(pin);
console.log(typeof(pin));

// Usando NULL ------------------------- OBJECT
let vacio = null;
console.log(vacio);
console.log(typeof(vacio));

// Usando UNDEFNINED
let nada
console.log(nada);
console.log(typeof(nada));

// Usando SYMBOL
let simbolo = Symbol('a');
let simbolo2 = Symbol('a');
console.log(simbolo);
console.log(simbolo2);
console.log(typeof(simbolo));
console.log(typeof(simbolo2));

console.log(simbolo === simbolo2);
