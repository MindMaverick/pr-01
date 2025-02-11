#include <stdio.h>
int main(void)
{
    int i, j, count;
    count = 1;
    printf("Lets print a shape with numbers\n");
    for (i = 1; i <= 4; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}