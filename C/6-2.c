#include <stdio.h>
#define LONGITUD 5
int main(){
    int i,n, maximo=0;
    int notas[LONGITUD];
    float suma=0, media;
    for ( i=0; i < LONGITUD; i++ ){
        printf("Introduce el elemento %d : ",i);
        scanf("%d", &n);
        notas[i]=n;
        suma=suma+n;
        if (n>maximo){
            maximo=n;
        }
    }
    media=suma/5;
    printf("La nota media es %.2f \n",media);
    printf("La nota maxima es %.d \n",maximo);
    return 0;
}