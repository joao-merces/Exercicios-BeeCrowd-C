#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){

    double a,b,c,delta;   

    scanf("%lf %lf %lf",&a,&b,&c);

    delta=(b*b)-4*a*c;

    if(delta<0 || a==0){
        printf("Impossivel calcular\n");
    }else{
        delta=sqrt(delta);
        printf("R1 = %.5lf\nR2 = %.5lf\n",((-b+delta)/(2*a)),((-b-delta)/(2*a)));
    }

    return 0;
}
