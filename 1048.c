#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    float salario=0,reajuste=0;
    int porcent;

    scanf("%f",&salario);

    if(salario>=0 && salario<=400){
        
        reajuste = 15*salario/100;
        porcent = 15;
        salario = salario + reajuste;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salario,reajuste,porcent);
    }else{
        if(salario>400 && salario<=800){

            reajuste = 12*salario/100;
            porcent = 12;
            salario = salario + reajuste;

            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salario,reajuste,porcent);
        }
        else{
            if(salario>800 && salario<=1200){

                reajuste = 10*salario/100;
                porcent = 10;
                salario = salario + reajuste;

                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salario,reajuste,porcent);
            }
            else{
                if(salario>1200 && salario<=2000){

                    reajuste = 7*salario/100;
                    porcent = 7;
                    salario = salario + reajuste;

                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salario,reajuste,porcent);
                }
                else{
                    if(salario>2000){

                        reajuste = 4*salario/100;
                        porcent = 4;
                        salario = salario + reajuste;

                        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salario,reajuste,porcent);
                    }
                }
            }
        }
    }

    return 0;
}
