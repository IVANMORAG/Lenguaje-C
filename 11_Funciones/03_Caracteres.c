#include <stdio.h>
#include <string.h>

// Función para invertir una cadena
void invertirCadena(char *cadena){

    int longitud = strlen(cadena);
    // Intercambiamos los caracteres desde el principio y el final de la cadena
    for (int i = 0; i < longitud / 2; i++){
        
        // Intercambia los caracteres desde el principio y el final de la cadena
        char temp = cadena[i];  // Almacena temporalmente el carácter en la posición actual
        cadena[i] = cadena[longitud - 1 - i];  // Asigna el carácter del extremo final al extremo inicial
        cadena[longitud - 1 - i] = temp;  // Asigna el carácter almacenado temporalmente al extremo final

    }
}

int main(){

    char caracteres[100];
    printf("Introduce una cadena: ");
    // Lee una línea completa de entrada, incluidos espacios en blanco
    fgets(caracteres, sizeof(caracteres), stdin);

    // Elimina el carácter de nueva línea del final si está presente
    if (caracteres[strlen(caracteres) - 1] == '\n')
        caracteres[strlen(caracteres) - 1] = '\0';

    // Invoca la función para invertir la cadena
    invertirCadena(caracteres);
    
    // Imprime la cadena invertida
    printf("Cadena invertida: %s\n", caracteres);
    
    return 0;
}
