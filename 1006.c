#include <stdio.h>
#include <stdlib.h>

int main(){

    double A,B,C,MEDIA;

    //printf("Insira a nota A: ");
    scanf("%lf",&A);

    //printf("Insira a nota B: ");
    scanf("%lf",&B);

    //printf("Insira a nota C: ");
    scanf("%lf",&C);

    A=2*A;
    B=3*B;
    C=5*C;

    MEDIA=(A+B+C);
    MEDIA=MEDIA/10;

    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;
}
