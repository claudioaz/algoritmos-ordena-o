#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file = fopen("../data/dados.txt","w");

    srand(time(NULL));

    for(int i=0;i<10000;i++)
    {
        fprintf(file,"%d\n",rand()%100000);
    }

    fclose(file);

    printf("Dados gerados!\n");
}