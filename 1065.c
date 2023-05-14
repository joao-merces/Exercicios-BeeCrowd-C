#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int n,contadorPar=0;

    for(int i=0;i<5;i++){
        scanf("%d",&n);

        if(n%2==0){
            contadorPar++;
        }
    }
    
    printf("%d valores pares\n",contadorPar);

    return 0;
}
