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
//A variável n deverá receber apenas 32,5% do valor atribuído a soma das variável x e y, mas os valores deveráo vir de seus respectivos ponteiros.
//Ao usuário:
//Mostre o valor de cada variável, bem como seu endereço de memória
//Mostre o valor de cada ponteiro, bem como o seu endereço de memória
//Mostre o endereço de memória que cada ponteiro aponta
//Mostre o consumo em bytes de cada variável, ponteiro e estrutura.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  struct pessoa{
    char nome[50];
    char tel[15];
    char email[50];
    char cpf[20];
  };

  struct pessoa pes[3];
  
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
  
  *pz=10*(*py)-20;
	
  *pn=*px+*py;
  *pn=((*pn*32.5)/100);	
  k=*pz;
  k=k/2;

  int cont;
  
  for (cont=0; cont<3; cont++){
  	printf("Pessoa %d\n", cont+1);
  		printf("Nome: ");
  		fgets(pes[cont].nome, 50, stdin);

  		printf("Telefone: ");
  		fgets(pes[cont].tel, 15, stdin);

		printf("Email: ");
  		fgets(pes[cont].email, 50, stdin);

  		printf("CPF: ");
  		fgets(pes[cont].cpf, 20, stdin);

  		printf("--------------------\n");
  }

  //recieving the third character of the second name
  w=pes[1].nome[2];
  
  for (cont=0; cont<3; cont++){
  	printf("Pessoa %d\n", cont+1);
    printf("Custo em bytes da pessoa %d: %d Bytes \n", cont+1, sizeof(pes[cont].nome)+sizeof(pes[cont].tel)+sizeof(pes[cont].email)+sizeof(pes[cont].cpf));

    printf("Nome: %s", pes[cont].nome);
    printf("Endereco de memoria de nome: %p \n", &pes[cont].nome);
    printf("Consumo em bytes da variavel: %d\n\n", sizeof(pes[cont].nome));
    
    printf("Telefone: %s", pes[cont].tel);
    printf("Endereco de memoria de telefone: %p \n", &pes[cont].tel);
    printf("Consumo em bytes da variavel: %d\n\n", sizeof(pes[cont].tel));
    
    printf("Email: %s", pes[cont].email);
    printf("Endereco de memoria de email: %p \n", &pes[cont].email);
    printf("Consumo em bytes da variavel: %d\n\n", sizeof(pes[cont].email));
    
    printf("CPF: %s", pes[cont].cpf);
    printf("Endereco de memoria de CPF: %p \n", &pes[cont].cpf); 
    printf("Consumo em bytes da variavel: %d\n", sizeof(pes[cont].cpf));
    
    printf("--------------------\n");
  }
  //--------------------------------------------------------------------------------
  printf("Valor variavel x: %d \n", x);
  printf("Endereco da variavel x: %p \n", &x);
  printf("Consumo em bytes da variavel x: %d\n", sizeof(x));

  printf("Valor do ponteiro de x: %d\n", *px);
  printf("Endereco do ponteiro da variavel x: %p\n", &px);
  printf("Consumo em bytes do ponteiro da variavel x: %d\n", sizeof(px));
  printf("Endereco de memoria que o ponteiro da variavel x aponta: %p\n\n", px);
  //--------------------------------------------------------------------------------
  printf("Valor variavel y: %d \n", y);
  printf("Endereco da variavel y: %p \n", &y);
  printf("Consumo em bytes da variavel y: %d\n", sizeof(y));

  printf("Valor do ponteiro de y: %d\n", *py);
  printf("Endereco do ponteiro da variavel y: %p \n", &py);
  printf("Consumo em bytes do ponteiro da variavel y: %d\n", sizeof(py));
  printf("Endereco de memoria que o ponteiro da variavel y aponta: %p\n\n", py);
  //-------------------------------------------------------------------------------- 
  printf("Valor variavel z: %d \n", z);
  printf("Endereco da variavel z: %p \n", &z);
  printf("Consumo em bytes da variavel z: %d\n", sizeof(z));

  printf("Valor do ponteiro de z: %d\n", *pz);
  printf("Endereco do ponteiro da variavel z: %p \n", &pz);
  printf("Consumo em bytes do ponteiro da variavel z: %d\n", sizeof(pz));
  printf("Endereco de memoria que o ponteiro da variavel z aponta: %p\n\n", pz);
  //--------------------------------------------------------------------------------  
  printf("Valor variavel w: %c \n", w);
  printf("Endereco da variavel w: %p \n", &w);
  printf("Consumo em bytes da variavel w: %d\n", sizeof(w));

  printf("Valor do ponteiro de w: %c\n", *pw);
  printf("Endereco do ponteiro da variavel w: %p \n", &pw);
  printf("Consumo em bytes do ponteiro da variavel w: %d\n", sizeof(pw));
  printf("Endereco de memoria que o ponteiro da variavel w aponta: %p\n\n", pw);
  //--------------------------------------------------------------------------------
  printf("Valor variavel k: %f \n", k);
  printf("Endereco da variavel k: %p \n", &k);
  printf("Consumo em bytes da variavel k: %d\n", sizeof(k));

  printf("Valor do ponteiro de k: %f\n", *pk);
  printf("Endereco do ponteiro da variavel k: %p \n", &pk);
  printf("Consumo em bytes do ponteiro da variavel k: %d\n", sizeof(pk));
  printf("Endereco de memoria que o ponteiro da variavel k aponta: %p\n\n", pk);
  //--------------------------------------------------------------------------------  
  printf("Valor variavel n: %f \n", n);
  printf("Endereco da variavel n: %p \n", &n);
  printf("Consumo em bytes da variavel n: %d\n", sizeof(n));

  printf("Valor do ponteiro de n: %f\n", *pn);
  printf("Endereco do ponteiro da variavel n: %p \n", &pn);
  printf("Consumo em bytes do ponteiro da variavel n: %d\n", sizeof(pn));
  printf("Endereco de memoria que o ponteiro da variavel n aponta: %p\n\n", pn);
  //--------------------------------------------------------------------------------
  system("pause");
  return 0;
}
