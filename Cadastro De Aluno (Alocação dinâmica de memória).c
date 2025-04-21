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
	int memoriaStack=0, memoriaHeap=0;
	printf("Quantos alunos voce deseja cadastrar? ");
	scanf("%d", &n);
	getchar();
	float *media;
	memoriaStack =  sizeof(n) + sizeof(i) + sizeof(i2) + sizeof(tam) + sizeof(ch) + sizeof(nomeTmp) + sizeof(ptr) + sizeof(media) + sizeof(temBuffer);
	media = malloc(n*sizeof(float));
	memoriaHeap += n*sizeof(float);
	
	if (media==NULL){
		printf("Erro ao alocar a memoria da media");
		return 1;
	}
	ptr = malloc(n*sizeof(struct Aluno));
	memoriaHeap += sizeof(struct Aluno);
	if(ptr==NULL){
		printf("Erro ao alocar memória das structs");
		return 1;
	}
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
		memoriaHeap += (tam+1) * sizeof(char);
		if(ptr[i].nome == NULL ){
			printf("Erro ao alocar a memoria do aluno %d", i+1);
			return 1;
		}
		strcpy(ptr[i].nome, nomeTmp);
		
		printf("Quantas notas deseja armazenar? ");
		scanf("%d", &ptr[i].qtdNotas);
		ptr[i].notas = malloc(ptr[i].qtdNotas*sizeof(float));
		memoriaHeap += ptr[i].qtdNotas*sizeof(float);
		if(ptr[i].notas==NULL){
			printf("Erro ao alocar a memoria da(s) nota(s) do aluno %d", i+1);
			return 1;
		}
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
	//liberando blocos alocados
	for (i=0; i<n; i++){
		free(ptr[i].nome);
		free(ptr[i].notas);
	}
	free(media);
	free(ptr);
	printf("Quantidades de bytes no stack: %d", memoriaStack);
	printf("Quantidades de bytes no heap: %d", memoriaHeap);
	return 0;
}
