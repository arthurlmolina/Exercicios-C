#include <stdio.h>
//---------------------------------------
void imprime(int vetor[], int tamanho){
	int cont;
	for (cont=0; cont<tamanho; cont++){
		printf("%d ", vetor[cont]);
	}
	printf("\n");
}
//---------------------------------------
void dobrar(int vetor[], int tamanho){
	int cont;
	for (cont=0; cont<tamanho; cont++){
		vetor[cont] = vetor[cont] * 2;
	}
}
//---------------------------------------
int main(){
	int vet[10] = {1,2,3,4,5,6,7,8,9,10};
	int tam = sizeof(vet)/sizeof(int);
	imprime(vet, tam);
	dobrar(vet, tam);
	imprime(vet, tam);
	return 0;
}
