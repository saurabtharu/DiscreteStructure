// Write a program to implement concept of linear congruence.

#include<stdio.h>

// Extended Euclidean Algorithm
int gcdExtended(int a, int b, int* x, int* y){
	// Base Case
	if (a == 0){
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1; 
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	*x = y1 - (b / a) * x1;
	*y = x1;
	return gcd;
}
void GCD(int a,int b){
    int rem,quo;
    printf("\n\n");
    while(b>0){
        rem = a%b;
        quo = a/b;
        printf("%d = %d x %d + %d \n",a,b,quo,rem);
        a = b;
        b=rem;
    }
}

int main(){

	int x, y;
	int a, b, m;

    printf("The linear congruence is in the form of \n ax ≡ b (mod m) \n\n");

    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of m : ");
    scanf("%d", &m);

    printf("\n\nThe linear congruence is in the form of \n %dx ≡ %d (mod %d)",a,b,m);

	int g = gcdExtended(a, m, &x, &y);
    GCD(a, m);

    printf("\ngcd(%d, %d) = %d\n", a, m, g);
    printf("\nBy Extended Euclidean Algorithm\n");
    printf("f = %d  g = %d\n", x, y);

    printf("(%d)*(%d) + (%d)*(%d) = %d\n", x, a, y, m, g);

    printf("\n Hence, (%d)*(%d) ≡ 1 (mod %d) \n\n", x, a, m);
    printf("Thus, x = %d\n\n", x);
    return 0;
}