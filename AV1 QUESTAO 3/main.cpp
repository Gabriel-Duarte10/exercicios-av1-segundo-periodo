#include <stdio.h>
#include <stdlib.h>
#include "FUNCOES.h"

int main()
{
    struct cartoes *pessoa;
    int n, qtd18a25=0, totaldeh=0;
    float media=0;
    printf("Digite quantos cartoes deseja cadastrar: ");
    scanf("%d", &n);

    pessoa = (struct cartoes*)malloc(n*sizeof(struct cartoes));
    if(pessoa == NULL)
    {
        printf("Nao foi possivel alocar memoria");
        system("exit");
    }

    preenche(pessoa, n);
    calcule(pessoa, n, &media, &qtd18a25, &totaldeh);
    imprime(pessoa,n, &media, &qtd18a25, &totaldeh);








    return 0;
}
