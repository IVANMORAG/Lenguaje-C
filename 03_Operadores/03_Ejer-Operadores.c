// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Método principal del programa.
int main() {

    // Ejemplo de POST incremento
    int c = 5;
    printf("--- POST incremento --- \n");
    printf("c : %d \n", c); // c = 5
    printf("c++ : %d \n", c++); // Imprime 5 y luego se incrementa
    printf("c : %d \n", c); // c = 6

    // Ejemplo de PRE decremento
    int d = 10;
    printf("--- PRE decremento --- \n");
    printf("d : %d \n", d); // d = 10
    printf("--d : %d \n", --d); // Decrementa a 9 y luego imprime
    printf("d : %d \n", d); // d = 9

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
