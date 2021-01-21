#include <stdlib.h>
#include <iostream>
#include <stdio.h>

using namespace std;

struct bliblioteca
{
    int codigo, exemplares, prateleira, emprestimo, totalemprestimo;
};

int preenche(struct bliblioteca *livro, int contador)
{
    int i, j, cont=0, maior=0, valor;
    for(i=0;i<contador;i++)
    {
        printf("Digite o codigo do livro: ");
        scanf("%d", &livro[i].codigo);
        printf("\n");
        printf("Digite o numero de exemplares do livro %d : ", livro[i].codigo);
        scanf("%d", &livro[i].exemplares);
        printf("\n");

        for(j=0; j < livro[i].exemplares;j++)
        {
            printf("Digite a pratileira do exemplar %d: ", i+1);
            scanf("%d", &livro[cont].prateleira);
            printf("\n");
            printf("Digite a quantidade de emprestimos: ");
            scanf("%d", &livro[cont].emprestimo);
            printf("\n");
            livro[i].totalemprestimo = livro[i].totalemprestimo + livro[cont].emprestimo;
            cont++;
        }
    }
    for(i=0;i<contador;i++)
    {
        if(livro[i].totalemprestimo>maior)
        {
            maior = livro[i].totalemprestimo;
            valor = i;
        }
    }
    return valor;
}
void exibir(struct bliblioteca *livro, int contador, int maior)
{
    int i;
    system("cls");
    for(i=0;i<contador;i++)
    {
        printf("\nCodigo: %d", livro[i].codigo);
        printf("\nTotal de emprestimos: %d", livro[i].totalemprestimo);
    }
    printf("\n\nO livro mais procurado eh o codigo: %d", livro[maior].codigo);

    printf("\n");

}







