#include <stdio.h>    
#include <stdlib.h>  
#include <string.h>   

int main(){

    // Declaración de variables
    int res;                  // Variable para almacenar el resultado de la comparación de cadenas
    char palabra1[50];        // Arreglo para almacenar la primera palabra ingresada por el usuario
    char palabra2[50];        // Arreglo para almacenar la segunda palabra ingresada por el usuario

    // Solicitar al usuario ingresar la primera palabra
    printf("Ingresa una palabra: \n");
    scanf("%s", palabra1);
    
    // Solicitar al usuario ingresar la segunda palabra
    printf("Ingresa otra palabra: \n");
    scanf("%s", palabra2);

    // Comparar las dos palabras y almacenar el resultado en 'res'
    res = strcmp(palabra1, palabra2);
    
    // Verificar el resultado de la comparación y mostrar el mensaje apropiado
    if (res == 0)
    {
        printf("Las palabras son iguales \n");
    }
    else if (res > 0)
    {
        printf("La palabra %s es menor que la palabra %s", palabra1, palabra2);
    }
    else if (res < 0)
    {
        printf("La palabra %s es mayor que la palabra %s", palabra1, palabra2);
    }

  
    printf("\n");
    return 0; 
}
