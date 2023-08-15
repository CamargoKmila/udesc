#include<stdio.h>
#include<conio.h>
 
void main() {
  int int_var = 10, *int_ptr;
  char char_var = 'A', *char_ptr;
  float float_val = 4.65, *float_ptr; 
      
     
  int_ptr = &int_var;
  char_ptr = &char_var;
  float_ptr = &float_val;
  
  printf("Address of int_var = %u\n", int_ptr);
  printf("Address of char_var = %u\n", char_ptr);
  printf("Address of float_var = %u\n\n", float_ptr);
  
  
  int_ptr++;
  char_ptr++;
  float_ptr++;
  printf("After increment address in int_ptr = %u\n", int_ptr);
  printf("After increment address in char_ptr = %u\n", char_ptr);
  printf("After increment address in float_ptr = %u\n\n", float_ptr);
  
  
  int_ptr = int_ptr + 2;
  char_ptr = char_ptr + 2;
  float_ptr = float_ptr + 2;
  
  printf("After addition address in int_ptr = %u\n", int_ptr);
  printf("After addition address in char_ptr = %u\n", char_ptr);
  printf("After addition address in float_ptr = %u\n\n", float_ptr);
  
  getch();
  return 0;
}

------------------------------------------------

#include <stdio.h>
void show(int* p){
  (*p)++; 
}
int main(){
  int* ptr, a = 20;
  ptr = &a;
  show(ptr);
  printf("%d", *ptr);
  return 0;
}

------------------------------------------------

#include <stdio.h>
int main() {
    
  int i;
  int num[5] = {1, 2, 3, 4, 5};
  
  int *ptr = num;     
  
  printf("Elements of Array: ");
  
  for (i = 0; i < 5; i++) {
      
    printf("%d  ", *ptr);
    ptr++;
  }
  
  printf("\n");
  return 0;
}

------------------------------------------------------

#include <stdlib.h>
#include <conio.h>

int main(void)
{
	float *v;
	int i, num_componentes;
	printf("Informe o numero de componentes do vetor\n");
	scanf("%d", &num_componentes);
	
	/* ------------- Alocando dinamicamente o espaço necessário -------------
	
	1 - Calcular o número de bytes necessários
	primeiramente multiplicamos o número de componentes do vetor pela
	quantidade de bytes que é dada pelo comando sizeof,
	portanto temos:
	num_componentes * sizeof(float)
	
	2 - Reservar a quantidade de memória
	usamos malloc para reservar essa quantidade de memória,
	então temos:
	malloc(num_componentes * sizeof(float))
	
	3 - Converter o ponteiro para o tipo de dados desejado
	como a função malloc retorna um ponteiro do tipo void,
	precisamos converter esse ponteiro para o tipo da nossa variável, no caso float,
	por isso usamos o comando de conversão explicita:
	(float *)
	
	4 - juntando tudo e atribuindo em v temos o comando abaixo: */
	
	v = (float *) malloc(num_componentes * sizeof(float));
	
	//Armazenando os dados em um vetor
	for (i = 0; i < num_componentes; i++)
	{
		printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
		scanf("%f",&v[i]);
	}
	
	// ------ Percorrendo o vetor e imprimindo os valores ----------
	printf("\n*********** Valores do vetor dinamico ************\n\n");
	
	for (i = 0;i < num_componentes; i++)
	{
		printf("%.2f\n",v[i]);
	}
	
	//liberando o espaço de memória alocado
	free(v);
	
	getch();
	return 0;
}
