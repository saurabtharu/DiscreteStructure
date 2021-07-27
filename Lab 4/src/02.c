//Write recursive code to generate Fibonacci series.


#include<stdio.h>

int fibo(int n){
    if(n==1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main(){

    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The fibonacci series upto %d terms: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%4d", fibo(i));
    }
    printf("\n");
}