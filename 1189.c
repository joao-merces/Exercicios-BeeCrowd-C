#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

    double M[12][12];
    double soma=0,media;
    int linha,col,finalCol=4,comecoCol=0,contador=0;
    char operacao;

    scanf("%c",&operacao);
    //operacao[0]='M';

    for(linha=0;linha<12;linha++){
        for(col=0;col<12;col++){
            //M[linha][col]=rand()%100;
            scanf("%lf",&M[linha][col]);
        }
    }

    for(linha=1;linha<=10;linha++){
        if(linha<6){
            for(col=comecoCol;col<linha;col++){
                soma=soma+M[linha][col];
            }
        }else{
            for(col=comecoCol;col<11-linha;col++){
                soma=soma+M[linha][col];
            }
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
