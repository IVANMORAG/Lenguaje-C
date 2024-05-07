// Inclusión de la bibliotecas
#include <stdio.h>    
#include <stdlib.h>  

int main() {
    // Declaración e inicialización de variables
    int descuento = 10;        // Descuento estándar
    int decuentoCliente = 20;  // Descuento para clientes
    int cliente = 1;           // Variable para indicar si el cliente tiene derecho a un descuento
    int z = 0;                 // Variable para almacenar el descuento aplicado

    // Asignación condicional del descuento basado en la condición del cliente
    z = (cliente) ? decuentoCliente : descuento;

    // Imprimir el descuento aplicado
    printf("El descuento es de %d\n", z);

    
    printf("Fin del programa");

    printf("\n");
    return 0;  // Devolver un valor de salida al sistema operativo
}
