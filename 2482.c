#include <stdio.h>
#include <string.h>

typedef struct{
	char lingua[50];
	char traducao[50];
} etiqueta;

int procuraTraducao(etiqueta *, char *, int tam);

int main (){

	int qtdeTraducoes, qtdeCriancas;
	char idioma[30], crianca[30];

	scanf("%d", &qtdeTraducoes);

	etiqueta etiquetas[qtdeTraducoes];

	for (int i=0; i<qtdeTraducoes; i++){
        //printf("Insira a linguagem: ");
		scanf(" %s", etiquetas[i].lingua);
        //printf("Insira a tradu��o de Feliz Natal: ");
		scanf(" %[^\n]", etiquetas[i].traducao);
	}

	scanf("%dd",&qtdeCriancas);

	for (int i=0; i<qtdeCriancas; i++){

        //printf("Insira o nome da crianca: ");
		scanf(" %[^\n]", crianca);
		//printf("Insira a lingua: ");
		scanf(" %s", idioma);

		printf("%s\n%s\n\n", crianca, etiquetas[procuraTraducao(etiquetas, idioma, qtdeTraducoes)].traducao);
	}
}

int procuraTraducao(etiqueta *etiquetas, char *idioma, int tam){

	for (int i=0; i<tam; i++)
		if (strcmp(etiquetas[i].lingua, idioma) == 0) return i;

}
