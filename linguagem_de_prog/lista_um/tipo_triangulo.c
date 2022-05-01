#include <stdio.h>

//Criar um programa que os tres ángulos internos de um triángulo e determine o tipo de triángulo                                                                                                                   
//equilatero, isoseles, escaleno, rectangulo.                                                                                                                                                                      
                                                                                                                                                                                                                
int main()                                                                                                                                                                                                         
{                                                                                                                                                                                                                  
  float a,b,c;                                                                                                                                                                                                   
  
  printf("Qual o angulo a? \n");                                                                                                                                                                                 
  scanf("%f", &a);                                                                                                                                                                                               
  printf("Qual o angulo b? \n");                                                                                                                                                                                 
  scanf("%f", &b);                                                                                                                                                                                               
  printf("Qual o angulo c? \n");                                                                                                                                                                                 
  scanf("%f", &c);                                                                                                                                                                                               
                                                                                                                                                                                                                  
  if (a+b+c == 180) {                                                                                                                                                                                            
    if (a==b && b==c) {printf("O triangulo é equilátreo");}                                                                                                                                                        
    else if (a==90 || b==90 || c==90) {printf("O triangulo é retangulo");}                                                                                                                                         
    else if (a==b || b==c || a==c) {printf("O triangulo é isóceles");}                                                                                                                                             
    else {printf("O triangulo é escaleno");}                                                                                                                                                                       
  } else {printf("Não se trata de um triangulo");}                                                                                                                                                               
                                                                                                                                                                                                                  
  return 0;                                                                                                                                                                                                      
}                 