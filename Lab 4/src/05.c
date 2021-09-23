//Find a number in an array using linear search.

#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int  *arr, int n, int query){

    int location;
    int i = 0;
    while (i<=n && query != arr[i])
        i++;
    if (i<=n)
        location = i+1;
    else
        location = 0;
    return location;
}

int main(){

    int n,query;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int *));

    printf("Enter the elements of the array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    printf("\nThe elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", *(arr + i));
    }
    printf("\n");

    abc:
    printf("Enter a number to search: ");
    scanf("%d", &query);

    if (LinearSearch(arr, n - 1, query))
    {
        printf("The location of %d is index %d in array\n", query, LinearSearch(arr, n - 1, query));
    }
    else
        printf("%d is not inside the array.\n",query);

    goto abc;
    printf("\n\n");
}
