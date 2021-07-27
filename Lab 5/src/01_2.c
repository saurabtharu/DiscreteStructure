//Write a program to generate permutations

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int fact(int n){

    if(n == 0 )
        return 1;
    else
        return n * fact(n - 1);
}

void permute(char *arr, int left, int right)
{
    int i;
    static int j = 0;
    if (left == right-1){
        printf("%d - [ ", ++j);
        for (int k= 0; k < right; k++)
            printf("%c ", *(arr + k));
        printf("]\n");
    }
    else
    {
        for (i = left; i < right; i++)
        {
            swap((arr+ left), (arr+ i));
            permute(arr, left + 1, right);
            swap((arr+ left), (arr+ i)); //backtrack
        }
    }
}

int main()
{
    int num;    
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    char *str1 = malloc(num *sizeof(char *));

    printf("Enter the string: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%s", &str1[i]);
    }
    printf("\n\nThe permutations in lexicographic order are:\n");

    permute(str1, 0, num );
    int k = fact(num);

    printf("-------------------------------------------------\n");
    printf("%d permutations can be generated .\n", k);

    return 0;
}
