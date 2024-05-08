#include <stdio.h>   
#include <ctype.h>    

int main()
{
    // Declaración de variables
    char palabra[50];    // Arreglo para almacenar la palabra ingresada por el usuario
    int freq[26] = {0};  // Arreglo para almacenar las ocurrencias de cada letra del alfabeto

    // Solicitar al usuario ingresar una palabra
    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    // Calcular las ocurrencias de cada letra en la palabra
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        char c = tolower(palabra[i]);   // Convertir el carácter a minúscula
        if (c >= 'a' && c <= 'z')       // Verificar si el carácter es una letra minúscula
        {
            freq[c - 'a']++;            // Incrementar la frecuencia de la letra correspondiente en el arreglo 'freq'
        }
    }

    // Imprimir las ocurrencias de cada letra
    printf("Ocurrencias de cada letra:\n");
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", 'a' + i, freq[i]);    // Imprimir la letra correspondiente y su frecuencia
        }
    }

    return 0;  
}
