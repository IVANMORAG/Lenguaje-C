#include <stdio.h>

// Prototipo de la función factorial
int factorial(int n);

int main()
{
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    // Llamada a la función factorial con el número ingresado
    int resultado = factorial(n);

    // Impresión del resultado
    printf("El factorial de %d es: %d\n", n, resultado);

    return 0;
}

// Definición de la función factorial
int factorial(int n)
{
    // Caso base: Si n es 0, el factorial es 1
    if (n == 0)
    {
        return 1;
    }

    // Caso recursivo: Retorna n multiplicado por el factorial de n-1
    return n * factorial(n - 1);
}
