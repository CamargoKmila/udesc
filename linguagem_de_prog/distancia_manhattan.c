#include <stdio.h>
#include <math.h>

int main ()
{
  int x1;
  int x2;
  int y1;
  int y2;
  float euc;
  float man;
  float valor;
  char pico;
  
  printf("Qual o ponto x1?\n");
  scanf("%d", &x1);
  printf("Qual o ponto y1?\n");
  scanf("%d", &y1);
  printf("Qual o ponto x2?\n");
  scanf("%d", &x2);
  printf("Qual o ponto y2?\n");
  scanf("%d", &y2);

  
  
  euc = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
  printf("A distancia euclidiana é de: %f \n",euc);
  
  man = fabs(x1-x2) + fabs(y1-y2);
  printf("A distancia manhattan é de: %f \n",man);
  
  printf("Horario de pico (S/N)?\n");
  scanf("%s", &pico);
  
  valor = (man/10)*6;
  if (pico == 's') {valor = valor+5;};
  
  printf("o valor final pela distancia manhattan é de: %f \n", valor);
  
  valor = (euc/10)*6;
  if (pico == 's') {valor = valor+5;};
  
  printf("o valor final pela distancia euclidiana é de: %f \n", valor);
  
  
  return 0;
}