#include <stdio.h>

int binRec(int A, int Z)
{
    
    if(A == 0 || Z == 0) //base case 1: either number 1 or number 0
        return 1;
    else if (A == 1)    //base case 2: A = 1 then if Z = 3 -> 0001 0010 0100 1000
        return Z + 1;
    else if (Z == 1)    //base case 3: Z = 1 then if A = 3 -> 1110 1101 1011 0111
        return A + 1;
    else    
    {
        return binRec(A, Z - 1) + binRec(A - 1, Z); // if A = 2 Z = 3 return (A = 1 Z = 3) + (A = 2 Z = 2)
    }                                               // A = 1 Z = 3-> 3 + 1 (base case 2) + return (A = 1 Z = 2) + (A = 2 Z = 1)
                                                    // A = 1 Z = 2-> 2 + 1 (base case 2) + A = 2 Z = 1-> 2 + 1 (base case 3)
}                                                   //total: (3 + 1) + (2 + 1) + (2 + 1) == 10

int main(void) {
    int A, Z, sum = 0;
    scanf("%d %d", &A, &Z);
    if(A < 0 || Z < 0)
    {
        printf("Wrong Input");
        return 1;
    }
    printf("%d", binRec(A, Z));
    return 0;
}
