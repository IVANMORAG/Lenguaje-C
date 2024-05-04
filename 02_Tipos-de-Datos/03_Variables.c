// Incluir la biblioteca estándar necesaria para entrada/salida.
#include <stdio.h>

// Método principal del programa.
int main() {

    // Declarar una variable entera llamada 'una_variable'.
    int una_variable;

    // Asignar el valor 3 a la variable 'una_variable'.
    una_variable = 3;

    // Sumar 5 al valor actual de 'una_variable'.
    una_variable = una_variable + 5;

    // Incrementar el valor de 'una_variable' en 1 usando el operador de incremento (++).
    //Si queremos que incremente en otro numero sería +=2, que estaria incrementando en 2.
    una_variable++;

    // Imprimir el valor final de 'una_variable'.
    printf("%d \n", una_variable);

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
