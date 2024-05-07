/*
Escribe un programa que reciba por teclado la calificación
del examen de un alumno e imprima el siguiente texto únicamente
si la calificación es aprobatoria: "¡Felicidades aprobaste!"
*/

// Incluir la biblioteca estándar necesaria para entrada/salida.
#include <stdio.h>

// Función principal del programa.
int main() {
    
    // Declaración de una variable de tipo entero para almacenar la calificación.
    int calificacion;

    // Solicitar al usuario que ingrese la calificación.
    printf(" ***** INGRESE LA CALIFICACION ***** \n");
    scanf("%d", &calificacion);

    // Verificar si la calificación es aprobatoria (mayor o igual a 8).
    if (calificacion >= 8) {
        // Imprimir mensaje de felicitaciones si la calificación es aprobatoria.
        printf("Felicidades, aprobaste el curso !!! \n");
    }

    // Imprimir un mensaje indicando que la calificación ha sido registrada.
    printf("*** CALIFICACION REGISTRADA *** \n");

    // Indicar que el programa finalizó correctamente devolviendo 0.
    return 0;
}
