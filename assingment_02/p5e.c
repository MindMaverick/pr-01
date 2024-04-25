#include <stdio.h>

void kingofmadrid(int i, int count, int row)
{
    if (i > row) // Stop when we have printed 'row' rows
        return;

    for (int j = 1; j <= i; j++)
    {
        if (count % 2 == 0)
            printf("%d ", count);
        else
            printf("%d ", count + 1);
        count += 2;
    }
    printf("\n");
    kingofmadrid(i + 1, count, row);
}

int main(void)
{
    printf("Let's print a shape with even numbers\n");
    int row = 4;             // Define and assign the value of 'row'
    kingofmadrid(1, 1, row); // Start with count = 1
    return 0;
}
