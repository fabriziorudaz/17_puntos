#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int promedio = (a+b+c+d) / 4;
        if(promedio >= 6){
            printf("obtuvo una nota de %d, esta aprobado", promedio);
        }
        else if ( promedio >=8){
            printf("obtuvo una nota de %d, esta aprobado, FELICITACIONES ", promedio);
        }
        else if (promedio == 1){
            printf("obtuvo una nota de %d, esta desaprobado, Debes esforzarte mas", promedio);    
        }
        else {
             printf("obtuvo una nota de %d, esta desaprobado", promedio);
        }
        
    return 0;
}
