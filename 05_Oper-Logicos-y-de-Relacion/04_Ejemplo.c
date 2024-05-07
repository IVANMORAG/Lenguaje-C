// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Función principal del programa.
int main() {
    
    // Declaración e inicialización de variables de tipo entero.
    int w = 9;
    int x = 3;
    int y = 7;
    int z = -2;

    // Operaciones lógicas e impresión de resultados.

    // Operación AND (x<y & w> z)
    printf("x<y & w> z: %d\n", x < y & w > z);

    // Operaciones XOR y comparación (x >= w ^ z == y)
    printf("x >= w ^ z == y: %d\n", x >= w ^ z == y);

    // Operaciones OR y comparación (y <= x || x != w)
    printf("y <= x || x != w: %d\n", y <= x || x != w);

    // Operaciones XOR y comparación (w == 9 ^ x == 3)
    printf("w == 9 ^ x == 3: %d\n", w == 9 ^ x == 3);

    // Operación AND (y > z & z < x)
    printf("y > z & z < x: %d\n", y > z & z < x);

    // Operación NOT y comparación (!w != 9)
    printf("!w != 9: %d\n", !w != 9);

    // Imprimir un salto de línea para mayor claridad.
    printf("\n");

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
