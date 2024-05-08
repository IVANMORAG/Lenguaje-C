#include <stdio.h>

// Definición de la estructura empleado
struct empleado
{
    char nombre[100];  // Nombre del empleado
    char sexo[50];     // Sexo del empleado
    int sueldo;        // Sueldo del empleado
};

// Función principal
int main(void)
{
    struct empleado empleado;  // Declaración de una variable de tipo empleado

    // Solicitar y leer el nombre del empleado
    printf("Ingrese el nombre del empleado: ");
    scanf("%s", empleado.nombre);

    // Solicitar y leer el sexo del empleado
    printf("Ingrese el sexo del empleado: ");
    scanf("%s", empleado.sexo);

    // Solicitar y leer el sueldo del empleado
    printf("Ingrese el sueldo del empleado: ");
    scanf("%d", &empleado.sueldo);

    // Imprimir la información del empleado
    printf("\nInformacion del empleado:\n");
    printf("Nombre: %s\n", empleado.nombre);
    printf("Sexo: %s\n", empleado.sexo);
    printf("Sueldo: %d\n", empleado.sueldo);

    getchar();  // Consumir el carácter de nueva línea pendiente

    return 0;
}
