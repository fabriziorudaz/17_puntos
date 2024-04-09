#include<stdio.h>
#include<stdlib.h>

int main(){
  int capital;
  int aumento;
        scanf("%d", &capital);
        
aumento = capital * 0.02;

printf("en un mes su cuenta de ahorro seria de %d", capital + aumento);

return 0;
}
