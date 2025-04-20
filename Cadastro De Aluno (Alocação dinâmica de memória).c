#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
	char *nome;
	int qtdNotas;
	float *notas;
};

int main(){
	int n, i,i2, tam, ch;
	char nomeTmp[35];
	struct Aluno *ptr;
	int temBuffer;
	printf("Quantos alunos voce deseja cadastrar? ");
	scanf("%d", &n);
	getchar();
	float media[n];
	ptr = malloc(n*sizeof(struct Aluno));
	for(i=0; i<n; i++){
		printf("Cadastro aluno %d \n", i+1);
		printf("Nome: ");
		fgets(nomeTmp, 35, stdin);

		temBuffer = strchr(nomeTmp, '\n') == NULL;
		nomeTmp[strcspn(nomeTmp,"\n")]='\0';
		tam = strlen(nomeTmp);
		if (temBuffer){
			//limpar o buffer
			while(( ch = getchar()) != '\n' && ch != EOF );
		}
		ptr[i].nome = malloc((tam+1)*sizeof(char));
		strcpy(ptr[i].nome, nomeTmp);
		
		printf("Quantas notas deseja armazenar? ");
		scanf("%d", &ptr[i].qtdNotas);
		ptr[i].notas = malloc(ptr[i].qtdNotas*sizeof(float));
		media[i]=0;
		for (i2=0; i2<ptr[i].qtdNotas; i2++){
			printf("Nota %d: ", i2+1);
			scanf("%f", &ptr[i].notas[i2]);
			media[i] += ptr[i].notas[i2];
		}
		media[i] = media[i] / ptr[i].qtdNotas;
		getchar();
		printf("----------\n");
	}	
	for (i=0; i<n; i++){
		printf("----------\n");
		printf("Aluno %d\n", i+1);
		printf("Nome: %s\n", ptr[i].nome);
		printf("--Notas--\n");
		for (i2=0; i2<ptr[i].qtdNotas; i2++){
			printf("Nota %d: %.2f\n", i2+1, ptr[i].notas[i2]);
		}
		printf("Media das notas: %.2f\n", media[i]);
		
		printf("----------\n");
	}
	return 0;
}
