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
- Este programa esta diseñado para una tienda de camisas, toma como valor de entrada
- dos números, uno de ellos corresponde a la cantidad de camisas que va a comprar el cliente y el
- segundo de ellos corresponde al precio de cada camisa. Si el cliente compra 3 o más camisas, obtiene un descuento del 30% sobre el total de la compra
- si compra menos de 3 camisas, el descuento es del 10% sobre el total de la compra;
- Entrada: dos números
- Salida: se imprime en pantalla el valor total de la compra
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int numero = 0, precio = 0; // Variables que almacenan el número de camisas y el precio de cada camisa
    float descuento = 0; // Variable que almacena el total de la compra

    // Mensaje de bienvenida y solicitud de datos
    printf("Por favor, ingresa el número de camisas a pagar: ");
    scanf("%d", &numero);
    printf("Ahora digita el precio de la camisa: ");
    scanf("%d", &precio);

    // Calculo del total de la compra
    if (numero >= 3) {
        descuento = (numero * precio) - (numero * precio * 0.2);
        printf("Precio parcial total: %d \nPrecio total (descuento): \x1b[32m%.2f\x1b[0m", (numero * precio), descuento);
    } else {
        descuento = (numero * precio) - (numero * precio * 0.1);
        printf("Precio parcial total: %d \nPrecio total (descuento): \x1b[31m%.2f\x1b[0m", (numero * precio), descuento);
    }

    return 0;
}