#include <stdio.h>
#define tam 2

/*   Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final), armazenando em um vetor.
 Uma vez lidos os dados, divida estes dados em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a aprovação como sendo 5.0.
  Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados    */


typedef struct{
    char nome[40];
    int matricula;
    float mediaFinal;

  }Aluno;

void cadastraAlunos(Aluno *ptrAluno);
void dividir(Aluno *ptrAluno);

int main(){

Aluno aluno[tam]; Aluno *ptrAluno ; ptrAluno = aluno;
cadastraAlunos(aluno);
dividir(aluno);

return 0;
}

void cadastraAlunos(Aluno *ptrAluno){

    for(int i = 0; i < tam; i++){
        printf("Informe o nome do aluno %d:", i+1);
        scanf("%s",ptrAluno[i].nome);
        printf("Informe a matricula do aluno %d: ",i+1);
        scanf("%d",&ptrAluno[i].matricula);
        printf("Agora informe a media final desse aluno: ");
        scanf("%f",&ptrAluno[i].mediaFinal);
    }
}

void dividir(Aluno *ptrAluno){

     Aluno aprovados[tam], reprovados[tam];

    for(int i = 0; i < tam; i++){
        if(ptrAluno[i].mediaFinal >= 5.0){
            aprovados[i].mediaFinal = ptrAluno[i].mediaFinal;
            }
        else{
            reprovados[i].mediaFinal = ptrAluno[i].mediaFinal;
        }
    }
    for(int j = 0; j < tam; j++){
    printf("Aprovados: Nome: %s matricula %d  media final %2.f\n",aprovados[j].nome,aprovados[j].matricula,aprovados[j].mediaFinal);
    }
       for(int j = 0; j < tam; j++){

            printf("Reprovados: Nome: %s Matricula %d Media Final %2.f\n",reprovados[j].nome,reprovados[j].matricula,reprovados[j].mediaFinal);

       }
}
