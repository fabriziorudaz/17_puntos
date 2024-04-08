#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int promedio = (a+b+c) / 3;

    printf("la media de tres numeros es igual a %d", promedio);

    return 0;
}
