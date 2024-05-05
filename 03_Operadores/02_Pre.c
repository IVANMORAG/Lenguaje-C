// Incluir la biblioteca estándar necesaria para entrada/salida.
#include <stdio.h>

// Método principal del programa.
int main() {
    
    // Declarar e inicializar variables enteras.
    int var = 1;
    int con = 1;

    // Operador PRE incremento
    // Es equivalente a: var = var + 1
    printf("INCREMENTO | %d --> ", ++var);
    printf("%d \n", var);

    // Operador PRE decremento
    // Es equivalente a: con = con - 1
    printf("DECREMENTO | %d --> ", --con);
    printf("%d \n", con);

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
