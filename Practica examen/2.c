#include <stdio.h>
#define LONGITUD 5
int main(){
    int i;
    int v1[4]={1,4,3,4}, v2[4]={1,2,3,4},f=0;
    
    for ( i=0; i < 4; i++ ){

            if (v1[i]!=v2[i]){
                f=1;
                break;
            }
        }
        if(f==0){
            printf("Es igual\n");
        }
        else
        {
            printf("Es distinto\n");
        }

    return 0;
}