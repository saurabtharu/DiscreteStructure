/*
3. Test the validity of the following argument using truth table.
        I will buy a new goat or a used Yugo.
        If I buy both a new goat and a used Yugo, I will need a loan.
        I bought a used Yugo and I don't need a loan.
        Therefore, I didn't buy a new goat.
*/

#include<stdio.h>
#include<stdbool.h>
bool ifThen(bool a, bool b){
    if( b == 1)             return 1;
    else if( a == 0 )       return 1;
    else                    return 0;
}

int main(){
    printf(" The argument is as: \n\
        I will buy a new goat or a used Yugo.\n\
        If I buy both a new goat and a used Yugo, I will need a loan.\n\
        I bought a used Yugo and I don't need a loan.\n\
        Therefore, I didn't buy a new goat.\n");

    printf("\n\
        Let, p = I will buy a new goat\n\
             q = I will buy a used Yugo\n\
             r = I will need a loan\n");

    printf("According to argument\n\
        p ᴠ q \n\
        (p ᴧ q) → r\n\
        q ᴧ ⌐r\n\
        -------------\n\
        ∴ ⌐p\n\n");
    
    printf("\nFor the validity of the argument, [(p ᴠ q) ∧ ((p ᴧ q) → r) ᴧ (q ᴧ ⌐r)] → ⌐p should be a tautology\n\n");

    bool p[] = {0, 0, 0, 0, 1, 1, 1, 1};
    bool q[] = {0, 0, 1, 1, 0, 0, 1, 1};
    bool r[] = {0, 1, 0, 1, 0, 1, 0, 1};

    printf("\t ______________________________________________________________________________________________________________________\n");
    printf("\t|   p   |   q   |   r   |   ⌐r  | p ᴠ q  | (p ᴧ q) → r | (q ᴧ ⌐r)  |   ⌐p  | [(p ᴠ q) ∧ ((p ᴧ q) → r) ᴧ (q ᴧ ⌐r)] → ⌐p |\n");
    printf("\t|_______|_______|_______|_______|________|_____________|___________|_______|___________________________________________|\n");
    
    for (int i = 0; i < 8; i++){
        bool a = p[i] || q[i];
        bool b = ifThen((p[i] && q[i]), r[i]);
        bool c = q[i] && !r[i];
        bool d = !p[i];
        bool e = ifThen(a && b && c, d);
        printf("\t|   %d   |   %d   |   %d   |   %d   |    %d   |       %d     |     %d     |   %d   |                          %d                |\n", p[i], q[i], r[i], !r[i], a, b, c, d, e);
    }
    printf("\t|_______|_______|_______|_______|________|_____________|___________|_______|___________________________________________|\n");

    printf("\n\t\tSince, [(p ᴠ q) ∧ ((p ᴧ q) → r) ᴧ (q ᴧ ⌐r)] → ⌐p is a tautology, the argument is valid.\n");
}