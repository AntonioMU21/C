#include <stdio.h>
#include <string.h>
int main(){
    double num1, num2, resultado;
printf("Introduce El primer digito: ");
    scanf("%lf",&num1);
    printf("Introduce El segundo digito: ");
    scanf("%lf",&num2);
    resultado=(num1+num2)/2;
    printf("El resultado es %0.62f\n", resultado);
    return 0;
}