#include <stdio.h>

void imprimirVet(int vetor[], int tam){
	int cont;
	for(cont=0; cont<tam; cont++){
		printf("%d ", *(vetor+cont));
    }
}

void dobrarVet(int vetor[], int tam){
	int cont;
	for(cont=0; cont<tam; cont++){
		*(vetor+cont) = *(vetor+cont) * 2;
	}
}

int main(){
	int vet[5] = {1,2,3,4,5};
	int tam = sizeof(vet) / sizeof(int);
	imprimirVet(vet, tam);
	dobrar(vet);
	imprimirVet(vet, tam);
	return 0;
}
