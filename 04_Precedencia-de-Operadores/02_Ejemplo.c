// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Método principal del programa.
int main() {
    
    // Expresiones que utilizan la precedencia de operadores.
    
    // 1 + 2 * 3
    printf("1 + 2 : %d \n ", 1 + 2 * 3);
    
    // (1 + 2) * 3
    printf("1 + 2 : %d \n ", (1 + 2) * 3);
    
    // 1 + (2 * 3)
    printf("1 + 2 : %d \n ", 1 + (2 * 3));

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
