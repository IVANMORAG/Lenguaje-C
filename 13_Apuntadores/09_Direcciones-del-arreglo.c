#include <stdio.h>
#include <stdlib.h>

int main() {
    int i[10];
    float j[10];

    // Imprimir encabezado de la tabla
    printf("\t\tEntero\t\tFlotante\n\n");

    // Llenar los arreglos e imprimir sus direcciones de memoria
    for (int x = 0; x < 10; x++) {
        printf("Elemento %d:\t%p\t%p\n", x, (void*)&i[x], (void*)&j[x]); // Usar %p para imprimir direcciones de memoria
    }

    printf("\n");
    return 0;
}
