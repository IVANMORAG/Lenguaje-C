// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Función principal del programa.
int main() {
    
    // Declaración e inicialización de variables de tipo entero.
    int P = 1;
    int Q = 0;
    int R = 1;
    int T = 0;

    // Operaciones lógicas e impresión de resultados.
    
    // Operación AND (P y R)
    printf("P y R: %d\n", P & R);

    // Operación OR (Q o T)
    printf("Q o T: %d\n", Q | T);

    // Operación AND y OR combinados (P y Q o R y T)
    printf("P y Q o R y T: %d\n", P & Q | R & T);

    // Operación XOR (P xor Q xor R xor T)
    printf("P xor Q xor R xor T: %d\n", P ^ Q ^ R ^ T);

    // Operaciones NOT (not Q y not T)
    printf("not Q y not T: %d\n", !Q & !T);

    // Operaciones NOT consecutivas (not not not P)
    printf("not not not P: %d\n", !!!P);

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
