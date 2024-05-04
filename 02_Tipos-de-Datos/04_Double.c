// Incluir la biblioteca estándar necesaria para entrada/salida.
#include <stdio.h>

// Método principal del programa.
int main() {
    
    // Declarar variables de tipo double para el radio (r), el valor de pi y el área.
    double r = 5;
    double pi = 3.1416;

    // Calcular el área de un círculo utilizando la fórmula: area = pi * r * r.
    double area = pi * r * r;

    // Imprimir el área calculada en formato de punto flotante.
    printf("%f", area);

    // Imprimir un salto de línea para mejorar el formato de salida.
    printf("\n");

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
