#include <stdio.h>

/*
2) Elabore um programa em linguagem C que
exiba os números de 1 a 10 em ordem crescente e, 
simultaneamente, os números de 20 a 11 em ordem decrescente.
*/

int main(){
	short int contcres;
	short int contdecres=0;
	for (contcres=1; contcres<=10; contcres++){
		printf("%d ", contcres);
	}
	printf("\n\n");
	for (contdecres=20; contdecres>10; contdecres--){
		printf("%d ", contdecres);
	}
	return 0;
}
