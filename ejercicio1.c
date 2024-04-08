#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if( a+b+c == 87){
        printf("Esta bien master");
    }
    else {
        int suma = a + b + c;
        printf("no es 87 master, es igual a %d", suma);
    }

    return 0;
}
