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
- Este programa recibe por consola 3 valores númericos correspondientes a las notas de un estudiante
- y muestra en pantalla el promedio de las notas, y si el estudiante aprobó o no.
- Entrada: tres números
- Salida: promedio de las notas y mensaje que indica si el estudiante aprobó o no
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    float nota1 = 0, nota2 = 0, nota3 = 0, promedio = 0; // Variables que almacenan las notas ingresadas por el usuario

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa recibe por consola 3 notas de un\nestudiante, y te dice si consigue aprobar. \nDigita la primera nota: ");
    scanf("%f", &nota1);
    printf("Digita la segunda nota: ");
    scanf("%f", &nota2);
    printf("Digita la tercera nota: ");
    scanf("%f", &nota3);

    // Cálculo del promedio
    promedio = (nota1 + nota2 + nota3) / 3;

    // Validación de si el estudiante aprobó o no
    promedio >= 3 ? printf("\x1b[32mEl estudiante aprueba el curso\n con una nota promedio de %.2f\x1b[0m", promedio) : printf("\x1b[31mEl estudiante no aprueba\ny su promedio es de %.2f\x1b[0m", promedio);

    return 0;
}