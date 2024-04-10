#include <stdio.h>
#include <stdlib.h>

int main(){
   float men, women;
   scanf("%f %f", &men, &women);
    float porW = (women /(women + men))* 100;
    float porM = (men /(women + men))* 100;

    printf("el porcentaje de hombres es de %.2f y son en total %.f\n", porM , men);
    printf("el porcentaje de mujeres es de %.2f y son en total %.f", porW, women);

    return 0;
}
