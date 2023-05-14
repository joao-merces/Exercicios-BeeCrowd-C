#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int n,contadorCem=0,contadorCinquenta=0,contadorVinte=0,contadorDez=0,contadorCinco=0,contadorDois=0,troco;

    scanf("%d",&n);

    troco=n;

    contadorCem=troco/100;
    troco=troco-(contadorCem*100);

    contadorCinquenta=troco/50;
    troco=troco-(contadorCinquenta*50);

    contadorVinte=troco/20;
    troco=troco-(contadorVinte*20);

    contadorDez=troco/10;
    troco=troco-(contadorDez*10);

    contadorCinco=troco/5;
    troco=troco-(contadorCinco*5);

    contadorDois=troco/2;
    troco=troco-(contadorDois*2);

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",n,contadorCem,contadorCinquenta,contadorVinte,contadorDez,contadorCinco,contadorDois,troco);

    return 0;
}
