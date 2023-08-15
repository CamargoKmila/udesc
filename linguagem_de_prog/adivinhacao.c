#include <stdio.h>

int main() {
  printf("******************************************\n");
  printf("* Bem vindo ao nosso jogo de adivinhação *\n");
  printf("******************************************\n");

  int secret_number = 42;
  int guess;
  int win = 0;
  int attempt  = 0;
  int point = 1000;

  while(win == 0) {
    printf("Tentativa %d\n", attempt+1);
    printf("Qual é o seu palpite? \n");
    scanf("%d", &guess);
    printf("Seu palpite foi %d\n", guess);

    if(guess < 0) {
      printf("Você não pode escolher um número negativo.\n");
      
      continue;
    }

    int correct = (guess == secret_number);
    int larger = (guess > secret_number);

    if(correct) {
      printf("Parabéns! Você acertou!!!\n");

      win = 1;
    }

      else if(larger) {
        printf("Seu palpite foi maior que o número secreto.\n");
      }

      else {
        printf("Seu palpite foi menor que o número secreto.\n");
      }
      attempt++;

      printf("Você errou!\n");
  }

  printf("************************************\n");
  printf("************ Fim de jogo ***********\n");
  printf("** Você acertou em %d tentativas! **\n", attempt);
  printf("************************************\n");
  // printf("O número secreto é o %d.\n", secret_number);

}