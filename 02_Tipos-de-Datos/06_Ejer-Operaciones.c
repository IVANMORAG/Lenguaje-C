// Incluir la biblioteca estándar necesaria para entrada/salida.
#include <stdio.h>

// Método principal del programa.
int main() {

    // ----- Ejercicio VARIABLES ENTERAS | Multiplicación-----

    // Declarar e inicializar variables enteras.
    int primerVariable = 5;
    int segundaVariable = 7;
    int tercerVariable = 2;

    // Calcular la multiplicación de las tres variables enteras.
    int multiplicacion = primerVariable * segundaVariable * tercerVariable;

    // Imprimir el resultado de la multiplicación con un mensaje descriptivo.
    printf("La multiplicacion de %d * %d * %d = %d", primerVariable, segundaVariable, tercerVariable, multiplicacion);

    // Imprimir un salto de línea para mejorar el formato de salida.
    printf("\n");

    // ----- Ejercicio 2 VARIABLES REALES | División----- 

    // Declarar e inicializar variables de tipo double.
    double numUno = 2.5;
    double numDos = 4.6;

    // Imprimir el resultado de la división con un mensaje descriptivo.
    printf("La division de %f / %f = %f", numUno, numDos, numUno/numDos);

    // Imprimir un salto de línea para mejorar el formato de salida.
    printf("\n");

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
