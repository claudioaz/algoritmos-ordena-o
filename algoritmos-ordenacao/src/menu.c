#include <stdio.h>
#include "../include/menu.h"
#include "../include/sorts.h"

void mostrarMenu(int arr[], int n)
{
    char opcao;

    printf("\n===== ALGORITMOS DE ORDENACAO =====\n");
    printf("a - BubbleSort\n");
    printf("b - SelectionSort\n");
    printf("c - InsertionSort\n");
    printf("d - QuickSort\n");
    printf("\nEscolha: ");

    scanf(" %c",&opcao);

    switch(opcao)
    {
        case 'a':
            BubbleSort(arr,n);
        break;

        case 'b':
            SelectionSort(arr,n);
        break;

        case 'c':
            InsertionSort(arr,n);
        break;

        case 'd':
            QuickSort(arr,n);
        break;

        default:
            printf("Opcao invalida\n");
    }
}