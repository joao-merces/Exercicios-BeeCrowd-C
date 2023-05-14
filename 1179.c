/*
Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes
valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é
de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá
imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem
lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um
dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode
ser preenchido tantas vezes quantas for necessário.
*/



int main(int argc, char *argv[]){

    int par[5],impar[5];
    int n;
    int i=0,j=0,l=0;
    int cp=0,ci=0;

    for(i;i<15;i++){
        scanf("%d",&n);
        //n=("%d",rand()%100);

        if(n%2==0){
            par[cp]=n;
            cp++;

            if(cp==5){
                cp=0;

                for(j;j<5;j++){
                   printf("par[%d] = %d\n", j, par[j]);
                }
            }
        }else{
            impar[ci]=n;
            ci++;

            if(ci==5){
                ci=0;
                for(l;l<5;l++){
                    printf("impar[%d] = %d\n", l, impar[l]);
                }
            }
        }
    }

    for(i=0;i<ci;i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for(i=0;i<cp;i++){
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}

