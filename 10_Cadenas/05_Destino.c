#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // Declaración de variables
    int len;                   // Variable para almacenar la longitud de la cadena
    char origen[] = "Origen";  // Cadena de origen
    char destino[7];           // Arreglo para almacenar la cadena de destino

    // Copiar el contenido de la cadena de origen en la cadena de destino
    strcpy(destino, origen);

    // Imprimir el contenido de la cadena de destino
    printf("destino: %s", destino);

    printf("\n");
    return 0;
}
