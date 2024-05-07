#include <stdio.h>    
#include <stdlib.h>  

int main() {
    int vector[20];    // Declaración de un vector de enteros con 20 elementos
    int i;             // Declaración de la variable de iteración
    float suma = 0.0;  // Inicialización de la variable para la suma de los elementos del vector
    float promedio;    // Declaración de la variable para almacenar el promedio
    long int prod = 1; // Inicialización de la variable para el producto de los elementos del vector

    // Bucle for para llenar el vector con valores consecutivos comenzando desde 3
    for (i = 0; i < 20; i++) {
        vector[i] = i + 3;  // Asignación de valores al vector
    }

    // Bucle for para sumar todos los elementos del vector
    for (i = 0; i < 20; i++) {
        suma += vector[i];  // Suma de los elementos del vector
    }

    // Cálculo del promedio
    promedio = suma / 20;

    // Bucle for para calcular el producto de todos los elementos del vector
    for (i = 0; i < 20; i++) {
        prod *= vector[i];  // Producto de los elementos del vector
    }

    // Impresión del promedio y del producto de los elementos del vector
    printf("El promedio es de %.2f\n", promedio);          // Imprime el promedio con dos decimales
    printf("La multiplicacion de los valores es %ld\n", prod);  // Imprime el producto

    printf("\n"); 

    return 0;  
}
