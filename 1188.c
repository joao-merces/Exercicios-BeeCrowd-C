#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

    double M[12][12];
    double soma=0,media;
    int linha,col,finalCol=11,comecoCol=1,contador=0;
    char operacao;

    scanf("%c",&operacao);
    //operacao='M';

    for(linha=0;linha<12;linha++){
        for(col=0;col<12;col++){
            //M[linha][col]=rand()%100;
            scanf("%lf",&M[linha][col]);
        }
    }

    for(linha=7;linha<=11;linha++){
        for(col=11-linha+1;col<=linha-1;col++){
            soma=soma+M[linha][col];
        }
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
