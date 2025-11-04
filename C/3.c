#include <stdio.h>
#include <string.h>
int main(){
    char nombre[20];
    char dni[9];
    printf("Introduce tu nombre: ");
    fgets(nombre,sizeof(nombre),stdin); //stdin coge la entrada del teclado
    printf("Introduce tu dni: "); //todas las variables con fget llevan un salto de linea al final
    fgets(dni, sizeof(dni),stdin);
    nombre[strcspn(nombre,"\n")] = '\0'; // devuelve el lugar que ocupa el caracter en esa cadena
    printf("Hola %s, tu dni es: %s",nombre,dni);
    return 0;
}
