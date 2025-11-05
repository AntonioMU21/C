#include <stdio.h>
#define LONGITUD 10
int main()
{
    int i;
    int v[LONGITUD], f = 0;

    for (i = 0; i < LONGITUD; i++)
    {
        v[i]=i;       
    }
    for (i = 0; i < LONGITUD; i++) 
    {
        printf("%d ", v[i]);
    }
    return 0;
}