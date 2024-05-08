#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    int *buffer, *p_buffer;

    printf("Ingresa la longitud del arreglo: ");
    scanf("%d", &n);

    buffer = (int *)malloc(n * sizeof(int)); // Reservar memoria para el arreglo
    if (buffer == NULL) // Verificar si la reserva de memoria fue exitosa
        exit(1);

    p_buffer = buffer; // Inicializar el puntero auxiliar en el primer elemento del arreglo

    // Solicitar al usuario que ingrese los valores para el arreglo
    for (i = 0; i < n; i++) {
        printf("Ingresa el valor %d: ", i);
        scanf("%d", p_buffer++); // Leer un valor y avanzar el puntero al siguiente elemento
    }

    printf("\n");

    p_buffer = buffer; // Restaurar el puntero auxiliar al primer elemento del arreglo
    printf("Los valores del arreglo son: \n");

    // Imprimir los valores del arreglo en el orden original
    for (i = 0; i < n; i++) {
        printf("arreglo[%d] = %d\n", i, *p_buffer++); // Imprimir el valor actual y avanzar el puntero
    }

    p_buffer = buffer + n - 1; // Apuntar al último elemento del arreglo
    printf("Los valores del arreglo en orden inverso son: \n");

    // Imprimir los valores del arreglo en orden inverso
    for (i = n - 1; i >= 0; i--) {
        printf("arreglo[%d] = %d\n", i, *p_buffer--); // Imprimir el valor actual y retroceder el puntero
    }

    free(buffer); // Liberar la memoria reservada para el arreglo

    printf("\n");
    return 0;
}
