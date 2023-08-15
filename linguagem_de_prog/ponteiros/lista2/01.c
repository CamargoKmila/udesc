#include<stdio.h>
#include<conio.h>

//Crie um programa que permita mudar o valor de uma constante inteira utilizando ponteiros.

const int numero = 100;
int *numeroPtr;

printf("A constante atual é: %i /n", numero);
printf("Digite o novo valor para a constante./n")
scanf("%i", numeroPtr)

numeroPtr = &numero;

printf("O novo valor da constante é: %i", numero)

// ---------------------------------------------------------------------
#include <stdio.h>
#include <conio.h>

//Crie um programa que permita mudar o valor de uma constante inteira utilizando ponteiros.

int main() {

const int numero = 100;
int *numeroPtr;

numeroPtr = &numero;

    printf("A constante atual é: %i \n", numero);
    printf("Digite o novo valor para a constante.\n");
    scanf("%i", &numero);

    printf("O novo valor da constante é: %i", *numeroPtr);
}