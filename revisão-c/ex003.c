#include <stdio.h>

/*
3) Escreva um programa em linguagem C que solicite ao usuário um número inteiro N (entre 5
e 20). Em seguida, utilize um laço for para imprimir os números de 0 até N e de
N até 0 simultaneamente.
*/

int main(){
	short int n;
	short int cont;
	//--------------------------------------------
	//Validação
	do{
		printf("Digite um numero entre 5 e 20: ");
		scanf("%d",&n);
		if(n<5 || n>20){
			printf("Numero invalido.\n");
		}
	}while(n<5 || n>20);
	//--------------------------------------------
	printf("\n");
	//--------------------------------------------
	//impressão crescente
	for(cont=0; cont<=n; cont++){
		printf("%d ", cont);
	}
	
	printf("\n");
	
	//impressão descresente
	for(cont=n; cont>=0; cont--){
		printf("%d ", cont);
	}
	//--------------------------------------------
	return 0;
}
