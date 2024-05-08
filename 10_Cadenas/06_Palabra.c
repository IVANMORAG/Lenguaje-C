#include <stdio.h>    
#include <stdlib.h>   
#include <string.h>   

int main(){
    
    // Declaración de variables
    int len;
    char palabra_1[20];      // Arreglo para almacenar la primera palabra
    char palabra_2[20];      // Arreglo para almacenar la segunda palabra
    char sustituto_1[20];    // Arreglo para almacenar la palabra sustituta

    // Solicitar al usuario ingresar la primera palabra
    printf("Ingresa la palabra 1: \n");
    scanf("%s", palabra_1);
    
    // Solicitar al usuario ingresar la segunda palabra
    printf("Ingresa la palabra 2: \n");
    scanf("%s", palabra_2);

    // Imprimir las palabras antes de la sustitución
    printf("Antes: \n");
    printf("palabra_1: %s\n", palabra_1);
    printf("palabra_2: %s\n", palabra_2);

    // Realizar la sustitución de palabras
    strcpy(sustituto_1, palabra_1);
    strcpy(palabra_1, palabra_2);
    strcpy(palabra_2, sustituto_1);

    // Imprimir las palabras después de la sustitución
    printf("Después: \n");
    printf("palabra_1: %s\n", palabra_1);
    printf("palabra_2: %s\n", palabra_2);

    printf("\n"); 
    return 0;     
}
