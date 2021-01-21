#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct grupo
{
    long long CPF;
    int filhos;
    double rendabruta, rendaliquida, imposto;
};

void preenche(struct grupo *people, int contador)
{
   int i;
   for(i=0;i<contador;i++)
   {
       printf("Digite o CPF: ");
       scanf("%lld", &people[i].CPF);
       printf("Digite a quantidade de dependentes: ");
       scanf("%d", &people[i].filhos);
       printf("Digite a renda anual bruta: ");
       scanf("%lf", &people[i].rendabruta);
   }
}

void calcula(struct grupo *people, int contador, int *isentos, double *receitatotal){
    int i;
    for(i=0;i<contador;i++){
        people[i].rendaliquida = people[i].rendabruta -(people[i].filhos * 600);



        if(people[i].rendaliquida/12 <= 1000)
        {
            *isentos = *isentos + 1;
            people[i].imposto = 0.00;
        }
        else
        {
            if(people[i].rendaliquida/12 > 1001 && people[i].rendaliquida/12 <= 5000)
            {
                *receitatotal = *receitatotal + (people[i].rendaliquida*15)/100;
                 people[i].imposto = (people[i].rendaliquida*15)/100;
            }

            else
            {
                if(people[i].rendaliquida/12 > 5001)
                {
                    *receitatotal = *receitatotal + (people[i].rendaliquida*25)/100;
                     people[i].imposto = (people[i].rendaliquida*25)/100;
                }
            }
        }
    }
}
void exibir(struct grupo *people, int contador, int *isentos, double *receitatotal){
    int i;
    for(i=0;i<contador;i++){
        printf("CPF: %lld\n", people[i].CPF);
        printf("Imposto a ser pago: %lf\n", people[i].imposto);
    }
    printf("\n\nTotal arrecadado pela receita federal: %lf", *receitatotal);
    printf("\nTotal de isentos: %d", *isentos);
}







