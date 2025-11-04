#include <stdio.h>
int main() //void-> funciones que no devuelven nada
{
    int a=0;
    int d;
    d=2*a;
    char caracter[20]="Hola mundo"; //es un array de 20 elementos //char caracter='A'->cogera lo que representa A en el codigo ASCII, en este caso mostrara 65
    printf("La variable vale %d \n y el doble caracter es: %c", a, caracter[0]);
    return 0;
}