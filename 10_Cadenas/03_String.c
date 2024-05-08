#include <stdio.h>    
#include <stdlib.h>   
#include <string.h>   // Inclusión de la biblioteca estándar de funciones de cadena

int main(){

    int len;              // Declaración de una variable para almacenar la longitud de la cadena
    char cad[10];         // Declaración de un arreglo de caracteres para almacenar la palabra

    printf("Introduce una palabra:\n");
    scanf("%s", cad);     // Leer la entrada del usuario y almacenarla en el arreglo 'cad'

    len = strlen(cad);    // Calcular la longitud de la cadena ingresada con strlen() y almacenarla en 'len'
    printf("La longitud de '%s' es: %d\n", cad, len);  // Imprimir la longitud de la cadena

    // Bucle para imprimir un cuadrado de asteriscos con el mismo tamaño que la longitud de la palabra
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");  
    return 0;  // Devolver un valor de salida al sistema operativo
}
