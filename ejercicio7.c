#include<stdio.h>
#include<stdlib.h>

int main(){
  int hh, mm;
  char sufijo[3];
        scanf("%d %d", &hh, &mm);

  if (hh >= 12){
    sprintf(sufijo, "PM");
    if(hh > 12){
    hh -= 12;
    }
  }
  else{
   sprintf(sufijo, "AM");
    if(hh == 0){
    hh = 12;}
  }
  printf("la hora indica que es %d:%d %s", hh, mm, sufijo);

  return 0;
}
