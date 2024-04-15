#include <stdio.h>

int main()
{
    int i, j;
    char st = '*';

    for (i = 1; i <= 3; i++)
    {
        printf("\n");

        for (j = 1; j <= 4; j++)
        {

            printf("%c\t", st);
        }

        printf("\n");
    }
    return 0;
}
