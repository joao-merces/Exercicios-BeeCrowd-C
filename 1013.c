#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
    
    int a,b,c,maiorAB;

    //printf("Insira os valores de A,B e C: ");
    scanf("%d %d %d",&a,&b,&c);

    maiorAB = (a+b+abs(a-b))/2;

    if(maiorAB>c){
        printf("%d eh o maior\n",maiorAB);
    }else{
        printf("%d eh o maior\n",c);
    }
    
    return 0;
}
