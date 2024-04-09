#include<stdio.h>
#include<stdlib.h>

int main(){
int papa = 50;
int hijo = 20;
int contador = 0;

while (papa != hijo * 2){
    contador++;
    papa ++;
    hijo ++;
}
printf("el hijo va a tener %d, el padre %d y pasaron %d años", hijo, papa, contador);


return 0;
}
