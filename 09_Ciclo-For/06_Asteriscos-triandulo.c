#include <stdio.h>  
#include <stdlib.h>   

int main(){

    int N, i, j;  // Declaración de variables

    // Solicitar al usuario ingresar un número
    printf("Ingresa un numero: ");
    scanf("%d", &N);

    // Imprimir el primer patrón
    for (i = 0; i < N; i++)
    {
        printf("\n");  // Nueva línea antes de cada fila
        for (j = 0; j <= i; j++)
        {
            printf("*");  // Imprimir asteriscos en cada columna de la fila
        }
    }

    // Imprimir una línea en blanco para separar los patrones
    printf("\n\n");

    // Imprimir el segundo patrón
    for (i = 1; i <= N; i++)
    {
        // Imprimir espacios en blanco antes de los asteriscos en cada fila
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Imprimir asteriscos en cada columna de la fila
        for (int k = i; k <= N; k++)
        {
            printf("*");
        }

        printf("\n");  // Nueva línea después de cada fila
    }

    return 0;
}
