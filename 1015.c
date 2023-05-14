#include <stdio.h>
#include <stdlib.h>

int main(){
    double x1, x2,y1, y2;

    //printf("Insira os valores de x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);

    //printf("Insira os valores de x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    printf("%.4lf\n", sqrt(pow((x2-x1),2)+pow((y2-y1),2)));

    return 0;

}