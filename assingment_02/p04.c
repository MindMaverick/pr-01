#include <stdio.h>

int calma(int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int start, end, sum;
    printf("Enter the starting point: ");
    scanf("%d", &start);
    printf("Enter the ending point: ");
    scanf("%d", &end);

    if (start % 2 != 0)
    {
        start++;
    }

    sum = calma(start, end);

    printf("The sum of all even numbers between %d and %d is %d\n", start, end, sum);
    return 0;
}
