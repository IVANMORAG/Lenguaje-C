#include <stdio.h>    
#include <stdlib.h>   

int main() {
    int a[] = {3, 5, 6, 8, 4, 7, 8, 5, 3, 1};  // Declaración e inicialización del arreglo a
    int b[] = {3, 4, 6, 8, 9, 1, 2, 3, 0, 9};  // Declaración e inicialización del arreglo b

    // Imprimir el resultado de la primera operación
    printf("A[3] mod (B[2] / 2) = %d\n", a[3] % (b[2] / 2));

    // Imprimir el resultado de la segunda operación
    printf("B[A[1]] - A[9] = %d\n", b[a[1]] - a[9]);

    // Imprimir el resultado de la tercera operación
    printf("A[0] + A[1 + 2] = %d\n", a[0] + a[1 + 2]);

    // Imprimir el resultado de la cuarta operación
    printf("A[5] + B[5] = %d\n", a[5] + b[5]);

    // Imprimir el resultado de la quinta operación
    printf("(A[3] / B[2]) / 2 = %d\n", (a[3] / b[2]) / 2);

    printf("\n");
    return 0; 
}
