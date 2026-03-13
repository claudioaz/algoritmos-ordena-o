#include <stdio.h>
#include <stdlib.h>
#include "../include/menu.h"

#define MAX 100000

int numeros[MAX];
int quantidade = 0;

void carregarDados()
{
    FILE *file = fopen("data/dados.txt","r");

    if(file == NULL)
    {
        printf("Erro ao abrir dados.txt\n");
        exit(1);
    }

    while(fscanf(file,"%d",&numeros[quantidade]) != EOF)
    {
        quantidade++;
    }

    fclose(file);
}

int main()
{
    carregarDados();

    mostrarMenu(numeros, quantidade);

    return 0;
}