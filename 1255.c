#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[200], alfabeto[27]={"abcdefghijklmnopqrstuvwxyz"};
    int N,x,y,k,frequencia[26], maior,tamanho;

    scanf("%d", &N);
    for(x=0; x<N; x++){

        for(y=0; y<26; y++){
            frequencia[y] = 0;
        }

        scanf(" %[^\n]", texto);
        tamanho = strlen(texto);

        for(y=0; y<tamanho; y++){
            for(k=0; k<26; k++){
                    if (texto[y] == alfabeto[k]|| texto[y]+32 == alfabeto[k]){
                        frequencia[k]++;
                    }
                    }
                }
        maior = frequencia[0];
        for(y=0; y<26; y++){
            if(frequencia[y] > maior){
                maior = frequencia[y];
            }
        }
        for(y=0; y<26; y++){
            if(frequencia[y] == maior){
                printf("%c", alfabeto[y]);
            }
        }

        printf("\n");
            }


    return 0;
}
