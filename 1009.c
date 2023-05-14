#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[999];
    double salario=0,vendas=0,salarioFinal=0;

    //printf("Insira o nome do vendedor: \n");
    scanf("%s",nome);

    //printf("Insira o salario do vendedor: \n");
    scanf("%lf",&salario);

    //printf("Insira a quantidade de vendas do vendedor em R$: \n");
    scanf("%lf",&vendas);

    salarioFinal=((vendas/100)*15)+salario;

    printf("TOTAL = R$ %.2lf\n",salarioFinal);

    return 0;
}
