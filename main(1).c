#include <stdio.h>

int binRec(int A, int Z)
{
    
    if(A == 0 || Z == 0)
        return 1;
    else if (A == 1)
        return Z + 1;
    else if (Z == 1)
        return A + 1;
    else    
    {
        return binRec(A, Z - 1) + binRec(A - 1, Z); 
    }
}

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