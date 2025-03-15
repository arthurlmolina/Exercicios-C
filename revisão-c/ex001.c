#include <stdio.h>

/*
1) Um grupo de amigos resolve fazer uma ação beneficente para 
arrecadar dinheiro com intuito de ajudar o João que teve seu PC 
avariado em uma enchente, bem como muitos outros eletrônicos.
Serão aceitas doações de no máximo 100 pessoas ou até que o valor 
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
