#include <stdio.h>
#include <stdlib.h>

int main(){

    int numFunc,horas;
    double salario=0,salarioHora=0;

    scanf("%d",&numFunc);

    scanf("%d",&horas);

    scanf("%lf",&salarioHora);

    salario=(horas*salarioHora);

    printf("NUMBER = %d\n",numFunc);
    printf("SALARY = U$ %.2f\n",salario);

    return 0;
}
