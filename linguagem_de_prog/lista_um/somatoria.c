#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//Escrever um programa que, para n>0, calcule: Somatória (i*(i+1))                                                                                                                                                 
                                                                                                                                                                                                                
int main() {                                                                                                                                                                                                       
  int i,soma=0,n;                                                                                                                                                                                                
  
  printf("Qual o valor de n? \n");                                                                                                                                                                               
  scanf("%d", &n);                                                                                                                                                                                               
  
  if(n<=0) {printf("Não é possivel calcular!");}                                                                                                                                                                 
  else {                                                                                                                                                                                                         
    for (i=1;i<=n;++i) {                                                                                                                                                                                           
    
      soma = soma +(i*(i+1));                                                                                                                                                                                        
      
      printf("i = %d \nsoma= %d \n",i,soma);                                                                                                                                                                         
    }                                                                                                                                                                                                              
    printf("A soma dos valores é de: %d \n",soma);}                                                                                                                                                                
                                                                                                                                                                                                                  
  return 0;                                                                                                                                                                                                      
}   