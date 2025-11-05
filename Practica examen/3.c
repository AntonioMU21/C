#include <stdio.h>
#define LONGITUD 4
int main()
{
    int i;
    int v[LONGITUD] = {1, 2, 3, 4}, f = 0;

    for (i = 0; i < 3; i++)
    {
            if (v[i] > v[i + 1])
            {
                f = 1;
                break;
        }
    }
    if (f == 0)
    {
        printf("Esta ordenado\n");
    }
    else
    {
        printf("No esta ordenado\n");
    }

    return 0;
}