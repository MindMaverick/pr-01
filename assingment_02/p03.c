/*3. Printing odd numbers within a Specific Range
Imagine you're participating in a math club activity where you're tasked with  identifying and printing all the odd numbers within a specific range. Your task is to  create a program that takes a starting and ending point from the user and prints all the  odd numbers within that range. Remember, odd numbers are those that cannot be  divided evenly by 2, leaving a remainder of 1 when divided by 2. Use a for loop to  iterate through the numbers within the given range and print only the odd ones. */

#include <stdio.h>
int main()
{
    int start, end, SK, abacus;
    printf("Enter the starting point or the first number: \n");
    scanf("%d", &start);
    printf("Enter the ending point or the second number: \n");
    scanf("%d", &end); // curly braces
    for (SK = start; SK <= end; SK++)
    {
        abacus = SK % 2;

        if (abacus != 0)
        {
            printf("Here are the odd numbers in between the given range %d\n", SK);
        }
    }
    return 0;
}