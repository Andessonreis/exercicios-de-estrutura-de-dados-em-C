# exercicios-de-estrutura-de-dados-em-C

#include <stdio.h>

/* implemente um programa que leia o nome, a idade e o endereco de uma pessoa e
armazene os dados em uma estrutura. */

typedef struct{
    char endereco[40];
}Endereco;

typedef struct {

    char nome[30];
    int idade;
    Endereco lugar;

}Pessoa;

int main(void) {
    Pessoa pessoa;

    printf("Digite o nome da pessoa:.. ");
    fgets(pessoa.nome,30,stdin);
    printf("Digite a idade da pessoa:.. ");
    scanf("%d",&pessoa.idade);
    scanf("%c");
    printf("Digite o endereco da pessoa:.. ");
    fgets(pessoa.lugar.endereco,40,stdin);

    printf("\n\tExibindo dados das estruturas\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n",pessoa.idade);
    printf("endereco: %s\n",pessoa.lugar.endereco);
  return 0;
}
