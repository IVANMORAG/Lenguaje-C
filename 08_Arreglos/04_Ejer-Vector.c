#include <stdio.h>
#include <stdlib.h>   

int main() {
    int vector[100];  // Declaración de un vector de enteros con 100 elementos
    int i = 0;        // Declaración e inicialización de la variable de iteración

    // Bucle while para llenar el vector con el doble del índice y luego imprimirlo
    while (i <= 100) {            
        vector[i] = i * 2;         // Asigna el doble del índice a cada elemento del vector
        printf("2 * %d = %d\n", i, vector[i]);  
        i++;                       // Incrementa el índice
    }

    return 0;  // Devuelve un valor de salida al sistema operativo
}
