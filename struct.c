//construa um codigo em linguagem C ao qual o usu�rio consiga informar e armazenar
//em mem�ria os dados de 5 carros (marca, modelo, cor, ano modelo, ano fabricacao,
//combustivel (gasolina, etanol, flex, eletrico ou hibrido) e placa.

//O usu�rio dever� cadastrar os 5 veiculos e posteriormente informar�
//uma placa qualquer para que o sistema efetue uma busca sequencial nos dados,�
//apresentando todas as informa��es (se encontrar) ou a mensagem�
//"veiculos nao localizado"

//Necess�rio utiliza��o de estruturas homog�neas e/ou heterog�neas.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//--------------------------------------------
struct veiculo{
	char marca[5][15];
	char modelo[5][15];
	char cor[5][15];
	short int anomodel[5];
	short unsigned int anofabri[5];
	char combus[5][15];
	//combustivel est� inteiro porque a sele��o do tipo do combustivel ser� por um menu 
	//exemplo: 1 - gasolina 2 - etanol ... depois ser� feito um swtich case
	char placa[5][15];
	
};

	struct veiculo ve;
	
	char verplaca[15];
	short int verifica=10;
	short int ver2=0;

//--------------------------------------------
int main (){
	 short int cont;
	 for (cont=0; cont<5; cont++){
	 	printf("\nCarro %d\n", cont);
	 	printf("Marca do carro: ");
	 	fgets(ve.marca[cont],15, stdin);
		
		printf("Modelo do carro: ");
	 	fgets(ve.modelo[cont],15, stdin);
	
	 	printf("Cor do carro: ");
	 	fgets(ve.cor[cont],15, stdin);
		
		printf("Ano do modelo do carro: ");
	 	scanf("%d", &ve.anomodel[cont]);
	 	fflush(stdin);
	 	
	 	printf("Ano de fabrica��o do carro: ");
		scanf("%d", &ve.anofabri[cont]);
		fflush(stdin);
		
		printf("Combustivel: (Gasolina - Etanol - Flex - Eletrico - Hibrido) ");
	 	printf("\n Op��o: ");
		fgets(ve.combus[cont],15, stdin);
		printf("\n");
		
		printf("Placa do carro: ");
	 	fgets(ve.placa[cont],15, stdin);
		printf("\n");
		printf("------------------------------------");
	 }
	 
	 printf("Qual placa voce deseja verificar? ");
	 fgets(verplaca,15,stdin);
	 printf("\n");
	 

	 for (cont=0; cont<5; cont++){
	 	verifica=strcmp(ve.placa[cont], verplaca);
		 if( verifica==0 ){
		 	printf("Marca do carro: %s\n", ve.marca[cont]);
			
			printf("Modelo do carro: %s\n", ve.modelo[cont]);
		
		 	printf("Cor do carro: %s\n", ve.cor[cont]);
			
			printf("Ano do modelo do carro: %d\n",ve.anomodel[cont]);
		 	
		 	printf("Ano de fabrica��o do carro: %d\n",ve.anofabri[cont]);
			
			printf("Combustivel do ve�culo: %s\n", ve.combus[cont]);
			
			printf("Placa do carro: %s", ve.placa[cont]);
			printf("\n");
			printf("------------------------------------");
			ver2=1;
		}
	 }
	 if(ver2=0){
	 	printf("\nVeiculo nao localizado\n");
	 }
	system("pause");
	return 0;
 }


