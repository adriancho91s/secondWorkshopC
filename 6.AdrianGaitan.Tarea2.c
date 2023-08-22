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
- El programa toma como entrada un valor númerico, y muestra en pantalla si es un número mayor a 100.
- Entrada: número
- Salida: mensaje que indica si el número es mayor a 100
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    //Declaración de variables
    int numero = 0; // Variable que almacena el número ingresado por el usuario

    // Mensaje de bienvenida y solicitud de datos
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Validación de si el número es mayor a 100 o no
    numero > 100 ? printf("El número que ingresaste \nes mayor que 100") : printf("El número que ingresaste\nes menor que 100");

    return 0;
}