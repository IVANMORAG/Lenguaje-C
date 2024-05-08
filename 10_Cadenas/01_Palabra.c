#include <stdio.h>   
#include <stdlib.h>  

int main(){

    char cad[10];  // Declaración de un arreglo de caracteres llamado 'cad' con tamaño 10
    int i;         // Declaración de una variable de iteración

    // Solicitar al usuario ingresar una palabra
    printf("Introduce una palabra:\n");
    scanf("%s", cad);  // Leer la entrada del usuario y almacenarla en el arreglo 'cad'

    // Imprimir la palabra ingresada por el usuario
    printf("%s", cad);

    printf("\n");  
    return 0;  
}
