#include <stdio.h>

int main()
{
    int i, j, count;
    count = 1;
    printf("Let's print a shape with odd numbers\n"); // Inverse this time ..

    for (i = 4; i >= 1; i--) // outer for row
    {
        printf("\n");

        for (j = i; j >= 1; j--) // for clm
        {
            if (count % 2 == 0)
            {
                count++;
            }
            printf("%d\t", count);
            count += 2;
        }

        printf("\n");
    }
}
