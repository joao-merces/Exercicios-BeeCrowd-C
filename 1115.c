#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int x,y,ativador=1;

    while(ativador==1){
        scanf("%d %d", &x, &y);

        if(x==0 || y==0){
            ativador=0;
            break;
        }
        else{
            if(x>0 && y>0){
                printf("primeiro\n");
            }
            else{
                if(x<0 && y>0){
                    printf("segundo\n");
                }
                else{
                    if(x<0 && y<0){
                        printf("terceiro\n");
                    }
                    else{
                        printf("quarto\n");
                    }
                }
            }
        }
    }

    return 0;
}
