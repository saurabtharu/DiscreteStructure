//Sort an array using merge sort.

#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];
    // Copy data to temp array
    
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    
    // Merge the temp arrays
    i = 0;
    j = 0;
    k = l;
    
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[]
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);

        merge(arr, l, m, r);

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

    MergeSort(arr,0,n-1);

    printf("\n\nThe sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", *(arr + i));
    }
    printf("\n\n");
}