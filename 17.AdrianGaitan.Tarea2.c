/*
- Fecha: 12 de agosto 2023
- Hora: 12:00
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa toma como valor de entrada dos números, peso(kg) y altura (en metros) respectivamente de una persona.
- Con estas medidas calcula el IMC de esta persona y realiza un diagnostico a partir de este resultado
- Entrada: dos números
- Salida: mensaje que indica el IMC y el diagnostico
*/
//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables 
    float peso = 0, altura = 0, imc = 0; // Variables que almacenan el peso, la altura y el IMC de la persona

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa calcula tu indice de masa corporal (IMC)\n\nIngresa tu peso en Kg: ");
    scanf("%f", &peso);
    printf("Digita tu altura en metros: ");
    scanf("%f", &altura);

    // Calculo del IMC
    imc = peso / (altura * altura);

    // Diagnostico 
    if (imc < 16 ) {
        printf("\nEL valor de tu IMC es: %.2f\nTu diagnostico es: \x1b[31mCriterio de ingreso en hospital\x1b[0m", imc);
    } else if ( imc < 17 ) {
        printf("\nEL valor de tu IMC es: %.2f\nTu diagnostico es: \x1b[31mInfrapeso\x1b[0m", imc);
    } else if ( imc < 18 ) {
        printf("\nEL valor de tu IMC es: %.2f\nTu diagnostico es: \x1b[31mBajo peso\x1b[0m", imc);
    } else if ( imc < 25 ) {
        printf("\nEL valor de tu IMC es: %.2f\nTu diagnostico es: \x1b[32mPeso normal (saludable)\x1b[0m", imc);
    } else if ( imc < 30 ) {
        printf("\nEL valor de tu IMC es: %.2f\nTu diagnostico es: \x1b[31mSobrepeso (obesidad de grado I)\x1b[0m", imc);
    } else if ( imc < 35 ) {
        printf("\nEL valor de tu IMC es: %.2f\nTu diagnostico es: \x1b[31mSobrepeso crónico (obesidad de grado II)\x1b[0m", imc);
    } else if ( imc < 40 ) {
        printf("\nEL valor de tu IMC es: %.2f\nTu diagnostico es: \x1b[31mObesidad premórbida (obesidad de grado (III)\x1b[0m", imc);
    } else {
        printf("\nEL valor de tu IMC es: %.2f\nTu diagnostico es: \x1b[31mObesidad mórbida (obesidad de grado IV)\x1b[0m", imc);
    }

    return 0;
}