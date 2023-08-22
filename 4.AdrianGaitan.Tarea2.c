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
- El programa toma como valor de entrada un número entero entre el rango [1, 12] e imprime el mes correspondiente
- al número ingresado por el usuario.
- Entrada: número
- Salida: mensaje que indica el mes correspondiente al número ingresado
- Restricciones: El rango en que identifica el mes es de 1 a 12
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    //Declaración e inicialización de variables
    char *meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    //Declaro un arreglo de meses, con los nombres de los meses
    int mes = 0;// Variable que almacena el número ingresado por el usuario

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa, lee un número entre [1 y 12] e imprime el mes\nque le corresponde en el año.\nEntre un número: ");
    scanf("%d", &mes);

    //Validación de que esté en el rango y si no, imprime un mensaje
    mes >= 1 && mes <= 12 ? printf("El mes es %s", meses[mes - 1]) : printf("El número ingresado \nestá fuera de rango");

    return 0;
}