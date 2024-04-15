/*2. Print Multiplication Table:
Write a program to print the multiplication table of a given number. Ask the user to  input a number, then use a for loop to print its multiplication table from 1 to 10. */

#include <stdio.h>

int main()
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}