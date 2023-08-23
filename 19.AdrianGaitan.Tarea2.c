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
- El programa toma como valor de entrada el número de docenas de mouses que desea adquirir el cliente.
- La tienda se encuentra en promoción. Por la compra de más de 3 docenas recibe un descuento del 15%.
- Además se obsequia un mouse por docena que supere la cifra de 3, es decir, si el cliente compro más de 3 docenas,
- las docenas adicionales reciben el obsequio de un mouse por docena. Precio cada mouse: 15$
- Entrada: un número
- Salida: se imprime el valor de la compra original, el descuento, unidades obsequiadas y el valor a pagar
*/
// Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int docenas = 0, obsequio = 0; // Variables que almacenan el número de docenas y unidades de mouses
    float valor = 15, descuento = 0, montoCompra, montoFinal = 0; // Variables que almacenan el valor de la compra, el descuento y el monto final

    // Mensaje de bienvenida y solicitud de datos
    printf("Este mes los mouse están en descuento por la compra\nde más de 3 docenas recibe un descuento del 15%%.\nAdicional por cada docena llevas un mouse gratis,\nsolo aplica para las docenas excedentes a las 3 primeras.\nLas compras inferiores reciben 10%% de descuento.");  
    printf("\n\nPrecio c/u: 15$\n\nIngresa el número de docenas que deseas comprar: ");
    scanf("%d", &docenas);

    // Calculo del valor de la compra
    montoCompra = docenas * 12 * valor;

    // Calculo del descuento
    if ( docenas > 3 ) {
        obsequio = (docenas - 3);
        descuento = montoCompra * 0.15 + (obsequio * valor);
        montoFinal = montoCompra - descuento;        
    } else {
        descuento = montoCompra * 0.1;
        montoFinal = montoCompra - descuento;
    }

    // Impresión de resultados
    printf("\nMonto de compra: %.2f$\nDescuento: %.2f$\nUnidades obsequiadas: %d\nMonto final: \x1b[32m%.2f$\x1b[0m", montoCompra, descuento, obsequio, montoFinal);
}