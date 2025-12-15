#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *archivo;
    char buffer[256];
    int total = 0;

    archivo = popen("ps -e -o user", "r");

    while (fgets(buffer, sizeof(buffer), archivo) != NULL) {
        if (strstr(buffer, "root") != NULL) {
            total++;
        }
    }

    printf("Numero de procesos root: %d\n", total - 1);

    pclose(archivo);
    return 0;
}
