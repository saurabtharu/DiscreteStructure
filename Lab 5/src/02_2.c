// Write a program to generate combination

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fact(int n){

    if(n == 0 )
        return 1;
    else
        return n * fact(n - 1);
}

void combinationUtil(char* arr, char *data, int start, int end, int index, int r)
{
    if (index == r)
    {
        static int k = 0;
        printf("%d - [ ",++k);
        for (int j = 0; j < r; j++)
            printf("%c ", *(data + j));
        printf("]\n");

    }
 
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

void printCombination(char arr[], int n, int r)
{
    char data[r];
 
    combinationUtil(arr, data, 0, n-1, 0, r);
}

 
// Driver program to test above functions
int main()
{
    int r,num;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &num);

    char *str =(char *) malloc(num *sizeof(char *));

    printf("Enter the elements of array: ");
    for (int i = 0; i < num; i++)
        scanf("%s", (str + i));

    printf("Enter the number of elements to select: ");
    scanf("%d", &r);

    int combination;
    combination = fact(num) / (fact(r)*fact(num - r));

    printf("\nThe %d-combination of a set with %d distinct elements is %d and\n\
all the combination are:\n",r,num, combination);

    printCombination(str, num, r);
}
