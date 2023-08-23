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
- Este programa está hecho para una compañía de alquiler de vehículos, la cual cobra por kilómetro recorrido.
- Toma como valor de entrada el número de kilómetros recorridos. Para los primeros 300 km tiene un precio base de 400000.
- Si es mayor a 300 km pero menor o igual 1000 km, por cada km adicional a los 300 km se cobra 15000.
- Si es mayor a 1000 km, por cada km adicional a los 1000 km se cobra 10000.
- En el calculo el iva del 20% está incluido.
- Entrada: un número
- Salida: se imprime en pantalla el valor a pagar y el equivalente del total en iva.
*/
// Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int kilometros = 0; // Variable que almacena el número de kilómetros recorridos
    float total = 0, impuesto = 0; // Variables que almacenan el valor a pagar y el valor del iva

    // Mensaje de bienvenida y solicitud de datos
    printf("Bienvenido a alquier la octava en esta compañía manejamos la siguiente tárifa: ");
    printf("- $400000 los primeros 300 km\n- $15000 por cada km adicional en el rango 300<km<=1000\n- $10000 por cada km adicional en el rango km>1000\n");
    printf("\n- 20%% de IVA incluido\n\nIngresa la cantidad de kilómetros recorridos: ");
    scanf("%d", &kilometros);

    // Calculo del valor a pagar
    if ( kilometros <= 300 ) {
        total = 400000;
        impuesto = total * 0.2;
    } else if ( kilometros <= 1000 ) {
        total = 400000 + (kilometros - 300) * 15000;
        impuesto = total * 0.2;
    } else {
        total = 10900000 + (kilometros - 1000) * 10000;
        impuesto = total * 0.2;
    }

    // Impresión de resultados
    printf("Debes pagar \x1b[32m%.2f$\x1b[0m, de los cuales \x1b[32m%.2f$\x1b[0m son de IVA", total, impuesto);
}