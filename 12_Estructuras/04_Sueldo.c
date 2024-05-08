#include <stdio.h>
#include <string.h>

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
    // Declaración de un arreglo de empleados con capacidad para 5 empleados
    struct empleado empleados[5];

    // Bucle para capturar la información de cada empleado
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Empleado %d:\n", i + 1);
        
        // Solicitar y leer el nombre del empleado de manera segura con fgets
        printf("Ingrese el nombre del empleado: ");
        fgets(empleados[i].nombre, sizeof(empleados[i].nombre), stdin);
        empleados[i].nombre[strcspn(empleados[i].nombre, "\n")] = '\0'; // Elimina el carácter de nueva línea
        
        // Solicitar y leer el sexo del empleado de manera segura con fgets
        printf("Ingrese el sexo del empleado: ");
        fgets(empleados[i].sexo, sizeof(empleados[i].sexo), stdin);
        empleados[i].sexo[strcspn(empleados[i].sexo, "\n")] = '\0'; // Elimina el carácter de nueva línea
        
        // Solicitar y leer el sueldo del empleado
        printf("Ingrese el sueldo del empleado: ");
        scanf("%d", &empleados[i].sueldo);
        getchar();  // Consumir el carácter de nueva línea pendiente
    }

    printf("\n");

    // Encontrar al empleado con el sueldo más bajo
    struct empleado menor_sueldo = empleados[0];
    for (int i = 1; i < 5; i++)
    {
        if (empleados[i].sueldo < menor_sueldo.sueldo)
        {
            menor_sueldo = empleados[i];
        }
    }

    // Imprimir la información del empleado con el sueldo más bajo
    printf("Empleado con el menor sueldo:\n");
    printf("Nombre: %s\n", menor_sueldo.nombre);
    printf("Sexo: %s\n", menor_sueldo.sexo);
    printf("Sueldo: %d\n", menor_sueldo.sueldo);

    getchar();  // Consumir el carácter de nueva línea pendiente

    return 0;
}
