#include <stdio.h>   
#include <stdlib.h>   
#include <string.h>   

int main(){

    // Declaración de variables
    int len;
    char origen[] = "brisas";          // Cadena de origen
    char destino[20] = "para";         // Arreglo para almacenar la cadena de destino

    // Concatenar la cadena de origen al final de la cadena de destino
    strcat(destino, origen);

    // Imprimir el contenido de la cadena de destino después de la concatenación
    printf("destino: %s", destino);

    printf("\n");
    return 0;  
}
