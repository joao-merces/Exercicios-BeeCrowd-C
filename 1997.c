#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    char str1[1000]={},str2[1000]={};

    scanf("%d",&n);

    scanf("%s\n%s", str1, str2);

     if(n%2==0){
        if(!strcmp(str1, str2)!=0){
            printf("Deletion succeeded\n");
        }else{
            printf("Deletion failed\n");
        }
    }else{
        int i=0;

        for(i;i<strlen(str1);++i){
            if(str1[i]==str2[i]){
                printf("Deletion failed\n");
                break;
            }
        }
        if(i==strlen(str1)){
            printf("Deletion succeeded\n");
        }
    }

    return 0;
}

/*
n = leia_inteiro
a, b = leia_texto
c = se n mod 2 == 0 entao b senao b.mapeie(c => se c == '1' então '0' senão '1' fim) fim
se a == c então
    escreva "Deletion succeeded"
senão
    escreva "Deletion failed"
fim
*/
/*
else{
        int i=0;

        for(i;i<strlen(str1);i++){
            if(str1[i]==str2[i]){
                printf("Deletion failed\n");
                break
            }
        }
    }
*/
