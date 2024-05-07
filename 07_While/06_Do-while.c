#include <stdio.h>    
#include <stdlib.h>   

int main() {
    int i = 0;  // Inicialización de la variable 'i' a 0

    // Bucle do-while que se ejecuta al menos una vez y luego verifica la condición
    do {
        printf("Valor de i = %d\n", i);  // Imprimir el valor actual de 'i'
        i++;  // Incrementar 'i' en cada iteración
    } while (i < 3);  // Continuar el bucle mientras 'i' sea menor que 3

    printf("fin"); 

    printf("\n");  
    return 0; 
}
