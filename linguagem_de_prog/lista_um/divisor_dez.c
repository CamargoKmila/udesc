#include <stdio.h>

//Criar um programa que solicite um número ao usuario e depois faça a divisão por 10.                                                                                                                              
//exemplo: 5 / 10 igual 0.5                                                                                                                                                                                        
                                                                                                                                                                                                                 
int main()                                                                                                                                                                                                         
{                                                                                                                                                                                                                  
    float n;                                                                                                                                                                                                       
    printf("Qual o numero desejado?\n");                                                                                                                                                                           
  scanf("%f", &n);                                                                                                                                                                                                 
  n = n/10;                                                                                                                                                                                                        
  printf("O numero dividido por 10 é: %.1f \n",n);                                                                                                                                                                 
    return 0;                                                                                                                                                                                                      
} 