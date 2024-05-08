#include <stdio.h>

struct CD
{
    char titulo[100];
    char artista[50];
    int num_canciones;
    int anio;
    int precio;
};

int main(void)
{
    struct CD cd1;
    printf("Ingresa el titulo: ");
    fgets(cd1.titulo, sizeof(cd1.titulo), stdin);  // Se obtiene el título del CD
    printf("Ingresa el artista: ");
    fgets(cd1.artista, sizeof(cd1.artista), stdin);  // Se obtiene el nombre del artista o banda
    printf("Ingresa el numero de canciones del disco: ");
    scanf("%d", &cd1.num_canciones);
    printf("Ingresa el año de lanzamiento: ");
    scanf("%d", &cd1.anio);
    printf("Ingresa el precio del disco: ");
    scanf("%d", &cd1.precio);

    printf("************************************************\n");

    printf("Titulo: %s\n", cd1.titulo);
    printf("Artista: %s\n", cd1.artista);
    printf("No. Canciones: %d\n", cd1.num_canciones);
    printf("Año: %d\n", cd1.anio);
    printf("Precio: %d\n", cd1.precio);

    return 0;
}
