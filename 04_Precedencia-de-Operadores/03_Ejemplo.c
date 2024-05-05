// Incluir las bibliotecas estándar necesarias para entrada/salida y funciones generales.
#include <stdio.h>
#include <stdlib.h>

// Función principal del programa.
int main() {
    
    // Declaración e inicialización de variables de tipo double.
    double a = 1.0;
    double b = 3.0;
    double c = 5.0;
    double d = 30.0;
    double e = 23.0;
    double f = 2.0;
    double m = 4.0;

    // Variables para almacenar los resultados de las operaciones.
    double z, w;

    // Operaciones matemáticas en la variable z.
    z = (a / b + (b / c)) + (a / d) / (e / d);

    // Operaciones matemáticas en la variable w.
    w = c + (f / (a / (a + (f / (f - (a / m))))));

    // Imprimir los resultados.
    printf("z : %f \n", z);
    printf("w : %f \n", w);

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
