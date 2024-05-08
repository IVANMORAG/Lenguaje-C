#include <stdio.h>  
#include <stdlib.h>   
#include <string.h>   

int main(){
    // Declaración de variables
    char palabra1[50];    // Arreglo para almacenar la primera palabra
    char palabra2[50];    // Arreglo para almacenar la segunda palabra
    int len;              // Variable para almacenar la longitud de la primera palabra

    // Solicitar al usuario ingresar la primera palabra
    printf("Ingresa una palabra: \n");
    scanf("%s", palabra1);
    
    // Solicitar al usuario ingresar la segunda palabra
    printf("Ingresa una segunda palabra: \n");
    scanf("%s", palabra2);

    // Calcular la longitud de la primera palabra
    len = strlen(palabra1);

    // Concatenar la segunda palabra a la primera palabra 'len' veces
    for (int i = 0; i < len; i++)
    {
        strcat(palabra1, palabra2);
    }

    // Imprimir la palabra resultante
    printf("destino: %s", palabra1);

   
    printf("\n");
    return 0;  
}
