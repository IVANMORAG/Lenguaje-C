#include <stdio.h>
#include <stdlib.h>

int *p, y; // Se declara un puntero a entero llamado 'p' y una variable entera llamada 'y'.

void func() {
    int x = 40; // Se declara una variable entera 'x' y se le asigna el valor 40.
    p = &x; // El puntero 'p' se asigna para apuntar a la dirección de memoria de 'x'.
    y = *p; // El valor de 'y' se establece como el valor al que apunta 'p', que es 'x'.
    *p = 23; // El valor al que apunta 'p', es decir, 'x', se cambia a 23.
}

int main() {
    func(); // Se llama a la función 'func()' que inicializa 'p' y actualiza 'y' y el valor de 'x'.
    y = *p; // Se actualiza 'y' como el valor de 'x' después de la ejecución de 'func()'.
    *p = 25; // Se actualiza el valor de 'x' a 25.
    printf("El valor de 'y' es: %d\nEl valor de '*p' es: %d\nEl valor de 'p' es: %p", y, *p, p); // Se imprime el valor de 'y', el valor al que apunta 'p', y la dirección almacenada en 'p'.
    printf("\n");
    return 0;
}
