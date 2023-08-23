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
- Este programa toma como valor de entrada dos números: interes y capital respectivamente.
- según el valor que ingrese el usuario estimará sí es rentable invertir o no.
- Entrada: dos números
- Salida: mensaje que indica si es rentable invertir o no
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int interes = 0, capital = 0; // Variables que almacenan los números ingresados por el usuario
    float saldo = 0; // Variable que almacena el saldo final

    // Mensaje de bienvenida y solicitud de datos
    printf("Ester programa lee dos valores interés(%%) y capital por consola. Si el dinero recibido\npor intereses es mayor que $7000, se le indicará al inversionista\nque invierta, de lo contrario, se le indicará que no debe invertir.\nEntre el interés en %%: ");
    scanf("%d", &interes);
    printf("Entre el capital en $: ");
    scanf("%d", &capital);

    // Validación de si es rentable invertir o no
    interes * (capital / 100) > 7000 ? printf("\x1b[32mINVIERTA SU SALDO SERÁ %.2f\x1b[0m", saldo= (capital * (interes/100) + capital) ) : printf("\x1b[31mNo es rentable invertir\x1b[0m");
}