#include <stdio.h>

//Criar um programa que determine se uma string digitada pelo usuario começa com um número ou com uma letra.                                                                                                       
                                                                                                                                                                                                                 
int main()                                                                                                                                                                                                         
{                                                                                                                                                                                                                  
    char str[10];                                                                                                                                                                                                  
    int c;                                                                                                                                                                                                         
    printf("Qual a string? \n");                                                                                                                                                                                   
    scanf("%s", &str);                                                                                                                                                                                             
    c = str[0];                                                                                                                                                                                                    
  printf("%d \n",c);                                                                                                                                                                                               
  if (c>=48 && c<=57) {printf("A String começa com numero");} else {printf("A String começa com letra");}                                                                                                          
    return 0;                                                                                                                                                                                                      
}                  