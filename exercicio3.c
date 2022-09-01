#include <stdio.h>
#define TAM 2
/* Construa uma estrutura aluno com nome, numero de matrıcula e curso.
Leia do usuario a informacão de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela. */

typedef struct{

    char nome[40];
    int matricula;
    char curso[50];

}Aluno;

int main(void) {
  Aluno aluno[TAM];

  printf("\n\tCADASTRO DOS ALUNOS\n");

    for( int i = 0; i < TAM; i++){
        printf("Informe o nome do %d aluno: ",i+1);
        fgets(aluno[i].nome,40,stdin);
        printf("Agora infome a matricula desse aluno: ");
        scanf("%d",&aluno[i].matricula);
        scanf("%c");
        printf("Por ultimo informe qual o curso...: ");
        fgets(aluno[i].curso,50,stdin);
    }

    printf("\n\tEXBINDO DADOS DOS ALUNOS CADASTRADOS\n");
    for (int j = 0; j < TAM; j++){

    printf("Aluno: %s\nMatricula: %d\nCurso: %s\n",aluno[j].nome,aluno[j].matricula,aluno[j].curso);
    }
  return 0;
}
