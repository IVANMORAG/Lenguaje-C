#include <stdio.h>
#include <string.h>

// Definición de la estructura "atleta"
struct atleta
{
    char deporte[50];       // Deporte del atleta
    char nombreAtleta[50];  // Nombre del atleta
    char pais[50];          // País de origen del atleta
    int nMedallas;          // Número de medallas del atleta
};

int main(void)
{
    // Declaración de un arreglo de estructuras atleta con capacidad para 10 atletas
    struct atleta atletaDiez[10];
    int maxMedallas = 0;    // Variable para almacenar el número máximo de medallas
    int indiceMaximo = 0;   // Índice del atleta con más medallas

    // Bucle para capturar la información de cada atleta
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("Nombre del atleta %d: ", (i + 1));
        scanf("%s", atletaDiez[i].nombreAtleta);
        printf("Deporte del atleta: ");
        scanf("%s", atletaDiez[i].deporte);
        printf("Ingresa el país de origen: ");
        scanf("%s", atletaDiez[i].pais);
        printf("Ingresa el número de medallas: ");
        scanf("%d", &atletaDiez[i].nMedallas);
        getchar();  // Consumir el carácter de nueva línea pendiente
    }

    // Bucle para encontrar al atleta con más medallas
    for (int i = 0; i < 10; i++)
    {
        if (atletaDiez[i].nMedallas > maxMedallas)
        {
            maxMedallas = atletaDiez[i].nMedallas;
            indiceMaximo = i;
        }
    }

    // Mostrar la información del atleta con más medallas
    printf("\nInformación del atleta con más medallas:\n");
    printf("Deporte: %s\n", atletaDiez[indiceMaximo].deporte);
    printf("Nombre: %s\n", atletaDiez[indiceMaximo].nombreAtleta);
    printf("País: %s\n", atletaDiez[indiceMaximo].pais);
    printf("Número de medallas: %d\n", atletaDiez[indiceMaximo].nMedallas);

    return 0;
}
