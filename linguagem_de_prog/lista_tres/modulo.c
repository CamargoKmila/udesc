#include <stdio.h>
#include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// - Criar um programa fazendo uso de programação modular (funções):
// Menu com 4 opções:
// 1) Acrescente 10 caracteres da string em s2 à string em s1.
// 2) Determine o comprimento da string em s1. Imprima o resultado.
// 3) Converta a string “-21” em int e imprima o valor.
// 4) Sair

int main() {

  char s1[20];
  char s2[20];

  printf("Digite valores para S1\n");
  scanf("%s", s1);
  printf("Digite valores para S2\n");
  scanf("%s", s2);
  int opcao;

  do{

    printf("SELECIONE UMA OPÇÃO:\n");
    printf("1- ADD 10 CHAR S2 S1\n");
    printf("2- COMPRIMENTO DE S1\n");
    printf("3- \n");
    printf("4- SAIR\n");
    scanf("%d", &opcao);
   
    strncat(s1, s2, 10);
    printf("S1 conta com %s caracteres.\n", s1);

  }while(opcao != 4);

  return 0;    
}
