#include <stdio.h>   
#include <stdlib.h>   
#include <string.h>   

int main(){

    // Declaración de variables
    int res;                 // Variable para almacenar el resultado de la comparación de cadenas
    char str1[] = "brisas"; // Cadena de caracteres 1
    char str2[] = "para";    // Cadena de caracteres 2

    // Comparar las dos cadenas y almacenar el resultado en 'res'
    res = strcmp(str1, str2);

    // Imprimir el resultado de la comparación
    printf("resultado: %d", res);

    
    printf("\n");
    return 0;  
}
