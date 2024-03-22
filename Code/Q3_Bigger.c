// Q.Write a program to find the largest of three numbers entered by the user.
// ans
#include <stdio.h>

int main()
{
    int a, b, c, largest;
    printf("Enter the value of A, \n");
    scanf("%d", &a);
    printf("Enter the value of B, \n");
    scanf("%d", &b);
    printf("Enter the value of C, \n");
    scanf("%d", &c);

    largest = a; //imagine

    if (b > largest)
    {
        largest = b;
    }
    else if (c > largest)
    {
        largest = c;
    }

    printf("The largest number is %d", largest);

    return 0;
}
