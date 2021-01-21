#include <iostream>
#include "funcoes.h"
#include <stdlib.h>

using namespace std;

int main()
{
    struct grupo *pessoa;
    int n, isento=0;
    double receita=0;

    printf("Digite a quantidades de pessoas: ");
    scanf("%d", &n);

    pessoa = (struct grupo*)malloc(n*sizeof(struct grupo));
    if(pessoa == NULL)
    {
        printf("Nao foi possivel alocar memoria");
        system("exit");
    }

    preenche(pessoa, n);
    calcula(pessoa, n, &isento, &receita);
    exibir(pessoa, n, &isento, &receita);




    free(pessoa);
    return 0;
}
