#include <stdio.h>
#include <math.h>
int main(){
    int num1, num2, num3;
printf("Introduce El primer digito: ");
    scanf("%lf",&num1);
printf("Introduce El segundo digito: ");
    scanf("%lf",&num2);
printf("Introduce El segundo digito: ");
    scanf("%lf",&num3);
    if (num1*num1 == (num2*num2 + num3*num3))
    {
        printf("Forman un triangulo rectangulo \n");
    }
    else{
        printf("No forman un triangulo rectangulo \n");
    }

    return 0;
}