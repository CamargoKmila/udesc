#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

    for (i=0;i<5;i++){
    if (i > 0){
    str[i-1] = '$';
    str[i] = '*';
    }
    else{
    str[i] = '*';
    }

    printf("%s \n",str);}
    str[4] = '$';
    printf("%s \n",str);
    
    return 0;
}