#include <stdio.h>
#include <string.h>   

int main()
{
    // Declaración de variables
    char palabra[100];    // Arreglo para almacenar la palabra ingresada por el usuario
    int longitud, palindromo = 1;    // Variable para almacenar la longitud de la palabra y para indicar si es palíndromo

    // Solicitar al usuario ingresar una palabra
    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    // Calcular la longitud de la palabra ingresada
    longitud = strlen(palabra);

    // Comprobar si la palabra es un palíndromo
    for (int i = 0; i < longitud / 2; i++)
    {
        if (palabra[i] != palabra[longitud - i - 1])
        {
            palindromo = 0;
            break;
        }
    }

    // Mostrar el resultado
    if (palindromo)
    {
        printf("%s es un palíndromo\n", palabra);
    }
    else
    {
        printf("%s no es un palíndromo\n", palabra);
    }

    printf("\n");
    return 0; 
}
