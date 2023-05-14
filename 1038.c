#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int produto,qtde;
    float total;

    scanf("%d %d",&produto,&qtde);

    switch (produto)
    {
    case 1:
        total=qtde*4;
        printf("Total: R$ %.2f\n",total);
        break;
    
    case 2:
        total=qtde*4.5;
        printf("Total: R$ %.2f\n",total);
        break;
    
    case 3:
        total=qtde*5;
        printf("Total: R$ %.2f\n",total);
        break;

    case 4:
        total=qtde*2;
        printf("Total: R$ %.2f\n",total);
        break;
    
    case 5:
        total=qtde*1.5;
        printf("Total: R$ %.2f\n",total);
        break;

    default:
        break;
    }

    return 0;
}
