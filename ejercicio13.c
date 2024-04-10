#include <stdio.h>
#include <stdlib.h>

int main(){
        float compra;
        scanf("%f", &compra);

        float precio_final= compra - (compra * 0.15);
        printf("su compra sera de %.2f pesos", precio_final);
    return 0;
}
