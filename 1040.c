#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    double n1,n2,n3,n4,media,notaExame;

    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    media=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    if(media>=7){
        printf("Media: %.1lf\nAluno aprovado.\n",media);
    }
    if(media<5){
        printf("Media: %.1lf\nAluno reprovado.\n",media);
    }
    if(media>=5 && media<7){
        printf("Media: %.1lf\nAluno em exame.\n",media);
        scanf("%lf",&notaExame);
        printf("Nota do exame: %.1lf\n",notaExame);

        if((media+notaExame)/2>5){
            printf("Aluno aprovado.\nMedia final: %.1lf\n",((media+notaExame)/2));
        }else{
            printf("Aluno reprovado.\nMedia final: %.1lf\n",((media+notaExame)/2));
        }
    }

    return 0;
}
