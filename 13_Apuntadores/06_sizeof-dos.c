#include <stdio.h>

int main() {
    // Declaración e inicialización de un arreglo de enteros con 10 elementos
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    // Obtención del tamaño total del arreglo en bytes y su asignación a la variable 'len'
    int len = sizeof(array) / sizeof(int);
    
    // Impresión del tamaño total del arreglo en bytes usando el especificador de formato %ld
    printf("Los bytes del arreglo son: %ld\n", sizeof(array));
    
    // Impresión del tamaño de un entero en bytes usando el especificador de formato %ld
    printf("Cada entero tiene: %ld bytes \n", sizeof(int));
    
    // Impresión del número de elementos en el arreglo
    printf("El arreglo tiene %d elementos\n", len);

    printf("\n");
    return 0;
}
