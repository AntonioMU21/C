#include <stdio.h>
#include <stdlib.h>
#define X 3
#define Y 3
int main()
{
    int matriz[X][Y];
    int i, j, n;
    for (i = 0; i < X; i++)
        for (j = 0; j < Y; j++)
        {
            printf("Introduce el elemento [%d,%d]", i, j);
            scanf("%d", &n);
            matriz[i][j] = n;
        }
    printf("############################# \n");

    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            printf("%d ", matriz[i, j]);
        }
        printf("\n");
    }
    return 0;
}