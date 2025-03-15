#include <stdio.h>

/*
3) Escreva um programa em linguagem C que solicite ao usu�rio um n�mero inteiro N (entre 5
e 20). Em seguida, utilize um la�o for para imprimir os n�meros de 0 at� N e de
N at� 0 simultaneamente.
*/

int main(){
	short int n;
	short int cont;
	//--------------------------------------------
	//Valida��o
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
	//impress�o crescente
	for(cont=0; cont<=n; cont++){
		printf("%d ", cont);
	}
	
	printf("\n");
	
	//impress�o descresente
	for(cont=n; cont>=0; cont--){
		printf("%d ", cont);
	}
	//--------------------------------------------
	return 0;
}
