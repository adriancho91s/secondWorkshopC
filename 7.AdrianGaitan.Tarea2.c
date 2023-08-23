/*
- Fecha: 22 de agosto 2023
- Hora: 12:00 am
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa toma como valores de entrada dos números e indica en pantalla si ambos son números pares, o si ambos son números impares.
- Entrada: dos números
- Salida: mensaje que indica si ambos números son pares o impares
- Restricción: Solo existen dos posibles resultados para la salida: ambos números son pares, o ambos números son impares
- así que sí el usuario ingresa uno de uno y otro de otro, el resultado será ambos números son impares
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int numero1 = 0, numero2 = 0; // Variables que almacenan los números ingresados por el usuario

    // Mensaje de bienvenida y solicitud de datos
    printf("Bienvenido usuario. Este pequeño programa te\ndice si ambos de los números que ingreses son pares o impares.\nDigita el primer número: ");
    scanf("%d", &numero1);
    printf("Digita el segundo número: ");
    scanf("%d", &numero2);

    // Validación de si ambos números son pares o impares
    numero1 % 2 == 0 && numero2 % 2 == 0 ? printf("Ambos números son pares") : printf("Ambos números son impares");

    return 0;
}