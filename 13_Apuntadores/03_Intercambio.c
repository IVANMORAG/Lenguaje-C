#include <stdio.h>
#include <stdlib.h>

int *p, y;

void intercambio(int *a, int *b)
{
    int temp;

    temp = *b;   // Almacena el valor apuntado por 'b' en 'temp'
    *b = *a;     // Asigna el valor apuntado por 'a' al lugar apuntado por 'b'
    *a = temp;   // Asigna el valor almacenado en 'temp' al lugar apuntado por 'a'
}

int main()
{
    int x = 2;   // Declara e inicializa la variable 'x' con el valor '2'
    int y = 5;   // Declara e inicializa la variable 'y' con el valor '5'

    printf("Antes   x = %d, y = %d\n", x, y);  // Imprime los valores de 'x' e 'y' antes del intercambio
    intercambio(&x, &y);                       // Llama a la función 'intercambio' pasando las direcciones de memoria de 'x' e 'y'
    printf("Despues x = %d, y = %d\n", x, y);   // Imprime los valores de 'x' e 'y' después del intercambio

    return 0;
}
