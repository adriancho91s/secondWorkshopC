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
- Este programa toma como valor de entrada un número que corresponde al valor de una compra en una tienda
- si el valor es mayor a 100000, se le aplicará un descuento del 20% al valor de la compra.
- Entrada: un número
- Salida: mensaje que indica el valor de la compra con el descuento aplicado o no
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int compra = 0; // Variable que almacena el valor de la compra

    // Mensaje de bienvenida y solicitud de datos
    printf("Ingresa el valor de la compra: ");
    scanf("%d", &compra);

    // Validación de si se aplica el descuento o no
    if (compra > 100000) {
        printf("\x1b[32mDebes cobrar al cliente %.2f\x1b[0m", compra - (compra * 0.2));
    } else {
        printf("\x1b[31mDebes cobrar al cliente %d\x1b[0m", compra);
    }

    return 0;
}