#include <stdio.h>

int main()
{
    int vector[10];  // Declaración de un vector de enteros llamado 'vector' con 10 elementos
    int i;           // Variable de iteración

    // Inicializar el vector asignando el valor 10 a cada elemento
    for (i = 0; i < 10; i++)
    {
        vector[i] = 10;  // Asignación del valor 10 al elemento en la posición i del vector
    }

    // Imprimir los elementos del vector
    printf("Elementos del vector:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", vector[i]);  // Imprimir el valor del elemento en la posición i del vector
    }

    return 0; 
}
