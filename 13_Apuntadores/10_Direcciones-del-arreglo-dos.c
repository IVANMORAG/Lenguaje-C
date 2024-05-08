#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    int *buffer, *p_buffer;

    printf("Teclea la longitud del arreglo: \n");
    scanf("%d", &n);

    buffer = (int*)malloc(n * sizeof(int)); // Reservar memoria para el arreglo
    if (buffer == NULL) // Verificar si la reserva de memoria fue exitosa
        exit(1);

    p_buffer = buffer; // Inicializar el puntero auxiliar en el primer elemento del arreglo

    // Solicitar al usuario que ingrese los valores para el arreglo
    for (i = 0; i < n; i++) {
        printf("Ingresa el valor %d:\t", i);
        scanf("%d", p_buffer++); // Leer un valor y avanzar el puntero al siguiente elemento
    }

    p_buffer = buffer; // Restaurar el puntero auxiliar al primer elemento del arreglo

    // Imprimir los valores del arreglo
    printf("\nLos valores son:\n");
    for (i = 0; i < n; i++) {
        printf("arreglo[%d] = \t%d\n", i, *p_buffer++); // Imprimir el valor actual y avanzar el puntero
    }

    free(buffer); // Liberar la memoria reservada para el arreglo

    return 0;
}
