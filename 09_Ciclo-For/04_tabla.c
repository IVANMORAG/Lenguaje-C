#include <stdio.h>  
#include <stdlib.h>   

int main()
{
    int suma = 0;  // Inicialización de la variable suma

    // Imprimir encabezado de la tabla
    printf("|A\t|A+2\t|A+4\t|A+6\t|\n");
    printf("_________________________________\n");

    // Bucle for para generar y mostrar los valores de la tabla
    for (int i = 0; i < 4; i++)
    {
        suma = suma + 3;  // Incremento de suma en 3 en cada iteración
        printf("|%d\t|%d\t|%d\t|%d\t|\n", suma, suma + 2, suma + 4, suma + 6);  // Impresión de los valores calculados
    }

    printf("\n");
    return 0;   
}
