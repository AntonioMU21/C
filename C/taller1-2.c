#include <stdio.h>
int main(){
    int num, resultado;
printf("Introduce El numero: ");
    scanf("%lf",&num);
    resultado=num % 2;
    if (resultado == 0){
        printf("El numero %d es par \n", num);
    }
    else
    {
        printf("El numero %d es impar \n", num);
    }
    return 0;
}