#include <stdio.h>

int aug;
int avgsal(int g, int h, int k)
{
    aug = (g + h + k) / 3;
    return aug;
}

int main()
{
    int g, h, k;
    printf("Enter the salaries of 1st employee:");
    scanf("%d", &g);
    printf("\n");
    printf("Enter the salaries of 2nd employee:");
    scanf("%d", &h);
    printf("\n");
    printf("Enter the salaries of 3rd employee:");
    scanf("%d", &k);
    printf("\n");

    avgsal(g, h, k);

    if (aug < 40000)
    {
        g += 3000;
        h += 3000;
        k += 3000;
    }

    // Print the adj sal
    printf("Adjusted salaries:\n");
    printf("%d %d %d \n", g, h, k);

    return 0;
}
