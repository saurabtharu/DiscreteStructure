// Chinese remainder theorem book page number 

#include<stdio.h>

//extended Euclidean Algorithm
int gcdExtended(int a, int b, int* x, int* y)
{
	// Base Case
	if (a == 0) {
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1; 
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	// Update x and y using results of recursive call
	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}


int main(){

    int m1, m2;
    int a1, a2;
    int y1 = 0, y2 = 0;

    printf("Enter the value of a1 and a2 : ");
    scanf("%d %d", &a1, &a2);

    printf("Enter the relatively prime integers i.e. m1 and m2: ");
    scanf("%d %d", &m1, &m2);
    int M = m1 * m2;
    int M1 = M / m1;
    int M2 = M / m2;

    int gcd = gcdExtended(M1, M2, &y1, &y2);
    int chineseRemSolution;

    chineseRemSolution = (a1 * M1 * y1 + a2 * M2 * y2) % M;
    printf("\nThe unique soluton of modulo %d is %d", M,chineseRemSolution );
    printf("\n\n");
}