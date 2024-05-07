#include <stdio.h>   
#include <stdlib.h>   

int main() {
    int numero = 1;  // Inicialización del número a 1

    // Bucle while que se ejecuta mientras 'numero' sea menor o igual a 500
    while (numero <= 500) {
        // Imprime 'numero', su cuadrado y su cubo separados por comas
        printf("%d,", numero);               // Imprime el número actual
        printf("%d,", (numero * numero));    // Imprime el cuadrado del número
        printf("%d,\n", (numero * numero * numero));  // Imprime el cubo del número
        numero++;  // Incrementa 'numero' en 1 en cada iteración
    }

    return 0;  // Devuelve un valor de salida al sistema operativo
}
