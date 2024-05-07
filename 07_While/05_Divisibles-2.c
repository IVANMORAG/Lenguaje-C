#include <stdio.h>  

int main() {
    int i;  // Declaración de la variable de iteración

    // Bucle for para generar y mostrar los números divisibles por 3
    printf("Números divisibles entre 3 mayores a 0 y menores a mil: \n");
    for (i = 1; i < 1000; i++) {  // Iterar desde 1 hasta 999
        if (i % 3 == 0) {  // Verificar si el número es divisible por 3
            printf("%d, ", i);  // Imprimir el número si es divisible por 3
        }
    }
    printf("\n");  // Imprimir una nueva línea al final

    // Bucle for para generar y mostrar los números divisibles por 2 y 7
    printf("Números divisibles entre 2 y 7 mayores a 0 y menores a mil: \n");
    for (i = 1; i < 1000; i++) {  // Iterar desde 1 hasta 999
        if (i % 2 == 0 && i % 7 == 0) {  // Verificar si el número es divisible por 2 y 7
            printf("%d, ", i);  // Imprimir el número si cumple la condición
        }
    }
    printf("\n");  

    // Bucle for para generar y mostrar enteros positivos menores que 100 no divisibles por 7
    printf("Enteros positivos menores que 100 no divisibles por 7: \n");
    for (i = 1; i < 100; i++) {  // Iterar desde 1 hasta 99
        if (i % 7 != 0) {  // Verificar si el número no es divisible por 7
            printf("%d, ", i);  // Imprimir el número si no es divisible por 7
        }
    }
    printf("\n");
    return 0;
}
