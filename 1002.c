#include <stdio.h>
#include <stdlib.h>

int main(){

    double raio,area;

    //printf("Insira o valor do raio: ");
    scanf("%lf",&raio);

    area=3.14159*pow(raio,2);

    printf("A=%.4lf\n",area);

    return 0;
}