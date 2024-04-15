/*4. Sum of Even Numbers within a Specific Range
Picture yourself attending a mathematics workshop where you're presented with a  challenge: calculate the sum of all even numbers within a range specified by you.  Your task is to create a program that prompts you to enter a starting and ending point,  then calculates and displays the sum of all even numbers within that range. Even  numbers are those divisible by 2 without leaving a remainder. Use a for loop to iterate  through the numbers within the given range and add up only the even ones. */
#include <stdio.h>

int main()
{
    int start, end, abacus, sum = 0;
    printf("Enter the starting point: ");
    scanf("%d", &start);
    printf("Enter the ending point: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++)
    {
        abacus = i % 2;
        if (abacus == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum of all even numbers between %d and %d is %d", start, end, sum);
    return 0;
}