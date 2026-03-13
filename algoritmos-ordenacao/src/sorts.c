#include <stdio.h>
#include "../include/sorts.h"

void BubbleSort(int arr[], int n)
{
    int temp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("BubbleSort executado\n");
}

void SelectionSort(int arr[], int n)
{
    int i,j,min,temp;

    for(i=0;i<n-1;i++)
    {
        min = i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("SelectionSort executado\n");
}

void InsertionSort(int arr[], int n)
{
    int i,j,key;

    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    printf("InsertionSort executado\n");
}

void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j=low;j<high;j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);

    return i+1;
}

void quick(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr,low,high);

        quick(arr,low,pi-1);
        quick(arr,pi+1,high);
    }
}

void QuickSort(int arr[], int n)
{
    quick(arr,0,n-1);

    printf("QuickSort executado\n");
}