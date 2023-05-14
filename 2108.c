#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char** argv){

    char frase[100],fraseAtual[100],maior[100];
    int maiorTamanho=0,tamanhoAtual=0,i;
    bool achou=false;

    while(true){
        scanf(" %[^\n]",frase);

        if (strcmp(frase, "0")==0){
            break;
        }

        tamanhoAtual=0;
        achou=false;

        for(i=0;i<=strlen(frase);i++){
            if(frase[i]==32 || i==strlen(frase)){
                if(tamanhoAtual>=maiorTamanho){
                    maiorTamanho=tamanhoAtual;
                    strcpy(maior,fraseAtual);
                    maior[maiorTamanho]='\0';
                }

                if(achou==true){
                    printf("-");
                }

                printf("%d",tamanhoAtual);
                tamanhoAtual=0;
                achou=true;
            }
            else{
                fraseAtual[tamanhoAtual++]=frase[i];
            }
        }
        printf("\n");

    }
    printf("\nThe biggest word: %s\n", maior);

    return 0;
}
