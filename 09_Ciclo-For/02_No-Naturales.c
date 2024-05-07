#include <stdio.h>
#include <stdlib.h>

int main() {

    int longitud;
    int suma = 0;

    printf("Ingresa el número de usuarios: ");
    scanf("%d", &longitud);


    // Bucle para imprimir los números y sumarlos
    for (int i = 1; i <= longitud; i++) {
        printf("%d", i);
        suma += i;
        
        // Si no es el último número, imprimir un signo de suma
        if (i != longitud) {
            printf(" + ");
        }
    }

    // Imprimir la suma total
    printf(" = %d\n", suma);

    return 0;
}
