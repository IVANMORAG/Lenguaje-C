//      Ejecutar con la siguiente linea:
//      gcc 04_Triangulo.c -o 04_Triangulo.out -lm

#include <stdio.h>   
#include <stdlib.h>  
#include <math.h>    // Incluye la biblioteca estándar de funciones matemáticas

// Declaración de la función para calcular el área de un triángulo
float areaTriangulo(float a, float b, float c);

// Función principal
int main()
{
    // Declaración de variables para almacenar los lados del triángulo y el área
    float lado1, lado2, lado3, area;

    // Solicita al usuario ingresar la longitud de cada lado del triángulo
    printf("Ingresa la longitud del lado 1 del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingresa la longitud del lado 2 del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingresa la longitud del lado 3 del triángulo: ");
    scanf("%f", &lado3);
    printf("\n");

    // Calcula el área del triángulo utilizando la función areaTriangulo
    area = areaTriangulo(lado1, lado2, lado3);

    // Imprime el resultado del área del triángulo
    printf("El área del triángulo es: %f unidades cuadradas", area);

    printf("\n");
    return 0;  // Devuelve un valor indicando que el programa se ha ejecutado correctamente
}

// Definición de la función para calcular el área de un triángulo
float areaTriangulo(float a, float b, float c)
{
    // Declaración de variables para el semiperímetro, el área y la raíz cuadrada
    float p, area, raizCuadrada;

    // Calcula el semiperímetro del triángulo
    p = (a + b + c) / 2;

    // Calcula el área utilizando la fórmula de Herón
    raizCuadrada = p * (p - a) * (p - b) * (p - c);
    area = sqrt(raizCuadrada);

    // Retorna el área calculada
    return area;
}
