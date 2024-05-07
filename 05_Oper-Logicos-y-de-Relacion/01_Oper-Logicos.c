// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Función principal del programa.
int main() {
    
    // Operaciones lógicas utilizando los operadores && (AND), || (OR), y ^ (XOR).

    // AND
    printf("****** AND ******\n");
    printf(" true  && true : %d \n",   (1 && 1));	
    printf(" true  && false : %d \n",  (1 && 0));
    printf(" false && true : %d \n",   (0 && 1));
    printf(" false && false : %d \n\n",  (0 && 0));
    
    // OR
    printf("****** OR ******\n");
    printf(" true  || true : %d \n",   (1 || 1));	
    printf(" true  || false : %d \n",  (1 || 0));
    printf(" false || true : %d \n",   (0 || 1));
    printf(" false || false : %d \n\n",  (0 || 0));
    
    // XOR
    printf("****** XOR ******\n");
    printf(" true  ^ true : %d\n",   (1 ^ 1));	
    printf(" true  ^ false : %d\n",  (1 ^ 0));
    printf(" false ^ true : %d\n",   (0 ^ 1));
    printf(" false ^ false : %d\n",  (0 ^ 0));
    
    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
