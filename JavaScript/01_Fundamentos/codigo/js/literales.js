// Creando funcion (con un parámetro)
function saludar(nombre){
    console.log("Hola ", nombre);
}

// Creando función flecha
const saludarFlecha = (nombre) => {
    console.log('Hola ' + nombre);
}

let persona = {
    nombre: 'Aldo',
    apodo: 'AyElAldo',
    edad: 20,
    roomies: ['Padre', 'Madre', 'Hermanas'],
    hobbies: ['Futbol','Programar']
};

console.log(persona.roomies[0]);
console.log(persona['roomies'][0]);

console.log(persona);


console.log('Número de Roomies: ', persona.roomies.length);

Object.freeze(persona);
// Hace caso omiso a lo siguiente
persona.nombre = 'Cinthya';

console.log(persona);

// Obteniendo PROPIEDADES
let propiedades = Object.getOwnPropertyNames(persona);
// Obteniendo valores
let valores = Object.values(persona);

console.log(propiedades, valores);

// Llamando la función pasandole un parámetro
saludar("Cinthya");


// Llamando la función flecha
saludarFlecha("Aldo");

// Funcion que reliza SUMA
function suma(a,b){
    return a+b;
}

// Se llama a la función
let resultado; // Recupera el retorno de la funcion
resultado = suma(1,2); // Devuelve la suma 1+2 ||| resultado = 3
console.log("El resultado es: " + resultado); // Imprime el 3

function listarNombres(n1, n2, n3){
    return [n1,n2,n3];
}

// Imprime la lista
console.log("Lista: ", listarNombres("Aldo","Cinthya", "Mariana"))

// Función flecha de la suma de dos números
const sumaFlecha = (a, b) => a + b;
// Imprimiendo el resultado de la suma
console.log("El resultado de la suma es: " + sumaFlecha(5,4));


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


// Creando persona
let persona1 = {
    nombre: 'Aldo',
    edad: 20
};

let persona2 = persona1;
console.log(persona1.nombre, persona2.nombre);


// Cambiamos el nombre de la persona1
persona1.nombre = 'Chrispo';
// Verificamos el resultado
console.log(persona1.nombre, persona2.nombre);


let persona3 = {...persona1};
persona3.nombre = 'Garbiela';
console.log(persona1.nombre, persona2.nombre, persona3.nombre);
persona2.nombre = 'Mariana';
console.log(persona1.nombre, persona2.nombre, persona3.nombre);

// Ejemplo SPREAD usando listas
let frutas = ['peras', 'manzanas', 'naranjas'];
let productos = [...frutas];

productos.push('arroz', 'maiz');
console.table([frutas, productos]);



// Verificar si un numero es positivo o negativo
let numero = 1;
// 1 > 0
if(numero > 0){
    console.log('El número es mayor que 0');
}
console.log("Fin del programa.");

// Ahora el número es negativo
let numero2 = -4;
// -4 > 0 (false)
if(numero2 > 0){
    // Se ignora este bloque de codigo
    console.log('El número es mayor que 0.');
}
console.log("Fin del programa.");

// USO DEL ELSE
let numero3 = -1;
// -1 > 0 (false)
if(numero3 > 0){
    // Se ignora este bloque de codigo
    console.log('El número es mayor que 0.');
}else{
    // Se ejectuta este bloque
    console.log("El número no es mayor que 0.");
}
// Al no estar dentro de ninguna sentencia IF o ELSE, siempre se ejecuta esta linea.
console.log("Fin del programa.");