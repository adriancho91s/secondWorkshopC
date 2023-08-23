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
- El programa toma como entrada tres valores númericos, y evalua si la multiplicación de los dos primeros números es igual al tercer número.
- Entrada: tres números
- Salida: mensaje que indica si la multiplicación de los dos primeros números es igual al tercer número
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int num1 = 0, num2 = 0, num3 = 0; // Variables que almacenan los números ingresados por el usuario

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa recibe tres números que\ningreses, y te va a indicar si la\nmultiplicación de los dos primeros es\nigual al tercero.\nDigita el primer número: ");
    scanf("%d", &num1);
    printf("Digita el segundo número: ");
    scanf("%d", &num2);
    printf("Digita el tercer número: ");
    scanf("%d", &num3);

    // Validación de si la multiplicación de los dos primeros números es igual al tercer número
    num1 * num2 == num3 ? printf("El %d por el %d es igual al %d", num1, num2, num3 ) : printf("\x1b[31mEl %d por el %d no es igual al %d\x1b[0m", num1, num2, num3);

    return 0;
}