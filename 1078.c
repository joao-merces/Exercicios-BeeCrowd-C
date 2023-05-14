#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int N;

    scanf("%d",&N);

    for(int i=1;i<11;i++){
        printf("%d x %d = %d\n",i,N,i*N);
    }

    return 0;
}
