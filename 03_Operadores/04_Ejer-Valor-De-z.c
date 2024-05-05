// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Método principal del programa.
int main() {
    
    // Declarar e inicializar tres variables enteras.
    int x = 5;
    int y = 10;
    
    // La expresión ++x incrementa x antes de su uso, y y-- decrementa y después de su uso.
    int z = ++x * y--;

    // Imprimir los valores de x, y, y z.
    printf("x : %d \n", x);
    printf("y : %d \n", y);
    printf("z : %d \n", z);

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
