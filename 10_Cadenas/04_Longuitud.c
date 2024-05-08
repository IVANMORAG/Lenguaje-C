#include <stdio.h>   
#include <stdlib.h>   
#include <string.h>   // Inclusión de la biblioteca estándar de funciones de cadena

int main(){

    int len;                   // Declaración de una variable para almacenar la longitud de la cadena
    char cad[] = "Es una cadena";  // Declaración e inicialización de una cadena de caracteres

    len = strlen(cad);         // Calcular la longitud de la cadena 'cad' con strlen() y almacenarla en 'len'

    printf("La longitud de: '%s' es: %d\n", cad, len);  // Imprimir la longitud de la cadena 'cad'

    return 0; 
}
