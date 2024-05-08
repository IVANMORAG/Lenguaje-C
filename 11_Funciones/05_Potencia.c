#include <stdio.h>

// Prototipo de la función
int potencia(int a, int b);

int main(void)
{
    int x, y, max;
    x = 2;
    y = 3;

    // Llamada a la función potencia
    max = potencia(x, y);
    
    // Impresión del resultado
    printf("La potencia es: %d\n", max);
    
    return 0;
}

// Definición de la función potencia
int potencia(int a, int b)
{
    // Caso base: Si b es menor que 1, retorna 1
    if (b < 1)
        return 1;
    
    // Caso recursivo: Retorna a multiplicado por la potencia de a con b-1
    return a * potencia(a, b - 1);
}
