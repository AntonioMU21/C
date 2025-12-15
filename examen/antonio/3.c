#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *archivo;
    char buffer[512];
    char est[5], pkg[50], ver[50];

    archivo = popen("dpkg -l", "r");

    while (fgets(buffer, sizeof(buffer), archivo)) {
        if (strstr(buffer, argv[1])) {
            sscanf(buffer, "%s %s %s", est, pkg, ver);
            printf("%s instalado con version %s\n", pkg, ver);
            pclose(archivo);
            return 0;
        }
    }

    printf("Paquete no encontrado\n");
    pclose(archivo);
    return 0;
}
