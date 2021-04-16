/*
4. Test the validity of the following argument using truth table.
        Premise: If I go to the mall, I will buy new jeans
        Premise: If I buy new jeans, I will buy a shirt to go with it.
        Conclusion: If I go to the mall, I will buy a shirt.


*/
#include<stdio.h>
#include<stdbool.h>

bool ifThen(bool a, bool b){
    if( b == 1)
            return 1;
        else if( a == 0 )
            return 1;
        else
            return 0;
}

int main(){

    printf(" The argument is as: \n\
        Premise: If I go to the mall, I will buy new jeans\n\
        Premise: If I buy new jeans, I will buy a shirt to go with it.\n\
        Conclusion: If I go to the mall, I will buy a shirt.\n");
    
    printf("\n\
        Let, p = I go to the mall\n\
             q = I will buy new jeans\n\
             r = I will buy a shirt\n");

// ᴠ ᴧ ⌐ → ↔


    printf("According to argument\n\
         p → q\n\
         q → r\n\
       ---------\n\
        ∴ p → r\n");

    
    bool p[] = {0, 0, 0, 0, 1, 1, 1, 1};
    bool q[] = {0, 0, 1, 1, 0, 0, 1, 1};
    bool r[] = {0, 1, 0, 1, 0, 1, 0, 1};

    printf("\t\t\t _______________________________________________\n");
    printf("\t\t\t|   p   |   q   |   r   | p → q | q → r | p → r |\n");
    printf("\t\t\t|_______|_______|_______|_______|_______|_______|\n");

    for (int i = 0; i < 8; i++)
    {
        bool a = ifThen(p[i], q[i]);
        bool b = ifThen(q[i], r[i]);
        bool c = ifThen(p[i], r[i]);
        printf("\t\t\t|   %d   |   %d   |   %d   |   %d   |   %d   |   %d   |\n", p[i], q[i], r[i], a, b, c);
    }
    printf("\t\t\t|_______|_______|_______|_______|_______|_______|\n");
}