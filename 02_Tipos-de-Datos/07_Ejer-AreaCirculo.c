// Incluir la biblioteca estándar necesaria para entrada/salida.
#include <stdio.h>

// Definir una constante llamada PI con el valor 3.1416.
#define PI 3.1416

// Método principal del programa.
int main() {

    // Declarar una variable real para el radio.
    double r = 5;

    // Calcular el área del círculo utilizando la constante PI y el radio.
    double area = PI * r * r;

    // Imprimir el resultado del cálculo del área con un mensaje descriptivo.
    printf("El area del circulo es = %f \n", area);

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
