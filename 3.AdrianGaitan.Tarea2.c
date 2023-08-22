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
- El programa recibe como valor de entrada un número entre 1 y 7, y muestra un mensaje en pantalla con el día de la semana correspondiente.
- Entrada: Un número entre 1 y 7
- Salida: Un mensaje que indica el día de la semana correspondiente
- Restricciones: El rango en que identifica el día de la semana es de 1 a 7
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Arreglo de días de la semana
    char *dias[7] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    int dia = 0;// Variable que almacena el número ingresado por el usuario

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa, lee un número entre [1 y 7]\ne imprime el día que le corresponde en la semana.\nEntre un número: ");
    scanf("%d", &dia);

    //Validación de que esté en el rango
    if ( !(dia >= 1 && dia <= 7) ) {
        printf("El número ingresado \nno está en el rango");
        return 0;// Finaliza el programa
    } 

    // Impresión de resultados
    printf("El día es %s", dias[dia - 1]);

    return 0;
}