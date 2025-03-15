//1) Conclua o programa abaixo onde a estrutura deverá possuir:
//nome
//telefone
//email
//cpf
//
//Crie um vetor (de tamanho3) onde serao armazenados os dados de 3 pessoas (solicitar ao usuario)
//
//Posteriormente, crie variáveis de ponteiro (uma para cada variável) e posteriormente atribua o valor 10 para a variável x.
//Em seguida, a variável y deverá possuir o dobro da variável x, variável z deverá possuir o possuir 10 vezes o valor de y, subtraindo o valor 20 do valor final.
//O valor atribuído para a variável Z deverá vir através de seu ponteiro.

//A variável w receberá o terceiro caractere do segundo nome do vetor.

//A variável k deverá receber a metade do valor da variável ao qual z está apontando.


//A variável n deverá receber apenas 32,5% do valor atribuído a soma das variáveis x e y, mas os valores deverão vir de seus respectivos ponteiros.


//Ao usuário:
//Mostre o valor de cada variável, bem como seu endereço de memória

//Mostre o valor de cada ponteiro, bem como o seu endereço de memória

//Mostre o endereço de memória que cada ponteiro aponta

//Mostre o consumo em bytes de cada variável, ponteiro e estrutura.

#include <stdio.h>
#include <stdlib.h>
int main() {
  struct pessoa{
    char nome[3][50];
    char tel[3][15];
    char email[3][50];
    char cpf[3][20];
  };

  struct pessoa pes;
  
  int x=10,y=20,z;
  char w;
  float k;
  double n;
  
  int *px,*py,*pz;
  char *pw;
  float *pk;
  double *pn;  
  
  px=&x;
  py=&y;
  pz=&z;
  pw=&w;
  pk=&k;
  pn=&n; 
  
    
  
  *pz=180;
	
  *pn=*px+*py;
  *pn=((*pn*32.5)/100);	
  k=*pz;
  k=k/2;
  
  int cont;
  
  for (cont=0; cont<3; cont++){
  	printf("Pessoa %d\n", cont+1);
  		printf("Nome: ");
  		fgets(pes.nome[cont], 50, stdin);

  		printf("Telefone: ");
  		fgets(pes.tel[cont], 15, stdin);

		printf("Email: ");
  		fgets(pes.email[cont], 50, stdin);

  		printf("CPF: ");
  		fgets(pes.cpf[cont], 20, stdin);

  		printf("--------------------\n");
  }
  
  w=pes.nome[1][2];
  
  
  for (cont=0; cont<3; cont++){
  	printf("Pessoa %d\n", cont+1);
  		printf("Nome: %s\n", pes.nome[cont]);
  		printf("Endereco de memoria de nome: %p \n\n", &pes.nome[cont]);
  		printf("Consumo em bytes da variavel: %d\n", sizeof(pes.nome[cont]));
  		
  		printf("Telefone: %s", pes.tel[cont]);
  		printf("Endereco de memoria de telefone: %p \n\n", &pes.tel[cont]);
  		printf("Consumo em bytes da variavel: %d\n", sizeof(pes.tel[cont]));
  		
		printf("Email: %s", pes.email[cont]);
  		printf("Endereco de memoria de email: %p \n\n", &pes.email[cont]);
  		printf("Consumo em bytes da variavel: %d\n", sizeof(pes.email[cont]));
  		
  		printf("CPF: %s", pes.cpf[cont]);
  		printf("Endereco de memoria de CPF: %p \n\n", &pes.cpf[cont]); 
  		printf("Consumo em bytes da variavel: %d\n", sizeof(pes.cpf[cont]));
  		
  		printf("--------------------\n");
  }
  
  printf("Valor variavel x: %d \n", x);
  printf("Endereco da variavel x: %p \n", &x);
  printf("Valor do ponteiro de x: %d\n", *px);
  printf("Endereco do ponteiro da variavel x: %p\n\n", &px);
  
  printf("Valor variavel y: %d \n", y);
  printf("Endereco da variavel y: %p \n", &y);
  printf("Valor do ponteiro de y: %d\n", *py);
  printf("Endereco do ponteiro da variavel y: %p \n\n", &py);
  
  printf("Valor variavel z: %d \n", z);
  printf("Endereco da variavel z: %p \n", &z);
  printf("Valor do ponteiro de z: %d\n", *pz);
  printf("Endereco do ponteiro da variavel z: %p \n\n", &pz);
  
  printf("Valor variavel w: %s \n", w);
  printf("Endereco da variavel w: %p \n", &w);
  printf("Valor do ponteiro de w: %s\n", *pw);
  printf("Endereco do ponteiro da variavel w: %p \n\n", &pw);
  
  printf("Valor variavel k: %f \n", k);
  printf("Endereco da variavel k: %p \n", &k);
  printf("Valor do ponteiro de k: %f\n", *pk);
  printf("Endereco do ponteiro da variavel k: %p \n\n", &pk);
  
  printf("Valor variavel n: %f \n", n);
  printf("Endereco da variavel n: %p \n", &n);
  printf("Valor do ponteiro de n: %f\n", *pn);
  printf("Endereco do ponteiro da variavel n: %p \n\n", &pn);
    
  system("pause");
  return 0;
  
}
