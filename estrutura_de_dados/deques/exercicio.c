//Faça um programa em C para gerenciar uma agenda de contatos. 
//Cada contato deve manter o nome e o telefone de uma pessoa. 
//As opções do programa devem prever: 
//i) incluir contato; ii) editar contato; e iii) desfazer a última edição do contato.
//Utilize estruturas de dados adequadas para manter a lista de contatos, bem como o histórico de edição.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contato {
  char nome[50];
  char telefone[15];
};

struct No {
  struct Contato contato;
  struct No* proximo;
};

void incluirContato(struct Contato lista[], int* tamanho, struct Contato novoContato) {
  if (*tamanho < 100) {
    lista[*tamanho] = novoContato;
    (*tamanho)++;
    printf("Contato adicionado com sucesso!\n");
  } else {
    printf("A lista de contatos está cheia. Não é possível adicionar mais contatos.\n");
  }
}

void editarUltimoContato(struct Contato lista[], int* tamanho, struct Contato novoContato, struct No** historico) {
  if (*tamanho > 0) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->contato = lista[*tamanho - 1];
    novoNo->proximo = *historico;
    *historico = novoNo;

    lista[*tamanho - 1] = novoContato;
    printf("Contato editado com sucesso!\n");
  } else {
    printf("A lista de contatos está vazia. Não é possível editar contatos.\n");
  }
}

void desfazerEdicao(struct Contato lista[], int* tamanho, struct No** historico) {
  if (*historico != NULL) {
    lista[*tamanho - 1] = (*historico)->contato;

    struct No* temp = *historico;
    *historico = (*historico)->proximo;
    free(temp);

    printf("Última edição desfeita com sucesso!\n");
  } else {
    printf("Não há edições para desfazer.\n");
  }
}

int main() {
  struct Contato listaDeContatos[100];
  int tamanhoDaLista = 0;
  struct No* historicoDeEdicoes = NULL;

  int opcao;
  struct Contato novoContato;

  do {
    printf("\nMenu:\n");
    printf("1. Incluir Contato\n");
    printf("2. Editar Último Contato\n");
    printf("3. Desfazer Última Edição\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        printf("Digite o nome do contato: ");
        scanf("%s", novoContato.nome);
        printf("Digite o telefone do contato: ");
        scanf("%s", novoContato.telefone);
        incluirContato(listaDeContatos, &tamanhoDaLista, novoContato);
        break;
      case 2:
        printf("Digite o nome do novo contato: ");
        scanf("%s", novoContato.nome);
        printf("Digite o novo telefone do contato: ");
        scanf("%s", novoContato.telefone);
        editarUltimoContato(listaDeContatos, &tamanhoDaLista, novoContato, &historicoDeEdicoes);
        break;
      case 3:
        desfazerEdicao(listaDeContatos, &tamanhoDaLista, &historicoDeEdicoes);
        break;
      case 4:
        break;
      default:
        printf("Opção inválida. Tente novamente.\n");
    }
  } while (opcao != 4);

  return 0;
}
