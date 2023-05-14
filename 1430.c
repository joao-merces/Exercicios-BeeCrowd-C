#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calcValor(char notas){

    switch (notas){
    case 'W':
        return 1.0;
    case 'H':
        return 0.5;
    case 'Q':
        return 0.25;
    case 'E':
        return 0.125;
    case 'S':
        return 0.0625;
    case 'T':
        return 0.03125;
    case 'X':
        return 0.015625;
    }
}


int main(){

    char str[200];
    int resultado=0;
    double aux=0;

     while(scanf("%[^\n]\n", &str) != EOF){

        if(strcmp(str, "*")==0) break;

        resultado=0;
        aux=0;

        for(int k=0;k<strlen(str);k++){
            if(str[k]=='/'){
                if(aux==1){
                    ++resultado;
                }
                aux=0;
            }else{
                aux=aux+calcValor(str[k]);
            }
        }printf("%d\n", resultado);
    }
    return 0;
}

