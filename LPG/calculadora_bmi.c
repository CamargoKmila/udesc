#include <stdio.h>

int
main ()
{
  float peso;
  float altura;
  float BMI;
  char a[20];
  

  printf("Qual sua altura?\n");
  scanf("%f", &altura);
  
  printf("Qual seu peso? \n");
  scanf("%f", &peso);
  
  BMI = peso/(altura*altura);

  printf ("seu BMI é de %f \n", BMI);
  
  if (BMI <=25) { printf("Você está abaixo do peso");}
  else if (BMI <= 30) { printf("Você está com sobrepeso");}
  else if (BMI <= 40) { printf("Você está muito acima do peso");}
  else  printf("Você está muito muito acima do peso");
  
  return 0;
}