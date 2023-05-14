#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){

    float N;

    //printf("Insira o valor de N: ");
    scanf("%f",&N);

    N=(round(N*100));

    //Notas
    int cem=0,cinquenta=0,vinte=0,dez=0,cinco=0,dois=0;


    //Moedas
    int moeda100=0,moeda50=0,moeda25=0,moeda10=0,moeda5=0,moeda1=0;


    //Notas
    while(N>=100*100){
        N-=100*100;
        cem+=1;
    }

    while(N>=50*100){
        N-=50*100;
        cinquenta+=1;
    }

    while(N>=20*100){
        N-=20*100;
        vinte+=1;
    }

    while(N>=10*100){
        N-=10*100;
        dez+=1;
    }

    while(N>=5*100){
        N-=5*100;
        cinco+=1;
    }

    while(N>=2*100){
        N-=2*100;
        dois+=1;
    }

    //Moedas
    while(N>=100){
        N-=100;
        moeda100+=1;
    }

    while(N>=50){
        N-=50;
        moeda50+=1;
    }

    while(N>=25){
        N-=25;
        moeda25+=1;
    }

    while(N>=10){
        N-=10;
        moeda10+=1;
    }

    while(N>=5){
        N-=5;
        moeda5+=1;
    }

    while(N>=1){
        N-=1;
        moeda1+=1;
    }

    //NOTAS
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
    printf("%d nota(s) de R$ 20.00\n",vinte);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda100);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1);


    return 0;
}