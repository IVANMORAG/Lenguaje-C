#include <stdio.h>   
#include <stdlib.h>   

int main() {
    int contador = 0;  // Inicialización del contador a 0

    // Bucle while que se ejecuta mientras el contador sea menor que 3
    while (contador < 3) {
        printf("Hola\n");  // Imprime "Hola"
        contador++;        // Incrementa el contador en 1 en cada iteración
    }

    printf("Fin\n");  // Imprime "Fin" después de que el bucle haya terminado

    return 0;  // Devolver un valor de salida al sistema operativo
}
