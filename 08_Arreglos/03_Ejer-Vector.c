#include <stdio.h>  
#include <stdlib.h>   

int main() {

    int vector[10];  // Declaración de un vector de enteros con 10 elementos
    int i = 0;       // Declaración e inicialización de la variable de iteración

    // Bucle while para asignar el valor 10 a cada elemento del vector y luego imprimirlo
    while (i < 10) {
        vector[i] = 10;           // Asignación del valor 10 al elemento en la posición i del vector
        printf("%d\n", vector[i]);  // Imprimir el elemento en la posición i del vector
        i++;                      // Incrementar el contador de iteración
    }

    return 0;  // Devolver un valor de salida al sistema operativo
}
