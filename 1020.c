#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main (int argc, char *argv[]){
  
  int dias,contadorAno=0,contadorMes=0,contadorDia=0;

  printf("Insira o número de dias: \n");
  scanf("%d",&dias);

  contadorAno=dias/365;
  contadorMes=(dias%365)/30;
  contadorDia=(dias%365)%30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",contadorAno,contadorMes,contadorDia);

  return 0;
}
