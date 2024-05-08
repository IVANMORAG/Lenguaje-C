#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j = 0;
    char *buffer;

    // Solicitar al usuario la longitud de la cadena
    printf("Ingrese la longitud de la cadena: ");
    scanf("%d", &i);

    // Reservar memoria dinámica para almacenar la cadena, incluyendo un byte adicional para el carácter nulo
    buffer = (char *)malloc((i + 1) * sizeof(char));
    
    // Verificar si la asignación de memoria fue exitosa
    if (buffer == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        exit(1);
    }

    // Solicitar al usuario que ingrese un carácter para cada índice del arreglo
    for (int n = 0; n < i; n++) {
        printf("Ingrese una letra para el índice %d del arreglo: ", n);
        scanf(" %c", &buffer[n]); // Usar %c para leer un único carácter
    }

    // Agregar el carácter nulo al final de la cadena para indicar su fin
    buffer[i] = '\0';

    // Imprimir los elementos de la cadena
    printf("Elementos de la cadena: ");
    for (j = 0; j < i; j++) {
        printf("|%c|", buffer[j]); // Imprimir cada carácter individualmente
    }

    // Liberar la memoria asignada al buffer
    free(buffer);

    printf("\n");
    return 0;
}
