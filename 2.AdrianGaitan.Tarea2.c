/*
- Fecha: 21 de agosto 2023
- Hora: 4:00 pm
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada un número e imprime si este es un número par o impar.
- Entrada: número
- Salida: mensaje que indica si el número es par o impar
*/

//Librerías
#include <stdio.h>

// Función principal

int main () {
    // Declaración e inicialización de variables
    int numero = 0; // Variable que almacena el número ingresado por el usuario

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa, lee un número e imprime si es par o impar.\nEntre un número: ");
    scanf("%d", &numero);

    // Validación de si el número es par o no
    numero % 2 >= 1 ? printf("El número es impar") : printf("El número es par");

    return 0;
}