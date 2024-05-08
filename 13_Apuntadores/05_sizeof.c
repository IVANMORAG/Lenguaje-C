#include <stdio.h>   // Incluye la biblioteca estándar de entrada y salida.
#include <stdlib.h>  // Incluye la biblioteca estándar necesaria para la función sizeof().

int main()
{
    char cadena[10];  // Declara una matriz de caracteres llamada 'cadena' con una longitud de 10 caracteres.

    // Utiliza la función sizeof() para determinar el tamaño en bytes de diferentes tipos de datos y matrices.
    // Imprime los resultados utilizando printf().
    printf("Un int ocupa %lu bytes.\n", sizeof(int));
    printf("Un char ocupa %lu bytes.\n", sizeof(char));
    printf("Un float ocupa %lu bytes.\n", sizeof(float));
    printf("Un double ocupa %lu bytes.\n", sizeof(double));
    printf("La matriz 'cadena' ocupa %lu bytes.\n", sizeof(cadena));

    printf("\n");  
    return 0; 
}
