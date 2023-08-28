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
- Este programa toma como valor de entrada dos números, nombre y precio respectivamente de un articulo.
- aplica un descuento en función de la clave ingresada; si la clave es 1, se le aplicará un descuento del 10% al precio del artículo
- si la clave es 2, se le aplicará un descuento del 20% al precio del artículo
- Restricción: la clave debe ser 1 o 2
*/

//Librerías
#include <stdio.h>
#include <string.h>

// Función principal
int main () {
    // Declaración e inicialización de variables 
    char nombre[20] = "01234567890123456789"; // Variable que almacena el nombre del artículo
    int precio = 0, clave = 0; // Variables que almacenan el precio y la clave del artículo
    float precioFinal = 0; // Variable que almacena el precio final del artículo

    // Mensaje de bienvenida y solicitud de datos
    printf("Digita por favor el nombre del articulo a vender: ");
    fgets(nombre, 20, stdin);
    nombre[strcspn(nombre, "\n")] = '\0'; // Elimina el salto de línea que se agrega al final de la cadena
    printf("¿Cuál es el precio del artículo?: ");
    scanf("%d", &precio);
    printf("Ingresa la clave según el descuento que vas a hacer\nRecuerda que 1 corresponde al 10%% y 2 al 20%%: ");
    scanf("%d", &clave);

    // Calculo del precio final
    if (clave == 1) {
        precioFinal = precio - (precio * 0.1);
        printf("\x1b[32mNombre: %s\nPrecio: %d \nClave: %d \nPrecio con descuento: %.2f\x1b[0m", nombre, precio, clave, precioFinal);
    } else {
        precioFinal = precio - (precio * 0.2);
        printf("\x1b[31mNombre: %s\nPrecio: %d \nClave: %d \nPrecio con descuento: %.2f\x1b[0m", nombre, precio, clave, precioFinal);
    } 

    return 0;
}