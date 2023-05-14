#include <stdio.h>
#include <stdlib.h>

int main(){

    double raio,vol;

    scanf("%lf",&raio);

    vol=4/3.0*3.14159*(raio*raio*raio);

    printf("VOLUME = %.3lf\n",vol);
    return 0;
}
