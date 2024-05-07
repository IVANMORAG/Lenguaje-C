#include <stdio.h>   
#include <stdlib.h>   

int main() {
    int vector[100];  // Declaración de un vector de enteros con 100 elementos
    int i;            // Declaración de la variable de iteración
    int j = 100;      // Inicialización de la variable j a 100

    // Bucle for para llenar el vector con valores descendentes
    for (i = 0; i < 100; i++) {
        j = j - 1;           // Decrementa j en cada iteración
        vector[i] = j;       // Asigna el valor de j al elemento i del vector
    }

    // Bucle for para imprimir el contenido del vector
    for (i = 0; i < 100; i++) {
        printf("Arreglo[%d] : %d\n", i, vector[i]);  // Imprime el elemento i del vector junto con su índice
    }

    return 0;  
}
