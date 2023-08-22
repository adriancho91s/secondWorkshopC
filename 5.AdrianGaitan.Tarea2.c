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
- El programa recibe como valor de entrada un número que corresponde a la antiguedad en años de un trabajador
- y muestra un mensaje en pantalla el aumento correspondiente según la antiguedad un incremento a su salario anual de 400000 euros
- Entrada: Un número
- Salida: Un mensaje que indica el aumento correspondiente
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    //Declaración e inicialización de variables
    int numero = 0;// Variable que almacena el número de años de antiguedad del trabajador
    float sueldo = 0;// Variable que almacena el salario del trabajador

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa leyendo por teclado la antigüedad en años,\ncalcula el sueldo mensual que le corresponde al trabajador\nde una empresa que cobra 40.000 euros anuales, el programa debe realizar \nlos cálculos en función de los siguientes criterios:\na. Si lleva más de 10 años en la empresa se le aplica un aumento del 10%%.\nb. Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%%. \nc. Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%%. \nd. Si lleva menos de 3 años se le aplica un aumento del 3%%. \nEntre el número de años de antigüedad del trabajador: ");
    scanf("%d", &numero);

    //Calculo del sueldo
    if (numero > 10) {
        sueldo = 40000 * 0.1 / 12; // Condición a
    } else if ( (5 < numero) && (numero <= 10)) {
        sueldo = 40000 * 0.07 / 12; // Condición b
    } else if ( (3 < numero) && (numero <= 5)) {
        sueldo = 40000 * 0.05 / 12; // Condición c
    } else if ( numero < 3) {
        sueldo = 40000 * 0.03 / 12; // Condición d
    }

    // Impresión de resultados
    printf("El sueldo mensual es de %.4f euros", sueldo);

    return 0;
}