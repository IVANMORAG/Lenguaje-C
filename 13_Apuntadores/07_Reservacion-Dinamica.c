#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
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

    // Generar una cadena aleatoria de caracteres minúsculos y almacenarla en el buffer
    for (int n = 0; n < i; n++) {
        buffer[n] = rand() % 26 + 'a'; // Genera un carácter aleatorio entre 'a' y 'z'
    }

    // Agregar el carácter nulo al final de la cadena para indicar su fin
    buffer[i] = '\0';
    
    // Imprimir la cadena aleatoria generada
    printf("Cadena aleatoria: %s\n", buffer);
    
    // Liberar la memoria asignada al buffer
    free(buffer);

    return 0;
}
