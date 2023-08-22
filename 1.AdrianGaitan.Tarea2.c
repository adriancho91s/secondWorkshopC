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
- El programa recibe como valor de entrada un número, valida si el número ingresado es primo o no, y muestra un mensaje en pantalla.
- Entrada: Un número
- Salida: Un mensaje que indica si el número es primo o no
- Restricciones: El rango en que identifica si es primo es de 1 a 5 dígitos
- Nota: si el número no está en el rango, imprimir mensaje: No entregamos respuestas para valores fuera del rango
*/

//Librerías
#include <stdio.h>

// Función principal
int main()
{
    // Declaración e inicialización de variables
    int numero = 0; // Variable que almacena el número ingresado por el usuario
    int primo = 1;  // Variable que almacena si el número es primo o no
    // Inicialmente arranca en indicando true, y si se encuentra que no es primo, se cambia a false (0)

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa, lee un número entre uno(1) y cinco(5), e imprime si es primo o no.\nIngrese un número: ");
    scanf("%d", &numero);

    //Validación de que esté en el rango
    if (! ( numero >= 1 && numero <= 5 ) ) {
        printf("\nNo entregamos respuestas para valores fuera del rango");
        return 0;// Finaliza el programa
    }

    // Validación de si el número es primo o no
    if ( numero == 1 || numero == 4 ) {
        primo = 0;
    } 

    // Impresión de resultados
    if (primo == 1) {
        printf("\nEl número es primo");
    } else {
        printf("\nEl número no es primo");
    }

    return 0;
}