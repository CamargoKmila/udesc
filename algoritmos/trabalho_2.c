#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char continuar[] = "sim";
  int test = 0;

  while (test == 0) {
    int a = 0;
    int b = 0;

    while (a <= 0) {
      printf("Digite um valor para a: \n");
      scanf("%i", &a);
      if (a <= 0) {
        printf("O valor deve ser maior que 0. \n" );
      }
    }

    while (b <= 0) {
      printf("Digite um valor para b: \n");
      scanf("%i", &b);
      if (b <= 0) {
        printf("O valor deve ser maior que 0. \n" );
      }
    }
      
    int divisor = 2, mmc = 1, mdc = 1;

    while (a + b != 2) {
        
      if (a % divisor == 0 && b % divisor == 0 ) {
        mdc = mdc * divisor;
      }
          
      if (a % divisor == 0 || b % divisor == 0) {
        mmc = mmc * divisor;
          
        if ( a % divisor == 0) {
          a = a / divisor;
        }
        
        if (b % divisor == 0) {
          b = b / divisor;
        }
                
      } else
        divisor ++;
    } 
    
    printf ("MMC: %i\n", mmc);
    printf ("MDC: %i\n", mdc);
    fflush (stdin);
    printf ("Para continuar digite: sim.\n\n" );
    scanf("%s", continuar);
    test = strcmp("sim", continuar);
  }
  
  return 0;
}