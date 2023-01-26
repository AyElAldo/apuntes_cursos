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

