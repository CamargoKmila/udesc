#include <stdio.h>
#include <math.h>

int main ()
{
  int x1;
  int x2;
  int x3;
  int x4;
  int x5;
  float media;
  float desvio;
  
  printf("Qual o numero 1?\n");
  scanf("%d", &x1);
  printf("Qual o numero 2?\n");
  scanf("%d", &x2);
  printf("Qual o numero 3?\n");
  scanf("%d", &x3);
  printf("Qual o numero 4?\n");
  scanf("%d", &x4);
  printf("Qual o numero 5?\n");
  scanf("%d", &x5);
  
  media = (x1+x2+x3+x4+x5)/5;
  printf("A média dos numeros e: %f \n",media);
  
  desvio = sqrt((pow((x1 - media),2) + pow((x2 - media),2) + pow((x3 - media),2) + pow((x4 - media),2) + pow((x5 - media),2))/5);
  printf("O desvio padrao e de: %f \n",desvio);
  
  
  return 0;
}