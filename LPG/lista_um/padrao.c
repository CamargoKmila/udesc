#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
//Escrever um programa que crie o seguinte padrão                                                                                                                                                                  
//*                                                                                                                                                                                                                
//$*                                                                                                                                                                                                               
//$$*                                                                                                                                                                                                              
//$$$*                                                                                                                                                                                                             
//$$$$*                                                                                                                                                                                                            
//$$$$$                                                                                                                                                                                                            

int main()
{
    int i,j;
    char str[5];
    for (i=0;i<=5;i++) {
    str[i] = '*';
    for (j=i;j<=i;j++) {
    str[j] = '$';
    }
    printf("%s \n",str);}
    return 0;
}
