#include <stdio.h>  
#include <stdlib.h>  

int main() {
    int vector[10];  // Declaración de un vector de enteros con 10 elementos

    // Asignación del valor 10 a cada elemento del vector individualmente
    vector[0] = 10;
    vector[1] = 10;
    vector[2] = 10;
    vector[3] = 10;
    vector[4] = 10;
    vector[5] = 10;
    vector[6] = 10;
    vector[7] = 10;
    vector[8] = 10;
    vector[9] = 10;

    // Impresión de cada elemento del vector
    printf("%d\n", vector[0]);
    printf("%d\n", vector[1]);
    printf("%d\n", vector[2]);
    printf("%d\n", vector[3]);
    printf("%d\n", vector[4]);
    printf("%d\n", vector[5]);
    printf("%d\n", vector[6]);
    printf("%d\n", vector[7]);
    printf("%d\n", vector[8]);
    printf("%d\n", vector[9]);
    
    /*
    Manera más rápida: 
    // Asignación del valor 10 a cada elemento del vector utilizando un bucle for
    for (int i = 0; i < 10; i++) {
        vector[i] = 10;
    }

    // Impresión de cada elemento del vector
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vector[i]);  // Imprime cada elemento del vector seguido de una nueva línea
    }
    */

    return 0;
}
