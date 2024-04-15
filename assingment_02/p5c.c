#include <stdio.h>

int main()
{
    int i, j;
    printf("Lets print out some stars");
    for (i = 1; i <= 4; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}