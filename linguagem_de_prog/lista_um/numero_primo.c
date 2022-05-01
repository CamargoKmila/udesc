#include <stdio.h>

//Escrever um programa utilize dois ciclos for para encontrar os numeros primos entre 2 e 100                                                                                                                      
                                                                                                                                                                                                                 
int main()                                                                                                                                                                                                         
{                                                                                                                                                                                                                  
  int i,j,teste=0;                                                                                                                                                                                               
                                                                                                                                                                                                                  
  for (i=2;i<=100;i++) {                                                                                                                                                                                         
    teste = 0;                                                                                                                                                                                                 
    for (j=2;j<i;j++){                                                                                                                                                                                         
      if (i%j ==0) {teste =1;}}                                                                                                                                                                              
      if (teste ==0) {printf("O numero %d é primo \n",i);}                                                                                                                                                   
  }                                                                                                                                                                                                              
  
  return 0;                                                                                                                                                                                                      
}                             