/*
- Fecha: 23 de agosto 2023
- Hora: 12:00 am
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa fue desarrollado para un establecimiento de parqueadero.
- Toma como valor de entrada tres valores, placa del vehículo, el número de horas y minutos que estuvo en el parqueadero.
- El precio de la hora o fracció es de: 1800
- Entrada: 1 string y dos números
- Salida: se imprime en pantalla el valor a pagar
*/
// Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables 
    char placa[7]; // Variable que almacena la placa del vehículo
    int horas = 0, minutos = 0; // Variables que almacenan el número de horas y minutos que estuvo el vehículo en el parqueadero 
    float pago = 0; // Variable que almacena el valor a pagar

    // Mensaje de bienvenida y solicitud de datos
    printf("Ingresa la placa del vehículo: ");
    scanf("%s", placa);
    printf("Digite el número de horas en el parqueadero: ");
    scanf("%d", &horas);
    printf("Digite el número de minutos en el parqueadero: ");
    scanf("%d", &minutos);

    // Calculo del valor a pagar
    pago = horas * 1800;

    if ( minutos >= 0) {
        if ( minutos > 60 ) {
            if ( (minutos % 60) >= 1) {
                pago = pago + (minutos / 60) * 1800 + 1800;
            } else {
                pago = pago + 1800;
            }
        } else {
            pago = pago + 1800;
        }
    }

    // Impresión de resultados
    printf("El valor a pagar es: \x1b[32m%.2f\x1b[0m", pago);
}