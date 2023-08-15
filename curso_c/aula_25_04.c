#include <stdio.h>

int main(void)
{
    /*printf("%d\n", 455);
    printf("%i\n", 455);
    printf("%d\n", +455);
    printf("%d\n", -55);
    printf("%hd\n", 32000);
    printf("%ld\n", 20000000000L);
    printf("%o\n", 455);
    printf("%u\n", 455);
    printf("%u\n", -455);
    printf("%x\n", 455);
    printf("%X\n", 455);*/
    
    /*
    
    e, E --> exibir um valor ponto flutuante em notação exponencial
    F  ----> exibir valores de pont oflutuante em notação ponto fixo
    g, G --> exibir um valor de ponto flutuante no formato exponencial ou futuante 
    L -----> usado antes de qqer especificadopr de conversão para indicar ponto futuante long double 
    
    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89);
    printf("%e\n", -1234567.89);
    printf("%E\n", 1234567.89);
    printf("%f\n", 1234567.89);
    printf("%g\n", 1234567.89);
    printf("%G\n", 1234567.89);
    
    especificadores de conversão para string (s) e caratere (c)
    char caratere = 'B';
    char string[] = "Texto de uma string";
    const char *stringP = "Outra string";
    
    printf("%c\n", caratere);
    printf("%s\n", "dfgsdfg");
    printf("%s\n", string);
    printf("%s\n", stringP);
    
    Outros espcificadores de conversão
    p exibe um valor de ponteiro
    n armazenaro numero de caractres enavidos no printf
    % exibe o caractere de porcentage mque indica que ate esse pont otod osera enviado para armazenar
    
    %n armazenar o numero de carateres enviados ate esse ponto no printf
    
    %p imprime um valor de ponteiro e o endereço 
    
    
    int *val_p; // declarar variavel de ponteiro do tipo int
    int x = 12345;
    int y;
    
    val_p = &x; // <---- atribuir o endereço de x para a variavel de ponteiro val_p
    
    printf("O valor de val_p é %p\n", val_p);
    printf("O endereço de x é %p\n", &x);
    
    printf("Total de caracteres enviados: %n", &y);
    printf("%d\n\n", y);
    
    y = printf("A linha tem\n");
    printf("%d caracteres foram impressos", y);
    
    printf("Imprimir %% em uma string de controle de formato\n");
    largura de campo --> % mais um inteiro
    
    printf("%4d\n", 1);
    printf("%4d\n", 12);
    printf("%4d\n", 123);
    printf("%4d\n", 1234);
    printf("%4d\n\n", 12345);
    
    printf("%4d\n", -1);
    printf("%4d\n", -12);
    printf("%4d\n", -123);
    printf("%4d\n", -1234);
    printf("%4d\n", -12345);
    
    int i = 876;
    double f = 123.98765;
    char s[] = "texto qualquer";
    
    printf("Usando precisão para inteiros\n");
    printf("\t%.4d\n\t%.9d\n\n",i, i);
    
    printf("Usando precisão para ponto flutuante\n");
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n",f, f, f);
    
    printf("Usando precisão para strings\n");
    printf("\t%.11s\n",s);
    
    flags
    - (sinal de subtração) alinha a saida à esquerda
    + (sinal de adição) valor positov para numeros positivos e sinal negativo para numero negativos
    espaço   imprime espaço
    # pefixa o 0 ao valor de saida quando usado com x ou X
    0(zero) preenche um campo com zeros inicalmente
    
    printf("%10s%10d%10c%10f\n\n", "dois", 8, 'q', 1.34);
    printf("%-10s%-10d%-10c%-10f\n", "dois", 8, 'q', 1.34);
    
    printf("%+d\n%+d\n", 345, -456);
    printf("% d\n% d\n", 234, -567);
    
    printf("%#x\n", 1345);
    printf("%#g\n", 1456.0);
    
    printf("%+09d\n", 145);
    printf("%09d\n", 456);
    
    literais de escape
    \'  exibir a caractere '
    \"   "
    \?   ?
    \\   \
    \a   alerta audivel ou visual
    \b   backspace
    \f   move cursor inici oda pagina
    \n   newline
    \r   return cursor para inicio da linha atual
    \t   tabulação horizontal
    \v  tabulação vertical
    
    scanf  ->   d, i, o , u x, X, h, l, e, E, f, g, G, l, L, c, s, p, n %, ^
    */
    char z[9];
    
    printf("Digitar uma string: ");
    scanf("%[^aeiou]", z);
    
    printf("A entrada foi \"%s\"\n", z);
    return 0;
}