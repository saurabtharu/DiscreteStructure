//Write a program to generate combination

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

    // printf("4! = %d \n", fact(4));
    int combination;
    combination = fact(n) / (fact(r)*fact(n - r));

    printf("%d items from %d can be selected in %d different ways.\n", r, n, combination);

}