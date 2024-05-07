#include <stdio.h>   
#include <stdlib.h>   

int main()
{
    int m = 0;  // Declaración e inicialización de la variable m
    int n = 0;  // Declaración e inicialización de la variable n

    // Solicitar al usuario ingresar un valor para m
    printf("Ingresa un valor para m: \n");
    scanf("%d", &m);

    // Solicitar al usuario ingresar un valor para n
    printf("\nIngresa un valor para n: \n");
    scanf("%d", &n);

    // Bucle externo para generar las filas de la tabla de multiplicación
    for (int i = 1; i <= m; i++)
    {
        // Bucle interno para generar las columnas de la tabla de multiplicación
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", i * j);  // Imprimir el producto de i y j, seguido de un tabulador
        }
        printf("\n");  // Nueva línea después de cada fila
    }

    return 0;   
}
