#include <stdio.h>
#include <stdlib.h>

struct Data{
	int dia, mes, ano;
};
	
imprimeData(struct Data *ptr){
	printf("%d/%d/%d\n", ptr->dia, ptr->mes, ptr->ano);
}

int main(){
	struct Data pessoa1;
	pessoa1.dia = 20;
	pessoa1.mes = 11;
	pessoa1.ano = 2006;
	
	struct Data *ptr_pes1;
	ptr_pes1 = &pessoa1;
	
	imprimeData(ptr_pes1);	 
	//-------------------------------------------
	struct Data pessoa2;
	pessoa2.dia = 01;
	pessoa2.mes = 01;
	pessoa2.ano = 2001;
	
	struct Data *ptr_pes2;
	ptr_pes2 = &pessoa2;
	
	imprimeData(ptr_pes2);
	
	return 0;
}

