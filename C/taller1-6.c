#include <stdio.h>
#define LONGITUD 5
int main(){
    int i, n;
    int notas[LONGITUD];
    for (i=0; i < LONGITUD; i++){
        printf("Introduce el elemento %d : ",i);
        scanf("%d", &n);
        notas[i]=n;
    }
    printf("[");
    for (i=0; i < LONGITUD; i++){
        printf("%d" , notas[i]);
    }
    printf("%d\n" ,notas[4]);
    return 0;
}