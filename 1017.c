#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    float horas,kmH,tempoViajado;
    float litros;

    scanf("%f %f",&horas,&kmH);

    tempoViajado=horas*kmH;
    litros=tempoViajado/12;

    printf("%.3f\n",litros);

    return 0;
}
