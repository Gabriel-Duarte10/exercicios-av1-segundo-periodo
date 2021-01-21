#include <stdio.h>
#include <stdlib.h>

struct cartoes{
    int idade, sexo;
};

void preenche(struct cartoes *people, int contador)
{
    int i;
    for(i=0;i<contador;i++)
    {
        printf("1- Homem\n");
        printf("2- Mulher\n:");
        scanf("%d", &people[i].sexo);

        printf("Digite a idade: ");
        scanf("%d", &people[i].idade);
        printf("\n");
    }
}
void calcule(struct cartoes *people, int contador, float *media, int *quantidade18a25, int *totalh)
{
    int i;
    for(i=0;i<contador;i++)
    {
        *media = *media + people[i].idade;
        if(people[i].idade >= 18 && people[i].idade <= 25 && people[i].sexo == 2)
        {
            *quantidade18a25 = *quantidade18a25 +1;
        }
        if(people[i].sexo == 1)
        {
            *totalh = *totalh + 1;
        }
    }
    *media = *media/contador;
}
void imprime(struct cartoes *people, int contador, float *media, int *qtd18a25, int *totalh)
{
    printf("Idade media: %.1f", *media);
    printf("\nSexo feminino entre 18 e 25: %d", *qtd18a25);
    printf("\nTotal de homens: %d", *totalh);
}




