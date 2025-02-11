#include <stdio.h>
void CheckEvenOdd(int a)
{
    if (a % 2 == 0)
    {
        printf("Even Number \n");
    }
    else
    {
        printf("Odd Number \n");
    }
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    CheckEvenOdd(a);
    return 0;
}