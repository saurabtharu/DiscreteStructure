//Write a program to generate permutations

#include<stdio.h>

int fact(int n){

    if(n == 0 )
        return 1;
    else
        return n * fact(n - 1);
}

int main(){
    int n, r;

    printf("Enter the total number of items: ");
    scanf("%d", &n);

    printf("Enter the number of items to select: ");
    scanf("%d", &r);

    int permutation;
    permutation = fact(n) / fact(n - r);

    printf("%d items from %d can be arranged in %d different ways.\n", r, n, permutation);

}