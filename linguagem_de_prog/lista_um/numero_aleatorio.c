#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

//Criar um programa que gere um numero aleaotrio inteiro entre 1 e 10. Depois usuario                                                                                                                              
//tentara adivinhar o número. As seguintes mensagens devem ser mostrdas de acordo ao numero inserido:                                                                                                              
//Bom trabalho, Adivinhou!! o numero é ....x                                                                                                                                                                       
//Sorte para próxima o numero é inferior a ....x                                                                                                                                                                   
//Sorte para próxima o numero é maior a ....x                                                                                                                                                                      
                                                                                                                                                                                                                
int main()                                                                                                                                                                                                         
{                                                                                                                                                                                                                  
    int random=0;                                                                                                                                                                                                  
    int chute;                                                                                                                                                                                                     
                                                                                                                                                                                                                   
    random = rand() % (10);                                                                                                                                                                                        
    printf("%d \n",random);                                                                                                                                                                                        
                                                                                                                                                                                                                   
    while (chute!=random){                                                                                                                                                                                         
    printf("Qual o seu chute? \n");                                                                                                                                                                                
    scanf("%d", &chute);                                                                                                                                                                                           
    if(chute<random) {printf("Chute mais alto! \n");}                                                                                                                                                              
    else if (chute>random) {printf("Chute mais baixo! \n");}                                                                                                                                                       
    else if (chute==random) {printf("Bom trabalho, adivinhou! O numero era %d \n",random);}                                                                                                                        
    }                                                                                                                                                                                                              
                                                                                                                                                                                                                   
    return 0;                                                                                                                                                                                                      
} 