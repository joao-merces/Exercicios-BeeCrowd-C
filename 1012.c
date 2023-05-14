#include <stdio.h>
#include <stdlib.h>

int main(){

    double A,B,C;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);


    //area de triangulo retangulo
    double triangulo=A*C/2;

    //area circulo
    double circulo=3.14159*(C*C);

    //area trapezio
    double trapezio=(A+B)*C/2;

    //area quadrado
    double quadrado=(B*B);

    //area retangulo
    double retangulo=(A*B);


    printf("TRIANGULO: %.3lf\n",triangulo);
    printf("CIRCULO: %.3lf\n",circulo);
    printf("TRAPEZIO: %.3lf\n",trapezio);
    printf("QUADRADO: %.3lf\n",quadrado);
    printf("RETANGULO: %.3lf\n",retangulo);

    return 0;
}
