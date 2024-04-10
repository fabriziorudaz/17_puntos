#include <stdio.h>
#include <stdlib.h>

int main(){
    int hh, mm, ss;
    
    scanf("%d %d %d", &hh, &mm, &ss);

    int hh_s= hh*3600;
    int mm_s= mm*60;
    
    printf("tu tiempo de %d:%d:%d es igual a %d segundos", hh, mm, ss, hh_s+mm_s+ss);
    return 0;
}
