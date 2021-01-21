#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "FUNCOES.h"

using namespace std;

int main()
{
    struct bliblioteca *livros;
    int n, maisprocurado;

    livros = (struct bliblioteca*)malloc(n*sizeof(struct bliblioteca));
    if(livros == NULL){
        printf("Nao foi possivel alocar memoria");
    }
    printf("Digite quando livros deseja cadastrar: ");
    scanf("%d", &n);

    maisprocurado = preenche(livros, n);
    exibir(livros, n, maisprocurado);





    return 0;
}
