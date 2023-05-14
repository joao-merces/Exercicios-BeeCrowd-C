#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int hora,segundo,minuto,n;
    int horaSegundo=3600;
    scanf("%d",&n);

    hora=(n/horaSegundo);
    minuto=(n-(horaSegundo*hora))/60;
    segundo=(n-(horaSegundo*hora)-(minuto*60));

    printf("%d:%d:%d\n",hora,minuto,segundo);

    return 0;
}
