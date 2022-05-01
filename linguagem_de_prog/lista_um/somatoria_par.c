#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

//Escrever um programa que some todos los números pares entre N e M onde N e M são digitados pelo usuario                                                                                                          
                                                                                                                                                                                                                 
int main()                                                                                                                                                                                                         
{                                                                                                                                                                                                                  
  int n,m,i,soma=0;                                                                                                                                                                                              
  
  printf("Qual o numero N? \n");                                                                                                                                                                                 
  scanf("%d", &n);                                                                                                                                                                                               
  printf("Qual o numero M? \n");                                                                                                                                                                                 
  scanf("%d", &m);                                                                                                                                                                                               
                                                                                                                                                                                                                  
  for (i=n;i<=m;i++) {                                                                                                                                                                                           
    if (i%2 == 0) {                                                                                                                                                                                            
      soma = soma+i;}                                                                                                                                                                                        
    printf("i: %d \nsoma: %d \n",i,soma);                                                                                                                                                                      
  }                                                                                                                                                                                                              
  printf("A soma total é %d \n",soma);                                                                                                                                                                           
                                                                                                                                                                                                                  
  return 0;                                                                                                                                                                                                      
}               