// Incluir las bibliotecas estándar necesarias para entrada/salida y asignación dinámica de memoria.
#include <stdio.h>
#include <stdlib.h>

// Método principal del programa.
int main() {
    
    // Imprimir un número directamente.
    printf("%d \n", 3);

    // Imprimir la suma de dos números de forma directa y con mensajes descriptivos.
    printf("%d \n", 3 + 4); // Imprimir la suma de 3 + 4 directamente.
    printf("La suma de %d + %d = %d \n", 3, 4, 3 + 4); // Imprimir la suma de 3 + 4 con mensaje descriptivo.

    // Imprimir la suma de dos números diferentes con mensajes descriptivos.
    printf("La suma de %d + %d = %d \n", 5, 8, 5 + 8);

    // Imprimir la suma de dos números grandes con mensajes descriptivos.
    printf("La suma de %d + %d = %d \n", 78787, 3259, 78787 + 3259);

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
