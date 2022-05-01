#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

//Criar um programa que mostre todos os números de 1 a n incrementando de 1 em 1.                                                                                                                                  
//n é digitado pelo usuario.                                                                                                                                                                                       
                                                                                                                                                                                                                
int main()                                                                                                                                                                                                         
{                                                                                                                                                                                                                  
    int i,n;                                                                                                                                                                                                       
    printf("Qual o valor de n? \n");                                                                                                                                                                               
    scanf("%d", &n);                                                                                                                                                                                               
    for (i=1;i<=n;++i) {                                                                                                                                                                                           
        printf("\n %d",i);}                                                                                                                                                                                        
                                                                                                                                                                                                                   
    return 0;                                                                                                                                                                                                      
}                     