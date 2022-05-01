#include <stdio.h>

#define ATTEMPT 5

int main() {
  printf("******************************************\n");
  printf("* Bem vindo ao nosso jogo de adivinhação *\n");
  printf("******************************************\n");

  int secret_number = 42;
  int guess;

  for(int counter = 1; counter <= ATTEMPT; counter++){

    printf("Tentativa %d de %d\n", counter, ATTEMPT);
    printf("Qual é o seu palpite? \n");
    scanf("%d", &guess);
    printf("Seu palpite foi %d\n", guess);

    if(guess < 0) {
      printf("Você não pode escolher um número negativo.\n");
      counter--;

      continue;
    }

    int correct = (guess == secret_number);
    int larger = (guess > secret_number);
    int smaller = (guess < secret_number);

    if(correct) {
      printf("Parabéns! Você acertou!!!\n");

      break;
    }

      else if(larger) {
        printf("Seu palpite foi maior que o número secreto.\n");
      }

      else {
        printf("Seu palpite foi menor que o número secreto.\n");
      }
      printf("Você errou!\n");
  }

  printf("*****************\n");
  printf("** Fim de jogo **\n");
  printf("*****************\n");
  // printf("O número secreto é o %d.\n", secret_number);

}