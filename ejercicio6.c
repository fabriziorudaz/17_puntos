#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;

   scanf("%d", &a);

        if(a <= 202){
            printf("tu sueldo es de %d", a); 
        }
        else if(a > 202 && a <= 607){
           int  porcentaje = a * 0.05;
            printf("tu sueldo es de %d", a + porcentaje);
        }
        else if(a > 607 && a <= 1013){
           int  porcentaje = a * 0.1;
            printf("tu sueldo es de %d", a + porcentaje);
        }
        else if(a > 1013 && a <= 1418){
            int porcentaje = a * 0.15;
            printf("tu sueldo es de %d", a + porcentaje); 
        }
        else {
            int porcentaje = a * 0.25;
            printf("tu sueldo es de %d", a + porcentaje);
        }
        
    return 0;
}
