/*
- Fecha: 23 de agosto 2023
- Hora: 12:33 am
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada un número, pero lo recibe en forma de string,
- y trata de ver si corresponde a un número cupicuo, es decir, que se lee igual de
- izquierda a derecha que de derecha a izquierda.
- Entrada: número (En forma de string)
- Salida: Si es cupicuo o no
- Restricciones: El número debe estar en el rango (100, 999]
*/
// Librerías
#include <stdio.h>
#include <string.h>

// Función principal 
int main () {
    // Declaración e inicialización de variables
    char numero[4] = "000";
    char capicuo[4] = "000";
    char mensajeSi[104] = "En efecto, el número que ingresaste es \x1b[32mcapicúo\x1b[0m\nes decir, igual al escribirlo al contrario";
    char mensajeNo[100] = "El número que digitaste no es \x1b[31mcapicúo\x1b[0m. \nPues, al escribirlo al contrario no es igual";

    // Entrada de datos
    printf("¿Quieres saber si un npumero que ingreses es capicúo?\nDigita un número (entre 100 y 999]: ");
    scanf("%s", numero);

    // Se invierte el número ingresado
    capicuo[0] = numero[2];
    capicuo[1] = numero[1];
    capicuo[2] = numero[0];

    // Comparación de datos y salida
    strcmp(numero, capicuo) == 0 ? printf("\n\n%s \x1b[31m%s\x1b[0m", mensajeSi, capicuo) : printf("\n\n%s \x1b[31m%s\x1b[0m", mensajeNo, numero);
}
