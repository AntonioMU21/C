#include <stdio.h>
int main()
{
    int num, c, suma;
    c = 0;
    suma = 0;
    printf("Introduce un digito: ");
    do
    {
        scanf("%d", &num);
        if (num >= 0)
        {
            c++;
            suma = suma + num;
        }
        else
        {
            printf("Introduce numeros positivos");
        }
    } 
    while (num != 0);
    printf("El valor medio es: %d",suma);

    return 0;
}