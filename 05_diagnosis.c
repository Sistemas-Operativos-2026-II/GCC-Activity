#include <stdio.h>

int main(void) {
    int alumnos = 20;
    int grupos = 4;
    int promedio;

    promedio = alumnos / grupos;

    printf("Hay %d alumnos en promedio por grupo\n", promedio);
    printf("Total de alumnos: %s\n", alumnos);

    return 0;
}
