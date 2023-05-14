#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]){
  
  int X;//km
  float Y,media;//litros

  //printf("Insira os km e os litros: \n");
  scanf("%d %f",&X, &Y);

  media=X/Y;

  printf("%.3f km/l\n",media);

  return 0;
}
