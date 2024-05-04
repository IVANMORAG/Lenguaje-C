#include <stdio.h>

int main() {
    // Definir la variable para almacenar la cantidad de años
    int años = 20;

    // Calcular la cantidad total de segundos vividos asumiendo 365 días por año,
    // 24 horas por día, 60 minutos por hora y 60 segundos por minuto.
    int segundosVividos = años * 365 * 24 * 60 * 60;

    // Imprimir el resultado
    printf("Mis segundos vividos son = %d \n", segundosVividos);

    return 0;
}
