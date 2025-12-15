#include <stdio.h>

int main() {
    FILE *f;
    float num;
    float total = 0;
    int n = 0;

    f = fopen("notas.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir el fichero\n");
        return 1;
    }

    while (fscanf(f, "%f", &num) != EOF) {
        total += num;
        n++;
    }

    printf("Media del alumno: %f\n", total / n);

    fclose(f);
    return 0;
}
