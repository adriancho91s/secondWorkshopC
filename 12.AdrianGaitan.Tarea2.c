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
- Este toma como valor de entrada un número que equivale al número de horas labnoradas por un empleado en la semana
- si el número de horas es mayor a 40, se le aplicará un recargo del 25% a las horas extras.
- costo hora: 16 
- Entrada: un número
- Salida: se imprime en pantalla el salario semanal del trabajador
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int horas = 0; // Variable que almacena el número de horas trabajadas
    float salario = 0; // Variable que almacena el salario semanal

    // Mensaje de bienvenida y solicitud de datos
    printf("Por favor, digita el número de horas laboradas\nen la semana: ");
    scanf("%d", &horas);

    // Validación de si se aplica el recargo o no
    if (horas <= 40) {
        salario = horas * 16;
        printf("\x1b[31mEl salario semanal del trabajador es de %.2f\x1b[0m", salario);
    } else {
        salario = (horas - 40) * 20 + 40 * 16;
        printf("\x1b[32mEl salario semanal del trabajador es de %.2f\x1b[0m", salario);
    }

    return 0;
}