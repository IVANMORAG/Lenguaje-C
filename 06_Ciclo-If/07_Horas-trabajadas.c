#include <stdio.h>    // Entrada y salida estándar
#include <stdlib.h>   // Funciones de utilidad estándar

int main() {
    // Declaración de variables
    float horasSemanales;  // Horas trabajadas por semana
    float precioHora = 8;  // Precio por hora de trabajo
    float salario;         // Salario calculado

    // Solicitar al usuario ingresar las horas semanales trabajadas
    printf("Ingrese las horas semanales trabajadas: \n");
    scanf("%f", &horasSemanales);  // Leer las horas ingresadas por el usuario

    // Calcular el salario basado en las horas trabajadas
    if (horasSemanales <= 40) {
        salario = horasSemanales * precioHora;  // Calcular salario sin horas extras
        printf("El salario es de %f pesos\n", salario);  // Imprimir salario
    } else {
        // Calcular salario con horas extras (1.5 veces el precio por hora)
        salario = (40 * precioHora) + (precioHora * 1.5 * (horasSemanales - 40));
        printf("El sueldo es de %f pesos\n", salario);  // Imprimir salario con horas extras
    }

    return 0;  // Salida del programa
}
