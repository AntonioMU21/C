#include <stdio.h>
#define LONGITUD 5
int main(){
    int i;
    int v1[4]={1,2,3,4}, v2[4]={1,2,3,4},mul=0;
    int r=0;
    for ( i=0; i < 4; i++ ){
        mul=v1[i]*v2[i];
        r=r+mul;
        }
    printf("El resultado es %d \n",r);

    return 0;
}