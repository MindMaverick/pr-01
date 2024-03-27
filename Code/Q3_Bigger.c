// Q.Write a program to find the Larger of three numbers entered by the user.
// ans
#include <stdio.h>

int main()
{
    int a, b, c, Shakil;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Enter the value of C: ");
    scanf("%d", &c);

    Shakil = a; // Assume a is the Shakil initially

    if (b > Shakil)
    {
        Shakil = b; // If b is larger than Shakil, update Shakil to b
    }
    if (c > Shakil)
    {
        Shakil = c; // If c is larger than Shakil (which may have been updated in the previous step), update Shakil to c
    }

    printf("The Shakil number is %d\n", Shakil);

    return 0;
}
