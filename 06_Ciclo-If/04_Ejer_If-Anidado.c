// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Función principal del programa.
int main(){
    // Declaración de variables para almacenar la antigüedad y el sueldo.
    int antiguedad;
    float sueldo, sueldo_minimo;

    // Solicitar al usuario que ingrese su antigüedad en años en el trabajo.
    printf("Ingresa tu antigüedad en años en tu trabajo: ");
    scanf("%d", &antiguedad);

    // Solicitar al usuario que ingrese su sueldo mensual.
    printf("Ingresa tu sueldo mensual: ");
    scanf("%f", &sueldo);

    // Calcular el 10% del sueldo como sueldo mínimo requerido.
    sueldo_minimo = sueldo * 0.1;

    // Verificar condiciones para ser sujeto a un crédito hipotecario.
    if (antiguedad >= 5){
        if (sueldo_minimo > 1000){
            printf("Eres sujeto a un crédito hipotecario.\n");
        }
    } else {
        printf("No cumples con los requisitos para ser sujeto a un crédito hipotecario.\n");
    }

    // Imprimir un salto de línea para mayor claridad.
    printf("\n");

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
