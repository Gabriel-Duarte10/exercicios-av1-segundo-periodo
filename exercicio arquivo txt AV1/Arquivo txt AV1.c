#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main()
{
    char nome[100], linha[100];
    FILE *f, *g, *h;

    printf("Digite o nome do arquivo: ");
    gets(nome);

    if((f=fopen(nome, "r")) == NULL)
    {
        printf("Arquivo nao existe");
        exit(1);
    }
    if((g=fopen("professores2.txt", "w+")) == NULL){
        printf("Arquivo inexistente");
        exit(1);
    }
     if((h=fopen("professores.dat", "wb+")) == NULL){
        printf("Arquivo inexistente");
        exit(1);
    }

    fgets(linha, 100, f);
    while(!feof(f)){
        cout << linha;
        fputs(linha, g);
        fwrite(linha, 1, sizeof(linha), h);
        fgets(linha, 100, f);
    }

    fclose(f);
    fclose(g);
    fclose(h);
    return 0;
}
