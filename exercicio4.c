#include <stdio.h>
#define tam 5

/*
Faça um programa  que leia um vetor com dados de 5 livros: titulo (máximo 30 letras), autor (máximo 15 letras) e ano.
Procure um livro por titulo, perguntando ao usuário qual titulo deseja buscar.
Mostre os dados de todos os livros encontrado*/

typedef struct{
    char titulo[30];
    char autor[15];
    int ano;
}Livro;

void Ler_livro(Livro *ptrLivro){
    printf("\n\tCADASTRO DE LIVRO :)\n\n");

    for(int i = 0; i < tam; i++){
        printf("Digite o titulo do livro: ");
            fgets(ptrLivro[i].titulo,30,stdin);
        printf("Digite o nome do autor: ");
            fgets(ptrLivro[i].autor,15,stdin);
        printf("Digite o ano: ");
            scanf("%d",&ptrLivro[i].ano);
            setbuf(stdin, NULL);
    }
}

void busca_livro(Livro *ptrLivro){
    char busca[30]; int cont = 0;

    printf("Informe o livro a qual deseja busca: ");
    fgets(busca,30,stdin);
    setbuf(stdin, NULL);
int aux[5];

    for(int i = 0; i < tam; i++)
    {
        if(strcmp(ptrLivro[i].titulo, busca) == 0)
            {
                aux[cont] = i;
                cont++;
            }
    }

    for(int i=0; i<= cont; i++)
    {
        if(aux[0] != -1)
        {
            printf(" Titulo do livro: %s\n", ptrLivro[aux[i]].titulo);
            printf(" Autor do livro: %s\n", ptrLivro[aux[i]].autor);
            printf(" Ano: %d\n", ptrLivro[aux[i]].ano);
        }
    }
}

int main(){
    Livro livros[5], *ptrLivro = &livros;

    Ler_livro(livros);
    busca_livro(livros);

return 0;
}
