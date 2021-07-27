//Sort an array using insertion sort.

#include<stdio.h>
#include<stdlib.h>


void InsertionSort(int array[], int n) 
{ 
    int i, element, j; 
    for (i = 1; i < n; i++) {

        element = array[i];
        j = i - 1;                  /* Move elements of arr[0..i-1], that are greater than key by one position */
        while (j >= 0 && array[j] > element)
        {
            array[j + 1] = array[j]; 
            j = j - 1;
        }
        array[j + 1] = element; 
    } 
}


int main(){

    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int *));

    printf("Enter the elements of the array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    printf("\n\nThe unsorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", *(arr + i));
    }
    printf("\n");

    InsertionSort(arr, n);
    printf("\n\nThe sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", *(arr + i));
    }
    printf("\n\n");
}