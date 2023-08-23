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
- El programa toma como valores de entrada dos números, el costo de una pieza comprada a un proveedor y el número de a comprar
- informa al usuario la cantidad de dinero que puede asumir la empresa y los prestamos necesarios con el valor.
- Entrada: dos números
- Salida: se imprime en pantalla la cantidad invertida, el préstamo por el fabricante y el préstamo por el banco
*/

//Librerías
#include <stdio.h>

// Función principal
int main () {
    // Declaración e inicialización de variables
    int piezas = 0, costo = 0; // Variables que almacenan el número de piezas y el precio de cada pieza
    float invertido = 0, prestamoBanco, creditoFab = 0, interesFab = 0;

    // Mensaje de bienvenida y solicitud de datos
    printf("Este programa te ayudará a calcular el monto de tu inversión da la cantidad prestada\npor el banco, el valor del crédito por el fabricante y también el interés cobrado por el fabricante\n");
    printf("\nCriterios: \n- compra > $ 500000, dinero que puede inveritir la empresa: 55%%, banco 30%%, 15%% crédito fabricante\n");
    printf("- compra <= $ 500000, dinero que puede inveritir la empresa: 70%%, 30%% crédito fabricante\n");
    printf("Nota: interés del 20%% en crédito fabricante\n\nIngresa el costo de la pieza: ");
    scanf("%d", &costo);
    printf("Ahora ingresa el número de piezas: ");
    scanf("%d", &piezas);

    // Calculo de la inversión e impresión de resultados
    if ((costo * piezas) > 500000) {
        invertido = costo * piezas * 0.55;
        prestamoBanco = costo * piezas * 0.3;
        creditoFab = costo * piezas * 0.15;
        interesFab = creditoFab * 0.2;
        printf("\nInviertes una cantidad de: $ %.2f \nEl banco te presta: $ %.2f \nEl fabricante te presta: $ %.2f \ncon un interés de: $ %.2f", invertido, prestamoBanco, creditoFab, interesFab);
    } else {
        invertido = costo * piezas * 0.7;
        creditoFab = costo * piezas * 0.3;
        interesFab = creditoFab * 0.2;
        printf("\nInviertes una cantidad de: $ %.2f \nEl fabricante te presta: $ %.2f \ncon un interés de: $ %.2f", invertido, creditoFab, interesFab);
    }

    return 0;
}