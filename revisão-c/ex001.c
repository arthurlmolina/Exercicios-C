#include <stdio.h>

/*
1) Um grupo de amigos resolve fazer uma a��o beneficente para 
arrecadar dinheiro com intuito de ajudar o Jo�o que teve seu PC 
avariado em uma enchente, bem como muitos outros eletr�nicos.
Ser�o aceitas doa��es de no m�ximo 100 pessoas ou at� que o valor 
total arrecadado seja igual ou superior a R$ 7.500,00.
*/

int main(){
	float doacao, total=0;
	short unsigned int cont=1;
	while (cont<=100 && total<7500){
		printf("Pessoa %d, valor a doar: ",cont);	
		scanf("%f", &doacao);
		total+=doacao;
		cont++;
	}
	printf("\nMedia das doacoes recebidas: %.2f", total/(cont-1));
	return 0;
}
