#include <stdio.h>    // Inclusión de la biblioteca estándar de entrada y salida

int main() {

    int miArreglo[8];  // Declaración de un arreglo de enteros de tamaño 8

    // Asignación de valores a algunas posiciones del arreglo
    miArreglo[0] = 5;
    miArreglo[1] = 10;
    miArreglo[2] = miArreglo[0] + miArreglo[1];  // Asignación de la suma de los valores en las posiciones 0 y 1

   printf("%d \n", miArreglo[2]); 


    return 0;  // Devolver un valor de salida al sistema operativo
}
