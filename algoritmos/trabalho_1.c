#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int dia, mes, ano, digitos_ano, x, chave_mes, chave_seculo, y, z;
    char dia_semana[20];
    bool bisexto = false;

    printf("Informe um dia (entre 1 e 31)\n");
    scanf("%i", &dia);
    if (dia < 1 || dia > 31) {
      printf("Informe um dia valido, good bye");
      return 0;
    }
    
    printf("Informe um mes (entre 1 e 12)\n");
    scanf("%i", &mes);
    if (mes < 1 || mes > 12) {
      printf("Informe um mes valido, good bye");
      return 0;
    }

    printf("Informe um ano (entre 1800 e 2199)\n");
    scanf("%i", &ano);
    if (ano < 1800 || ano > 2199) {
      printf("Informe um mes valido, good bye");
      return 0;
    }

    digitos_ano = ano % 100;

    x = digitos_ano / 4;

    if (ano % 400 == 0 || (ano % 4 == 0 && digitos_ano > 0)) {
      bisexto = true;
    }
     
    switch (mes)
      {
        case 1:
          if(bisexto == 0)
            chave_mes = 1;
          else
            chave_mes = 0;
          break;
        case 2:
          if(bisexto == 0)
            chave_mes = 4;
          else
            chave_mes = 0;
          break;
        case 3:
          chave_mes = 4;
          break;
        case 4:
          chave_mes = 0;
          break;
        case 5:
          chave_mes = 2;
          break;
        case 6:
          chave_mes = 5;
          break;
        case 7:
          chave_mes = 0;
          break;
        case 8:
          chave_mes = 3;
          break;
        case 9:
          chave_mes = 6;
          break;
        case 10:
          chave_mes = 1;
          break;
        case 11:
          chave_mes = 4;
          break;
        case 12:
          chave_mes = 6;
          break;
      }  

    if (ano >= 1800 && ano <= 1899) {
      chave_seculo = 2;
    } else if (ano >= 1900 && ano <= 1999) {
      chave_seculo = 0;
    } else if (ano >= 2000 && ano <= 2099) {
      chave_seculo = 6;
    } else if (ano >= 2100 && ano <= 2199) {
      chave_seculo = 4;
    }

    y = dia + digitos_ano + x + chave_mes + chave_seculo;
    z = y % 7;
    
    switch (z)
      {
        case 0:
          strcpy(dia_semana, "sabado");
          break;
        case 1:
          strcpy(dia_semana, "domingo");
          break;
        case 2:
          strcpy(dia_semana, "segunda");
          break;
        case 3:
          strcpy(dia_semana, "terça");
          break;
        case 4:
          strcpy(dia_semana, "quarta");
          break;
        case 5:
          strcpy(dia_semana, "quinta");
          break;
        case 6:
          strcpy(dia_semana, "sexta");
          break;
      }

    printf("digitos do ano: %i \n", digitos_ano);
    printf("divisão dos digitos do ano por 4: %i \n", x);
    printf("Ano bisexto: %d \n", bisexto);
    printf("chave mes: %i \n", chave_mes);
    printf("chave seculo: %i \n", chave_seculo);
    printf("------------------------ \n");
    printf("dia semana: %s \n", dia_semana);
    printf("------------------------ \n");

    printf("Dia informado: %i \n", dia);
    printf("Mês informado: %i \n", mes);
    printf("Ano informado: %i \n", ano);
    printf("%i / %i / %i \n", dia, mes, ano);

    return 0;
}