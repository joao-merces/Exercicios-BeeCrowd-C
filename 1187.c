#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

    double M[12][12];
    double soma=0,media;
    int linha,col,finalCol=10,comecoCol=1,contador=0;
    char operacao;

    scanf("%c",&operacao);
    //operacao[0]='M';

    for(linha=0;linha<12;linha++){
        for(col=0;col<12;col++){
            //M[linha][col]=rand()%100;
            scanf("%lf",&M[linha][col]);
        }
    }

    for(linha=0;linha<=4;linha++){
        for(col=comecoCol;col<=finalCol;col++){
            soma=soma+M[linha][col];
            contador++;
        }
    finalCol--;
    comecoCol++;
    }

    if(operacao=='S'){
        printf("%.1lf\n",soma);
    }
    else if(operacao=='M'){
        soma=soma/contador;
        printf("%.1lf\n",soma);
    }
    return 0;
}
