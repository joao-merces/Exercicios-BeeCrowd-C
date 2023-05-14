#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]){
  
  int entrada[5];
  int contadorPar=0,contadorImpar=0,contadorNeg=0,contadorPos=0;

  //printf("Insira os valores: \n");
  
  for(int i=0;i<5;i++){
    scanf("%d",&entrada[i]);
  }

  for(int i=0;i<5;i++){
    if(entrada[i]%2==0){
      contadorPar++;
    }

    if(entrada[i]%2!=0){
      contadorImpar++;
    }

    if(entrada[i]>0){
      contadorPos++;
    }

    if(entrada[i]<0){
      contadorNeg++;
    }
  }

  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",contadorPar,contadorImpar,contadorPos,contadorNeg);

  return 0;
}
