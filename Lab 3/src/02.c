/*
    Use a truth table to test the validity of the following argument using truth table.
        If you are a hound dog, then you howl at the moon.
        You don't howl at the moon.
        Therefore, you aren't a hound dog.
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
int main (){

    printf(" The argument is as: \n\
        If you are a hound dog, then you howl at the moon.\n\
        You don't howl at the moon.\n\
        Therefore, you aren't a hound dog.\n");

    printf("\n\
        Let, p = you are a hound dog\n\
             q = you howl at the moon.\n");

    printf("According to argument\n\
        p → q\n\
        ⌐q \n\
        -------\n\
        ∴ ⌐p\n\n");

    bool p[] = {0, 0, 1, 1};
    bool q[] = {0, 1, 0, 1};

    printf("\t\t\t ________________________________________\n");
    printf("\t\t\t|   p   |   q   | (p → q) | ⌐q  |    ⌐p  |\n");
    printf("\t\t\t|_______|_______|_________|_____|________|\n");
    // printf("|   1   |   1   |    1    |  0  |       0      |    0   |\n");

    for (int i = 0; i < 4; i++)
    {
        bool a = ifThen(p[i], q[i]);
        bool b = !q[i];
        // bool c = a && b;
        bool d = !p[i];
        printf("\t\t\t|   %d   |   %d   |    %d    |  %d  |    %d   |\n", p[i], q[i], a,b,d);
    }
        printf("\t\t\t|_______|_______|_________|_____|________|\n");


}
