// WHILE
console.warn("WHILE");
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
    i++;
}

// BREAK
console.warn("BREAK");
i = 0
while(i < 7){
    // Cuando i sea igual a 3, el ciclo finaliza
    if(i === 3){
        break;    
    }
    console.log(diasSemana[i]);
    i++;
}

console.log("Ciclo finalizado.");

// CONTINUE
console.warn("CONTINUE");
i = 0
while(i < 7){
    // Cuando i sea igual a 3, el ciclo finaliza
    if(i === 3){
        i++;
        continue;    
    }
    console.log(diasSemana[i]);
    i++;
}

console.log("Ciclo finalizado.");

// DO WHILE
console.warn("DO WHILE");
let j = 0;
do{
    console.log(diasSemana[j]);
    j++;
}while(j < 7);

// FOR
console.warn("FOR");
for(let k = 0; k < 7; k++){
    console.log(diasSemana[k]);
}

// LET IN
console.warn("FOR IN");
for(i in diasSemana){
    console.log(diasSemana[i]);
}

// FOR OF
console.warn("FOR OF");
for(i of diasSemana){
    console.log(i);
}
