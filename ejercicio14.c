#include <stdio.h>
#include <stdlib.h>

int main(){
      float a;
        scanf("%f", &a);
      if (a < 0){
        a = a * -1;
        printf ("el valor absoluto es %.2f", a);
      }
        else{
            printf("el valor absoluto es %.2f", a);
        }
       
    return 0;
}
