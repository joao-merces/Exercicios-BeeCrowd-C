#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int N;
    int i,j;
    int length1,length2,length;
    char a[100],b[100];

    //printf("Insira a quantidade de testes: \n");
    scanf("%d",&N);

    //printf("Insira a string A e a string B: \n");

    for(i=0;i<N;i++){
        scanf("%s %s",a,b);
        length1=strlen(a);
        length2=strlen(b);

        if(length1>=length2){
            length=length1;
        }else{
            length=length2;
        }

        for(j=0;j<length;j++){
           if(j<length1){
            printf("%c",a[j]);
           }

           if(j<length2){
            printf("%c",b[j]);
           }
        }
        printf("\n");
    }

    return 0;
}
