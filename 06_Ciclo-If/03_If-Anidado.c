// Incluir la biblioteca estándar necesaria para entrada/salida.
#include <stdio.h>

// Función principal del programa.
int main() {

    // ***** EJEMPLO 1 *****
    // Declaración e inicialización de una variable de tipo entero.
    int numero = 55;
    // Verificar si el número es menor que 100.
    if (numero < 100) {
        // Imprimir un mensaje si el número es menor que 100.
        printf("El número es menor que 100 ");
        // Verificar si el número también es mayor que 50.
        if (numero > 50) {
            // Imprimir un mensaje adicional si el número es mayor que 50.
            printf("y mayor que 50 \n");
        }
    }

    // ***** EJEMPLO 2 *****
    int numero2 = 35;

    if (numero2 < 100){
        printf("El numero es menor que 100 \n");
        if(numero2 > 50){
            printf("y es mayor a 50");
        }
    }

    // ***** EJEMPLO 3 *****
    int numero3 = 135;

    if(numero3 < 100){
        printf("El numero es menor que 100 \n");
        if(numero3 > 50){
            printf(" y mayor que 50 \n");
        }
    }

    // Imprimir un mensaje al final del programa.
    printf("Fin del programa \n");

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
