// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Método principal del programa.
int main() {
    
    // Declarar e inicializar varias variables enteras.
    int p = 5;
    int q = 1;
    int r = 2;
    int w = 3;
    int x = 9;
    int y = 6;
    int z;

    // Expresión que combina varios operadores con diferentes precedencias.
    z = p * r % q + w / x - y;

    // Imprimir el resultado de la expresión.
    printf("z : %d \n", z);

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
