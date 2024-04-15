#include <stdio.h>

int main(void)
{
    int i, j, count;
    count = 1;
    printf("Let's print a shape with even numbers\n");
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (count % 2 == 0) // dont make mistakes with = and == again;; im taking to you yes u or I.
            {
                printf("%d ", count);
            }
            else
            {
                printf("%d ", count + 1);
            }
            count += 2; 
        }
        printf("\n");
    }
    return 0;
}
