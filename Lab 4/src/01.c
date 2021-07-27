//Write recursive code to calculate a^n


#include<stdio.h>

int power(int a, int n){

    if(n==0)
        return 1;
    else
        return a * power(a, n - 1);
}
int main(){

    int a, n;

    printf("Enter the base number: ");
    scanf("%d", &a);

    printf("Enter the power: ");
    scanf("%d", &n);

    printf("The power of %d raised to %d i.e. %d^%d is  %d\n", a, n, a, n, power(a, n));
}