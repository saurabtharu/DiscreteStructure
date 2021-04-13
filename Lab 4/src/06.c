// Find a number in an array using binary search.

#include<stdio.h>
#include<stdlib.h>

int floorValue(float num){
	if (num == (int)(num)){
		return num;
	}
	else if (num>=0){
		return (int)(num/1);
	}
	else{
		return (int)(num-1);
	}
}
int CeilValue(float num){
	if (num == (int)(num)){
                return num;
        }
	else if(num>=0){
                return (int)((num/1)+1);
        }
        else{
                return (int)(num);
        }
}

int BinarySearch(int  *arr, int l, int r, int query){

    int i = l;
    int j = r;
    int location;

    while (i<j)
    {
        int m = floorValue((i + j) / 2.0);
        if (query > *(arr + m))
        {
            i = m + 1;
        }
        else
            j = m;
    }
    if (query == *(arr + i))
        location = i + 1;
    else
        location = 0;
    return location;
}

void bubbleSort(int *arr, int n){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
        
    }
    
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
    bubbleSort(arr, n);
    
    printf("\n\nThe sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", *(arr + i));
    }
    printf("\n\n");
    printf("Enter a number to search: ");
    scanf("%d", &query);

    if (BinarySearch(arr, 0, n-1, query))
    {
        printf("The location of %d is index %d in array\n", query, BinarySearch(arr, 0, n-1, query));
    }
    else
        printf("%d is not inside the array.\n",query);

    printf("\n\n");
}