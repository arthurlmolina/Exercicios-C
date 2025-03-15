#include <stdio.h>

/*
4) Desenvolva um programa em linguagem C
que solicite ao usu�rio um n�mero inteiro N (entre 10 e 50). Em seguida,
utilize um la�o for para percorrer os n�meros, onde:

A primeira vari�vel (i) deve ser
incrementada de 1 em 1.
A segunda vari�vel (j) deve ser
incrementada de 5 em 5.
O la�o deve continuar enquanto i for
menor ou igual a N e j for menor ou igual a 2 * N.
Ao final, o programa deve exibir o
tamanho em bytes das vari�veis utilizadas usando sizeof().
*/

int main(){
	short int n, i, j;
	j=0;
	//--------------------------------------------
	//Valida��o
	do{
		printf("Digite um numero entre 10 e 50: ");
		scanf("%d",&n);
		if(n<10 || n>50){
			printf("Numero invalido.\n");
		}
	}while(n<10 || n>50);
	//--------------------------------------------
	printf("\n");
	//--------------------------------------------
	for (i=0; i<=n && j<=(2*n) ;i++){
		printf("i = %d \nj = %d \n\n", i, j);
		j+=5;
	}
	printf("Tamanho em bytes da variavel j: %d \n", sizeof(n));
	printf("Tamanho em bytes da variavel i: %d \n", sizeof(i));
	printf("Tamanho em bytes da variavel j: %d \n", sizeof(j));
	//--------------------------------------------
	return 0;
}
