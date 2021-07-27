// Write a program to find prime factors of a number.


#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n){
    int i = 2;
    while (i <= n/2){
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The prime factors of %d are: \n ", num);
    for (int i = 2; i < num; i++){
        if ( num % i == 0)              //check if i is factor of given input number
        {
            if (isPrime(i))             // check if i is prime or not
                printf("%4d", i);
        }
    }
    printf("\n");
}
