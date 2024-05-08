#include <stdio.h>

// Definición de la estructura atleta
struct atleta
{
    char deporte[100];   // Deporte del atleta
    char nombre[100];    // Nombre del atleta
    char pais[100];      // País del atleta
    int noMedallas;      // Número de medallas del atleta
};

// Función principal
int main(void)
{
    struct atleta atleta;  // Declaración de una variable de tipo atleta

    // Solicitar y leer el deporte del atleta
    printf("Ingrese el deporte del atleta: ");
    scanf("%s", atleta.deporte);

    // Solicitar y leer el nombre del atleta
    printf("Ingrese el nombre del atleta: ");
    scanf("%s", atleta.nombre);

    // Solicitar y leer el país del atleta
    printf("Ingrese el país del atleta: ");
    scanf("%s", atleta.pais);

    // Solicitar y leer el número de medallas del atleta
    printf("Ingrese el número de medallas del atleta: ");
    scanf("%d", &atleta.noMedallas);

    // Imprimir la información del atleta
    printf("\nInformación del atleta:\n");
    printf("Deporte: %s\n", atleta.deporte);
    printf("Nombre: %s\n", atleta.nombre);
    printf("País: %s\n", atleta.pais);
    printf("Número de medallas: %d\n", atleta.noMedallas);

    getchar();  // Consumir el carácter de nueva línea pendiente

    return 0;
}
