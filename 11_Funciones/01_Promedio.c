#include <stdio.h>   
#include <stdlib.h>   // Inclusión de la biblioteca estándar de funciones de biblioteca

// Declaración de la función promedio
float promedio(float a, float b);

int main(){

    // Declaración de variables locales
    float a = 5, b = 10, prom;

    // Llamada a la función promedio y asignación del resultado a la variable 'prom'
    prom = promedio(a, b);

    // Impresión del resultado
    printf("El promedio es %2.1f\n", prom);

   
    printf("\n");
    return 0;  
}

// Definición de la función promedio
float promedio(float a, float b)
{
    // Declaración de variables locales
    float prom;

    // Incremento de 'a' y 'b' en 3
    a = a + 3;
    b = b + 3;

    // Cálculo del promedio
    prom = (a + b) / 2;

    // Devolución del valor del promedio
    return prom;
}
