#include <stdio.h>   
#include <stdlib.h>   

int main() {

    int longuitudSerie = 50;  // Longitud de la serie

    // Bucle for para generar los números en la serie
    for (int i = 1; i < (longuitudSerie / 2); i++) {
        printf("%d, ", 2 * i);  // Imprimir el doble de i
        printf("%d, ", 3 * i);  // Imprimir el triple de i
    }

    printf("\n");  
    return 0;  
}
