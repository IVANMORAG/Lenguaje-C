#include <stdio.h>   
#include <stdlib.h>   

// Declaración de la función maximo
int maximo(int num1, int num2);

int main(){

    // Declaración de variables locales
    int num1, num2, mayor;

    // Solicitar al usuario ingresar dos números
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    // Llamar a la función maximo y asignar el resultado a la variable 'mayor'
    mayor = maximo(num1, num2);

    // Determinar e imprimir el resultado
    if (mayor == 0)
    {
        printf("Los numeros son iguales\n");
    }
    else
    {
        printf("El numero mayor es: %d\n", mayor);
    }

    printf("\n");
    return 0; 
}

// Definición de la función maximo
int maximo(int num1, int num2)
{
    // Comprobar si num1 es mayor que num2
    if (num1 > num2)
    {
        return num1;  // Devolver num1 si es mayor
    }
    // Comprobar si num1 es igual a num2
    else if (num1 == num2)
    {
        return 0;     // Devolver 0 si son iguales
    }
    else
    {
        return num2;  // Devolver num2 si num1 no es mayor ni igual a num2
    }
}
