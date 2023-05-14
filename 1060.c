#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    float x;
    int contadorPar=0;

    for(int i=0;i<6;i++){
        scanf("%f",&x);

        if(x>0){
            contadorPar++;
        }
    }

    printf("%d valores positivos\n",contadorPar);

    return 0;
}
