#include <stdio.h>  

int main()
{
    int i;  // Declaración de la variable de iteración i
    int j;  // Declaración de la variable de iteración j

    // Bucle externo para i, se ejecuta 5 veces
    for (i = 0; i < 5; i++)
    {
        printf("Para i: %d \t", i);  // Imprimir el valor de i

        // Bucle interno para j, se ejecuta 3 veces
        for (j = 0; j < 3; j++)
        {
            printf("j: %d", j);  // Imprimir el valor de j
        }

        printf("\n\n");  // Imprimir dos líneas nuevas al final de cada iteración de i
    }

    return 0; 
}
