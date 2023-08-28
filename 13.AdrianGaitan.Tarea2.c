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
- Este programa toma como valor de entrada un número y una cadena, número de calorías y actividad respectivamente
- si la actividad es "caminar", se hará el calculo según el tiempo de actividad y el número de calorías quemadas por minuto
- si la actividad es "sentado", se hará el calculo según el tiempo de actividad y el número de calorías quemadas por minuto
- Entrada: un número y una cadena
- Salida: mensaje que indica el número de calorías quemadas
- Restricción: la cadena debe ser "caminar" o "sentado"
*/

//Librerías
#include <stdio.h>
#include <string.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int calorias = 0, tiempo = 0; // Variables que almacenan el número de calorías y el tiempo de actividad
    char actividad[7] = "1234567"; // Variable que almacena la actividad
    float calculo = 0; // Variable que almacena el resultado del calculo

    // Mensaje de bienvenida y solicitud de datos
    printf("Bienvenido, para saber cuántas calorías has consumido\ningresa por favor la actividad que has realizado\n(dormir ó sentado): ");
    scanf("%s", actividad);
    // Validación de la actividad
    if (! (strcmp(actividad, "dormir") == 0 || strcmp(actividad, "sentado") == 0) ) {
        printf("\x1b[31mLa actividad ingresada no es válida\x1b[0m");
        return 0;
    } 
    printf("¿Durante cuánto tiempo has estado %s? (en minutos): ", actividad);
    scanf("%d", &tiempo);

    // Calculo de calorías
    strcmp(actividad, "dormir") == 0 ? printf("Dormir por %i minutos hizo que consumieras %.2f calorías", tiempo, (calculo = tiempo * 1.08)) : printf("Estar sentado por %i minutos hizo que consumieras %.2f calorías", tiempo, (calculo = tiempo * 1.66));

    return 0;
}