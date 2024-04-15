/*Q..1. Sum of Natural Numbers:
Create a program that calculates the sum of natural numbers up to a given limit. Ask  the user to input the limit (a positive integer), then use a for loop to calculate and  display the sum of all natural numbers from 1 to the given limit. */

#include <stdio.h>
int main()
{
    int limit, sum = 0;
    int i;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        sum = sum + i;
    }
    printf("The sum of natural numbers from 1 to %d is %d\n", limit, sum);
    return 0;
}