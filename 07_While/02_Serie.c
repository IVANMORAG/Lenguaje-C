#include <stdio.h>    
#include <stdlib.h>   

int main() {
    int numero = 1;  // Inicialización del número a 1

    // Bucle while que se ejecuta mientras 'numero' sea menor o igual a 1000
    while (numero <= 1000) {
        printf("%d ", numero);  // Imprime el valor actual de 'numero' seguido de un espacio
        numero++;               // Incrementa 'numero' en 1 en cada iteración
    }

    printf("\n");  

    return 0;  // Devuelve un valor de salida al sistema operativo
}
