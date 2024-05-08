#include <stdio.h>

// Definición de la estructura fraccion
struct fraccion
{
    int num; // Numerador
    int den; // Denominador
};

// Prototipos de las funciones
int suma(struct fraccion suma1, struct fraccion suma2);
int resta(struct fraccion resta1, struct fraccion resta2);
int multipli(struct fraccion mul1, struct fraccion mul2);
int division(struct fraccion div1, struct fraccion div2);

int main(void)
{
    // Declaración de dos estructuras fraccion
    struct fraccion frac1;
    struct fraccion frac2;

    // Inicialización de las fracciones
    frac1.den = 3;
    frac1.num = 4;
    frac2.den = 6;
    frac2.num = 2;

    // Llamada a las funciones para realizar las operaciones
    suma(frac1, frac2);
    resta(frac1, frac2);
    multipli(frac1, frac2);
    division(frac1, frac2);

    return 0;
}

// Función para realizar la suma de dos fracciones
int suma(struct fraccion suma1, struct fraccion suma2)
{
    int num = (suma2.den * suma1.num) + (suma1.den * suma2.num);
    int den = suma1.den * suma2.den;

    printf("Suma: %d / %d\n", num, den);

    return 0;
}

// Función para realizar la resta de dos fracciones
int resta(struct fraccion resta1, struct fraccion resta2)
{
    int num = (resta1.num * resta2.den) - (resta2.num * resta1.den);
    int den = resta1.den * resta2.den;

    printf("Resta: %d / %d\n", num, den);

    return 0;
}

// Función para realizar la multiplicación de dos fracciones
int multipli(struct fraccion mul1, struct fraccion mul2)
{
    int num = mul1.num * mul2.num;
    int den = mul1.den * mul2.den;

    printf("Multiplicación: %d / %d\n", num, den);

    return 0;
}

// Función para realizar la división de dos fracciones
int division(struct fraccion div1, struct fraccion div2)
{
    int num = div1.num * div2.den;
    int den = div1.den * div2.num;

    printf("División: %d / %d\n", num, den);

    return 0;
}
