#include <stdio.h>

//Criar um programa onde o usuário digite a temperatura em Celsius e o programa                                                                                                                                    
//mostre em Fahrenheit e Kelvin;                                                                                                                                                                                   
                                                                                                                                                                                                                 
int main()                                                                                                                                                                                                         
{                                                                                                                                                                                                                  
  float celsius,fahr,kelvin;                                                                                                                                                                                     
    
  printf("Qual a temperatura em Celsius?\n");                                                                                                                                                                    
  scanf("%f", &celsius);                                                                                                                                                                                           
                                                                                                                                                                                                                   
  fahr = ((9*celsius)/5) + 32;                                                                                                                                                                                     
  kelvin = celsius + 273;                                                                                                                                                                                          
                                                                                                                                                                                                                   
  printf("A temperatura em Celsius é: %f \n A temperatura em Fahrenheit é: %f \n A temperatura em Kelvin é: %f \n",celsius,fahr,kelvin);                                                                           
                                                                                                                                                                                                                   
  return 0;                                                                                                                                                                                                      
}                                                        