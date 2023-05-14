#include <stdio.h>
#include <stdlib.h>

int main(){
    double A, B, C, aux;

    // printf("Insira os valores de A,B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    if(B>A){
        aux=B;
        B=A;
        A=aux;
    }
    if(C>A){
        aux=C;
        C=A;
        A=aux;
    }
    if(C>B){
        aux=C;
        C=B;
        B=aux;
    }

//========================================================================
//VE SE FORMA TRI
    if(A>=B+C){
        printf("NAO FORMA TRIANGULO\n");
    }

//VE SE FORMA TRIANGULO RET
    else if(A*A==B*B+C*C){
        printf("TRIANGULO RETANGULO\n");
    }

//VE SE FORMA TRI OBTUS
    else if(A*A>B*B+C*C){
        printf("TRIANGULO OBTUSANGULO\n");

        //VE SE TRI EQUI OU ISOSC
        if(A==B && B==C){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B || B==C || C==A){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

//VE SE FORMA TRI ACU
    else if(A*A<B*B+C*C){
        printf("TRIANGULO ACUTANGULO\n");

        //VE SE FORMA TRI EQUI OU ISOSC
        if(A==B && B==C){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B || B==C || C==A){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}