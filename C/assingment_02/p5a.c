#include <stdio.h>

int main()
{
    int i, j, count;
    count = 1;

    for (i = 1; i <= 3; i++)
    {
        printf("\n");
        for (j = 1; j <= 4; j++)
        {

            printf("%d\t", count);
            count++;
        }

        printf("\n");
    }

    return 0;
}
